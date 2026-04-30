// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119E90
// Name:            .vcred_ask_user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119E90 jmp     cs:vcred_ask_user_ptr
//
// Resolved target: vcred_ask_user
// Target address:  0x8D8B18
// GOT/IAT slot:    0x8A3BE8
// Slot symbol:     vcred_ask_user_ptr
// Target type:     <no type info>
// ============================================================

void .vcred_ask_user(/* see target signature */)
{
    // Tail-call to vcred_ask_user via GOT/IAT indirection
    return vcred_ask_user(/* forwarded args */);
}

