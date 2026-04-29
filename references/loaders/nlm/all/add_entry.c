// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x8890
// Name:     add_entry
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_entry are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_entry(/* see import library declaration */);

