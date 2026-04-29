// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29D40
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29D40 jmp     cs:off_4B9688
//
// Resolved target: read_config2
// Target address:  0x4BC080
// GOT/IAT slot:    0x4B9688
// Slot symbol:     off_4B9688
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

