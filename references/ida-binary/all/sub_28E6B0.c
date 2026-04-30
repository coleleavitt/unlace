// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x28E6B0
// Name:            sub_28E6B0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x28E6B0 jmp     sub_1EC030
//
// Resolved target: sub_1EC030
// Target address:  0x1EC030
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_28E6B0(/* see target signature */)
{
    // Tail-call to sub_1EC030 via direct jump indirection
    return sub_1EC030(/* forwarded args */);
}

