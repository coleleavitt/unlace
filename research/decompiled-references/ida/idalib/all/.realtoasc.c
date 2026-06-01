// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAD80
// Name:            .realtoasc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAD80 jmp     cs:off_2C7AEA8
//
// Resolved target: realtoasc
// Target address:  0x832640
// GOT/IAT slot:    0x2C7AEA8
// Slot symbol:     off_2C7AEA8
// Target type:     <no type info>
// ============================================================

void .realtoasc(/* see target signature */)
{
    // Tail-call to realtoasc via GOT/IAT indirection
    return realtoasc(/* forwarded args */);
}

