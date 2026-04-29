// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33C0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33C0 jmp     cs:off_1A1C8
//
// Resolved target: hook_event_listener
// Target address:  0x1A498
// GOT/IAT slot:    0x1A1C8
// Slot symbol:     off_1A1C8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

