// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA30
// Name:            .get_prev_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA30 jmp     cs:off_4C0D00
//
// Resolved target: get_prev_seg
// Target address:  0x4C3D18
// GOT/IAT slot:    0x4C0D00
// Slot symbol:     off_4C0D00
// Target type:     <no type info>
// ============================================================

void .get_prev_seg(/* see target signature */)
{
    // Tail-call to get_prev_seg via GOT/IAT indirection
    return get_prev_seg(/* forwarded args */);
}

