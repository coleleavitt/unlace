// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CD70
// Name:            .Clp_setLogLevel
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CD70 jmp     cs:off_4EDEA0
//
// Resolved target: Clp_setLogLevel
// Target address:  0x4F21E8
// GOT/IAT slot:    0x4EDEA0
// Slot symbol:     off_4EDEA0
// Target type:     <no type info>
// ============================================================

void .Clp_setLogLevel(/* see target signature */)
{
    // Tail-call to Clp_setLogLevel via GOT/IAT indirection
    return Clp_setLogLevel(/* forwarded args */);
}

