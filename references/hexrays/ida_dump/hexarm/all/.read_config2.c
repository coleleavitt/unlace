// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DD60
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DD60 jmp     cs:off_4E9698
//
// Resolved target: read_config2
// Target address:  0x4EC0B0
// GOT/IAT slot:    0x4E9698
// Slot symbol:     off_4E9698
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

