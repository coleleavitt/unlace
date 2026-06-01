// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC730
// Name:            .read_regargs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC730 jmp     cs:off_2C7BB80
//
// Resolved target: read_regargs
// Target address:  0x673F30
// GOT/IAT slot:    0x2C7BB80
// Slot symbol:     off_2C7BB80
// Target type:     <no type info>
// ============================================================

void .read_regargs(/* see target signature */)
{
    // Tail-call to read_regargs via GOT/IAT indirection
    return read_regargs(/* forwarded args */);
}

