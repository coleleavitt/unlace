// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x259A50
// Name:            sub_259A50
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x259A50 jmp     sub_2599A0
//
// Resolved target: sub_2599A0
// Target address:  0x2599A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_259A50(/* see target signature */)
{
    // Tail-call to sub_2599A0 via direct jump indirection
    return sub_2599A0(/* forwarded args */);
}

