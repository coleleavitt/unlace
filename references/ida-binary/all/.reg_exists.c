// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115BD0
// Name:            .reg_exists
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115BD0 jmp     cs:reg_exists_ptr
//
// Resolved target: reg_exists
// Target address:  0x8D6130
// GOT/IAT slot:    0x8A1A88
// Slot symbol:     reg_exists_ptr
// Target type:     <no type info>
// ============================================================

void .reg_exists(/* see target signature */)
{
    // Tail-call to reg_exists via GOT/IAT indirection
    return reg_exists(/* forwarded args */);
}

