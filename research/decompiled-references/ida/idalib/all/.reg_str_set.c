// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD060
// Name:            .reg_str_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD060 jmp     cs:off_2C7C018
//
// Resolved target: reg_str_set
// Target address:  0x854850
// GOT/IAT slot:    0x2C7C018
// Slot symbol:     off_2C7C018
// Target type:     <no type info>
// ============================================================

void .reg_str_set(/* see target signature */)
{
    // Tail-call to reg_str_set via GOT/IAT indirection
    return reg_str_set(/* forwarded args */);
}

