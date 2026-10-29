/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100030758
// Address: 0x0000000100030758

//----- (0000000100030758) ----------------------------------------------------
__int64 __fastcall sub_100030758(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x8
  void *v8; // x0
  _QWORD *v9; // x22
  void *v10; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x8
  void *v14; // x0
  _QWORD *v15; // x22

  *(_QWORD *)a1 = off_10009E528;
  v2 = *(void **)(a1 + 136);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  sub_1000308FC((char **)(a1 + 88));
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
          v9 = (_QWORD *)(v7 + v6);
          *(_QWORD *)(v7 + v6 + 8) = 0;
          qfree(v8);
          *v9 = 0;
          v9[2] = 0;
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
  v10 = *(void **)(a1 + 16);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v11 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(a1 + 16);
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
      v10 = *(void **)(a1 + 16);
    }
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  return a1;
}
// 10009E528: using guessed type __int64 (__fastcall *off_10009E528[2])();
