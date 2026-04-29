// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x56A0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x56A0 jmp     cs:off_15338
//
// Resolved target: remove_event_listener
// Target address:  0x163E0
// GOT/IAT slot:    0x15338
// Slot symbol:     off_15338
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

