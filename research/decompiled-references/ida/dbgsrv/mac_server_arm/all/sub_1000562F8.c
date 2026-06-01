/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000562F8
// Address: 0x00000001000562F8

//----- (00000001000562F8) ----------------------------------------------------
void __fastcall sub_1000562F8(_QWORD *a1)
{
  __int64 v2; // x8
  void **v3; // x20
  __int64 v4; // x21
  void *v5; // t1
  void *v6; // x0

  if ( a1[10] )
  {
    v3 = (void **)a1[12];
    v2 = a1[13];
    if ( (v2 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
    {
      v4 = 8 * v2;
      do
      {
        v5 = *v3++;
        qfree(v5);
        v4 -= 8;
      }
      while ( v4 );
      v3 = (void **)a1[12];
    }
    if ( v3 )
    {
      a1[13] = 0;
      qfree(v3);
      a1[12] = 0;
      a1[14] = 0;
    }
    v6 = (void *)a1[9];
    if ( v6 )
    {
      a1[10] = 0;
      qfree(v6);
      a1[9] = 0;
      a1[11] = 0;
    }
  }
}
