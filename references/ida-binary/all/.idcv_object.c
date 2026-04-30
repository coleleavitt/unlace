// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118510
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118510 jmp     cs:idcv_object_ptr
//
// Resolved target: idcv_object
// Target address:  0x8D7B38
// GOT/IAT slot:    0x8A2F28
// Slot symbol:     idcv_object_ptr
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

