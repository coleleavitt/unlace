// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x170A0
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x170A0 jmp     cs:off_4F838
//
// Resolved target: is_mapped
// Target address:  0x50C98
// GOT/IAT slot:    0x4F838
// Slot symbol:     off_4F838
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

