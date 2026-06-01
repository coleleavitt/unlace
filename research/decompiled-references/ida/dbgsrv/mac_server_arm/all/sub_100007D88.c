/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007D88
// Address: 0x0000000100007D88

//----- (0000000100007D88) ----------------------------------------------------
_QWORD *__fastcall sub_100007D88(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[5] = 0;
    a1[7] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[2] = 0;
    a1[4] = 0;
  }
  return a1;
}
