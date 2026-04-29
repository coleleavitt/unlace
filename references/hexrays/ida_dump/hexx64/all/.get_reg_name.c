// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C750
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C750 jmp     cs:off_4EDB90
//
// Resolved target: get_reg_name
// Target address:  0x4F1EC0
// GOT/IAT slot:    0x4EDB90
// Slot symbol:     off_4EDB90
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

