// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7ED0
// Name:            .reg_value_def_dstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7ED0 jmp     cs:off_2C79750
//
// Resolved target: reg_value_def_dstr
// Target address:  0x4F9C80
// GOT/IAT slot:    0x2C79750
// Slot symbol:     off_2C79750
// Target type:     <no type info>
// ============================================================

void .reg_value_def_dstr(/* see target signature */)
{
    // Tail-call to reg_value_def_dstr via GOT/IAT indirection
    return reg_value_def_dstr(/* forwarded args */);
}

