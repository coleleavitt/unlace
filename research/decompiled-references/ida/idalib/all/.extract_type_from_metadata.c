// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC5E0
// Name:            .extract_type_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC5E0 jmp     cs:off_2C7BAD8
//
// Resolved target: extract_type_from_metadata
// Target address:  0x7E4A30
// GOT/IAT slot:    0x2C7BAD8
// Slot symbol:     off_2C7BAD8
// Target type:     <no type info>
// ============================================================

void .extract_type_from_metadata(/* see target signature */)
{
    // Tail-call to extract_type_from_metadata via GOT/IAT indirection
    return extract_type_from_metadata(/* forwarded args */);
}

