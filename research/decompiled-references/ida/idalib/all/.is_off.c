// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD50
// Name:            .is_off
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD50 jmp     cs:off_2C7AE90
//
// Resolved target: is_off
// Target address:  0x3C4DC0
// GOT/IAT slot:    0x2C7AE90
// Slot symbol:     off_2C7AE90
// Target type:     <no type info>
// ============================================================

void .is_off(/* see target signature */)
{
    // Tail-call to is_off via GOT/IAT indirection
    return is_off(/* forwarded args */);
}

