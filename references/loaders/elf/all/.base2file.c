// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9880
// Name:            .base2file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9880 jmp     cs:off_89428
//
// Resolved target: base2file
// Target address:  0x8C748
// GOT/IAT slot:    0x89428
// Slot symbol:     off_89428
// Target type:     <no type info>
// ============================================================

void .base2file(/* see target signature */)
{
    // Tail-call to base2file via GOT/IAT indirection
    return base2file(/* forwarded args */);
}

