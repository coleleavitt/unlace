// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20140
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20140 jmp     cs:off_95088
//
// Resolved target: verror
// Target address:  0x95AB8
// GOT/IAT slot:    0x95088
// Slot symbol:     off_95088
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

