// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CDB0
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CDB0 jmp     cs:off_4EDEC0
//
// Resolved target: realtoasc
// Target address:  0x4F2210
// GOT/IAT slot:    0x4EDEC0
// Slot symbol:     off_4EDEC0
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

