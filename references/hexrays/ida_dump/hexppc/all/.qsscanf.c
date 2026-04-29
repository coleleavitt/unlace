// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A5A0
// Name:            .qsscanf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A5A0 jmp     cs:off_4DA2B8
//
// Resolved target: qsscanf
// Target address:  0x4DCC88
// GOT/IAT slot:    0x4DA2B8
// Slot symbol:     off_4DA2B8
// Target type:     <no type info>
// ============================================================

void .qsscanf(/* see target signature */)
{
    // Tail-call to qsscanf via GOT/IAT indirection
    return qsscanf(/* forwarded args */);
}

