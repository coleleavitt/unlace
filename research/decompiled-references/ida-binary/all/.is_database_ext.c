// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x114000
// Name:            .is_database_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x114000 jmp     cs:is_database_ext_ptr
//
// Resolved target: is_database_ext
// Target address:  0x8D4F70
// GOT/IAT slot:    0x8A0CA0
// Slot symbol:     is_database_ext_ptr
// Target type:     <no type info>
// ============================================================

void .is_database_ext(/* see target signature */)
{
    // Tail-call to is_database_ext via GOT/IAT indirection
    return is_database_ext(/* forwarded args */);
}

