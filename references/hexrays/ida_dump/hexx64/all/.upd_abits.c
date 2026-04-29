// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C670
// Name:            .upd_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C670 jmp     cs:off_4EDB20
//
// Resolved target: upd_abits
// Target address:  0x4F1E48
// GOT/IAT slot:    0x4EDB20
// Slot symbol:     off_4EDB20
// Target type:     <no type info>
// ============================================================

void .upd_abits(/* see target signature */)
{
    // Tail-call to upd_abits via GOT/IAT indirection
    return upd_abits(/* forwarded args */);
}

