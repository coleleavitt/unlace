// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D1D0
// Name:            .get_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D1D0 jmp     cs:off_4EE0D0
//
// Resolved target: get_byte
// Target address:  0x4F2420
// GOT/IAT slot:    0x4EE0D0
// Slot symbol:     off_4EE0D0
// Target type:     <no type info>
// ============================================================

void .get_byte(/* see target signature */)
{
    // Tail-call to get_byte via GOT/IAT indirection
    return get_byte(/* forwarded args */);
}

