// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119BD0
// Name:            .btoa64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119BD0 jmp     cs:btoa64_ptr
//
// Resolved target: btoa64
// Target address:  0x8D8968
// GOT/IAT slot:    0x8A3A88
// Slot symbol:     btoa64_ptr
// Target type:     <no type info>
// ============================================================

void .btoa64(/* see target signature */)
{
    // Tail-call to btoa64 via GOT/IAT indirection
    return btoa64(/* forwarded args */);
}

