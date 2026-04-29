// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8B20
// Name:            j_.merge_handler_perform_diff
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2A8B20 jmp     _merge_handler_perform_diff
//
// Resolved target: .merge_handler_perform_diff
// Target address:  0x2B880
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.merge_handler_perform_diff(/* see target signature */)
{
    // Tail-call to .merge_handler_perform_diff via direct jump indirection
    return .merge_handler_perform_diff(/* forwarded args */);
}

