// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1030
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1030 jmp     cs:off_4000
//
// Resolved target: vloader_failure
// Target address:  0x4118
// GOT/IAT slot:    0x4000
// Slot symbol:     off_4000
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

