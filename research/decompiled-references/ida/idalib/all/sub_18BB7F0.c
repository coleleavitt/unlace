// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x18BB7F0
// Name:            sub_18BB7F0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x18BB7F0 jmp     sub_19A3E40
//
// Resolved target: sub_19A3E40
// Target address:  0x19A3E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD, _QWORD)
// ============================================================

/* see target sig */ sub_18BB7F0(/* see target signature */)
{
    // Tail-call to sub_19A3E40 via direct jump indirection
    return sub_19A3E40(/* forwarded args */);
}

