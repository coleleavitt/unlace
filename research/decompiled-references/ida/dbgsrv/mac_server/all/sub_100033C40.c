/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100033C40
// Address: 0x0000000100033C40

//----- (0000000100033C40) ----------------------------------------------------
void __fastcall sub_100033C40(__int64 a1)
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

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      v5 = 8;
      do
      {
        v6 = *(_QWORD *)(a1 + 88);
        v7 = *(void **)(v6 + v5);
        if ( v7 )
        {
          *(_QWORD *)(v6 + v5 + 8) = 0;
          qfree(v7);
          *(_QWORD *)(v6 + v5) = 0;
          *(_QWORD *)(v6 + v5 + 16) = 0;
        }
        v5 += 32;
        --v4;
      }
      while ( v4 );
      v3 = *(void **)(a1 + 88);
    }
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v8 = *(void **)(a1 + 112);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v9 = *(void **)(a1 + 64);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    if ( v10 )
    {
      v11 = 0;
      do
      {
        free_idcv((unsigned __int8 *)(v11 + *(_QWORD *)(a1 + 64)));
        v11 += 32;
        --v10;
      }
      while ( v10 );
      v9 = *(void **)(a1 + 64);
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_DWORD *)(a1 + 24) = 0;
}
