// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA20
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA20 jmp     cs:off_4BFCF8
//
// Resolved target: get_prev_seg
// Target address:  0x4C3210
// GOT/IAT slot:    0x4BFCF8
// Slot symbol:     off_4BFCF8
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

