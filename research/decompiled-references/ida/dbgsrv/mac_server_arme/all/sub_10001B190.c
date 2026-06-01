/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001B190
// Address: 0x000000010001B190

//----- (000000010001B190) ----------------------------------------------------
_QWORD *__fastcall sub_10001B190(_QWORD *a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0

  v2 = (void *)a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    qfree(v2);
    a1[15] = 0;
    a1[17] = 0;
  }
  v3 = (void *)a1[12];
  if ( v3 )
  {
    a1[13] = 0;
    qfree(v3);
    a1[12] = 0;
    a1[14] = 0;
  }
  v4 = (void *)a1[9];
  if ( v4 )
  {
    a1[10] = 0;
    qfree(v4);
    a1[9] = 0;
    a1[11] = 0;
  }
  v5 = (void *)a1[5];
  if ( v5 )
  {
    a1[6] = 0;
    qfree(v5);
    a1[5] = 0;
    a1[7] = 0;
  }
  return a1;
}
