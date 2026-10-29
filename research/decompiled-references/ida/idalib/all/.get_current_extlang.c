// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8F80
// Name:            .get_current_extlang
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8F80 jmp     cs:off_2C79FA8
//
// Resolved target: get_current_extlang
// Target address:  0x789FE0
// GOT/IAT slot:    0x2C79FA8
// Slot symbol:     off_2C79FA8
// Target type:     <no type info>
// ============================================================

void .get_current_extlang(/* see target signature */)
{
    // Tail-call to get_current_extlang via GOT/IAT indirection
    return get_current_extlang(/* forwarded args */);
}

