// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8340
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8340 jmp     cs:off_2A188
//
// Resolved target: btoa64
// Target address:  0x2BB98
// GOT/IAT slot:    0x2A188
// Slot symbol:     off_2A188
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

