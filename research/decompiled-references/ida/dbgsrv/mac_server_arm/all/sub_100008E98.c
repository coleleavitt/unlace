/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100008E98
// Address: 0x0000000100008E98

//----- (0000000100008E98) ----------------------------------------------------
__int64 __fastcall sub_100008E98(__int64 a1)
{
  void *v2; // x0
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x8
  void *v6; // x0
  _QWORD *v7; // x22
  void *v8; // x0
  void *v9; // x0
  __int64 v10; // x20
  __int64 v11; // x21
  __int64 v12; // x8
  void *v13; // x0
  _QWORD *v14; // x22
  void *v15; // x0

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
          v7 = (_QWORD *)(v5 + v4);
          *(_QWORD *)(v5 + v4 + 8) = 0;
          qfree(v6);
          *v7 = 0;
          v7[2] = 0;
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
  v8 = *(void **)(a1 + 48);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
  v9 = *(void **)(a1 + 24);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 32);
    if ( v10 )
    {
      v11 = 0;
      do
      {
        v12 = *(_QWORD *)(a1 + 24);
        v13 = *(void **)(v12 + v11);
        if ( v13 )
        {
          v14 = (_QWORD *)(v12 + v11);
          *(_QWORD *)(v12 + v11 + 8) = 0;
          qfree(v13);
          *v14 = 0;
          v14[2] = 0;
        }
        v11 += 24;
        --v10;
      }
      while ( v10 );
      v9 = *(void **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v15 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v15);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  return a1;
}
