// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA90
// Name:            .is_stkvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA90 jmp     cs:off_4C0D30
//
// Resolved target: is_stkvar
// Target address:  0x4C3D48
// GOT/IAT slot:    0x4C0D30
// Slot symbol:     off_4C0D30
// Target type:     <no type info>
// ============================================================

void .is_stkvar(/* see target signature */)
{
    // Tail-call to is_stkvar via GOT/IAT indirection
    return is_stkvar(/* forwarded args */);
}

