// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D230
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D230 jmp     cs:off_4E9100
//
// Resolved target: verror
// Target address:  0x4EBAF0
// GOT/IAT slot:    0x4E9100
// Slot symbol:     off_4E9100
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

