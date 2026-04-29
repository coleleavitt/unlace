// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35A0
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35A0 jmp     cs:off_132B8
//
// Resolved target: remove_event_listener
// Target address:  0x13658
// GOT/IAT slot:    0x132B8
// Slot symbol:     off_132B8
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

