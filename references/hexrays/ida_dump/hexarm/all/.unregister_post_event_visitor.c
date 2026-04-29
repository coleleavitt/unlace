// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D590
// Name:            .unregister_post_event_visitor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D590 jmp     cs:off_4E92B0
//
// Resolved target: unregister_post_event_visitor
// Target address:  0x4EBCA0
// GOT/IAT slot:    0x4E92B0
// Slot symbol:     off_4E92B0
// Target type:     <no type info>
// ============================================================

void .unregister_post_event_visitor(/* see target signature */)
{
    // Tail-call to unregister_post_event_visitor via GOT/IAT indirection
    return unregister_post_event_visitor(/* forwarded args */);
}

