// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x255A10
// Name:            sub_255A10
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x255A10 jmp     sub_255960
//
// Resolved target: sub_255960
// Target address:  0x255960
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_255A10(/* see target signature */)
{
    // Tail-call to sub_255960 via direct jump indirection
    return sub_255960(/* forwarded args */);
}

