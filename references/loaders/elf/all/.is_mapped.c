// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9310
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9310 jmp     cs:off_89170
//
// Resolved target: is_mapped
// Target address:  0x8C470
// GOT/IAT slot:    0x89170
// Slot symbol:     off_89170
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

