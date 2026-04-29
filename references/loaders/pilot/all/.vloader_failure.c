// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_8010
//
// Resolved target: vloader_failure
// Target address:  0x81F0
// GOT/IAT slot:    0x8010
// Slot symbol:     off_8010
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

