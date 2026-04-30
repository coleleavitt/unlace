// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1196B0
// Name:            .is_stroff
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1196B0 jmp     cs:is_stroff_ptr
//
// Resolved target: is_stroff
// Target address:  0x8D8658
// GOT/IAT slot:    0x8A37F8
// Slot symbol:     is_stroff_ptr
// Target type:     <no type info>
// ============================================================

void .is_stroff(/* see target signature */)
{
    // Tail-call to is_stroff via GOT/IAT indirection
    return is_stroff(/* forwarded args */);
}

