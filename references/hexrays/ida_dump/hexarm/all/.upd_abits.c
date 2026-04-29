// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E5E0
// Name:            .upd_abits
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E5E0 jmp     cs:off_4E9AD8
//
// Resolved target: upd_abits
// Target address:  0x4EC4F8
// GOT/IAT slot:    0x4E9AD8
// Slot symbol:     off_4E9AD8
// Target type:     <no type info>
// ============================================================

void .upd_abits(/* see target signature */)
{
    // Tail-call to upd_abits via GOT/IAT indirection
    return upd_abits(/* forwarded args */);
}

