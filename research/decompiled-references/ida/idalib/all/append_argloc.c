// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6B3420
// Name:            append_argloc
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x6B3420 jmp     append_argloc_0
//
// Resolved target: append_argloc_0
// Target address:  0x6B2F80
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ append_argloc(/* see target signature */)
{
    // Tail-call to append_argloc_0 via direct jump indirection
    return append_argloc_0(/* forwarded args */);
}

