// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E90
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E90 jmp     cs:off_2C79730
//
// Resolved target: is_valid_cp
// Target address:  0x4CD290
// GOT/IAT slot:    0x2C79730
// Slot symbol:     off_2C79730
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}

