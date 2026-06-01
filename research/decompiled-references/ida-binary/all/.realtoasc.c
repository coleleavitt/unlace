// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1172A0
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1172A0 jmp     cs:realtoasc_ptr
//
// Resolved target: realtoasc
// Target address:  0x8D6F90
// GOT/IAT slot:    0x8A25F0
// Slot symbol:     realtoasc_ptr
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

