// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BE90
// Name:            .is_valid_cp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BE90 jmp     cs:off_4CDF30
//
// Resolved target: is_valid_cp
// Target address:  0x4D0980
// GOT/IAT slot:    0x4CDF30
// Slot symbol:     off_4CDF30
// Target type:     <no type info>
// ============================================================

void .is_valid_cp(/* see target signature */)
{
    // Tail-call to is_valid_cp via GOT/IAT indirection
    return is_valid_cp(/* forwarded args */);
}

