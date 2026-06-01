// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD570
// Name:            .unregister_post_event_visitor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD570 jmp     cs:off_2C7C2A0
//
// Resolved target: unregister_post_event_visitor
// Target address:  0x4B43F0
// GOT/IAT slot:    0x2C7C2A0
// Slot symbol:     off_2C7C2A0
// Target type:     <no type info>
// ============================================================

void .unregister_post_event_visitor(/* see target signature */)
{
    // Tail-call to unregister_post_event_visitor via GOT/IAT indirection
    return unregister_post_event_visitor(/* forwarded args */);
}

