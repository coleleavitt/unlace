// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8450
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8450 jmp     cs:off_2A210
//
// Resolved target: register_custom_refinfo
// Target address:  0x2BC20
// GOT/IAT slot:    0x2A210
// Slot symbol:     off_2A210
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

