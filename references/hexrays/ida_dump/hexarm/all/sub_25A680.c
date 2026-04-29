// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25A680
// Name:            sub_25A680
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x25A680 jmp     sub_25A5E0
//
// Resolved target: sub_25A5E0
// Target address:  0x25A5E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_25A680(/* see target signature */)
{
    // Tail-call to sub_25A5E0 via direct jump indirection
    return sub_25A5E0(/* forwarded args */);
}

