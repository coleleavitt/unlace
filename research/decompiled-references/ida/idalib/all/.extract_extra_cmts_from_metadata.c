// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACBE0
// Name:            .extract_extra_cmts_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACBE0 jmp     cs:off_2C7BDD8
//
// Resolved target: extract_extra_cmts_from_metadata
// Target address:  0x7E4D20
// GOT/IAT slot:    0x2C7BDD8
// Slot symbol:     off_2C7BDD8
// Target type:     <no type info>
// ============================================================

void .extract_extra_cmts_from_metadata(/* see target signature */)
{
    // Tail-call to extract_extra_cmts_from_metadata via GOT/IAT indirection
    return extract_extra_cmts_from_metadata(/* forwarded args */);
}

