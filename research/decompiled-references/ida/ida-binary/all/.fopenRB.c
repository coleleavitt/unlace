// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1163C0
// Name:            .fopenRB
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1163C0 jmp     cs:fopenRB_ptr
//
// Resolved target: fopenRB
// Target address:  0x8D6628
// GOT/IAT slot:    0x8A1E80
// Slot symbol:     fopenRB_ptr
// Target type:     <no type info>
// ============================================================

void .fopenRB(/* see target signature */)
{
    // Tail-call to fopenRB via GOT/IAT indirection
    return fopenRB(/* forwarded args */);
}

