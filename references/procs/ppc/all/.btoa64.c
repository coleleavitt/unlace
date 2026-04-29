// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x205F0
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x205F0 jmp     cs:off_952E0
//
// Resolved target: btoa64
// Target address:  0x95D18
// GOT/IAT slot:    0x952E0
// Slot symbol:     off_952E0
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

