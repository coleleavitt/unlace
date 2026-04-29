// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x252F40
// Name:            sub_252F40
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x252F40 jmp     sub_252EA0
//
// Resolved target: sub_252EA0
// Target address:  0x252EA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int __fastcall(__int64 *, __int64 *)
// ============================================================

/* see target sig */ sub_252F40(/* see target signature */)
{
    // Tail-call to sub_252EA0 via direct jump indirection
    return sub_252EA0(/* forwarded args */);
}

