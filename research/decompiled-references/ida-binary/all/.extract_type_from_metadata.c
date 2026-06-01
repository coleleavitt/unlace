// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A10
// Name:            .extract_type_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A10 jmp     cs:extract_type_from_metadata_ptr
//
// Resolved target: extract_type_from_metadata
// Target address:  0x8D8868
// GOT/IAT slot:    0x8A39A8
// Slot symbol:     extract_type_from_metadata_ptr
// Target type:     <no type info>
// ============================================================

void .extract_type_from_metadata(/* see target signature */)
{
    // Tail-call to extract_type_from_metadata via GOT/IAT indirection
    return extract_type_from_metadata(/* forwarded args */);
}

