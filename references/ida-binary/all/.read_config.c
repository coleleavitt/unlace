// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11BB30
// Name:            .read_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11BB30 jmp     cs:read_config_ptr
//
// Resolved target: read_config
// Target address:  0x8D9D20
// GOT/IAT slot:    0x8A4A38
// Slot symbol:     read_config_ptr
// Target type:     <no type info>
// ============================================================

void .read_config(/* see target signature */)
{
    // Tail-call to read_config via GOT/IAT indirection
    return read_config(/* forwarded args */);
}

