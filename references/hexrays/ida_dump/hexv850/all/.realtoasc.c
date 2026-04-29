// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCA0
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCA0 jmp     cs:off_4C0E38
//
// Resolved target: realtoasc
// Target address:  0x4C3E60
// GOT/IAT slot:    0x4C0E38
// Slot symbol:     off_4C0E38
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

