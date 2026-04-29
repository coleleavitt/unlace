// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95E0
// Name:            .reg_finder_emulate_mem_read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95E0 jmp     cs:off_2E2D8
//
// Resolved target: reg_finder_emulate_mem_read
// Target address:  0x2E948
// GOT/IAT slot:    0x2E2D8
// Slot symbol:     off_2E2D8
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_mem_read(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_mem_read via GOT/IAT indirection
    return reg_finder_emulate_mem_read(/* forwarded args */);
}

