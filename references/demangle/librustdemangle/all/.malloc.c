// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .malloc
// Size:            11 bytes (2 instructions)
// Disassembly:
//   0x10F0 endbr64
//   0x10F4 bnd jmp cs:off_6038
//
// Resolved target: malloc
// Target address:  0x6080
// GOT/IAT slot:    0x6038
// Slot symbol:     off_6038
// Target type:     void *(size_t size)
// ============================================================

/* see target sig */ .malloc(/* see target signature */)
{
    // Tail-call to malloc via GOT/IAT indirection
    return malloc(/* forwarded args */);
}

