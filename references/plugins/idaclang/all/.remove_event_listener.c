// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3500
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3500 jmp     cs:off_29268
//
// Resolved target: remove_event_listener
// Target address:  0x29630
// GOT/IAT slot:    0x29268
// Slot symbol:     off_29268
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

