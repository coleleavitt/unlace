// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A660
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A660 jmp     cs:off_4B9B18
//
// Resolved target: get_reg_name
// Target address:  0x4BC520
// GOT/IAT slot:    0x4B9B18
// Slot symbol:     off_4B9B18
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

