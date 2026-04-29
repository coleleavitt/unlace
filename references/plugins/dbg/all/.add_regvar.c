// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3420
// Name:            .add_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3420 jmp     cs:off_131F8
//
// Resolved target: add_regvar
// Target address:  0x13578
// GOT/IAT slot:    0x131F8
// Slot symbol:     off_131F8
// Target type:     <no type info>
// ============================================================

void .add_regvar(/* see target signature */)
{
    // Tail-call to add_regvar via GOT/IAT indirection
    return add_regvar(/* forwarded args */);
}

