/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005386C
// Address: 0x000000010005386C

//----- (000000010005386C) ----------------------------------------------------
char **__fastcall sub_10005386C(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x22
  char *v6; // x23
  void *v7; // x0

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
        v6 = &(*a1)[v4];
        v7 = *((void **)v6 + 1);
        if ( v7 )
        {
          *((_QWORD *)v6 + 2) = 0;
          qfree(v7);
          *((_QWORD *)v6 + 1) = 0;
          *(_QWORD *)&v5[v4 + 24] = 0;
        }
        v4 += 32;
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
