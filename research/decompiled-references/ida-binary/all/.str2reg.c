// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117C30
// Name:            .str2reg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117C30 jmp     cs:str2reg_ptr
//
// Resolved target: str2reg
// Target address:  0x8D7580
// GOT/IAT slot:    0x8A2AB8
// Slot symbol:     str2reg_ptr
// Target type:     <no type info>
// ============================================================

void .str2reg(/* see target signature */)
{
    // Tail-call to str2reg via GOT/IAT indirection
    return str2reg(/* forwarded args */);
}

