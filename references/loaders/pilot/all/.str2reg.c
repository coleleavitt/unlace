// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2290
// Name:            .str2reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2290 jmp     cs:off_8130
//
// Resolved target: str2reg
// Target address:  0x8318
// GOT/IAT slot:    0x8130
// Slot symbol:     off_8130
// Target type:     <no type info>
// ============================================================

void .str2reg(/* see target signature */)
{
    // Tail-call to str2reg via GOT/IAT indirection
    return str2reg(/* forwarded args */);
}

