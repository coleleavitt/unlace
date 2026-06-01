// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1122F0
// Name:            .find_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1122F0 jmp     cs:find_extlang_ptr
//
// Resolved target: find_extlang
// Target address:  0x8D3C98
// GOT/IAT slot:    0x89FE18
// Slot symbol:     find_extlang_ptr
// Target type:     <no type info>
// ============================================================

void .find_extlang(/* see target signature */)
{
    // Tail-call to find_extlang via GOT/IAT indirection
    return find_extlang(/* forwarded args */);
}

