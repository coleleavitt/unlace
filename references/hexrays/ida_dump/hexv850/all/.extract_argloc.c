// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA80
// Name:            .extract_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA80 jmp     cs:off_4C0528
//
// Resolved target: extract_argloc
// Target address:  0x4C3508
// GOT/IAT slot:    0x4C0528
// Slot symbol:     off_4C0528
// Target type:     <no type info>
// ============================================================

void .extract_argloc(/* see target signature */)
{
    // Tail-call to extract_argloc via GOT/IAT indirection
    return extract_argloc(/* forwarded args */);
}

