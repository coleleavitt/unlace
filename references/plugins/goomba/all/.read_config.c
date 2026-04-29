// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46A0
// Name:            .read_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46A0 jmp     cs:off_4E338
//
// Resolved target: read_config
// Target address:  0x4F948
// GOT/IAT slot:    0x4E338
// Slot symbol:     off_4E338
// Target type:     <no type info>
// ============================================================

void .read_config(/* see target signature */)
{
    // Tail-call to read_config via GOT/IAT indirection
    return read_config(/* forwarded args */);
}

