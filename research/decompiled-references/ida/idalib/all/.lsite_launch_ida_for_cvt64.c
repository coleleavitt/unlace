// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC3A0
// Name:            .lsite_launch_ida_for_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC3A0 jmp     cs:off_2C7B9B8
//
// Resolved target: lsite_launch_ida_for_cvt64
// Target address:  0x8D0CB0
// GOT/IAT slot:    0x2C7B9B8
// Slot symbol:     off_2C7B9B8
// Target type:     <no type info>
// ============================================================

void .lsite_launch_ida_for_cvt64(/* see target signature */)
{
    // Tail-call to lsite_launch_ida_for_cvt64 via GOT/IAT indirection
    return lsite_launch_ida_for_cvt64(/* forwarded args */);
}

