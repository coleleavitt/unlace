/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056130
// Address: 0x0000000100056130

//----- (0000000100056130) ----------------------------------------------------
__int64 __fastcall sub_100056130(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x23
  _QWORD *v5; // x22
  void *v6; // x0
  void *v7; // x0
  __int64 v8; // x23
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x23
  _QWORD *v12; // x22
  void *v13; // x0
  void *v14; // x0
  __int64 v15; // x23
  __int64 v16; // x8
  void **v17; // x20
  __int64 v18; // x21
  void *v19; // t1
  void *v20; // x0
  void *v21; // x0

  *(_QWORD *)(a1 + 488) = 0;
  v2 = *(_QWORD *)(a1 + 384);
  if ( v2 )
  {
    v3 = 0;
    do
    {
      v4 = *(_QWORD *)(a1 + 376);
      v5 = (_QWORD *)(v4 + v3);
      v6 = *(void **)(v4 + v3 + 40);
      if ( v6 )
      {
        v5[6] = 0;
        qfree(v6);
        v5[5] = 0;
        *(_QWORD *)(v4 + v3 + 56) = 0;
      }
      v7 = (void *)v5[2];
      if ( v7 )
      {
        v8 = v4 + v3;
        *(_QWORD *)(v8 + 24) = 0;
        qfree(v7);
        v5[2] = 0;
        *(_QWORD *)(v8 + 32) = 0;
      }
      v3 += 80;
      --v2;
    }
    while ( v2 );
  }
  *(_QWORD *)(a1 + 384) = 0;
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    v10 = 0;
    do
    {
      v11 = *(_QWORD *)(a1 + 48);
      v12 = (_QWORD *)(v11 + v10);
      v13 = *(void **)(v11 + v10 + 32);
      if ( v13 )
      {
        v12[5] = 0;
        qfree(v13);
        v12[4] = 0;
        *(_QWORD *)(v11 + v10 + 48) = 0;
      }
      v14 = (void *)v12[1];
      if ( v14 )
      {
        v15 = v11 + v10;
        *(_QWORD *)(v15 + 16) = 0;
        qfree(v14);
        v12[1] = 0;
        *(_QWORD *)(v15 + 24) = 0;
      }
      v10 += 56;
      --v9;
    }
    while ( v9 );
  }
  *(_QWORD *)(a1 + 56) = 0;
  if ( *(_QWORD *)(a1 + 80) )
  {
    v17 = *(void ***)(a1 + 96);
    v16 = *(_QWORD *)(a1 + 104);
    if ( (v16 & 0x1FFFFFFFFFFFFFFFLL) != 0 )
    {
      v18 = 8 * v16;
      do
      {
        v19 = *v17++;
        qfree(v19);
        v18 -= 8;
      }
      while ( v18 );
      v17 = *(void ***)(a1 + 96);
    }
    if ( v17 )
    {
      *(_QWORD *)(a1 + 104) = 0;
      qfree(v17);
      *(_QWORD *)(a1 + 96) = 0;
      *(_QWORD *)(a1 + 112) = 0;
    }
    v20 = *(void **)(a1 + 72);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 80) = 0;
      qfree(v20);
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 88) = 0;
    }
  }
  v21 = *(void **)(a1 + 352);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 360) = 0;
    qfree(v21);
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  sub_100009048(a1 + 328, *(_QWORD **)(a1 + 336));
  *(_QWORD *)(a1 + 328) = a1 + 336;
  *(_OWORD *)(a1 + 336) = 0u;
  sub_100008FC0(a1 + 504, *(_QWORD **)(a1 + 512));
  *(_QWORD *)(a1 + 504) = a1 + 512;
  *(_OWORD *)(a1 + 512) = 0u;
  *(_DWORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 733) = 0;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 600LL))(a1);
}
