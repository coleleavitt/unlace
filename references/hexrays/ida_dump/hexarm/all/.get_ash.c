// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EE30
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EE30 jmp     cs:off_4E9F00
//
// Resolved target: get_ash
// Target address:  0x4EC950
// GOT/IAT slot:    0x4E9F00
// Slot symbol:     off_4E9F00
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

