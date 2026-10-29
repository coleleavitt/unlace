// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E70
// Name:            .is_custfmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E70 jmp     cs:off_2C79720
//
// Resolved target: is_custfmt
// Target address:  0x3C5440
// GOT/IAT slot:    0x2C79720
// Slot symbol:     off_2C79720
// Target type:     <no type info>
// ============================================================

void .is_custfmt(/* see target signature */)
{
    // Tail-call to is_custfmt via GOT/IAT indirection
    return is_custfmt(/* forwarded args */);
}

