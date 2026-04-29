// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xABD0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xABD0 jmp     cs:off_CA5D0
//
// Resolved target: get_ash
// Target address:  0xD0F28
// GOT/IAT slot:    0xCA5D0
// Slot symbol:     off_CA5D0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

