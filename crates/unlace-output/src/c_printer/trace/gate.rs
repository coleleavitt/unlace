pub(in crate::c_printer) fn c_printer_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_TRACE").is_some()
        || std::env::var_os("UNLACE_C_PRINTER_TRACE").is_some()
        || std::env::var_os("UNLACE_TYPE_TRACE").is_some()
        || std::env::var_os("UNLACE_TRACE_ALL").is_some()
}

pub(in crate::c_printer) fn c_printer_name_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_NAME_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_stack_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_STACK_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_flow_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_FLOW_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_hoist_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_HOIST_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_temp_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_TEMP_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_load_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_LOAD_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_decision_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_DECISION_TRACE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_sequence_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_SEQUENCE_TRACE").is_some()
        || c_printer_decision_trace_enabled()
}

/// Unified "pipeline control-flow" trace gate. Set `UNLACE_CPRINTER_PIPELINE=1`
/// to watch each statement travel through emission and every post-emission
/// cleanup stage — which deref form was chosen at emit time, and the EXACT
/// statements each cleanup stage removed/changed (and why). Combine with
/// `UNLACE_CPRINTER_TRACE_FILTER=<name>` to follow one variable end-to-end
/// (e.g. `=c7` to see exactly which stage deletes `c7 = a1`).
pub(in crate::c_printer) fn c_printer_pipeline_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_PIPELINE").is_some() || c_printer_trace_enabled()
}

pub(in crate::c_printer) fn c_printer_full_trace_enabled() -> bool {
    std::env::var_os("UNLACE_CPRINTER_FULL_TRACE").is_some()
        || c_printer_trace_enabled()
        || std::env::var_os("UNLACE_TRACE_ALL").is_some()
}

pub(in crate::c_printer) fn c_printer_trace_filter() -> Option<String> {
    std::env::var("UNLACE_CPRINTER_TRACE_FILTER")
        .or_else(|_| std::env::var("UNLACE_C_PRINTER_TRACE_FILTER"))
        .or_else(|_| std::env::var("UNLACE_TYPE_TRACE_FILTER"))
        .or_else(|_| std::env::var("UNLACE_TRACE_FILTER"))
        .ok()
        .filter(|s| !s.is_empty())
}

pub(in crate::c_printer) fn trace_text_matches_filter(text: &str) -> bool {
    c_printer_trace_filter()
        .as_deref()
        .is_none_or(|filter| text.contains(filter))
}

pub(in crate::c_printer) fn c_printer_trace_line(func_name: &str, message: impl std::fmt::Display) {
    if !c_printer_trace_enabled() {
        return;
    }
    let text = format!("func={func_name} {message}");
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace c-printer] {text}");
    }
}

pub(in crate::c_printer) fn trace_flow(message: impl std::fmt::Display) {
    if !c_printer_flow_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] flow {text}");
    }
}

pub(in crate::c_printer) fn trace_stack_text(message: impl std::fmt::Display) {
    if !c_printer_stack_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] stack {text}");
    }
}

pub(in crate::c_printer) fn trace_hoist_text(message: impl std::fmt::Display) {
    if !c_printer_hoist_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] hoist {text}");
    }
}

pub(in crate::c_printer) fn trace_temp_text(message: impl std::fmt::Display) {
    if !c_printer_temp_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] temp {text}");
    }
}

pub(in crate::c_printer) fn trace_load_text(message: impl std::fmt::Display) {
    if !c_printer_load_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] load {text}");
    }
}

pub(in crate::c_printer) fn trace_name_text(message: impl std::fmt::Display) {
    if !c_printer_name_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] name {text}");
    }
}

pub(in crate::c_printer) fn trace_pipeline(message: impl std::fmt::Display) {
    if !c_printer_pipeline_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] pipe {text}");
    }
}

pub(in crate::c_printer) fn trace_full(message: impl std::fmt::Display) {
    if !c_printer_full_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] full {text}");
    }
}

pub(in crate::c_printer) fn trace_decision(message: impl std::fmt::Display) {
    if !c_printer_decision_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] decision {text}");
    }
}

pub(in crate::c_printer) fn trace_sequence(message: impl std::fmt::Display) {
    if !c_printer_sequence_trace_enabled() {
        return;
    }
    let text = message.to_string();
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] sequence {text}");
    }
}

pub(in crate::c_printer) fn trace_materialized_source_scan(message: impl std::fmt::Display) {
    if !c_printer_sequence_trace_enabled() && !c_printer_name_trace_enabled() {
        return;
    }
    let text = format!("materialized-source {message}");
    if trace_text_matches_filter(&text) {
        eprintln!("[unlace-output] sequence {text}");
    }
}
