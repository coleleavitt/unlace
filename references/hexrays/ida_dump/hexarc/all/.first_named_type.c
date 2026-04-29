// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF50
// Name:            .first_named_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF50 jmp     cs:off_4B9F90
//
// Resolved target: first_named_type
// Target address:  0x4BC9C0
// GOT/IAT slot:    0x4B9F90
// Slot symbol:     off_4B9F90
// Target type:     <no type info>
// ============================================================

void .first_named_type(/* see target signature */)
{
    // Tail-call to first_named_type via GOT/IAT indirection
    return first_named_type(/* forwarded args */);
}

