// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41B0
// Name:            .Z3_mk_fpa_rtp
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41B0 jmp     cs:off_4E0C0
//
// Resolved target: Z3_mk_fpa_rtp
// Target address:  0x4F6C8
// GOT/IAT slot:    0x4E0C0
// Slot symbol:     off_4E0C0
// Target type:     <no type info>
// ============================================================

void .Z3_mk_fpa_rtp(/* see target signature */)
{
    // Tail-call to Z3_mk_fpa_rtp via GOT/IAT indirection
    return Z3_mk_fpa_rtp(/* forwarded args */);
}

