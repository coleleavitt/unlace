// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84A0
// Name:            .reg_finder_emulate_mem_read
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84A0 jmp     cs:off_2A238
//
// Resolved target: reg_finder_emulate_mem_read
// Target address:  0x2A7A8
// GOT/IAT slot:    0x2A238
// Slot symbol:     off_2A238
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_mem_read(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_mem_read via GOT/IAT indirection
    return reg_finder_emulate_mem_read(/* forwarded args */);
}

