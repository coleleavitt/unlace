// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20EC0
// Name:            .set_compiler
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20EC0 jmp     cs:off_95748
//
// Resolved target: set_compiler
// Target address:  0x96198
// GOT/IAT slot:    0x95748
// Slot symbol:     off_95748
// Target type:     <no type info>
// ============================================================

void .set_compiler(/* see target signature */)
{
    // Tail-call to set_compiler via GOT/IAT indirection
    return set_compiler(/* forwarded args */);
}

