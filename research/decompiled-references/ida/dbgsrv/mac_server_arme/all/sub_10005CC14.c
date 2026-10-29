/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005CC14
// Address: 0x000000010005CC14

//----- (000000010005CC14) ----------------------------------------------------
_QWORD *__fastcall sub_10005CC14(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0

  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    qfree(v2);
    a1[4] = 0;
    a1[6] = 0;
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    qfree(v3);
    a1[1] = 0;
    a1[3] = 0;
  }
  return a1;
}
