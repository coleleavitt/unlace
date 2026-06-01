// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1E78C0
// Name:            sub_1E78C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1E78C0 jmp     sub_1E7840
//
// Resolved target: sub_1E7840
// Target address:  0x1E7840
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, _OWORD *)
// ============================================================

/* see target sig */ sub_1E78C0(/* see target signature */)
{
    // Tail-call to sub_1E7840 via direct jump indirection
    return sub_1E7840(/* forwarded args */);
}

