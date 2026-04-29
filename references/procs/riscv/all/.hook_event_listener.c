// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA00
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA00 jmp     cs:off_354E8
//
// Resolved target: hook_event_listener
// Target address:  0x35B50
// GOT/IAT slot:    0x354E8
// Slot symbol:     off_354E8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

