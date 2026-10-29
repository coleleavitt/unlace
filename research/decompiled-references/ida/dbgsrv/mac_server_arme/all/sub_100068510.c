/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068510
// Address: 0x0000000100068510

//----- (0000000100068510) ----------------------------------------------------
double __fastcall sub_100068510(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v5; // x0

  v5 = qalloc((void *)0x50);
  *(_DWORD *)v5 = a2;
  v5[1] = a3;
  *((_OWORD *)v5 + 1) = 0u;
  *((_OWORD *)v5 + 2) = 0u;
  *((_OWORD *)v5 + 3) = 0u;
  *((_OWORD *)v5 + 4) = 0u;
  return 0.0;
}
