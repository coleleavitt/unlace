/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000651B0
// Address: 0x00000001000651B0

//----- (00000001000651B0) ----------------------------------------------------
_QWORD *__fastcall sub_1000651B0(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  *a1 = &off_10009FBE8;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
    a1[8] = 0;
    a1[10] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
    a1[4] = 0;
    a1[6] = 0;
  }
  return a1;
}
// 10009FBE8: using guessed type __int64 (__fastcall *off_10009FBE8)();
