// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x125F0
// Name:            sub_125F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x125F0 jmp     sub_124A0
//
// Resolved target: sub_124A0
// Target address:  0x124A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_125F0(/* see target signature */)
{
    // Tail-call to sub_124A0 via direct jump indirection
    return sub_124A0(/* forwarded args */);
}

