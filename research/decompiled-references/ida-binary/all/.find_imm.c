// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111DA0
// Name:            .find_imm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111DA0 jmp     cs:find_imm_ptr
//
// Resolved target: find_imm
// Target address:  0x8D3960
// GOT/IAT slot:    0x89FB70
// Slot symbol:     find_imm_ptr
// Target type:     <no type info>
// ============================================================

void .find_imm(/* see target signature */)
{
    // Tail-call to find_imm via GOT/IAT indirection
    return find_imm(/* forwarded args */);
}

