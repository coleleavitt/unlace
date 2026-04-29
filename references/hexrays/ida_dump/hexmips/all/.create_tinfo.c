// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD50
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD50 jmp     cs:off_4CDE90
//
// Resolved target: create_tinfo
// Target address:  0x4D08E0
// GOT/IAT slot:    0x4CDE90
// Slot symbol:     off_4CDE90
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

