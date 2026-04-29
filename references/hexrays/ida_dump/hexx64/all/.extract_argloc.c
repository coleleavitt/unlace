// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAD0
// Name:            .extract_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAD0 jmp     cs:off_4ED550
//
// Resolved target: extract_argloc
// Target address:  0x4F1850
// GOT/IAT slot:    0x4ED550
// Slot symbol:     off_4ED550
// Target type:     <no type info>
// ============================================================

void .extract_argloc(/* see target signature */)
{
    // Tail-call to extract_argloc via GOT/IAT indirection
    return extract_argloc(/* forwarded args */);
}

