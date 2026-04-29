// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD10
// Name:            .verify_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD10 jmp     cs:off_4ED670
//
// Resolved target: verify_argloc
// Target address:  0x4F1980
// GOT/IAT slot:    0x4ED670
// Slot symbol:     off_4ED670
// Target type:     <no type info>
// ============================================================

void .verify_argloc(/* see target signature */)
{
    // Tail-call to verify_argloc via GOT/IAT indirection
    return verify_argloc(/* forwarded args */);
}

