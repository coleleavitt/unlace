/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100059698
// Address: 0x0000000100059698

//----- (0000000100059698) ----------------------------------------------------
void __fastcall sub_100059698(_QWORD *a1)
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
