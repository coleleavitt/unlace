// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC3F0
// Name:            .extract_insn_opreprs_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC3F0 jmp     cs:off_2C7B9E0
//
// Resolved target: extract_insn_opreprs_from_metadata
// Target address:  0x7E5170
// GOT/IAT slot:    0x2C7B9E0
// Slot symbol:     off_2C7B9E0
// Target type:     <no type info>
// ============================================================

void .extract_insn_opreprs_from_metadata(/* see target signature */)
{
    // Tail-call to extract_insn_opreprs_from_metadata via GOT/IAT indirection
    return extract_insn_opreprs_from_metadata(/* forwarded args */);
}

