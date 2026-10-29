// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112AA0
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112AA0 jmp     cs:memrev_ptr
//
// Resolved target: memrev
// Target address:  0x8D4198
// GOT/IAT slot:    0x8A01F0
// Slot symbol:     memrev_ptr
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

