/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100034FB0
// Address: 0x0000000100034FB0

//----- (0000000100034FB0) ----------------------------------------------------
void __fastcall sub_100034FB0(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r15
  char *v5; // r12
  void *v6; // rdi
  char *v7; // rdi
  char *v8; // r14
  __int64 v9; // r15
  char *v10; // r12
  void *v11; // rdi

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
          *(_QWORD *)&v5[v4 + 8] = 0;
          qfree(v6);
          *(_QWORD *)&v5[v4] = 0;
          *(_QWORD *)&v5[v4 + 16] = 0;
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
  v7 = *a1;
  if ( *a1 )
  {
    v8 = a1[1];
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = *a1;
        v11 = *(void **)&(*a1)[v9];
        if ( v11 )
        {
          *(_QWORD *)&v10[v9 + 8] = 0;
          qfree(v11);
          *(_QWORD *)&v10[v9] = 0;
          *(_QWORD *)&v10[v9 + 16] = 0;
        }
        v9 += 24;
        --v8;
      }
      while ( v8 );
      v7 = *a1;
    }
    a1[1] = nullptr;
    qfree(v7);
    *a1 = nullptr;
    a1[2] = nullptr;
  }
}
