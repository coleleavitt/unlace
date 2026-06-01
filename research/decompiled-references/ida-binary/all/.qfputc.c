// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117FA0
// Name:            .qfputc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117FA0 jmp     cs:qfputc_ptr
//
// Resolved target: qfputc
// Target address:  0x8D77E0
// GOT/IAT slot:    0x8A2C70
// Slot symbol:     qfputc_ptr
// Target type:     <no type info>
// ============================================================

void .qfputc(/* see target signature */)
{
    // Tail-call to qfputc via GOT/IAT indirection
    return qfputc(/* forwarded args */);
}

