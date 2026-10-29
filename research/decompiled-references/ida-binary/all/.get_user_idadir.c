// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113CB0
// Name:            .get_user_idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113CB0 jmp     cs:get_user_idadir_ptr
//
// Resolved target: get_user_idadir
// Target address:  0x8D4D60
// GOT/IAT slot:    0x8A0AF8
// Slot symbol:     get_user_idadir_ptr
// Target type:     <no type info>
// ============================================================

void .get_user_idadir(/* see target signature */)
{
    // Tail-call to get_user_idadir via GOT/IAT indirection
    return get_user_idadir(/* forwarded args */);
}

