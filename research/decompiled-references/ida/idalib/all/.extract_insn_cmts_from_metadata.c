// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A96B0
// Name:            .extract_insn_cmts_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A96B0 jmp     cs:off_2C7A340
//
// Resolved target: extract_insn_cmts_from_metadata
// Target address:  0x7E4B00
// GOT/IAT slot:    0x2C7A340
// Slot symbol:     off_2C7A340
// Target type:     <no type info>
// ============================================================

void .extract_insn_cmts_from_metadata(/* see target signature */)
{
    // Tail-call to extract_insn_cmts_from_metadata via GOT/IAT indirection
    return extract_insn_cmts_from_metadata(/* forwarded args */);
}

