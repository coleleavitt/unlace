// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52A0
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52A0 jmp     cs:off_15138
//
// Resolved target: btoa64
// Target address:  0x161C8
// GOT/IAT slot:    0x15138
// Slot symbol:     off_15138
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

