// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9F50
// Name:            .del_qatexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9F50 jmp     cs:off_2C7A790
//
// Resolved target: del_qatexit
// Target address:  0x840AF0
// GOT/IAT slot:    0x2C7A790
// Slot symbol:     off_2C7A790
// Target type:     <no type info>
// ============================================================

void .del_qatexit(/* see target signature */)
{
    // Tail-call to del_qatexit via GOT/IAT indirection
    return del_qatexit(/* forwarded args */);
}

