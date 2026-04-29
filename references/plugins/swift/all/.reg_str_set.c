// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4270
// Name:            .reg_str_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4270 jmp     cs:off_28120
//
// Resolved target: reg_str_set
// Target address:  0x29AB8
// GOT/IAT slot:    0x28120
// Slot symbol:     off_28120
// Target type:     <no type info>
// ============================================================

void .reg_str_set(/* see target signature */)
{
    // Tail-call to reg_str_set via GOT/IAT indirection
    return reg_str_set(/* forwarded args */);
}

