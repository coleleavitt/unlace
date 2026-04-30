// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116A50
// Name:            .str2ea_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116A50 jmp     cs:str2ea_ex_ptr
//
// Resolved target: str2ea_ex
// Target address:  0x8D6A50
// GOT/IAT slot:    0x8A21C8
// Slot symbol:     str2ea_ex_ptr
// Target type:     <no type info>
// ============================================================

void .str2ea_ex(/* see target signature */)
{
    // Tail-call to str2ea_ex via GOT/IAT indirection
    return str2ea_ex(/* forwarded args */);
}

