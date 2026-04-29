// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20990
// Name:            .reg_finder_emulate_mem_read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20990 jmp     cs:off_954B0
//
// Resolved target: reg_finder_emulate_mem_read
// Target address:  0x95EE8
// GOT/IAT slot:    0x954B0
// Slot symbol:     off_954B0
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_mem_read(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_mem_read via GOT/IAT indirection
    return reg_finder_emulate_mem_read(/* forwarded args */);
}

