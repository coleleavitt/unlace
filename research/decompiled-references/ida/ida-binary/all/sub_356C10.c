// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x356C10
// Name:            sub_356C10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x356C10 jmp     sub_356A00
//
// Resolved target: sub_356A00
// Target address:  0x356A00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64)
// ============================================================

/* see target sig */ sub_356C10(/* see target signature */)
{
    // Tail-call to sub_356A00 via direct jump indirection
    return sub_356A00(/* forwarded args */);
}

