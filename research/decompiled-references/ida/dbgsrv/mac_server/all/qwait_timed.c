/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwait_timed
// Address: 0x000000010007FE10

//----- (000000010007FE10) ----------------------------------------------------
__int64 __fastcall qwait_timed(_DWORD *a1, pid_t a2, int a3, unsigned int a4)
{
  void *v6; // rax

  v6 = sub_10007E6B0();
  return sub_10007E030((__int64)v6, a1, a2, a3, a4);
}
