// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DC00
// Name:            .is_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DC00 jmp     cs:off_4E95E8
//
// Resolved target: is_seg
// Target address:  0x4EBFF8
// GOT/IAT slot:    0x4E95E8
// Slot symbol:     off_4E95E8
// Target type:     <no type info>
// ============================================================

void .is_seg(/* see target signature */)
{
    // Tail-call to is_seg via GOT/IAT indirection
    return is_seg(/* forwarded args */);
}

