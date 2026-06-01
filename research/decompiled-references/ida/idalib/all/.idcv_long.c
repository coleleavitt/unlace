// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD4F0
// Name:            .idcv_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD4F0 jmp     cs:off_2C7C260
//
// Resolved target: idcv_long
// Target address:  0x796F10
// GOT/IAT slot:    0x2C7C260
// Slot symbol:     off_2C7C260
// Target type:     <no type info>
// ============================================================

void .idcv_long(/* see target signature */)
{
    // Tail-call to idcv_long via GOT/IAT indirection
    return idcv_long(/* forwarded args */);
}

