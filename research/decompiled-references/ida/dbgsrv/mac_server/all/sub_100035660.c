/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100035660
// Address: 0x0000000100035660

//----- (0000000100035660) ----------------------------------------------------
void __fastcall sub_100035660(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  void *v13; // rdi

  *(_QWORD *)a1 = &off_1000A8D88;
  v2 = *(void **)(a1 + 136);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  sub_100035850((char **)(a1 + 88));
  v3 = *(void **)(a1 + 64);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 0;
      do
      {
        v7 = *(_QWORD *)(a1 + 40);
        v8 = *(void **)(v7 + v6);
        if ( v8 )
        {
          *(_QWORD *)(v7 + v6 + 8) = 0;
          qfree(v8);
          *(_QWORD *)(v7 + v6) = 0;
          *(_QWORD *)(v7 + v6 + 16) = 0;
        }
        v6 += 32;
        --v5;
      }
      while ( v5 );
      v4 = *(void **)(a1 + 40);
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v9 = *(void **)(a1 + 16);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(a1 + 16);
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
      v9 = *(void **)(a1 + 16);
    }
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
}
// 1000A8D88: using guessed type __int64 (__fastcall *off_1000A8D88)();
