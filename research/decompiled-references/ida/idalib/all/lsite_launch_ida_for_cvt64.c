// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8D0CB0
// Name:            lsite_launch_ida_for_cvt64
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x8D0CB0 jmp     lsite_launch_ida_for_cvt64_0
//
// Resolved target: lsite_launch_ida_for_cvt64_0
// Target address:  0x8D0A40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, __int64, __int64, const char *)
// ============================================================

/* see target sig */ lsite_launch_ida_for_cvt64(/* see target signature */)
{
    // Tail-call to lsite_launch_ida_for_cvt64_0 via direct jump indirection
    return lsite_launch_ida_for_cvt64_0(/* forwarded args */);
}

