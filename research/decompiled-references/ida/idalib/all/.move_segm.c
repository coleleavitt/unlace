// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADA90
// Name:            .move_segm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADA90 jmp     cs:off_2C7C530
//
// Resolved target: move_segm
// Target address:  0x672F00
// GOT/IAT slot:    0x2C7C530
// Slot symbol:     off_2C7C530
// Target type:     __int64 __fastcall(void *s1)
// ============================================================

/* see target sig */ .move_segm(/* see target signature */)
{
    // Tail-call to move_segm via GOT/IAT indirection
    return move_segm(/* forwarded args */);
}

