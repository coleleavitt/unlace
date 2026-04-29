// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x255A40
// Name:            sub_255A40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x255A40 jmp     sub_2559A0
//
// Resolved target: sub_2559A0
// Target address:  0x2559A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_255A40(/* see target signature */)
{
    // Tail-call to sub_2559A0 via direct jump indirection
    return sub_2559A0(/* forwarded args */);
}

