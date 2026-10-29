// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AADA0
// Name:            .get_login_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AADA0 jmp     cs:off_2C7AEB8
//
// Resolved target: get_login_name
// Target address:  0x841480
// GOT/IAT slot:    0x2C7AEB8
// Slot symbol:     off_2C7AEB8
// Target type:     <no type info>
// ============================================================

void .get_login_name(/* see target signature */)
{
    // Tail-call to get_login_name via GOT/IAT indirection
    return get_login_name(/* forwarded args */);
}

