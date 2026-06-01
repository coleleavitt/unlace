// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA10
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA10 jmp     cs:off_2C7B4F0
//
// Resolved target: unhook_event_listener
// Target address:  0x4B4340
// GOT/IAT slot:    0x2C7B4F0
// Slot symbol:     off_2C7B4F0
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

