// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B790
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B790 jmp     cs:off_4ED3B0
//
// Resolved target: idcv_object
// Target address:  0x4F16A8
// GOT/IAT slot:    0x4ED3B0
// Slot symbol:     off_4ED3B0
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

