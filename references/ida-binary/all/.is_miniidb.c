// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115C10
// Name:            .is_miniidb
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115C10 jmp     cs:is_miniidb_ptr
//
// Resolved target: is_miniidb
// Target address:  0x8D6150
// GOT/IAT slot:    0x8A1AA8
// Slot symbol:     is_miniidb_ptr
// Target type:     <no type info>
// ============================================================

void .is_miniidb(/* see target signature */)
{
    // Tail-call to is_miniidb via GOT/IAT indirection
    return is_miniidb(/* forwarded args */);
}

