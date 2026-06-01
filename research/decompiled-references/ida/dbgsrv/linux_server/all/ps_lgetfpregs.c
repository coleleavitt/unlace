/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetfpregs
// Address: 0x00000000004129C0

//----- (00000000004129C0) ----------------------------------------------------
_BOOL8 __fastcall ps_lgetfpregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_GETFPREGS, a2, 0, a3) != 0;
}
