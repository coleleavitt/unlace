// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFC0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFC0 jmp     cs:off_4DAFC8
//
// Resolved target: set_compiler
// Target address:  0x4DD9F8
// GOT/IAT slot:    0x4DAFC8
// Slot symbol:     off_4DAFC8
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

