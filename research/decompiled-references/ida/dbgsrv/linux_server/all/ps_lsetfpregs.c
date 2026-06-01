/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetfpregs
// Address: 0x00000000004129F0

//----- (00000000004129F0) ----------------------------------------------------
_BOOL8 __fastcall ps_lsetfpregs(__int64 a1, __int64 a2, __int64 a3)
{
  return ptrace(PTRACE_SETFPREGS, a2, 0, a3) != 0;
}
