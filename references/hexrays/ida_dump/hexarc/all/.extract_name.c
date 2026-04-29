// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1C0
// Name:            .extract_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1C0 jmp     cs:off_4BA0C8
//
// Resolved target: extract_name
// Target address:  0x4BCB00
// GOT/IAT slot:    0x4BA0C8
// Slot symbol:     off_4BA0C8
// Target type:     <no type info>
// ============================================================

void .extract_name(/* see target signature */)
{
    // Tail-call to extract_name via GOT/IAT indirection
    return extract_name(/* forwarded args */);
}

