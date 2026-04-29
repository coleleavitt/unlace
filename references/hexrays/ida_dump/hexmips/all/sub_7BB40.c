// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7BB40
// Name:            sub_7BB40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x7BB40 jmp     sub_7B740
//
// Resolved target: sub_7B740
// Target address:  0x7B740
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64)
// ============================================================

/* see target sig */ sub_7BB40(/* see target signature */)
{
    // Tail-call to sub_7B740 via direct jump indirection
    return sub_7B740(/* forwarded args */);
}

