/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001404
// Address: 0x0000000100001404

//----- (0000000100001404) ----------------------------------------------------
void __fastcall sub_100001404(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x8
  void *v7; // x0
  _QWORD *v8; // x22
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x8
  void *v14; // x0
  _QWORD *v15; // x22

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
          v8 = (_QWORD *)(v6 + v5);
          *(_QWORD *)(v6 + v5 + 8) = 0;
          qfree(v7);
          *v8 = 0;
          v8[2] = 0;
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
  v9 = *(void **)(a1 + 48);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v10 = *(void **)(a1 + 72);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 80);
    if ( v11 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(a1 + 72);
        v14 = *(void **)(v13 + v12);
        if ( v14 )
        {
          v15 = (_QWORD *)(v13 + v12);
          *(_QWORD *)(v13 + v12 + 8) = 0;
          qfree(v14);
          *v15 = 0;
          v15[2] = 0;
        }
        v12 += 24;
        --v11;
      }
      while ( v11 );
      v10 = *(void **)(a1 + 72);
    }
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
}
