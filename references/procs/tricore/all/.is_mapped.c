// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6250
// Name:            .is_mapped
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6250 jmp     cs:off_24110
//
// Resolved target: is_mapped
// Target address:  0x25EE0
// GOT/IAT slot:    0x24110
// Slot symbol:     off_24110
// Target type:     <no type info>
// ============================================================

void .is_mapped(/* see target signature */)
{
    // Tail-call to is_mapped via GOT/IAT indirection
    return is_mapped(/* forwarded args */);
}

