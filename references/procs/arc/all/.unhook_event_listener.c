// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8760
// Name:            .unhook_event_listener
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8760 jmp     cs:off_2A398
//
// Resolved target: unhook_event_listener
// Target address:  0x2BDB8
// GOT/IAT slot:    0x2A398
// Slot symbol:     off_2A398
// Target type:     <no type info>
// ============================================================

void .unhook_event_listener(/* see target signature */)
{
    // Tail-call to unhook_event_listener via GOT/IAT indirection
    return unhook_event_listener(/* forwarded args */);
}

