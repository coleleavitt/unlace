// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D90
// Name:            .extract_insn_opreprs_from_metadata_ex
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D90 jmp     cs:off_2C79EB0
//
// Resolved target: extract_insn_opreprs_from_metadata_ex
// Target address:  0x7E5380
// GOT/IAT slot:    0x2C79EB0
// Slot symbol:     off_2C79EB0
// Target type:     <no type info>
// ============================================================

void .extract_insn_opreprs_from_metadata_ex(/* see target signature */)
{
    // Tail-call to extract_insn_opreprs_from_metadata_ex via GOT/IAT indirection
    return extract_insn_opreprs_from_metadata_ex(/* forwarded args */);
}

