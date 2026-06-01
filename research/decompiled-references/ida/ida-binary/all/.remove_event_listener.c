// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1162A0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1162A0 jmp     cs:remove_event_listener_ptr
//
// Resolved target: remove_event_listener
// Target address:  0x8D6568
// GOT/IAT slot:    0x8A1DF0
// Slot symbol:     remove_event_listener_ptr
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

