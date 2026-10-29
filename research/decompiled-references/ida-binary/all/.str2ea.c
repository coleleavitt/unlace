// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116680
// Name:            .str2ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116680 jmp     cs:str2ea_ptr
//
// Resolved target: str2ea
// Target address:  0x8D67D0
// GOT/IAT slot:    0x8A1FE0
// Slot symbol:     str2ea_ptr
// Target type:     <no type info>
// ============================================================

void .str2ea(/* see target signature */)
{
    // Tail-call to str2ea via GOT/IAT indirection
    return str2ea(/* forwarded args */);
}

