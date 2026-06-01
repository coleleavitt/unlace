/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005E2D0
// Address: 0x000000010005E2D0

//----- (000000010005E2D0) ----------------------------------------------------
void __fastcall sub_10005E2D0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r12
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r12
  void *v13; // rdi

  sub_100051940((__int64 *)a1);
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
          *(_QWORD *)(v5 + v4 + 8) = 0;
          qfree(v6);
          *(_QWORD *)(v5 + v4) = 0;
          *(_QWORD *)(v5 + v4 + 16) = 0;
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
  sub_10005E200((char **)(a1 + 232));
  v7 = *(void **)(a1 + 192);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 192) = 0;
    *(_QWORD *)(a1 + 208) = 0;
  }
  v8 = *(void **)(a1 + 128);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v8);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  v9 = *(void **)(a1 + 104);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( v10 )
    {
      v11 = 16;
      do
      {
        v12 = *(_QWORD *)(a1 + 104);
        v13 = *(void **)(v12 + v11);
        if ( v13 )
        {
          *(_QWORD *)(v12 + v11 + 8) = 0;
          qfree(v13);
          *(_QWORD *)(v12 + v11) = 0;
          *(_QWORD *)(v12 + v11 + 16) = 0;
        }
        v11 += 120;
        --v10;
      }
      while ( v10 );
      v9 = *(void **)(a1 + 104);
    }
    *(_QWORD *)(a1 + 112) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
  }
}
