/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100004FA8
// Address: 0x0000000100004FA8

//----- (0000000100004FA8) ----------------------------------------------------
_QWORD *__fastcall sub_100004FA8(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
    a1[6] = 0;
    a1[8] = 0;
  }
  v3 = (void *)a1[3];
  if ( v3 )
  {
    a1[4] = 0;
    qfree(v3);
    a1[3] = 0;
    a1[5] = 0;
  }
  return a1;
}
