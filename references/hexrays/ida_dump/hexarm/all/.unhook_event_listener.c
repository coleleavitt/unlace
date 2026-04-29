// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EB80
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EB80 jmp     cs:off_4E9DA8
//
// Resolved target: unhook_event_listener
// Target address:  0x4EC7E8
// GOT/IAT slot:    0x4E9DA8
// Slot symbol:     off_4E9DA8
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

