// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C5D0
// Name:            .is_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C5D0 jmp     cs:off_4EDAD0
//
// Resolved target: is_bnot
// Target address:  0x4F1DF8
// GOT/IAT slot:    0x4EDAD0
// Slot symbol:     off_4EDAD0
// Target type:     <no type info>
// ============================================================

void .is_bnot(/* see target signature */)
{
    // Tail-call to is_bnot via GOT/IAT indirection
    return is_bnot(/* forwarded args */);
}

