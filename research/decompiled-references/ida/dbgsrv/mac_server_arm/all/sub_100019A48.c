/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100019A48
// Address: 0x0000000100019A48

//----- (0000000100019A48) ----------------------------------------------------
__int64 __fastcall sub_100019A48(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x8
  void *v10; // x0
  _QWORD *v11; // x22
  void *v12; // x0
  __int64 v13; // x20
  __int64 v14; // x21
  __int64 v15; // x8
  void *v16; // x0
  _QWORD *v17; // x22
  void *v18; // x0
  __int64 v19; // x20
  __int64 v20; // x21
  __int64 v21; // x22
  __int64 v22; // x23
  void *v23; // x0
  void *v24; // x0
  void *v25; // x0
  void *v26; // x0
  void *v27; // x0
  void *v28; // x0
  void *v29; // x0

  *(_QWORD *)a1 = off_100099670;
  if ( *(_BYTE *)(a1 + 56) == 1 )
    close_linput(*(void **)(a1 + 48));
  v2 = *(void **)(a1 + 488);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 496) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 488) = 0;
    *(_QWORD *)(a1 + 504) = 0;
  }
  v3 = *(void **)(a1 + 416);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 424) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 416) = 0;
    *(_QWORD *)(a1 + 432) = 0;
  }
  v4 = *(void **)(a1 + 392);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v4);
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v5 = *(void **)(a1 + 368);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 376) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 384) = 0;
  }
  v6 = *(void **)(a1 + 344);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 352);
    if ( v7 )
    {
      v8 = 0;
      do
      {
        v9 = *(_QWORD *)(a1 + 344);
        v10 = *(void **)(v9 + v8);
        if ( v10 )
        {
          v11 = (_QWORD *)(v9 + v8);
          *(_QWORD *)(v9 + v8 + 8) = 0;
          qfree(v10);
          *v11 = 0;
          v11[2] = 0;
        }
        v8 += 24;
        --v7;
      }
      while ( v7 );
      v6 = *(void **)(a1 + 344);
    }
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v6);
    *(_QWORD *)(a1 + 344) = 0;
    *(_QWORD *)(a1 + 360) = 0;
  }
  v12 = *(void **)(a1 + 320);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 328);
    if ( v13 )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(a1 + 320);
        v16 = *(void **)(v15 + v14);
        if ( v16 )
        {
          v17 = (_QWORD *)(v15 + v14);
          *(_QWORD *)(v15 + v14 + 8) = 0;
          qfree(v16);
          *v17 = 0;
          v17[2] = 0;
        }
        v14 += 32;
        --v13;
      }
      while ( v13 );
      v12 = *(void **)(a1 + 320);
    }
    *(_QWORD *)(a1 + 328) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 320) = 0;
    *(_QWORD *)(a1 + 336) = 0;
  }
  v18 = *(void **)(a1 + 296);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 304);
    if ( v19 )
    {
      v20 = 0;
      do
      {
        v21 = *(_QWORD *)(a1 + 296);
        v22 = v21 + v20;
        v23 = *(void **)(v21 + v20 + 40);
        if ( v23 )
        {
          *(_QWORD *)(v22 + 48) = 0;
          qfree(v23);
          *(_QWORD *)(v22 + 40) = 0;
          *(_QWORD *)(v21 + v20 + 56) = 0;
        }
        v20 += 80;
        --v19;
      }
      while ( v19 );
      v18 = *(void **)(a1 + 296);
    }
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v24 = *(void **)(a1 + 272);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  v25 = *(void **)(a1 + 248);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v26 = *(void **)(a1 + 224);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v26);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v27 = *(void **)(a1 + 200);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v27);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v28 = *(void **)(a1 + 136);
  if ( v28 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v28);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v29 = *(void **)(a1 + 72);
  if ( v29 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v29);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  return a1;
}
// 100099670: using guessed type __int64 (__fastcall *off_100099670[2])();
