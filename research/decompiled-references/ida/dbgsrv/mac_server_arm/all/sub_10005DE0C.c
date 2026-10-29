/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DE0C
// Address: 0x000000010005DE0C

//----- (000000010005DE0C) ----------------------------------------------------
_QWORD *__fastcall sub_10005DE0C(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0

  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
    a1[8] = 0;
    a1[10] = 0;
  }
  v3 = (void *)a1[5];
  if ( v3 )
  {
    a1[6] = 0;
    qfree(v3);
    a1[5] = 0;
    a1[7] = 0;
  }
  v4 = (void *)a1[1];
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4);
    a1[1] = 0;
    a1[3] = 0;
  }
  return a1;
}
