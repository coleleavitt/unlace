// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111730
// Name:            .find_code
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111730 jmp     cs:find_code_ptr
//
// Resolved target: find_code
// Target address:  0x8D3530
// GOT/IAT slot:    0x89F838
// Slot symbol:     find_code_ptr
// Target type:     <no type info>
// ============================================================

void .find_code(/* see target signature */)
{
    // Tail-call to find_code via GOT/IAT indirection
    return find_code(/* forwarded args */);
}

