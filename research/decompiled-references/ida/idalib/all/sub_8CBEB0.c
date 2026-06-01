// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8CBEB0
// Name:            sub_8CBEB0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x8CBEB0 jmp     sub_8CBD90
//
// Resolved target: sub_8CBD90
// Target address:  0x8CBD90
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64 __fastcall(_QWORD *)
// ============================================================

/* see target sig */ sub_8CBEB0(/* see target signature */)
{
    // Tail-call to sub_8CBD90 via direct jump indirection
    return sub_8CBD90(/* forwarded args */);
}

