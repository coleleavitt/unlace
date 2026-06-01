// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB320
// Name:            .str2reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB320 jmp     cs:off_2C7B178
//
// Resolved target: str2reg
// Target address:  0x674290
// GOT/IAT slot:    0x2C7B178
// Slot symbol:     off_2C7B178
// Target type:     <no type info>
// ============================================================

void .str2reg(/* see target signature */)
{
    // Tail-call to str2reg via GOT/IAT indirection
    return str2reg(/* forwarded args */);
}

