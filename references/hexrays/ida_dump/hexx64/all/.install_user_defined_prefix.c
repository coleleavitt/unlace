// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BF10
// Name:            .install_user_defined_prefix
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BF10 jmp     cs:off_4ED770
//
// Resolved target: install_user_defined_prefix
// Target address:  0x4F1A80
// GOT/IAT slot:    0x4ED770
// Slot symbol:     off_4ED770
// Target type:     <no type info>
// ============================================================

void .install_user_defined_prefix(/* see target signature */)
{
    // Tail-call to install_user_defined_prefix via GOT/IAT indirection
    return install_user_defined_prefix(/* forwarded args */);
}

