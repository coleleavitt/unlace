// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1050
// Name:            .vloader_failure
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1050 jmp     cs:off_4010
//
// Resolved target: vloader_failure
// Target address:  0x40E8
// GOT/IAT slot:    0x4010
// Slot symbol:     off_4010
// Target type:     <no type info>
// ============================================================

void .vloader_failure(/* see target signature */)
{
    // Tail-call to vloader_failure via GOT/IAT indirection
    return vloader_failure(/* forwarded args */);
}

