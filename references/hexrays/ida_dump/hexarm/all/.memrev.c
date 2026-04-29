// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED00
// Name:            .memrev
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED00 jmp     cs:off_4E9E68
//
// Resolved target: memrev
// Target address:  0x4EC8B8
// GOT/IAT slot:    0x4E9E68
// Slot symbol:     off_4E9E68
// Target type:     <no type info>
// ============================================================

void .memrev(/* see target signature */)
{
    // Tail-call to memrev via GOT/IAT indirection
    return memrev(/* forwarded args */);
}

