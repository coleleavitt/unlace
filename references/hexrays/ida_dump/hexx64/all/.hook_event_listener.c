// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D160
// Name:            .hook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D160 jmp     cs:off_4EE098
//
// Resolved target: hook_event_listener
// Target address:  0x4F23E8
// GOT/IAT slot:    0x4EE098
// Slot symbol:     off_4EE098
// Target type:     <no type info>
// ============================================================

void .hook_event_listener(/* see target signature */)
{
    // Tail-call to hook_event_listener via GOT/IAT indirection
    return hook_event_listener(/* forwarded args */);
}

