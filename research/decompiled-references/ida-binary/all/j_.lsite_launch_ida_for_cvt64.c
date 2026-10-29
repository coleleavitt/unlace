// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42A040
// Name:            j_.lsite_launch_ida_for_cvt64
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x42A040 jmp     _lsite_launch_ida_for_cvt64
//
// Resolved target: .lsite_launch_ida_for_cvt64
// Target address:  0x1194E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.lsite_launch_ida_for_cvt64(/* see target signature */)
{
    // Tail-call to .lsite_launch_ida_for_cvt64 via direct jump indirection
    return .lsite_launch_ida_for_cvt64(/* forwarded args */);
}

