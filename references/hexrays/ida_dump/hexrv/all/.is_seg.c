// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABE0
// Name:            .is_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABE0 jmp     cs:off_4BF5D8
//
// Resolved target: is_seg
// Target address:  0x4C2AC0
// GOT/IAT slot:    0x4BF5D8
// Slot symbol:     off_4BF5D8
// Target type:     <no type info>
// ============================================================

void .is_seg(/* see target signature */)
{
    // Tail-call to is_seg via GOT/IAT indirection
    return is_seg(/* forwarded args */);
}

