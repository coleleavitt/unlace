// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC230
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC230 jmp     cs:off_2C7B900
//
// Resolved target: get_reg_name
// Target address:  0x6744C0
// GOT/IAT slot:    0x2C7B900
// Slot symbol:     off_2C7B900
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

