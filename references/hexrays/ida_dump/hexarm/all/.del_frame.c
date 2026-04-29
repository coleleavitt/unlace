// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E630
// Name:            .del_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E630 jmp     cs:off_4E9B00
//
// Resolved target: del_frame
// Target address:  0x4EC528
// GOT/IAT slot:    0x4E9B00
// Slot symbol:     off_4E9B00
// Target type:     <no type info>
// ============================================================

void .del_frame(/* see target signature */)
{
    // Tail-call to del_frame via GOT/IAT indirection
    return del_frame(/* forwarded args */);
}

