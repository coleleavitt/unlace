// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9CF0
// Name:            .deref_ptr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9CF0 jmp     cs:off_2C7A660
//
// Resolved target: deref_ptr
// Target address:  0x60E330
// GOT/IAT slot:    0x2C7A660
// Slot symbol:     off_2C7A660
// Target type:     <no type info>
// ============================================================

void .deref_ptr(/* see target signature */)
{
    // Tail-call to deref_ptr via GOT/IAT indirection
    return deref_ptr(/* forwarded args */);
}

