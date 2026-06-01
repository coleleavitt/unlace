// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x213B8E0
// Name:            sub_213B8E0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x213B8E0 jmp     sub_213B4E0
//
// Resolved target: sub_213B4E0
// Target address:  0x213B4E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(__int64 *)
// ============================================================

/* see target sig */ sub_213B8E0(/* see target signature */)
{
    // Tail-call to sub_213B4E0 via direct jump indirection
    return sub_213B4E0(/* forwarded args */);
}

