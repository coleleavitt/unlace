// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29BE0
// Name:            .is_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29BE0 jmp     cs:off_4B95D8
//
// Resolved target: is_seg
// Target address:  0x4BBFC8
// GOT/IAT slot:    0x4B95D8
// Slot symbol:     off_4B95D8
// Target type:     <no type info>
// ============================================================

void .is_seg(/* see target signature */)
{
    // Tail-call to is_seg via GOT/IAT indirection
    return is_seg(/* forwarded args */);
}

