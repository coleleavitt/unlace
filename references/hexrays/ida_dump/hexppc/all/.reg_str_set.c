// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A890
// Name:            .reg_str_set
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A890 jmp     cs:off_4DA430
//
// Resolved target: reg_str_set
// Target address:  0x4DCE00
// GOT/IAT slot:    0x4DA430
// Slot symbol:     off_4DA430
// Target type:     <no type info>
// ============================================================

void .reg_str_set(/* see target signature */)
{
    // Tail-call to reg_str_set via GOT/IAT indirection
    return reg_str_set(/* forwarded args */);
}

