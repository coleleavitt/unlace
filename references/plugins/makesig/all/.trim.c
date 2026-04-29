// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .trim
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_20058
//
// Resolved target: trim
// Target address:  0x21968
// GOT/IAT slot:    0x20058
// Slot symbol:     off_20058
// Target type:     <no type info>
// ============================================================

void .trim(/* see target signature */)
{
    // Tail-call to trim via GOT/IAT indirection
    return trim(/* forwarded args */);
}

