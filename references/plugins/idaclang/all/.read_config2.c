// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3270
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3270 jmp     cs:off_29120
//
// Resolved target: read_config2
// Target address:  0x294D0
// GOT/IAT slot:    0x29120
// Slot symbol:     off_29120
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

