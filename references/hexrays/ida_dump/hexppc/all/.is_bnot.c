// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B510
// Name:            .is_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B510 jmp     cs:off_4DAA70
//
// Resolved target: is_bnot
// Target address:  0x4DD470
// GOT/IAT slot:    0x4DAA70
// Slot symbol:     off_4DAA70
// Target type:     <no type info>
// ============================================================

void .is_bnot(/* see target signature */)
{
    // Tail-call to is_bnot via GOT/IAT indirection
    return is_bnot(/* forwarded args */);
}

