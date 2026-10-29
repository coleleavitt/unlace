/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000598A4
// Address: 0x00000001000598A4

//----- (00000001000598A4) ----------------------------------------------------
_QWORD *__fastcall sub_1000598A4(_QWORD *a1)
{
  void *v1; // x8
  _QWORD *v2; // x19

  *a1 = off_10009B490;
  v1 = (void *)a1[14];
  if ( v1 )
  {
    v2 = a1;
    a1[15] = 0;
    qfree(v1);
    a1 = v2;
    v2[14] = 0;
    v2[16] = 0;
  }
  return sub_10005D350(a1);
}
// 10009B490: using guessed type __int64 (__fastcall *off_10009B490[4])();
