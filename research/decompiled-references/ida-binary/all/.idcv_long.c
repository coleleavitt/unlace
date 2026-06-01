// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B0E0
// Name:            .idcv_long
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B0E0 jmp     cs:idcv_long_ptr
//
// Resolved target: idcv_long
// Target address:  0x8D96A8
// GOT/IAT slot:    0x8A4510
// Slot symbol:     idcv_long_ptr
// Target type:     <no type info>
// ============================================================

void .idcv_long(/* see target signature */)
{
    // Tail-call to idcv_long via GOT/IAT indirection
    return idcv_long(/* forwarded args */);
}

