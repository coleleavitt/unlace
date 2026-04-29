// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8280
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8280 jmp     cs:off_2A128
//
// Resolved target: is_mapped
// Target address:  0x2BB38
// GOT/IAT slot:    0x2A128
// Slot symbol:     off_2A128
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

