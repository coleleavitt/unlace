// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB40
// Name:            .remove_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB40 jmp     cs:off_B3588
//
// Resolved target: remove_event_listener
// Target address:  0xB3D58
// GOT/IAT slot:    0xB3588
// Slot symbol:     off_B3588
// Target type:     <no type info>
// ============================================================

void .remove_event_listener(/* see target signature */)
{
    // Tail-call to remove_event_listener via GOT/IAT indirection
    return remove_event_listener(/* forwarded args */);
}

