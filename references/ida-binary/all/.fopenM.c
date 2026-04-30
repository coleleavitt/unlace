// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112000
// Name:            .fopenM
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112000 jmp     cs:fopenM_ptr
//
// Resolved target: fopenM
// Target address:  0x8D3AD0
// GOT/IAT slot:    0x89FCA0
// Slot symbol:     fopenM_ptr
// Target type:     <no type info>
// ============================================================

void .fopenM(/* see target signature */)
{
    // Tail-call to fopenM via GOT/IAT indirection
    return fopenM(/* forwarded args */);
}

