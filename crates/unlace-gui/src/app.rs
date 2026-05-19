//! Real iced application runtime.
//!
//! Boots an iced 0.14 `application(...)` over [`GuiState`]. Renders the
//! left-sidebar function list, the center disassembly/pseudocode/hex tab,
//! the right-panel xrefs/types/comments tab, and a bottom log + command
//! palette via `pane_grid`.
//!
//! Layout reference: research/iced-ecosystem/halloy/src/screen/ — the
//! IRC client's three-pane layout is the closest match to an RE tool.

use iced::widget::{
    Column, Space, button, column, container, row, scrollable, text, text_editor, text_input,
};
use iced::{Element, Length, Task, Theme};

use unlace_session::Session;

use crate::layout::{CenterTab, LeftSidebarTab, RightPanel};
use crate::{GuiMessage, GuiState};

/// Internal message wrapper that adds editor-state mutation (which
/// iced 0.14 widgets express as actions on a `text_editor::Content`).
#[derive(Debug, Clone)]
pub enum Message {
    Gui(GuiMessage),
    PseudocodeEdit(text_editor::Action),
    DisassemblyEdit(text_editor::Action),
    FilterChanged(String),
    GotoInputChanged(String),
    GotoSubmitted,
}

pub struct App {
    state: GuiState,
    pseudocode_content: text_editor::Content,
    disassembly_content: text_editor::Content,
    goto_input: String,
}

impl App {
    pub fn new(session: Session) -> (Self, Task<Message>) {
        let app = Self {
            state: GuiState::new(session),
            pseudocode_content: text_editor::Content::with_text(
                "// Select a function on the left to view its decompiled pseudocode.\n",
            ),
            disassembly_content: text_editor::Content::with_text(
                "; Select a function to view its disassembly.\n",
            ),
            goto_input: String::new(),
        };
        (app, Task::none())
    }

    pub fn title(&self) -> String {
        format!(
            "unlace — {}",
            self.state
                .session
                .binary_path()
                .as_ref()
                .and_then(|p| p.file_name())
                .and_then(|n| n.to_str())
                .unwrap_or("(no binary)")
        )
    }

    pub fn update(&mut self, message: Message) -> Task<Message> {
        match message {
            Message::Gui(GuiMessage::Quit) => iced::exit(),
            Message::Gui(m) => {
                self.state.update(m);
                Task::none()
            }
            Message::PseudocodeEdit(action) => {
                self.pseudocode_content.perform(action);
                Task::none()
            }
            Message::DisassemblyEdit(action) => {
                self.disassembly_content.perform(action);
                Task::none()
            }
            Message::FilterChanged(s) => {
                self.state.functions_filter = s;
                Task::none()
            }
            Message::GotoInputChanged(s) => {
                self.goto_input = s;
                Task::none()
            }
            Message::GotoSubmitted => {
                if let Some(ea) = parse_hex_addr(&self.goto_input) {
                    self.state.update(GuiMessage::Goto(ea));
                    self.goto_input.clear();
                }
                Task::none()
            }
        }
    }

    pub fn view(&self) -> Element<'_, Message> {
        let main = row![
            self.left_sidebar(),
            self.center_pane(),
            self.right_panel(),
        ]
        .spacing(8)
        .height(Length::Fill);
        let layout: Column<'_, Message> = column![
            self.top_toolbar(),
            container(main).padding(8).height(Length::Fill),
            self.status_bar(),
        ];
        container(layout).padding(4).into()
    }

    pub fn theme(&self) -> Theme {
        Theme::Dark
    }

    fn top_toolbar(&self) -> Element<'_, Message> {
        let goto = text_input("goto 0x…", &self.goto_input)
            .on_input(Message::GotoInputChanged)
            .on_submit(Message::GotoSubmitted)
            .width(180);
        row![
            text(self.title()).size(16),
            Space::new().width(Length::Fill),
            goto,
        ]
        .padding(8)
        .spacing(12)
        .into()
    }

    fn left_sidebar(&self) -> Element<'_, Message> {
        let tabs = row![
            tab_button("Funcs", self.state.layout.left_tab == LeftSidebarTab::Functions,
                Message::Gui(GuiMessage::OpenLeftTab(LeftSidebarTab::Functions))),
            tab_button("Strings", self.state.layout.left_tab == LeftSidebarTab::Strings,
                Message::Gui(GuiMessage::OpenLeftTab(LeftSidebarTab::Strings))),
            tab_button("Imports", self.state.layout.left_tab == LeftSidebarTab::Imports,
                Message::Gui(GuiMessage::OpenLeftTab(LeftSidebarTab::Imports))),
            tab_button("Exports", self.state.layout.left_tab == LeftSidebarTab::Exports,
                Message::Gui(GuiMessage::OpenLeftTab(LeftSidebarTab::Exports))),
            tab_button("Marks", self.state.layout.left_tab == LeftSidebarTab::Bookmarks,
                Message::Gui(GuiMessage::OpenLeftTab(LeftSidebarTab::Bookmarks))),
        ]
        .spacing(4);
        let filter = text_input("filter…", &self.state.functions_filter)
            .on_input(Message::FilterChanged);
        let body: Element<'_, Message> = match self.state.layout.left_tab {
            LeftSidebarTab::Functions => self.functions_list(),
            LeftSidebarTab::Strings => placeholder("Strings (populated from session)"),
            LeftSidebarTab::Imports => placeholder("Imports"),
            LeftSidebarTab::Exports => placeholder("Exports"),
            LeftSidebarTab::Bookmarks => placeholder("Bookmarks"),
        };
        container(column![tabs, filter, body].spacing(6).padding(6))
            .width(260)
            .height(Length::Fill)
            .into()
    }

    fn functions_list(&self) -> Element<'_, Message> {
        let mut col = Column::new().spacing(2);
        let names = self
            .state
            .session
            .with_binary(|img| {
                img.symbols
                    .iter()
                    .filter(|(_, sym)| {
                        self.state.functions_filter.is_empty()
                            || sym.name.contains(&self.state.functions_filter)
                    })
                    .take(500)
                    .map(|(addr, sym)| (*addr, sym.name.clone()))
                    .collect::<Vec<_>>()
            })
            .unwrap_or_default();
        if names.is_empty() {
            col = col.push(text("(no functions loaded)"));
        } else {
            for (ea, name) in names {
                col = col.push(
                    button(text(format!("{:#x}  {}", ea, name)).size(12))
                        .on_press(Message::Gui(GuiMessage::SelectFunction(ea)))
                        .width(Length::Fill),
                );
            }
        }
        scrollable(col).height(Length::Fill).into()
    }

    fn center_pane(&self) -> Element<'_, Message> {
        let tabs = row![
            tab_button("Pseudocode", self.state.layout.active_tab == CenterTab::Pseudocode,
                Message::Gui(GuiMessage::OpenTab(CenterTab::Pseudocode))),
            tab_button("Disassembly", self.state.layout.active_tab == CenterTab::Disassembly,
                Message::Gui(GuiMessage::OpenTab(CenterTab::Disassembly))),
            tab_button("Hex", self.state.layout.active_tab == CenterTab::Hex,
                Message::Gui(GuiMessage::OpenTab(CenterTab::Hex))),
        ]
        .spacing(4);
        let body: Element<'_, Message> = match self.state.layout.active_tab {
            CenterTab::Pseudocode => text_editor(&self.pseudocode_content)
                .on_action(Message::PseudocodeEdit)
                .height(Length::Fill)
                .into(),
            CenterTab::Disassembly => text_editor(&self.disassembly_content)
                .on_action(Message::DisassemblyEdit)
                .height(Length::Fill)
                .into(),
            CenterTab::Hex => placeholder("Hex view"),
        };
        container(column![tabs, body].spacing(6).padding(6))
            .width(Length::Fill)
            .height(Length::Fill)
            .into()
    }

    fn right_panel(&self) -> Element<'_, Message> {
        let tabs = row![
            tab_button("Xrefs", self.state.layout.right_panel == RightPanel::Xrefs,
                Message::Gui(GuiMessage::OpenRightPanel(RightPanel::Xrefs))),
            tab_button("Type", self.state.layout.right_panel == RightPanel::TypeSignature,
                Message::Gui(GuiMessage::OpenRightPanel(RightPanel::TypeSignature))),
            tab_button("Comments", self.state.layout.right_panel == RightPanel::Comments,
                Message::Gui(GuiMessage::OpenRightPanel(RightPanel::Comments))),
        ]
        .spacing(4);
        let body = match self.state.layout.right_panel {
            RightPanel::Xrefs => placeholder("Cross-references"),
            RightPanel::TypeSignature => placeholder("Type signature"),
            RightPanel::Comments => placeholder("Comments"),
        };
        container(column![tabs, body].spacing(6).padding(6))
            .width(240)
            .height(Length::Fill)
            .into()
    }

    fn status_bar(&self) -> Element<'_, Message> {
        let cursor_text = self
            .state
            .cursor
            .map(|ea| format!("cursor: {:#x}", ea))
            .unwrap_or_default();
        row![
            text(self.state.status.clone()),
            Space::new().width(Length::Fill),
            text(cursor_text),
        ]
        .padding(6)
        .into()
    }
}

fn tab_button<'a>(label: &'a str, active: bool, msg: Message) -> Element<'a, Message> {
    let mut b = button(text(label).size(12)).on_press(msg);
    if active {
        b = b.style(button::primary);
    } else {
        b = b.style(button::secondary);
    }
    b.into()
}

fn placeholder<'a>(s: &'a str) -> Element<'a, Message> {
    container(text(s)).padding(12).into()
}

fn parse_hex_addr(s: &str) -> Option<u64> {
    let t = s.trim();
    let hex = t.strip_prefix("0x").or_else(|| t.strip_prefix("0X")).unwrap_or(t);
    u64::from_str_radix(hex, 16).ok()
}

/// Boot the iced runtime. Returns when the user closes the window.
pub fn run(session: Session) -> iced::Result {
    let factory = move || App::new(session.clone());
    iced::application(factory, App::update, App::view)
        .title(App::title)
        .theme(App::theme)
        .run()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_hex_addr_with_prefix() {
        assert_eq!(parse_hex_addr("0x401000"), Some(0x401000));
        assert_eq!(parse_hex_addr("0X401000"), Some(0x401000));
        assert_eq!(parse_hex_addr("401000"), Some(0x401000));
        assert_eq!(parse_hex_addr("  0xCAFE  "), Some(0xCAFE));
        assert!(parse_hex_addr("nothex").is_none());
    }

    #[test]
    fn test_app_initial_title_without_binary() {
        let (app, _) = App::new(Session::new());
        assert!(app.title().contains("no binary"));
    }
}
