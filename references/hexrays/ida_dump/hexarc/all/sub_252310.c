// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x252310
// Name:            sub_252310
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x252310 jmp     sub_252260
//
// Resolved target: sub_252260
// Target address:  0x252260
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_252310(/* see target signature */)
{
    // Tail-call to sub_252260 via direct jump indirection
    return sub_252260(/* forwarded args */);
}

