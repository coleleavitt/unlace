/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009C0C
// Address: 0x0000000100009C0C

//----- (0000000100009C0C) ----------------------------------------------------
char **__fastcall sub_100009C0C(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x23
  char *v6; // x22
  void *v7; // x0
  void *v8; // x0
  char *v9; // x23

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
        v7 = *((void **)v6 + 4);
        if ( v7 )
        {
          *((_QWORD *)v6 + 5) = 0;
          qfree(v7);
          *((_QWORD *)v6 + 4) = 0;
          *(_QWORD *)&v5[v4 + 48] = 0;
        }
        v8 = *((void **)v6 + 1);
        if ( v8 )
        {
          v9 = &v5[v4];
          *((_QWORD *)v9 + 2) = 0;
          qfree(v8);
          *((_QWORD *)v6 + 1) = 0;
          *((_QWORD *)v9 + 3) = 0;
        }
        v4 += 56;
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
