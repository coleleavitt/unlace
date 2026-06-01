// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1114D0
// Name:            .find_defined
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1114D0 jmp     cs:find_defined_ptr
//
// Resolved target: find_defined
// Target address:  0x8D3390
// GOT/IAT slot:    0x89F708
// Slot symbol:     find_defined_ptr
// Target type:     <no type info>
// ============================================================

void .find_defined(/* see target signature */)
{
    // Tail-call to find_defined via GOT/IAT indirection
    return find_defined(/* forwarded args */);
}

