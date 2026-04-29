// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BA30
// Name:            .find_regvar
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BA30 jmp     cs:off_4DAD00
//
// Resolved target: find_regvar
// Target address:  0x4DD720
// GOT/IAT slot:    0x4DAD00
// Slot symbol:     off_4DAD00
// Target type:     <no type info>
// ============================================================

void .find_regvar(/* see target signature */)
{
    // Tail-call to find_regvar via GOT/IAT indirection
    return find_regvar(/* forwarded args */);
}

