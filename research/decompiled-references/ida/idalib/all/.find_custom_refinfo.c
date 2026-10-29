// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7D80
// Name:            .find_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7D80 jmp     cs:off_2C796A8
//
// Resolved target: find_custom_refinfo
// Target address:  0x41F730
// GOT/IAT slot:    0x2C796A8
// Slot symbol:     off_2C796A8
// Target type:     __int64 __fastcall(void *src)
// ============================================================

/* see target sig */ .find_custom_refinfo(/* see target signature */)
{
    // Tail-call to find_custom_refinfo via GOT/IAT indirection
    return find_custom_refinfo(/* forwarded args */);
}

