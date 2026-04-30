// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119A80
// Name:            .register_cfgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119A80 jmp     cs:register_cfgopts_ptr
//
// Resolved target: register_cfgopts
// Target address:  0x8D88A0
// GOT/IAT slot:    0x8A39E0
// Slot symbol:     register_cfgopts_ptr
// Target type:     <no type info>
// ============================================================

void .register_cfgopts(/* see target signature */)
{
    // Tail-call to register_cfgopts via GOT/IAT indirection
    return register_cfgopts(/* forwarded args */);
}

