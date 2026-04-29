// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B490
// Name:            .verify_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B490 jmp     cs:off_4DAA30
//
// Resolved target: verify_tinfo
// Target address:  0x4DD430
// GOT/IAT slot:    0x4DAA30
// Slot symbol:     off_4DAA30
// Target type:     <no type info>
// ============================================================

void .verify_tinfo(/* see target signature */)
{
    // Tail-call to verify_tinfo via GOT/IAT indirection
    return verify_tinfo(/* forwarded args */);
}

