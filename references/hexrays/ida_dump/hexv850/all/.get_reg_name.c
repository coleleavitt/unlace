// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B690
// Name:            .get_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B690 jmp     cs:off_4C0B30
//
// Resolved target: get_reg_name
// Target address:  0x4C3B30
// GOT/IAT slot:    0x4C0B30
// Slot symbol:     off_4C0B30
// Target type:     <no type info>
// ============================================================

void .get_reg_name(/* see target signature */)
{
    // Tail-call to get_reg_name via GOT/IAT indirection
    return get_reg_name(/* forwarded args */);
}

