// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x214A410
// Name:            sub_214A410
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x214A410 jmp     sub_2149FF0
//
// Resolved target: sub_2149FF0
// Target address:  0x2149FF0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_214A410(/* see target signature */)
{
    // Tail-call to sub_2149FF0 via direct jump indirection
    return sub_2149FF0(/* forwarded args */);
}

