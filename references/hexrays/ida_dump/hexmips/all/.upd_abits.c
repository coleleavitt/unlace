// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B5B0
// Name:            .upd_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B5B0 jmp     cs:off_4CDAC0
//
// Resolved target: upd_abits
// Target address:  0x4D04E0
// GOT/IAT slot:    0x4CDAC0
// Slot symbol:     off_4CDAC0
// Target type:     <no type info>
// ============================================================

void .upd_abits(/* see target signature */)
{
    // Tail-call to upd_abits via GOT/IAT indirection
    return upd_abits(/* forwarded args */);
}

