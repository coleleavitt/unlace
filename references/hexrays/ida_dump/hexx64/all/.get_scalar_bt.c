// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CCC0
// Name:            .get_scalar_bt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CCC0 jmp     cs:off_4EDE48
//
// Resolved target: get_scalar_bt
// Target address:  0x4F2188
// GOT/IAT slot:    0x4EDE48
// Slot symbol:     off_4EDE48
// Target type:     <no type info>
// ============================================================

void .get_scalar_bt(/* see target signature */)
{
    // Tail-call to get_scalar_bt via GOT/IAT indirection
    return get_scalar_bt(/* forwarded args */);
}

