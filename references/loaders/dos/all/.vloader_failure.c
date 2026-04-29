// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C0
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C0 jmp     cs:off_B048
//
// Resolved target: vloader_failure
// Target address:  0xB4E0
// GOT/IAT slot:    0xB048
// Slot symbol:     off_B048
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

