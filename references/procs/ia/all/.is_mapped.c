// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7130
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7130 jmp     cs:off_26080
//
// Resolved target: is_mapped
// Target address:  0x26338
// GOT/IAT slot:    0x26080
// Slot symbol:     off_26080
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

