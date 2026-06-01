/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99ED8
// Address: 0x0000000000099ED8

//----- (0000000000099ED8) ----------------------------------------------------
void __fastcall sub_99ED8(_QWORD *a1)
{
  void **v1; // x20
  __int64 v3; // x21
  void *v4; // t1
  void *v5; // x0

  if ( a1[10] )
  {
    v1 = (void **)a1[12];
    v3 = 8LL * a1[13];
    if ( v3 )
    {
      do
      {
        v4 = *v1++;
        qfree(v4);
        v3 -= 8;
      }
      while ( v3 );
      v1 = (void **)a1[12];
    }
    if ( v1 )
    {
      a1[13] = 0;
      qfree(v1);
      a1[12] = 0;
      a1[14] = 0;
    }
    v5 = (void *)a1[9];
    if ( v5 )
    {
      a1[10] = 0;
      qfree(v5);
      a1[9] = 0;
      a1[11] = 0;
    }
  }
}
