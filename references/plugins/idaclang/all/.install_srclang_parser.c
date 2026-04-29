// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31B0
// Name:            .install_srclang_parser
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31B0 jmp     cs:off_290C0
//
// Resolved target: install_srclang_parser
// Target address:  0x29470
// GOT/IAT slot:    0x290C0
// Slot symbol:     off_290C0
// Target type:     <no type info>
// ============================================================

void .install_srclang_parser(/* see target signature */)
{
    // Tail-call to install_srclang_parser via GOT/IAT indirection
    return install_srclang_parser(/* forwarded args */);
}

