// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C020
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C020 jmp     cs:off_4C0FF8
//
// Resolved target: hook_event_listener
// Target address:  0x4C4020
// GOT/IAT slot:    0x4C0FF8
// Slot symbol:     off_4C0FF8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

