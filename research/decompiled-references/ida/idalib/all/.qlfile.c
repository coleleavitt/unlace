// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9500
// Name:            .qlfile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9500 jmp     cs:off_2C7A268
//
// Resolved target: qlfile
// Target address:  0x837940
// GOT/IAT slot:    0x2C7A268
// Slot symbol:     off_2C7A268
// Target type:     <no type info>
// ============================================================

void .qlfile(/* see target signature */)
{
    // Tail-call to qlfile via GOT/IAT indirection
    return qlfile(/* forwarded args */);
}

