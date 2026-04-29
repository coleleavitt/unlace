// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2220
// Name:            .is_loaded
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2220 jmp     cs:off_80F8
//
// Resolved target: is_loaded
// Target address:  0x82D8
// GOT/IAT slot:    0x80F8
// Slot symbol:     off_80F8
// Target type:     <no type info>
// ============================================================

void .is_loaded(/* see target signature */)
{
    // Tail-call to is_loaded via GOT/IAT indirection
    return is_loaded(/* forwarded args */);
}

