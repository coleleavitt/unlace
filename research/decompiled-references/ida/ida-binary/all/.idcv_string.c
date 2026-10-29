// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1156F0
// Name:            .idcv_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1156F0 jmp     cs:idcv_string_ptr
//
// Resolved target: idcv_string
// Target address:  0x8D5E00
// GOT/IAT slot:    0x8A1818
// Slot symbol:     idcv_string_ptr
// Target type:     <no type info>
// ============================================================

void .idcv_string(/* see target signature */)
{
    // Tail-call to idcv_string via GOT/IAT indirection
    return idcv_string(/* forwarded args */);
}

