// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A230
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A230 jmp     cs:off_4DA100
//
// Resolved target: verror
// Target address:  0x4DCAD0
// GOT/IAT slot:    0x4DA100
// Slot symbol:     off_4DA100
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

