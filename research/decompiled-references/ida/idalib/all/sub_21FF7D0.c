// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21FF7D0
// Name:            sub_21FF7D0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x21FF7D0 jmp     sub_21FF2C0
//
// Resolved target: sub_21FF2C0
// Target address:  0x21FF2C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64, _DWORD *, __int64)
// ============================================================

/* see target sig */ sub_21FF7D0(/* see target signature */)
{
    // Tail-call to sub_21FF2C0 via direct jump indirection
    return sub_21FF2C0(/* forwarded args */);
}

