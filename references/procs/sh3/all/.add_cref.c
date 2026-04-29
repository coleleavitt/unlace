// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x56E0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x56E0 jmp     cs:off_15358
//
// Resolved target: add_cref
// Target address:  0x16400
// GOT/IAT slot:    0x15358
// Slot symbol:     off_15358
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

