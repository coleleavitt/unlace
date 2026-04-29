// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CA70
// Name:            .str2reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CA70 jmp     cs:off_4EDD20
//
// Resolved target: str2reg
// Target address:  0x4F2060
// GOT/IAT slot:    0x4EDD20
// Slot symbol:     off_4EDD20
// Target type:     <no type info>
// ============================================================

void .str2reg(/* see target signature */)
{
    // Tail-call to str2reg via GOT/IAT indirection
    return str2reg(/* forwarded args */);
}

