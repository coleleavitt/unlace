// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .set_selector
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_80F0
//
// Resolved target: set_selector
// Target address:  0x87D0
// GOT/IAT slot:    0x80F0
// Slot symbol:     off_80F0
// Target type:     <no type info>
// ============================================================

void .set_selector(/* see target signature */)
{
    // Tail-call to set_selector via GOT/IAT indirection
    return set_selector(/* forwarded args */);
}

