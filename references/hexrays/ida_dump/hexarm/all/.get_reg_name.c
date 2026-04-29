// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E6C0
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E6C0 jmp     cs:off_4E9B48
//
// Resolved target: get_reg_name
// Target address:  0x4EC570
// GOT/IAT slot:    0x4E9B48
// Slot symbol:     off_4E9B48
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

