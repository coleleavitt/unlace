// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8890
// Name:            .find_sp_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8890 jmp     cs:off_2C79C30
//
// Resolved target: find_sp_value
// Target address:  0x502CC0
// GOT/IAT slot:    0x2C79C30
// Slot symbol:     off_2C79C30
// Target type:     <no type info>
// ============================================================

void .find_sp_value(/* see target signature */)
{
    // Tail-call to find_sp_value via GOT/IAT indirection
    return find_sp_value(/* forwarded args */);
}

