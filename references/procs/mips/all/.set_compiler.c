// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CF0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CF0 jmp     cs:off_75660
//
// Resolved target: set_compiler
// Target address:  0x75EC8
// GOT/IAT slot:    0x75660
// Slot symbol:     off_75660
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

