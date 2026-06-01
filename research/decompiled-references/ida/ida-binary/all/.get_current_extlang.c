// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113FE0
// Name:            .get_current_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113FE0 jmp     cs:get_current_extlang_ptr
//
// Resolved target: get_current_extlang
// Target address:  0x8D4F60
// GOT/IAT slot:    0x8A0C90
// Slot symbol:     get_current_extlang_ptr
// Target type:     <no type info>
// ============================================================

void .get_current_extlang(/* see target signature */)
{
    // Tail-call to get_current_extlang via GOT/IAT indirection
    return get_current_extlang(/* forwarded args */);
}

