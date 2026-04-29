// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x203170
// Name:            sub_203170
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x203170 jmp     sub_202F40
//
// Resolved target: sub_202F40
// Target address:  0x202F40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *, int, int)
// ============================================================

/* see target sig */ sub_203170(/* see target signature */)
{
    // Tail-call to sub_202F40 via direct jump indirection
    return sub_202F40(/* forwarded args */);
}

