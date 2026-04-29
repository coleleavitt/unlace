// ============================================================
// EXTERNAL IMPORT
// ============================================================
// Address:  0x13500
// Name:     add_sourcefile
// Segment:  extern (SEG_XTRN)
// Note:     This is an extern symbol resolved at link/load time.
//           No code body exists in this binary; calls to add_sourcefile are
//           dispatched through GOT/IAT to the dynamic library.
// ============================================================

extern void add_sourcefile(/* see import library declaration */);

