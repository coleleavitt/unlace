// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x347C0
// Name:            j_.use_mapping
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x347C0 jmp     _use_mapping
//
// Resolved target: .use_mapping
// Target address:  0x20440
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.use_mapping(/* see target signature */)
{
    // Tail-call to .use_mapping via direct jump indirection
    return .use_mapping(/* forwarded args */);
}

