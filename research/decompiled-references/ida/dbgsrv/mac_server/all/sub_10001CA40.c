/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001CA40
// Address: 0x000000010001CA40

//----- (000000010001CA40) ----------------------------------------------------
void __fastcall sub_10001CA40(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // r12
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi

  *(_QWORD *)a1 = &off_1000A7F20;
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
          *(_QWORD *)(v9 + v8 + 8) = 0;
          qfree(v10);
          *(_QWORD *)(v9 + v8) = 0;
          *(_QWORD *)(v9 + v8 + 16) = 0;
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
  v11 = *(void **)(a1 + 320);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 328);
    if ( v12 )
    {
      v13 = 0;
      do
      {
        v14 = *(_QWORD *)(a1 + 320);
        v15 = *(void **)(v14 + v13);
        if ( v15 )
        {
          *(_QWORD *)(v14 + v13 + 8) = 0;
          qfree(v15);
          *(_QWORD *)(v14 + v13) = 0;
          *(_QWORD *)(v14 + v13 + 16) = 0;
        }
        v13 += 32;
        --v12;
      }
      while ( v12 );
      v11 = *(void **)(a1 + 320);
    }
    *(_QWORD *)(a1 + 328) = 0;
    qfree(v11);
    *(_QWORD *)(a1 + 320) = 0;
    *(_QWORD *)(a1 + 336) = 0;
  }
  v16 = *(void **)(a1 + 296);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 304);
    if ( v17 )
    {
      v18 = 40;
      do
      {
        v19 = *(_QWORD *)(a1 + 296);
        v20 = *(void **)(v19 + v18);
        if ( v20 )
        {
          *(_QWORD *)(v19 + v18 + 8) = 0;
          qfree(v20);
          *(_QWORD *)(v19 + v18) = 0;
          *(_QWORD *)(v19 + v18 + 16) = 0;
        }
        v18 += 80;
        --v17;
      }
      while ( v17 );
      v16 = *(void **)(a1 + 296);
    }
    *(_QWORD *)(a1 + 304) = 0;
    qfree(v16);
    *(_QWORD *)(a1 + 296) = 0;
    *(_QWORD *)(a1 + 312) = 0;
  }
  v21 = *(void **)(a1 + 272);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 280) = 0;
    qfree(v21);
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  v22 = *(void **)(a1 + 248);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v22);
    *(_QWORD *)(a1 + 248) = 0;
    *(_QWORD *)(a1 + 264) = 0;
  }
  v23 = *(void **)(a1 + 224);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v23);
    *(_QWORD *)(a1 + 224) = 0;
    *(_QWORD *)(a1 + 240) = 0;
  }
  v24 = *(void **)(a1 + 200);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v24);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v25 = *(void **)(a1 + 136);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 144) = 0;
    qfree(v25);
    *(_QWORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 152) = 0;
  }
  v26 = *(void **)(a1 + 72);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v26);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
}
// 1000A7F20: using guessed type __int64 (__fastcall *off_1000A7F20)();
