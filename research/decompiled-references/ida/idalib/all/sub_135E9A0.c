// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x135E9A0
// Name:            sub_135E9A0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x135E9A0 jmp     sub_135DAD0
//
// Resolved target: sub_135DAD0
// Target address:  0x135DAD0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(__int64)
// ============================================================

/* see target sig */ sub_135E9A0(/* see target signature */)
{
    // Tail-call to sub_135DAD0 via direct jump indirection
    return sub_135DAD0(/* forwarded args */);
}

