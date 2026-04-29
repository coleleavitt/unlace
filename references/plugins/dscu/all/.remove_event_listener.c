// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4440
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4440 jmp     cs:off_1F208
//
// Resolved target: remove_event_listener
// Target address:  0x1F4D8
// GOT/IAT slot:    0x1F208
// Slot symbol:     off_1F208
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

