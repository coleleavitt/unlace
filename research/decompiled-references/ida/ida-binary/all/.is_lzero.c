// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116EF0
// Name:            .is_lzero
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116EF0 jmp     cs:is_lzero_ptr
//
// Resolved target: is_lzero
// Target address:  0x8D6D20
// GOT/IAT slot:    0x8A2418
// Slot symbol:     is_lzero_ptr
// Target type:     <no type info>
// ============================================================

void .is_lzero(/* see target signature */)
{
    // Tail-call to is_lzero via GOT/IAT indirection
    return is_lzero(/* forwarded args */);
}

