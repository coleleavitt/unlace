// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB900
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB900 jmp     cs:off_2C7B468
//
// Resolved target: verror
// Target address:  0x840D80
// GOT/IAT slot:    0x2C7B468
// Slot symbol:     off_2C7B468
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

