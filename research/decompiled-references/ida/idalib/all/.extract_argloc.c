// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8A00
// Name:            .extract_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8A00 jmp     cs:off_2C79CE8
//
// Resolved target: extract_argloc
// Target address:  0x6B2CC0
// GOT/IAT slot:    0x2C79CE8
// Slot symbol:     off_2C79CE8
// Target type:     <no type info>
// ============================================================

void .extract_argloc(/* see target signature */)
{
    // Tail-call to extract_argloc via GOT/IAT indirection
    return extract_argloc(/* forwarded args */);
}

