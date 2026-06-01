/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lgetfpregs
// Address: 0x00017554

//----- (00017554) --------------------------------------------------------
bool __fastcall ps_lgetfpregs(int a1, int a2, int a3)
{
  return ptrace(PTRACE_GETFPREGS, a2, 0, a3) != 0;
}
