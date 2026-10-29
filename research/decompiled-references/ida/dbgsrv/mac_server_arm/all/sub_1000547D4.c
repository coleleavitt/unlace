/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000547D4
// Address: 0x00000001000547D4

//----- (00000001000547D4) ----------------------------------------------------
_QWORD *__fastcall sub_1000547D4(_QWORD *a1)
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
