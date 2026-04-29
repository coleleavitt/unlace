// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B840
// Name:            .eetol64u
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B840 jmp     cs:off_4CDC08
//
// Resolved target: eetol64u
// Target address:  0x4D0638
// GOT/IAT slot:    0x4CDC08
// Slot symbol:     off_4CDC08
// Target type:     <no type info>
// ============================================================

void .eetol64u(/* see target signature */)
{
    // Tail-call to eetol64u via GOT/IAT indirection
    return eetol64u(/* forwarded args */);
}

