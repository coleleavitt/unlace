// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B040
// Name:            .register_post_event_visitor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B040 jmp     cs:off_4ED008
//
// Resolved target: register_post_event_visitor
// Target address:  0x4F12F8
// GOT/IAT slot:    0x4ED008
// Slot symbol:     off_4ED008
// Target type:     <no type info>
// ============================================================

void .register_post_event_visitor(/* see target signature */)
{
    // Tail-call to register_post_event_visitor via GOT/IAT indirection
    return register_post_event_visitor(/* forwarded args */);
}

