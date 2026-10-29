// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x301EB0
// Name:            sub_301EB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x301EB0 jmp     sub_301770
//
// Resolved target: sub_301770
// Target address:  0x301770
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64, __int64)
// ============================================================

/* see target sig */ sub_301EB0(/* see target signature */)
{
    // Tail-call to sub_301770 via direct jump indirection
    return sub_301770(/* forwarded args */);
}

