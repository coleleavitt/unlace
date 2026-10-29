// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A150
// Name:            .is_database_busy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A150 jmp     cs:is_database_busy_ptr
//
// Resolved target: is_database_busy
// Target address:  0x8D8CF0
// GOT/IAT slot:    0x8A3D48
// Slot symbol:     is_database_busy_ptr
// Target type:     <no type info>
// ============================================================

void .is_database_busy(/* see target signature */)
{
    // Tail-call to is_database_busy via GOT/IAT indirection
    return is_database_busy(/* forwarded args */);
}

