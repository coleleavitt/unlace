// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA870
// Name:            .combine_regs_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA870 jmp     cs:off_2C7AC20
//
// Resolved target: combine_regs_jpt
// Target address:  0x44C7F0
// GOT/IAT slot:    0x2C7AC20
// Slot symbol:     off_2C7AC20
// Target type:     <no type info>
// ============================================================

void .combine_regs_jpt(/* see target signature */)
{
    // Tail-call to combine_regs_jpt via GOT/IAT indirection
    return combine_regs_jpt(/* forwarded args */);
}

