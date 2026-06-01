// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB830
// Name:            .verify_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB830 jmp     cs:off_2C7B400
//
// Resolved target: verify_argloc
// Target address:  0x6A8350
// GOT/IAT slot:    0x2C7B400
// Slot symbol:     off_2C7B400
// Target type:     <no type info>
// ============================================================

void .verify_argloc(/* see target signature */)
{
    // Tail-call to verify_argloc via GOT/IAT indirection
    return verify_argloc(/* forwarded args */);
}

