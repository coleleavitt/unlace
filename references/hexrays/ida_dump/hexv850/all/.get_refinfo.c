// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BAB0
// Name:            .get_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BAB0 jmp     cs:off_4C0D40
//
// Resolved target: get_refinfo
// Target address:  0x4C3D58
// GOT/IAT slot:    0x4C0D40
// Slot symbol:     off_4C0D40
// Target type:     <no type info>
// ============================================================

void .get_refinfo(/* see target signature */)
{
    // Tail-call to get_refinfo via GOT/IAT indirection
    return get_refinfo(/* forwarded args */);
}

