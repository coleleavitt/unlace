// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E870
// Name:            .eetol64u
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E870 jmp     cs:off_4E9C20
//
// Resolved target: eetol64u
// Target address:  0x4EC650
// GOT/IAT slot:    0x4E9C20
// Slot symbol:     off_4E9C20
// Target type:     <no type info>
// ============================================================

void .eetol64u(/* see target signature */)
{
    // Tail-call to eetol64u via GOT/IAT indirection
    return eetol64u(/* forwarded args */);
}

