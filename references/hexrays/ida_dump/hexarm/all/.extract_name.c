// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F220
// Name:            .extract_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F220 jmp     cs:off_4EA0F8
//
// Resolved target: extract_name
// Target address:  0x4ECB50
// GOT/IAT slot:    0x4EA0F8
// Slot symbol:     off_4EA0F8
// Target type:     <no type info>
// ============================================================

void .extract_name(/* see target signature */)
{
    // Tail-call to extract_name via GOT/IAT indirection
    return extract_name(/* forwarded args */);
}

