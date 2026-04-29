// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2556C0
// Name:            sub_2556C0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2556C0 jmp     sub_255620
//
// Resolved target: sub_255620
// Target address:  0x255620
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_2556C0(/* see target signature */)
{
    // Tail-call to sub_255620 via direct jump indirection
    return sub_255620(/* forwarded args */);
}

