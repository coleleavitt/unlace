// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5510
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5510 jmp     cs:off_1A270
//
// Resolved target: remove_event_listener
// Target address:  0x1A610
// GOT/IAT slot:    0x1A270
// Slot symbol:     off_1A270
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

