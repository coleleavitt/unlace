// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CDE0
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CDE0 jmp     cs:off_4EDED8
//
// Resolved target: memrev
// Target address:  0x4F2228
// GOT/IAT slot:    0x4EDED8
// Slot symbol:     off_4EDED8
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

