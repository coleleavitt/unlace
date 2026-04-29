// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A810
// Name:            .eetol64u
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A810 jmp     cs:off_4B9BF0
//
// Resolved target: eetol64u
// Target address:  0x4BC600
// GOT/IAT slot:    0x4B9BF0
// Slot symbol:     off_4B9BF0
// Target type:     <no type info>
// ============================================================

void .eetol64u(/* see target signature */)
{
    // Tail-call to eetol64u via GOT/IAT indirection
    return eetol64u(/* forwarded args */);
}

