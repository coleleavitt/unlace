/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000B140
// Address: 0x000000014000B140

//----- (000000014000B140) ----------------------------------------------------
void __fastcall sub_14000B140(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  void *v12; // rcx
  _QWORD *v13; // rdi
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rsi
  _QWORD *v19; // rdi
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rbp
  __int64 v26; // rsi
  _QWORD *v27; // rdi
  void *v28; // rcx
  void *v29; // rcx

  *(_QWORD *)a1 = off_1400929E8;
  sub_140040F60(a1);
  v2 = *(void **)(a1 + 664);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 672) = 0;
    j_free(v2);
    *(_QWORD *)(a1 + 664) = 0;
    *(_QWORD *)(a1 + 680) = 0;
  }
  v3 = *(void **)(a1 + 640);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 648) = 0;
    j_free(v3);
    *(_QWORD *)(a1 + 640) = 0;
    *(_QWORD *)(a1 + 656) = 0;
  }
  if ( *(_QWORD *)(a1 + 576) )
  {
    sub_14001A750((_QWORD *)(a1 + 576), 0);
    j_free(*(void **)(a1 + 576));
    *(_QWORD *)(a1 + 576) = 0;
    *(_QWORD *)(a1 + 592) = 0;
  }
  v4 = *(void **)(a1 + 552);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 560) = 0;
    j_free(v4);
    *(_QWORD *)(a1 + 552) = 0;
    *(_QWORD *)(a1 + 568) = 0;
  }
  if ( *(_QWORD *)(a1 + 528) )
  {
    sub_14001A6C0((_QWORD *)(a1 + 528), 0);
    j_free(*(void **)(a1 + 528));
    *(_QWORD *)(a1 + 528) = 0;
    *(_QWORD *)(a1 + 544) = 0;
  }
  v5 = *(void **)(a1 + 504);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 512) = 0;
    j_free(v5);
    *(_QWORD *)(a1 + 504) = 0;
    *(_QWORD *)(a1 + 520) = 0;
  }
  v6 = *(_QWORD **)(*(_QWORD *)(a1 + 472) + 8LL);
  while ( !*((_BYTE *)v6 + 25) )
  {
    sub_140009A00(a1 + 472, a1 + 472, v6[2]);
    v7 = v6;
    v6 = (_QWORD *)*v6;
    j_j_free(v7);
  }
  j_j_free(*(void **)(a1 + 472));
  v8 = *(void **)(a1 + 448);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 456) = 0;
    j_free(v8);
    *(_QWORD *)(a1 + 448) = 0;
    *(_QWORD *)(a1 + 464) = 0;
  }
  if ( *(_QWORD *)(a1 + 424) )
  {
    v9 = *(_QWORD *)(a1 + 432);
    if ( v9 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v10 + *(_QWORD *)(a1 + 424));
        v12 = (void *)v11[1];
        if ( v12 )
        {
          v11[2] = 0;
          j_free(v12);
          v11[1] = 0;
          v11[3] = 0;
        }
        v10 += 56;
        --v9;
      }
      while ( v9 );
    }
    *(_QWORD *)(a1 + 432) = 0;
    j_free(*(void **)(a1 + 424));
    *(_QWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 440) = 0;
  }
  v13 = *(_QWORD **)(*(_QWORD *)(a1 + 408) + 8LL);
  while ( !*((_BYTE *)v13 + 25) )
  {
    sub_140009800(a1 + 408, a1 + 408, v13[2]);
    v14 = v13;
    v13 = (_QWORD *)*v13;
    j_j_free(v14);
  }
  j_j_free(*(void **)(a1 + 408));
  v15 = *(void **)(a1 + 384);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 392) = 0;
    j_free(v15);
    *(_QWORD *)(a1 + 384) = 0;
    *(_QWORD *)(a1 + 400) = 0;
  }
  if ( *(_QWORD *)(a1 + 352) )
  {
    sub_14001A500((__int64 *)(a1 + 352), 0);
    j_free(*(void **)(a1 + 352));
    *(_QWORD *)(a1 + 352) = 0;
    *(_QWORD *)(a1 + 368) = 0;
  }
  v16 = *(void **)(a1 + 328);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 336) = 0;
    j_free(v16);
    *(_QWORD *)(a1 + 328) = 0;
    *(_QWORD *)(a1 + 344) = 0;
  }
  sub_140009950(a1 + 312, a1 + 312, *(_QWORD *)(*(_QWORD *)(a1 + 312) + 8LL));
  j_j_free(*(void **)(a1 + 312));
  sub_140009630(a1 + 296, a1 + 296, *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8LL));
  j_j_free(*(void **)(a1 + 296));
  if ( *(_QWORD *)(a1 + 272) )
  {
    v17 = *(_QWORD *)(a1 + 280);
    if ( v17 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v18 + *(_QWORD *)(a1 + 272));
        v20 = (void *)v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          j_free(v20);
          v19[5] = 0;
          v19[7] = 0;
        }
        v21 = (void *)v19[1];
        if ( v21 )
        {
          v19[2] = 0;
          j_free(v21);
          v19[1] = 0;
          v19[3] = 0;
        }
        v18 += 64;
        --v17;
      }
      while ( v17 );
    }
    *(_QWORD *)(a1 + 280) = 0;
    j_free(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 272) = 0;
    *(_QWORD *)(a1 + 288) = 0;
  }
  v22 = *(void **)(a1 + 240);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    j_free(v22);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  sub_140062880(a1 + 160);
  sub_14000A800(a1 + 120);
  v23 = *(void **)(a1 + 96);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    j_free(v23);
    *(_QWORD *)(a1 + 96) = 0;
    *(_QWORD *)(a1 + 112) = 0;
  }
  v24 = *(void **)(a1 + 72);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    j_free(v24);
    *(_QWORD *)(a1 + 72) = 0;
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( *(_QWORD *)(a1 + 48) )
  {
    v25 = *(_QWORD *)(a1 + 56);
    if ( v25 )
    {
      v26 = 0;
      do
      {
        v27 = (_QWORD *)(v26 + *(_QWORD *)(a1 + 48));
        v28 = (void *)v27[4];
        if ( v28 )
        {
          v27[5] = 0;
          j_free(v28);
          v27[4] = 0;
          v27[6] = 0;
        }
        v29 = (void *)v27[1];
        if ( v29 )
        {
          v27[2] = 0;
          j_free(v29);
          v27[1] = 0;
          v27[3] = 0;
        }
        v26 += 56;
        --v25;
      }
      while ( v25 );
    }
    *(_QWORD *)(a1 + 56) = 0;
    j_free(*(void **)(a1 + 48));
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 64) = 0;
  }
}
// 1400929E8: using guessed type __int64 (__fastcall *off_1400929E8[4])();
