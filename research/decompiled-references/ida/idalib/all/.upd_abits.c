// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7080
// Name:            .upd_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7080 jmp     cs:off_2C79028
//
// Resolved target: upd_abits
// Target address:  0x3D1FB0
// GOT/IAT slot:    0x2C79028
// Slot symbol:     off_2C79028
// Target type:     <no type info>
// ============================================================

void .upd_abits(/* see target signature */)
{
    // Tail-call to upd_abits via GOT/IAT indirection
    return upd_abits(/* forwarded args */);
}

