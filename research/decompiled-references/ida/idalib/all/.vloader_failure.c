// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A93E0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A93E0 jmp     cs:off_2C7A1D8
//
// Resolved target: vloader_failure
// Target address:  0x6413A0
// GOT/IAT slot:    0x2C7A1D8
// Slot symbol:     off_2C7A1D8
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

