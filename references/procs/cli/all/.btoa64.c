// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3150
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3150 jmp     cs:off_1A090
//
// Resolved target: btoa64
// Target address:  0x1A348
// GOT/IAT slot:    0x1A090
// Slot symbol:     off_1A090
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

