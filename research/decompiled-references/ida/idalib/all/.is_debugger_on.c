// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC620
// Name:            .is_debugger_on
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC620 jmp     cs:off_2C7BAF8
//
// Resolved target: is_debugger_on
// Target address:  0x3FC530
// GOT/IAT slot:    0x2C7BAF8
// Slot symbol:     off_2C7BAF8
// Target type:     <no type info>
// ============================================================

void .is_debugger_on(/* see target signature */)
{
    // Tail-call to is_debugger_on via GOT/IAT indirection
    return is_debugger_on(/* forwarded args */);
}

