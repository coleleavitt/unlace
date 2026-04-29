// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BB50
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BB50 jmp     cs:off_4CDD90
//
// Resolved target: unhook_event_listener
// Target address:  0x4D07D0
// GOT/IAT slot:    0x4CDD90
// Slot symbol:     off_4CDD90
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

