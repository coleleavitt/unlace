// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xFA40
// Name:            sub_FA40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xFA40 jmp     sub_F860
//
// Resolved target: sub_F860
// Target address:  0xF860
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_FA40(/* see target signature */)
{
    // Tail-call to sub_F860 via direct jump indirection
    return sub_F860(/* forwarded args */);
}

