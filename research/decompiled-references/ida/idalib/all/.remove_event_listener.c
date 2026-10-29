// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA480
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA480 jmp     cs:off_2C7AA28
//
// Resolved target: remove_event_listener
// Target address:  0x3FB940
// GOT/IAT slot:    0x2C7AA28
// Slot symbol:     off_2C7AA28
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

