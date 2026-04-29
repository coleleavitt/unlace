// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20400
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20400 jmp     cs:off_951E8
//
// Resolved target: is_mapped
// Target address:  0x95C20
// GOT/IAT slot:    0x951E8
// Slot symbol:     off_951E8
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

