// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6670
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6670 jmp     cs:off_1D320
//
// Resolved target: remove_event_listener
// Target address:  0x1D828
// GOT/IAT slot:    0x1D320
// Slot symbol:     off_1D320
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

