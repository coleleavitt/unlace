// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x256640
// Name:            sub_256640
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x256640 jmp     sub_2565A0
//
// Resolved target: sub_2565A0
// Target address:  0x2565A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_256640(/* see target signature */)
{
    // Tail-call to sub_2565A0 via direct jump indirection
    return sub_2565A0(/* forwarded args */);
}

