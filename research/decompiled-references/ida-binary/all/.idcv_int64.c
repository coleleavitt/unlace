// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AF80
// Name:            .idcv_int64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AF80 jmp     cs:idcv_int64_ptr
//
// Resolved target: idcv_int64
// Target address:  0x8D95E8
// GOT/IAT slot:    0x8A4460
// Slot symbol:     idcv_int64_ptr
// Target type:     <no type info>
// ============================================================

void .idcv_int64(/* see target signature */)
{
    // Tail-call to idcv_int64 via GOT/IAT indirection
    return idcv_int64(/* forwarded args */);
}

