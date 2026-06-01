// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52DB30
// Name:            sub_52DB30
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x52DB30 jmp     sub_52D680
//
// Resolved target: sub_52D680
// Target address:  0x52D680
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64, unsigned int)
// ============================================================

/* see target sig */ sub_52DB30(/* see target signature */)
{
    // Tail-call to sub_52D680 via direct jump indirection
    return sub_52D680(/* forwarded args */);
}

