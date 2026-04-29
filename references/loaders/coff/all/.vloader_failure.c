// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40B0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40B0 jmp     cs:off_23040
//
// Resolved target: vloader_failure
// Target address:  0x23460
// GOT/IAT slot:    0x23040
// Slot symbol:     off_23040
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

