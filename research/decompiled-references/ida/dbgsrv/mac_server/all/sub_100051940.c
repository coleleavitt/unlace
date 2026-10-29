/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100051940
// Address: 0x0000000100051940

//----- (0000000100051940) ----------------------------------------------------
void __fastcall sub_100051940(__int64 *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  void *v7; // rdi
  int v8; // r14d
  unsigned __int64 v9; // rax
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  void *v15; // rdi

  v2 = *a1;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0;
  }
  *(_OWORD *)(a1 + 11) = 0;
  *(_OWORD *)(a1 + 9) = 0;
  *(_OWORD *)(a1 + 7) = 0;
  *(_OWORD *)(a1 + 5) = 0;
  *(_OWORD *)(a1 + 3) = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v3 = (void *)a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 16;
      do
      {
        v6 = a1[13];
        v7 = *(void **)(v6 + v5);
        if ( v7 )
        {
          *(_QWORD *)(v6 + v5 + 8) = 0;
          qfree(v7);
          *(_QWORD *)(v6 + v5) = 0;
          *(_QWORD *)(v6 + v5 + 16) = 0;
        }
        v5 += 120;
        --v4;
      }
      while ( v4 );
      v3 = (void *)a1[13];
    }
    a1[14] = 0;
    qfree(v3);
    a1[13] = 0;
    a1[15] = 0;
  }
  if ( a1[30] )
  {
    v8 = 1;
    v9 = 0;
    do
    {
      qfree(*(void **)(a1[29] + 72 * v9 + 56));
      v9 = v8++;
    }
    while ( a1[30] > v9 );
  }
  v10 = (void *)a1[16];
  if ( v10 )
  {
    a1[17] = 0;
    qfree(v10);
    a1[16] = 0;
    a1[18] = 0;
  }
  v11 = (void *)a1[32];
  if ( v11 )
  {
    v12 = a1[33];
    if ( v12 )
    {
      v13 = 0;
      do
      {
        v14 = a1[32];
        v15 = *(void **)(v14 + v13);
        if ( v15 )
        {
          *(_QWORD *)(v14 + v13 + 8) = 0;
          qfree(v15);
          *(_QWORD *)(v14 + v13) = 0;
          *(_QWORD *)(v14 + v13 + 16) = 0;
        }
        v13 += 24;
        --v12;
      }
      while ( v12 );
      v11 = (void *)a1[32];
    }
    a1[33] = 0;
    qfree(v11);
    a1[32] = 0;
    a1[34] = 0;
  }
}
