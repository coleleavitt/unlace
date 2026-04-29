// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACC0
// Name:            .verify_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACC0 jmp     cs:off_4CD648
//
// Resolved target: verify_argloc
// Target address:  0x4D0060
// GOT/IAT slot:    0x4CD648
// Slot symbol:     off_4CD648
// Target type:     <no type info>
// ============================================================

void .verify_argloc(/* see target signature */)
{
    // Tail-call to verify_argloc via GOT/IAT indirection
    return verify_argloc(/* forwarded args */);
}

