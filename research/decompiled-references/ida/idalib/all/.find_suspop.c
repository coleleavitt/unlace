// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA240
// Name:            .find_suspop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA240 jmp     cs:off_2C7A908
//
// Resolved target: find_suspop
// Target address:  0x676670
// GOT/IAT slot:    0x2C7A908
// Slot symbol:     off_2C7A908
// Target type:     <no type info>
// ============================================================

void .find_suspop(/* see target signature */)
{
    // Tail-call to find_suspop via GOT/IAT indirection
    return find_suspop(/* forwarded args */);
}

