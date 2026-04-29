// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAB60
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAB60 jmp     cs:off_CA598
//
// Resolved target: memrev
// Target address:  0xD0EF0
// GOT/IAT slot:    0xCA598
// Slot symbol:     off_CA598
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

