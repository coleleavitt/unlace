// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35C0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35C0 jmp     cs:off_132C8
//
// Resolved target: set_compiler
// Target address:  0x13668
// GOT/IAT slot:    0x132C8
// Slot symbol:     off_132C8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

