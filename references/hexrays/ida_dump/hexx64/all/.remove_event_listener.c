// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D090
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D090 jmp     cs:off_4EE030
//
// Resolved target: remove_event_listener
// Target address:  0x4F2380
// GOT/IAT slot:    0x4EE030
// Slot symbol:     off_4EE030
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

