/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002ECE8
// Address: 0x000000010002ECE8

//----- (000000010002ECE8) ----------------------------------------------------
char **__fastcall sub_10002ECE8(char **a1)
{
  char *v2; // x0
  char *v3; // x20
  __int64 v4; // x21
  char *v5; // x8
  void *v6; // x0
  char *v7; // x22
  char *v8; // x0
  char *v9; // x20
  __int64 v10; // x21
  char *v11; // x8
  void *v12; // x0
  char *v13; // x22

  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = a1[3];
        v6 = *(void **)&v5[v4];
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
      v2 = a1[3];
    }
    a1[4] = nullptr;
    qfree(v2);
    a1[3] = nullptr;
    a1[5] = nullptr;
  }
  v8 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v9 )
    {
      v10 = 0;
      do
      {
        v11 = *a1;
        v12 = *(void **)&(*a1)[v10];
        if ( v12 )
        {
          v13 = &v11[v10];
          *(_QWORD *)&v11[v10 + 8] = 0;
          qfree(v12);
          *(_QWORD *)v13 = 0;
          *((_QWORD *)v13 + 2) = 0;
        }
        v10 += 24;
        --v9;
      }
      while ( v9 );
      v8 = *a1;
    }
    a1[1] = nullptr;
    qfree(v8);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
  return a1;
}
