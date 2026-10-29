// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A54E0
// Name:            sub_19A54E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x19A54E0 jmp     sub_19A52A0
//
// Resolved target: sub_19A52A0
// Target address:  0x19A52A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, unsigned int *, __int64, __int64, __int64, __int64)
// ============================================================

/* see target sig */ sub_19A54E0(/* see target signature */)
{
    // Tail-call to sub_19A52A0 via direct jump indirection
    return sub_19A52A0(/* forwarded args */);
}

