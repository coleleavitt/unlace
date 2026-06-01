// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5B7FC0
// Name:            sub_5B7FC0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5B7FC0 jmp     sub_5B7F30
//
// Resolved target: sub_5B7F30
// Target address:  0x5B7F30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     void __fastcall(unsigned __int64, unsigned __int64)
// ============================================================

/* see target sig */ sub_5B7FC0(/* see target signature */)
{
    // Tail-call to sub_5B7F30 via direct jump indirection
    return sub_5B7F30(/* forwarded args */);
}

