// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23A0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23A0 jmp     cs:off_A1B8
//
// Resolved target: remove_event_listener
// Target address:  0xA408
// GOT/IAT slot:    0xA1B8
// Slot symbol:     off_A1B8
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

