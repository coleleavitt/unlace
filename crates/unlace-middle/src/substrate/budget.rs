//! (unlace decompile-all watchdog) The per-function budget clock.
//!
//! A decompile drive publishes its deadline here ([`DeadlineScope`]); passes
//! and IR walks that can run long poll it ([`deadline_passed_in`],
//! [`budget_probe`]) and name where it ran out ([`note_budget_site`]). The
//! driver (`decompile_drive`) decides the budget and turns a spent one into
//! the per-function error.

thread_local! {
    static FN_DEADLINE: std::cell::Cell<Option<std::time::Instant>> = const { std::cell::Cell::new(None) };
    static FN_BUDGET_SITE: std::cell::RefCell<Option<String>> = const { std::cell::RefCell::new(None) };
    static FN_TABLE_AT: std::cell::Cell<Option<u64>> = const { std::cell::Cell::new(None) };
    static FN_PROBES: std::cell::Cell<u32> = const { std::cell::Cell::new(0) };
    static FN_SPENT: std::cell::Cell<bool> = const { std::cell::Cell::new(false) };
}

/// How many [`budget_probe`] calls between clock reads.
const PROBE_STRIDE: u32 = 256;

/// (unlace decompile-all watchdog) Has the running drive's per-function budget
/// run out? For a long walk inside one pass, which no action or heritage loop
/// boundary interrupts, to give up early.
#[doc(hidden)]
pub fn deadline_passed() -> bool {
    FN_DEADLINE.with(|d| d.get().is_some_and(budget_spent))
}

/// (unlace decompile-all watchdog) [`deadline_passed`] for a walk that recurses
/// or loops too often to read the clock at every step: every
/// [`PROBE_STRIDE`]th call reads it, and once one has seen the budget spent
/// every call answers `true` at once until the drive ends. It names no site;
/// the loop that drives the walk does.
#[doc(hidden)]
pub fn budget_probe() -> bool {
    if FN_SPENT.with(std::cell::Cell::get) {
        return true;
    }
    let n = FN_PROBES.with(|c| {
        let n = c.get().wrapping_add(1);
        c.set(n);
        n
    });
    if n % PROBE_STRIDE != 0 || !deadline_passed() {
        return false;
    }
    FN_SPENT.with(|s| s.set(true));
    true
}

/// [`deadline_passed`], naming `site` (see [`note_budget_site`]) when it has.
#[doc(hidden)]
pub fn deadline_passed_in(site: &str) -> bool {
    let passed = deadline_passed();
    if passed {
        note_budget_site(|| site.to_string());
    }
    passed
}

/// (unlace decompile-all watchdog) Name `site` as where the running drive's
/// budget ran out, unless a probe already named one: the first probe to see
/// the expiry is the innermost polled loop, which the per-function error names.
#[doc(hidden)]
pub fn note_budget_site(site: impl FnOnce() -> String) {
    FN_BUDGET_SITE.with(|s| {
        let mut s = s.borrow_mut();
        if s.is_none() {
            let mut text = site();
            if let Some(at) = FN_TABLE_AT.with(std::cell::Cell::get) {
                let during = if text.starts_with("jump-table") {
                    ""
                } else {
                    " during jump-table recovery"
                };
                text.push_str(&format!("{during} at {at:#x}"));
            }
            *s = Some(text);
        }
    });
}

/// The site [`note_budget_site`] named for the running drive, if any.
#[doc(hidden)]
pub fn budget_site() -> Option<String> {
    FN_BUDGET_SITE.with(|s| s.borrow().clone())
}

/// The indirect jump whose table the drive is recovering ([`JumpTableScope`]).
#[doc(hidden)]
pub fn jump_table_at() -> Option<u64> {
    FN_TABLE_AT.with(std::cell::Cell::get)
}

/// (unlace decompile-all watchdog) Marks the drive as recovering the jump table
/// of the indirect jump at an address until dropped, for [`note_budget_site`].
#[doc(hidden)]
pub struct JumpTableScope(Option<u64>);

impl JumpTableScope {
    #[doc(hidden)]
    pub fn enter(at: u64) -> Self {
        JumpTableScope(FN_TABLE_AT.with(|t| t.replace(Some(at))))
    }
}

impl Drop for JumpTableScope {
    fn drop(&mut self) {
        FN_TABLE_AT.with(|t| t.set(self.0));
    }
}

/// (unlace decompile-all watchdog) The one test every cooperative probe makes:
/// the clock passed `deadline`, or the drive went over its memory limit
/// ([`crate::fnmemory::over`]).
#[doc(hidden)]
pub fn budget_spent(deadline: std::time::Instant) -> bool {
    let now = std::time::Instant::now();
    now >= deadline || crate::fnmemory::over(now)
}

/// Publishes a drive's deadline to [`deadline_passed`], with no budget site
/// named yet and no [`budget_probe`] spent, and restores the ones before it
/// when the drive ends.
#[doc(hidden)]
pub struct DeadlineScope(Option<std::time::Instant>, Option<String>, bool);

impl DeadlineScope {
    #[doc(hidden)]
    pub fn enter(deadline: Option<std::time::Instant>) -> Self {
        DeadlineScope(
            FN_DEADLINE.with(|d| d.replace(deadline)),
            FN_BUDGET_SITE.with(|s| s.borrow_mut().take()),
            FN_SPENT.with(|s| s.replace(false)),
        )
    }
}

impl Drop for DeadlineScope {
    fn drop(&mut self) {
        FN_DEADLINE.with(|d| d.set(self.0));
        FN_BUDGET_SITE.with(|s| *s.borrow_mut() = self.1.take());
        FN_SPENT.with(|s| s.set(self.2));
    }
}
