// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25A2C0
// Name:            sub_25A2C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x25A2C0 jmp     sub_25A220
//
// Resolved target: sub_25A220
// Target address:  0x25A220
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_25A2C0(/* see target signature */)
{
    // Tail-call to sub_25A220 via direct jump indirection
    return sub_25A220(/* forwarded args */);
}

