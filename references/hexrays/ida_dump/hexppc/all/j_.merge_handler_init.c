// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AB0
// Name:            j_.merge_handler_init
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2A9AB0 jmp     _merge_handler_init
//
// Resolved target: .merge_handler_init
// Target address:  0x2B2E0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.merge_handler_init(/* see target signature */)
{
    // Tail-call to .merge_handler_init via direct jump indirection
    return .merge_handler_init(/* forwarded args */);
}

