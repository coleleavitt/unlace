// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66A0
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66A0 jmp     cs:off_2D338
//
// Resolved target: unhook_event_listener
// Target address:  0x2D848
// GOT/IAT slot:    0x2D338
// Slot symbol:     off_2D338
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

