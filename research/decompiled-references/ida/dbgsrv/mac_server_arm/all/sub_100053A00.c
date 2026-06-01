/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053A00
// Address: 0x0000000100053A00

//----- (0000000100053A00) ----------------------------------------------------
__int64 __fastcall sub_100053A00(__int64 a1)
{
  void *v2; // x0
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x8
  void *v6; // x0
  _QWORD *v7; // x22
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // x23
  void *v15; // x0

  sub_100048D70((__int64 *)a1);
  v2 = *(void **)(a1 + 256);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 264);
    if ( v3 )
    {
      v4 = 0;
      do
      {
        v5 = *(_QWORD *)(a1 + 256);
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
      v2 = *(void **)(a1 + 256);
    }
    *(_QWORD *)(a1 + 264) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)(a1 + 272) = 0;
  }
  sub_100053948((char **)(a1 + 232));
  v8 = *(void **)(a1 + 192);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  v9 = *(void **)(a1 + 128);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  v10 = *(void **)(a1 + 104);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 112);
    if ( v11 )
    {
      v12 = 0;
      do
      {
        v13 = *(_QWORD *)(a1 + 104);
        v14 = v13 + v12;
        v15 = *(void **)(v13 + v12 + 16);
        if ( v15 )
        {
          *(_QWORD *)(v14 + 24) = 0;
          qfree(v15);
          *(_QWORD *)(v14 + 16) = 0;
          *(_QWORD *)(v13 + v12 + 32) = 0;
        }
        v12 += 120;
        --v11;
      }
      while ( v11 );
      v10 = *(void **)(a1 + 104);
    }
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
  return a1;
}
