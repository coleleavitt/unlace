// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3390
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3390 jmp     cs:off_1A1B0
//
// Resolved target: remove_event_listener
// Target address:  0x1A480
// GOT/IAT slot:    0x1A1B0
// Slot symbol:     off_1A1B0
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

