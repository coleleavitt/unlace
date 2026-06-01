// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8190
// Name:            .extract_user_stkpnts_from_metadata
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8190 jmp     cs:off_2C798B0
//
// Resolved target: extract_user_stkpnts_from_metadata
// Target address:  0x7E5010
// GOT/IAT slot:    0x2C798B0
// Slot symbol:     off_2C798B0
// Target type:     <no type info>
// ============================================================

void .extract_user_stkpnts_from_metadata(/* see target signature */)
{
    // Tail-call to extract_user_stkpnts_from_metadata via GOT/IAT indirection
    return extract_user_stkpnts_from_metadata(/* forwarded args */);
}

