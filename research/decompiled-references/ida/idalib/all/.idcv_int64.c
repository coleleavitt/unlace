// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD400
// Name:            .idcv_int64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD400 jmp     cs:off_2C7C1E8
//
// Resolved target: idcv_int64
// Target address:  0x797070
// GOT/IAT slot:    0x2C7C1E8
// Slot symbol:     off_2C7C1E8
// Target type:     <no type info>
// ============================================================

void .idcv_int64(/* see target signature */)
{
    // Tail-call to idcv_int64 via GOT/IAT indirection
    return idcv_int64(/* forwarded args */);
}

