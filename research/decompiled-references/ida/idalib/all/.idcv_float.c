// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B00
// Name:            .idcv_float
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8B00 jmp     cs:off_2C79D68
//
// Resolved target: idcv_float
// Target address:  0x7972D0
// GOT/IAT slot:    0x2C79D68
// Slot symbol:     off_2C79D68
// Target type:     <no type info>
// ============================================================

void .idcv_float(/* see target signature */)
{
    // Tail-call to idcv_float via GOT/IAT indirection
    return idcv_float(/* forwarded args */);
}

