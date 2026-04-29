// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC30
// Name:            .is_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC30 jmp     cs:off_4ED600
//
// Resolved target: is_seg
// Target address:  0x4F1908
// GOT/IAT slot:    0x4ED600
// Slot symbol:     off_4ED600
// Target type:     <no type info>
// ============================================================

void .is_seg(/* see target signature */)
{
    // Tail-call to is_seg via GOT/IAT indirection
    return is_seg(/* forwarded args */);
}

