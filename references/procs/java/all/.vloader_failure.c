// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60E0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60E0 jmp     cs:off_2D058
//
// Resolved target: vloader_failure
// Target address:  0x2D558
// GOT/IAT slot:    0x2D058
// Slot symbol:     off_2D058
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

