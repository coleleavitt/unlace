// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19830
// Name:            .reg_finder_emulate_mem_read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19830 jmp     cs:off_75400
//
// Resolved target: reg_finder_emulate_mem_read
// Target address:  0x75C50
// GOT/IAT slot:    0x75400
// Slot symbol:     off_75400
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_mem_read(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_mem_read via GOT/IAT indirection
    return reg_finder_emulate_mem_read(/* forwarded args */);
}

