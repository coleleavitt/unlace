// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9930
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9930 jmp     cs:off_2E480
//
// Resolved target: remove_event_listener
// Target address:  0x2EB08
// GOT/IAT slot:    0x2E480
// Slot symbol:     off_2E480
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

