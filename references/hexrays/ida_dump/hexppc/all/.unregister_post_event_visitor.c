// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A580
// Name:            .unregister_post_event_visitor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A580 jmp     cs:off_4DA2A8
//
// Resolved target: unregister_post_event_visitor
// Target address:  0x4DCC78
// GOT/IAT slot:    0x4DA2A8
// Slot symbol:     off_4DA2A8
// Target type:     <no type info>
// ============================================================

void .unregister_post_event_visitor(/* see target signature */)
{
    // Tail-call to unregister_post_event_visitor via GOT/IAT indirection
    return unregister_post_event_visitor(/* forwarded args */);
}

