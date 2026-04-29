// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5520
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5520 jmp     cs:off_1A278
//
// Resolved target: add_cref
// Target address:  0x1A618
// GOT/IAT slot:    0x1A278
// Slot symbol:     off_1A278
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

