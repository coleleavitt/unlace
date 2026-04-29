// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22D0
// Name:            .qfputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22D0 jmp     cs:off_8150
//
// Resolved target: qfputc
// Target address:  0x8840
// GOT/IAT slot:    0x8150
// Slot symbol:     off_8150
// Target type:     <no type info>
// ============================================================

void .qfputc(/* see target signature */)
{
    // Tail-call to qfputc via GOT/IAT indirection
    return qfputc(/* forwarded args */);
}

