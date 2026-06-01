// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9D60
// Name:            .idcv_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9D60 jmp     cs:off_2C7A698
//
// Resolved target: idcv_string
// Target address:  0x7968D0
// GOT/IAT slot:    0x2C7A698
// Slot symbol:     off_2C7A698
// Target type:     <no type info>
// ============================================================

void .idcv_string(/* see target signature */)
{
    // Tail-call to idcv_string via GOT/IAT indirection
    return idcv_string(/* forwarded args */);
}

