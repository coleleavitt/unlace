// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D360
// Name:            .extract_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D360 jmp     cs:off_4EE198
//
// Resolved target: extract_name
// Target address:  0x4F24F0
// GOT/IAT slot:    0x4EE198
// Slot symbol:     off_4EE198
// Target type:     <no type info>
// ============================================================

void .extract_name(/* see target signature */)
{
    // Tail-call to extract_name via GOT/IAT indirection
    return extract_name(/* forwarded args */);
}

