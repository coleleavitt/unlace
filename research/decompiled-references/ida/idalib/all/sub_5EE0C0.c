// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5EE0C0
// Name:            sub_5EE0C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5EE0C0 jmp     sub_5ED9A0
//
// Resolved target: sub_5ED9A0
// Target address:  0x5ED9A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64, const char *)
// ============================================================

/* see target sig */ sub_5EE0C0(/* see target signature */)
{
    // Tail-call to sub_5ED9A0 via direct jump indirection
    return sub_5ED9A0(/* forwarded args */);
}

