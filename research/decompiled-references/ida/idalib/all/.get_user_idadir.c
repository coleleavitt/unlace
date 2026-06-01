// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8D30
// Name:            .get_user_idadir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8D30 jmp     cs:off_2C79E80
//
// Resolved target: get_user_idadir
// Target address:  0x834B60
// GOT/IAT slot:    0x2C79E80
// Slot symbol:     off_2C79E80
// Target type:     <no type info>
// ============================================================

void .get_user_idadir(/* see target signature */)
{
    // Tail-call to get_user_idadir via GOT/IAT indirection
    return get_user_idadir(/* forwarded args */);
}

