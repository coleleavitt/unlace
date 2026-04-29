// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29760
// Name:            .idcv_object
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29760 jmp     cs:off_4B9398
//
// Resolved target: idcv_object
// Target address:  0x4BBD68
// GOT/IAT slot:    0x4B9398
// Slot symbol:     off_4B9398
// Target type:     <no type info>
// ============================================================

void .idcv_object(/* see target signature */)
{
    // Tail-call to idcv_object via GOT/IAT indirection
    return idcv_object(/* forwarded args */);
}

