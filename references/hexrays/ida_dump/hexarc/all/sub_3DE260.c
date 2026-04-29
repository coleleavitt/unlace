// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3DE260
// Name:            sub_3DE260
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x3DE260 jmp     sub_3DDF00
//
// Resolved target: sub_3DDF00
// Target address:  0x3DDF00
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, int)
// ============================================================

/* see target sig */ sub_3DE260(/* see target signature */)
{
    // Tail-call to sub_3DDF00 via direct jump indirection
    return sub_3DDF00(/* forwarded args */);
}

