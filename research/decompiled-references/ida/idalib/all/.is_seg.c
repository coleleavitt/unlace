// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A70C0
// Name:            .is_seg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A70C0 jmp     cs:off_2C79048
//
// Resolved target: is_seg
// Target address:  0x3C4E80
// GOT/IAT slot:    0x2C79048
// Slot symbol:     off_2C79048
// Target type:     <no type info>
// ============================================================

void .is_seg(/* see target signature */)
{
    // Tail-call to is_seg via GOT/IAT indirection
    return is_seg(/* forwarded args */);
}

