// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4170
// Name:            .Z3_get_error_msg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4170 jmp     cs:off_4E0A0
//
// Resolved target: Z3_get_error_msg
// Target address:  0x4F6A8
// GOT/IAT slot:    0x4E0A0
// Slot symbol:     off_4E0A0
// Target type:     <no type info>
// ============================================================

void .Z3_get_error_msg(/* see target signature */)
{
    // Tail-call to Z3_get_error_msg via GOT/IAT indirection
    return Z3_get_error_msg(/* forwarded args */);
}

