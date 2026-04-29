// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CF10
// Name:            .get_compiler_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CF10 jmp     cs:off_4EDF70
//
// Resolved target: get_compiler_name
// Target address:  0x4F22C0
// GOT/IAT slot:    0x4EDF70
// Slot symbol:     off_4EDF70
// Target type:     <no type info>
// ============================================================

void .get_compiler_name(/* see target signature */)
{
    // Tail-call to get_compiler_name via GOT/IAT indirection
    return get_compiler_name(/* forwarded args */);
}

