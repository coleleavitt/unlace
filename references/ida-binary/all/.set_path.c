// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180B0
// Name:            .set_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180B0 jmp     cs:set_path_ptr
//
// Resolved target: set_path
// Target address:  0x8D7890
// GOT/IAT slot:    0x8A2CF8
// Slot symbol:     set_path_ptr
// Target type:     <no type info>
// ============================================================

void .set_path(/* see target signature */)
{
    // Tail-call to set_path via GOT/IAT indirection
    return set_path(/* forwarded args */);
}

