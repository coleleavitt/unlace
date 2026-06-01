// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1172D0
// Name:            .get_login_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1172D0 jmp     cs:get_login_name_ptr
//
// Resolved target: get_login_name
// Target address:  0x8D6FB0
// GOT/IAT slot:    0x8A2608
// Slot symbol:     get_login_name_ptr
// Target type:     <no type info>
// ============================================================

void .get_login_name(/* see target signature */)
{
    // Tail-call to get_login_name via GOT/IAT indirection
    return get_login_name(/* forwarded args */);
}

