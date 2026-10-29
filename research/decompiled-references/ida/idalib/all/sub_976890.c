// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x976890
// Name:            sub_976890
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x976890 jmp     sub_974F30
//
// Resolved target: sub_974F30
// Target address:  0x974F30
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(void *ptr)
// ============================================================

/* see target sig */ sub_976890(/* see target signature */)
{
    // Tail-call to sub_974F30 via direct jump indirection
    return sub_974F30(/* forwarded args */);
}

