// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DAA0
// Name:            .extract_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DAA0 jmp     cs:off_4E9538
//
// Resolved target: extract_argloc
// Target address:  0x4EBF40
// GOT/IAT slot:    0x4E9538
// Slot symbol:     off_4E9538
// Target type:     <no type info>
// ============================================================

void .extract_argloc(/* see target signature */)
{
    // Tail-call to extract_argloc via GOT/IAT indirection
    return extract_argloc(/* forwarded args */);
}

