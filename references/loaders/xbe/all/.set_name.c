// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1100
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1100 jmp     cs:off_5068
//
// Resolved target: set_name
// Target address:  0x51C8
// GOT/IAT slot:    0x5068
// Slot symbol:     off_5068
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

