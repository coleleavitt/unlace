// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB600
// Name:            .qregerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB600 jmp     cs:off_2C7B2E8
//
// Resolved target: qregerror
// Target address:  0x89FB60
// GOT/IAT slot:    0x2C7B2E8
// Slot symbol:     off_2C7B2E8
// Target type:     <no type info>
// ============================================================

void .qregerror(/* see target signature */)
{
    // Tail-call to qregerror via GOT/IAT indirection
    return qregerror(/* forwarded args */);
}

