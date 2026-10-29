/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000016A0
// Address: 0x00000001000016A0

//----- (00000001000016A0) ----------------------------------------------------
void __fastcall sub_1000016A0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  void *v13; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = *(_QWORD *)(a1 + 24);
        v7 = *(void **)(v6 + v5);
        if ( v7 )
        {
          *(_QWORD *)(v6 + v5 + 8) = 0;
          qfree(v7);
          *(_QWORD *)(v6 + v5) = 0;
          *(_QWORD *)(v6 + v5 + 16) = 0;
        }
        v5 += 24;
        --v4;
      }
      while ( v4 );
      v3 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v8 = *(void **)(a1 + 48);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v9 = *(void **)(a1 + 72);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 80);
    if ( v10 )
    {
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(a1 + 72);
        v13 = *(void **)(v12 + v11);
        if ( v13 )
        {
          *(_QWORD *)(v12 + v11 + 8) = 0;
          qfree(v13);
          *(_QWORD *)(v12 + v11) = 0;
          *(_QWORD *)(v12 + v11 + 16) = 0;
        }
        v11 += 24;
        --v10;
      }
      while ( v10 );
      v9 = *(void **)(a1 + 72);
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
}
