// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30C450
// Name:            IDAApplication__::vfunc_8
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x30C450 jmp     sub_47C0C0
//
// Resolved target: sub_47C0C0
// Target address:  0x47C0C0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ IDAApplication__::vfunc_8(/* see target signature */)
{
    // Tail-call to sub_47C0C0 via direct jump indirection
    return sub_47C0C0(/* forwarded args */);
}

