// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C020
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C020 jmp     cs:off_4CDFF8
//
// Resolved target: hook_event_listener
// Target address:  0x4D0A48
// GOT/IAT slot:    0x4CDFF8
// Slot symbol:     off_4CDFF8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

