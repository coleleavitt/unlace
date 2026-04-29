// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B230
// Name:            .verror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B230 jmp     cs:off_4ED100
//
// Resolved target: verror
// Target address:  0x4F13F8
// GOT/IAT slot:    0x4ED100
// Slot symbol:     off_4ED100
// Target type:     <no type info>
// ============================================================

void .verror(/* see target signature */)
{
    // Tail-call to verror via GOT/IAT indirection
    return verror(/* forwarded args */);
}

