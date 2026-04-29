// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x259690
// Name:            sub_259690
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x259690 jmp     sub_2595E0
//
// Resolved target: sub_2595E0
// Target address:  0x2595E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_259690(/* see target signature */)
{
    // Tail-call to sub_2595E0 via direct jump indirection
    return sub_2595E0(/* forwarded args */);
}

