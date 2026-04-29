// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x47B0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x47B0 jmp     cs:off_283C0
//
// Resolved target: remove_event_listener
// Target address:  0x29D78
// GOT/IAT slot:    0x283C0
// Slot symbol:     off_283C0
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

