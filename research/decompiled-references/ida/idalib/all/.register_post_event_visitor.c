// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD310
// Name:            .register_post_event_visitor
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD310 jmp     cs:off_2C7C170
//
// Resolved target: register_post_event_visitor
// Target address:  0x4B4ED0
// GOT/IAT slot:    0x2C7C170
// Slot symbol:     off_2C7C170
// Target type:     <no type info>
// ============================================================

void .register_post_event_visitor(/* see target signature */)
{
    // Tail-call to register_post_event_visitor via GOT/IAT indirection
    return register_post_event_visitor(/* forwarded args */);
}

