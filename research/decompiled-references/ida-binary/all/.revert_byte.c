// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111300
// Name:            .revert_byte
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111300 jmp     cs:revert_byte_ptr
//
// Resolved target: revert_byte
// Target address:  0x8D3248
// GOT/IAT slot:    0x89F620
// Slot symbol:     revert_byte_ptr
// Target type:     <no type info>
// ============================================================

void .revert_byte(/* see target signature */)
{
    // Tail-call to revert_byte via GOT/IAT indirection
    return revert_byte(/* forwarded args */);
}

