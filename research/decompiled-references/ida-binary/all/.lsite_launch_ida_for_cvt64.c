// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1194E0
// Name:            .lsite_launch_ida_for_cvt64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1194E0 jmp     cs:lsite_launch_ida_for_cvt64_ptr
//
// Resolved target: lsite_launch_ida_for_cvt64
// Target address:  0x8D84E0
// GOT/IAT slot:    0x8A3710
// Slot symbol:     lsite_launch_ida_for_cvt64_ptr
// Target type:     <no type info>
// ============================================================

void .lsite_launch_ida_for_cvt64(/* see target signature */)
{
    // Tail-call to lsite_launch_ida_for_cvt64 via GOT/IAT indirection
    return lsite_launch_ida_for_cvt64(/* forwarded args */);
}

