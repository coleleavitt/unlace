/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000501B0
// Address: 0x00000001000501B0

//----- (00000001000501B0) ----------------------------------------------------
char **__fastcall sub_1000501B0(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x8
  void *v6; // x0
  char *v7; // x22

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *a1;
        v6 = *(void **)&(*a1)[v4];
        if ( v6 )
        {
          v7 = &v5[v4];
          *(_QWORD *)&v5[v4 + 8] = 0;
          qfree(v6);
          *(_QWORD *)v7 = 0;
          *((_QWORD *)v7 + 2) = 0;
        }
        v4 += 24;
        --v3;
      }
      while ( v3 );
      v2 = *a1;
    }
    a1[1] = nullptr;
    qfree(v2);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return a1;
}
