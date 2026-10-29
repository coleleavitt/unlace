// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A79E0
// Name:            .is_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A79E0 jmp     cs:off_2C794D8
//
// Resolved target: is_bnot
// Target address:  0x3C5D10
// GOT/IAT slot:    0x2C794D8
// Slot symbol:     off_2C794D8
// Target type:     <no type info>
// ============================================================

void .is_bnot(/* see target signature */)
{
    // Tail-call to is_bnot via GOT/IAT indirection
    return is_bnot(/* forwarded args */);
}

