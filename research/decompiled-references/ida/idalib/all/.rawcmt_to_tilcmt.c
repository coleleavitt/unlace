// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8600
// Name:            .rawcmt_to_tilcmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8600 jmp     cs:off_2C79AE8
//
// Resolved target: rawcmt_to_tilcmt
// Target address:  0x5F13F0
// GOT/IAT slot:    0x2C79AE8
// Slot symbol:     off_2C79AE8
// Target type:     __int64 __usercall@<rax>(int@<edi>, int, int, void *, int, int, int, __int64)
// ============================================================

/* see target sig */ .rawcmt_to_tilcmt(/* see target signature */)
{
    // Tail-call to rawcmt_to_tilcmt via GOT/IAT indirection
    return rawcmt_to_tilcmt(/* forwarded args */);
}

