/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000533C
// Address: 0x000000010000533C

//----- (000000010000533C) ----------------------------------------------------
_QWORD *__fastcall sub_10000533C(_QWORD *a1)
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
