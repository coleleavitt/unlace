// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C910
// Name:            .eetol64u
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C910 jmp     cs:off_4EDC70
//
// Resolved target: eetol64u
// Target address:  0x4F1FA8
// GOT/IAT slot:    0x4EDC70
// Slot symbol:     off_4EDC70
// Target type:     <no type info>
// ============================================================

void .eetol64u(/* see target signature */)
{
    // Tail-call to eetol64u via GOT/IAT indirection
    return eetol64u(/* forwarded args */);
}

