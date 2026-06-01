/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059DD4
// Address: 0x0000000100059DD4

//----- (0000000100059DD4) ----------------------------------------------------
void __fastcall sub_100059DD4(_QWORD *a1)
{
  void *v2; // x0
  _QWORD *v3; // x0

  *a1 = off_10009B490;
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
    a1[14] = 0;
    a1[16] = 0;
  }
  v3 = sub_10005D350(a1);
  operator delete(v3);
}
// 10009B490: using guessed type __int64 (__fastcall *off_10009B490[4])();
