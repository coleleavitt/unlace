// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_8030
//
// Resolved target: vloader_failure
// Target address:  0x8290
// GOT/IAT slot:    0x8030
// Slot symbol:     off_8030
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

