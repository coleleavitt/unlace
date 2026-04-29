// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9E0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D9E0 jmp     cs:off_B34D8
//
// Resolved target: get_scalar_bt
// Target address:  0xB3C90
// GOT/IAT slot:    0xB34D8
// Slot symbol:     off_B34D8
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

