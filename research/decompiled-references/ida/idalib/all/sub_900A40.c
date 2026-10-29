// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x900A40
// Name:            sub_900A40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x900A40 jmp     sub_9003B0
//
// Resolved target: sub_9003B0
// Target address:  0x9003B0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(void *, _DWORD *, int *, _DWORD *, size_t)
// ============================================================

/* see target sig */ sub_900A40(/* see target signature */)
{
    // Tail-call to sub_9003B0 via direct jump indirection
    return sub_9003B0(/* forwarded args */);
}

