// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF50
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF50 jmp     cs:off_4CDF90
//
// Resolved target: remove_event_listener
// Target address:  0x4D09E0
// GOT/IAT slot:    0x4CDF90
// Slot symbol:     off_4CDF90
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

