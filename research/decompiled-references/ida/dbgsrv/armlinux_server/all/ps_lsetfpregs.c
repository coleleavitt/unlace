/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ps_lsetfpregs
// Address: 0x000000000040AD88

//----- (000000000040AD88) ----------------------------------------------------
bool __fastcall ps_lsetfpregs(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [xsp+18h] [xbp-18h] BYREF

  v4[0] = a3;
  v4[1] = 528;
  return ptrace(PTRACE_SETREGSET, a2, 2, v4, 0) != 0;
}
