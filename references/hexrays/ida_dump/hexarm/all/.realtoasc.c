// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ECD0
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ECD0 jmp     cs:off_4E9E50
//
// Resolved target: realtoasc
// Target address:  0x4EC8A0
// GOT/IAT slot:    0x4E9E50
// Slot symbol:     off_4E9E50
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

