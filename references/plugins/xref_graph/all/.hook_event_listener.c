// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16A50
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16A50 jmp     cs:off_4F510
//
// Resolved target: hook_event_listener
// Target address:  0x50738
// GOT/IAT slot:    0x4F510
// Slot symbol:     off_4F510
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

