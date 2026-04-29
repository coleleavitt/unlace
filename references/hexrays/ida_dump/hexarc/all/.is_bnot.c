// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A500
// Name:            .is_bnot
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A500 jmp     cs:off_4B9A68
//
// Resolved target: is_bnot
// Target address:  0x4BC468
// GOT/IAT slot:    0x4B9A68
// Slot symbol:     off_4B9A68
// Target type:     <no type info>
// ============================================================

void .is_bnot(/* see target signature */)
{
    // Tail-call to is_bnot via GOT/IAT indirection
    return is_bnot(/* forwarded args */);
}

