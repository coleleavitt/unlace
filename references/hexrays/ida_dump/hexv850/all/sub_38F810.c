// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x38F810
// Name:            sub_38F810
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x38F810 jmp     sub_38E860
//
// Resolved target: sub_38E860
// Target address:  0x38E860
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, unsigned int, __int64, __int64)
// ============================================================

/* see target sig */ sub_38F810(/* see target signature */)
{
    // Tail-call to sub_38E860 via direct jump indirection
    return sub_38E860(/* forwarded args */);
}

