// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B840
// Name:            .eetol64u
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B840 jmp     cs:off_4C0C08
//
// Resolved target: eetol64u
// Target address:  0x4C3C10
// GOT/IAT slot:    0x4C0C08
// Slot symbol:     off_4C0C08
// Target type:     <no type info>
// ============================================================

void .eetol64u(/* see target signature */)
{
    // Tail-call to eetol64u via GOT/IAT indirection
    return eetol64u(/* forwarded args */);
}

