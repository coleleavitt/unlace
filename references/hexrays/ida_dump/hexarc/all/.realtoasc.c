// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC70
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC70 jmp     cs:off_4B9E20
//
// Resolved target: realtoasc
// Target address:  0x4BC850
// GOT/IAT slot:    0x4B9E20
// Slot symbol:     off_4B9E20
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

