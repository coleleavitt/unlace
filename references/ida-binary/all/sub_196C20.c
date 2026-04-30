// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x196C20
// Name:            sub_196C20
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x196C20 jmp     sub_194E40
//
// Resolved target: sub_194E40
// Target address:  0x194E40
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     unsigned __int64 __fastcall(__int64 *, _QWORD *)
// ============================================================

/* see target sig */ sub_196C20(/* see target signature */)
{
    // Tail-call to sub_194E40 via direct jump indirection
    return sub_194E40(/* forwarded args */);
}

