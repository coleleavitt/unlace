// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA1A0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA1A0 jmp     cs:off_2C7A8B8
//
// Resolved target: hook_event_listener
// Target address:  0x4B4D80
// GOT/IAT slot:    0x2C7A8B8
// Slot symbol:     off_2C7A8B8
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

