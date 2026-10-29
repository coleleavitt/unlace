// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9170
// Name:            .get_idcv_class_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9170 jmp     cs:off_2C7A0A0
//
// Resolved target: get_idcv_class_name
// Target address:  0x791C60
// GOT/IAT slot:    0x2C7A0A0
// Slot symbol:     off_2C7A0A0
// Target type:     <no type info>
// ============================================================

void .get_idcv_class_name(/* see target signature */)
{
    // Tail-call to get_idcv_class_name via GOT/IAT indirection
    return get_idcv_class_name(/* forwarded args */);
}

