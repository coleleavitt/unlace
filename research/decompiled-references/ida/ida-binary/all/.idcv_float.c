// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113980
// Name:            .idcv_float
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113980 jmp     cs:idcv_float_ptr
//
// Resolved target: idcv_float
// Target address:  0x8D4B48
// GOT/IAT slot:    0x8A0960
// Slot symbol:     idcv_float_ptr
// Target type:     <no type info>
// ============================================================

void .idcv_float(/* see target signature */)
{
    // Tail-call to idcv_float via GOT/IAT indirection
    return idcv_float(/* forwarded args */);
}

