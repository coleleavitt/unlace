// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4520
// Name:            .read_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4520 jmp     cs:off_28278
//
// Resolved target: read_config
// Target address:  0x29C10
// GOT/IAT slot:    0x28278
// Slot symbol:     off_28278
// Target type:     <no type info>
// ============================================================

void .read_config(/* see target signature */)
{
    // Tail-call to read_config via GOT/IAT indirection
    return read_config(/* forwarded args */);
}

