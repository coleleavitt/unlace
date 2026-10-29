/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009E80
// Address: 0x0000000100009E80

//----- (0000000100009E80) ----------------------------------------------------
void __fastcall sub_100009E80(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  void *v12; // rdi
  void *v13; // rdi

  v2 = *(void **)(a1 + 72);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 80);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(_QWORD *)(a1 + 72);
        v6 = *(void **)(v5 + v4);
        if ( v6 )
        {
          *(_QWORD *)(v5 + v4 + 8) = 0;
          qfree(v6);
          *(_QWORD *)(v5 + v4) = 0;
          *(_QWORD *)(v5 + v4 + 16) = 0;
        }
        v4 += 24;
        --v3;
      }
      while ( v3 );
      v2 = *(void **)(a1 + 72);
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  v7 = *(void **)(a1 + 48);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 )
    {
      v10 = 0;
      do
      {
        v11 = *(_QWORD *)(a1 + 24);
        v12 = *(void **)(v11 + v10);
        if ( v12 )
        {
          *(_QWORD *)(v11 + v10 + 8) = 0;
          qfree(v12);
          *(_QWORD *)(v11 + v10) = 0;
          *(_QWORD *)(v11 + v10 + 16) = 0;
        }
        v10 += 24;
        --v9;
      }
      while ( v9 );
      v8 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v13 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v13);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
