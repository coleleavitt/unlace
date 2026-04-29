// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_A1D0
//
// Resolved target: hook_event_listener
// Target address:  0xB4B8
// GOT/IAT slot:    0xA1D0
// Slot symbol:     off_A1D0
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

