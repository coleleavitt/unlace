// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xCE5510
// Name:            sub_CE5510
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xCE5510 jmp     sub_E232A0
//
// Resolved target: sub_E232A0
// Target address:  0xE232A0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD)
// ============================================================

/* see target sig */ sub_CE5510(/* see target signature */)
{
    // Tail-call to sub_E232A0 via direct jump indirection
    return sub_E232A0(/* forwarded args */);
}

