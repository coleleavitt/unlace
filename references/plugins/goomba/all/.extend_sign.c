// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42A0
// Name:            .extend_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42A0 jmp     cs:off_4E138
//
// Resolved target: extend_sign
// Target address:  0x4F740
// GOT/IAT slot:    0x4E138
// Slot symbol:     off_4E138
// Target type:     <no type info>
// ============================================================

void .extend_sign(/* see target signature */)
{
    // Tail-call to extend_sign via GOT/IAT indirection
    return extend_sign(/* forwarded args */);
}

