// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111BC0
// Name:            .find_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111BC0 jmp     cs:find_byte_ptr
//
// Resolved target: find_byte
// Target address:  0x8D3820
// GOT/IAT slot:    0x89FA80
// Slot symbol:     find_byte_ptr
// Target type:     <no type info>
// ============================================================

void .find_byte(/* see target signature */)
{
    // Tail-call to find_byte via GOT/IAT indirection
    return find_byte(/* forwarded args */);
}

