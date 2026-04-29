// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCD0
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCD0 jmp     cs:off_4C0E50
//
// Resolved target: memrev
// Target address:  0x4C3E78
// GOT/IAT slot:    0x4C0E50
// Slot symbol:     off_4C0E50
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

