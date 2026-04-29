// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCC0
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCC0 jmp     cs:off_4BFE48
//
// Resolved target: memrev
// Target address:  0x4C3370
// GOT/IAT slot:    0x4BFE48
// Slot symbol:     off_4BFE48
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

