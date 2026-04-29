// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60F0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60F0 jmp     cs:off_2F060
//
// Resolved target: vloader_failure
// Target address:  0x2F6D0
// GOT/IAT slot:    0x2F060
// Slot symbol:     off_2F060
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

