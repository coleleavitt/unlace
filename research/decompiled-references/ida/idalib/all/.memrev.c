// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A80D0
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A80D0 jmp     cs:off_2C79850
//
// Resolved target: memrev
// Target address:  0x841900
// GOT/IAT slot:    0x2C79850
// Slot symbol:     off_2C79850
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

