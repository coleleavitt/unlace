// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BC90
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BC90 jmp     cs:off_4DAE30
//
// Resolved target: realtoasc
// Target address:  0x4DD860
// GOT/IAT slot:    0x4DAE30
// Slot symbol:     off_4DAE30
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

