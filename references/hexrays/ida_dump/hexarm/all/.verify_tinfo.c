// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E4D0
// Name:            .verify_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E4D0 jmp     cs:off_4E9A50
//
// Resolved target: verify_tinfo
// Target address:  0x4EC470
// GOT/IAT slot:    0x4E9A50
// Slot symbol:     off_4E9A50
// Target type:     <no type info>
// ============================================================

void .verify_tinfo(/* see target signature */)
{
    // Tail-call to verify_tinfo via GOT/IAT indirection
    return verify_tinfo(/* forwarded args */);
}

