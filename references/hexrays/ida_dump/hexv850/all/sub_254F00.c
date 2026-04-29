// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x254F00
// Name:            sub_254F00
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x254F00 jmp     sub_254E60
//
// Resolved target: sub_254E60
// Target address:  0x254E60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_254F00(/* see target signature */)
{
    // Tail-call to sub_254E60 via direct jump indirection
    return sub_254E60(/* forwarded args */);
}

