__int64 __fastcall sub_494DC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // r12
  __m128i si128; // xmm0
  void *v5; // rdi
  __int64 v6; // r12
  __m128i v7; // xmm0
  void *v8; // rdi
  __int64 v9; // r12
  __m128i v10; // xmm0
  void *v11; // rdi
  __int64 v12; // r12
  __m128i v13; // xmm0
  void *v14; // rdi
  __int64 v15; // r12
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r12
  __m128i v19; // xmm0
  void *v20; // rdi
  __int64 v21; // r12
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v24; // r12
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // r12
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // r12
  __m128i v31; // xmm0
  void *v32; // rdi
  __m128i v33; // xmm2
  __int64 v34; // r13
  char *v35; // rdx
  __int64 v36; // r14
  __int64 i; // r12
  char *v38; // rax
  void *v39; // rdi
  __m128i v40; // xmm3
  _QWORD *v41; // r12
  void *v42; // rdi
  void *v43; // rdi
  __int64 *v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r12
  __m128i v48; // xmm0
  void *v49; // rdi
  __m128i v50; // xmm4
  __int64 v51; // r14
  char *v52; // rdi
  __int64 v53; // r13
  __int64 j; // r15
  char *v55; // r12
  void *v56; // rdi
  void *v57; // rdi
  __m128i v58; // xmm5
  __int64 result; // rax
  __m128i v60[4]; // [rsp+0h] [rbp-48h] BYREF

  v3 = *a2;
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  *a2 = 0;
  *(_OWORD *)(a2 + 1) = 0;
  v5 = *(void **)a1;
  if ( v5 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    v60[0] = si128;
    qfree(v5);
    si128 = _mm_load_si128(v60);
  }
  *(_QWORD *)a1 = v3;
  *(__m128i *)(a1 + 8) = si128;
  v6 = a2[3];
  v7 = _mm_loadu_si128((const __m128i *)a2 + 2);
  a2[3] = 0;
  *((_OWORD *)a2 + 2) = 0;
  v8 = *(void **)(a1 + 24);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    v60[0] = v7;
    qfree(v8);
    v7 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 24) = v6;
  *(__m128i *)(a1 + 32) = v7;
  v9 = a2[6];
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 7));
  a2[6] = 0;
  *(_OWORD *)(a2 + 7) = 0;
  v11 = *(void **)(a1 + 48);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    v60[0] = v10;
    qfree(v11);
    v10 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 48) = v9;
  *(__m128i *)(a1 + 56) = v10;
  v12 = a2[9];
  v13 = _mm_loadu_si128((const __m128i *)a2 + 5);
  a2[9] = 0;
  *((_OWORD *)a2 + 5) = 0;
  v14 = *(void **)(a1 + 72);
  if ( v14 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v60[0] = v13;
    qfree(v14);
    v13 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 72) = v12;
  *(__m128i *)(a1 + 80) = v13;
  v15 = a2[12];
  v16 = _mm_loadu_si128((const __m128i *)(a2 + 13));
  a2[12] = 0;
  *(_OWORD *)(a2 + 13) = 0;
  v17 = *(void **)(a1 + 96);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    v60[0] = v16;
    qfree(v17);
    v16 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 96) = v15;
  *(__m128i *)(a1 + 104) = v16;
  *(_DWORD *)(a1 + 120) = *((_DWORD *)a2 + 30);
  v18 = a2[16];
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 17));
  a2[16] = 0;
  *(_OWORD *)(a2 + 17) = 0;
  v20 = *(void **)(a1 + 128);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    v60[0] = v19;
    qfree(v20);
    v19 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 128) = v18;
  *(__m128i *)(a1 + 136) = v19;
  v21 = a2[19];
  v22 = _mm_loadu_si128((const __m128i *)a2 + 10);
  a2[19] = 0;
  *((_OWORD *)a2 + 10) = 0;
  v23 = *(void **)(a1 + 152);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    v60[0] = v22;
    qfree(v23);
    v22 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 152) = v21;
  *(__m128i *)(a1 + 160) = v22;
  *(_DWORD *)(a1 + 176) = *((_DWORD *)a2 + 44);
  *(_DWORD *)(a1 + 180) = *((_DWORD *)a2 + 45);
  *(_BYTE *)(a1 + 184) = *((_BYTE *)a2 + 184);
  v24 = a2[24];
  v25 = _mm_loadu_si128((const __m128i *)(a2 + 25));
  a2[24] = 0;
  *(_OWORD *)(a2 + 25) = 0;
  v26 = *(void **)(a1 + 192);
  if ( v26 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    v60[0] = v25;
    qfree(v26);
    v25 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 192) = v24;
  *(__m128i *)(a1 + 200) = v25;
  v27 = a2[27];
  v28 = _mm_loadu_si128((const __m128i *)a2 + 14);
  a2[27] = 0;
  *((_OWORD *)a2 + 14) = 0;
  v29 = *(void **)(a1 + 216);
  if ( v29 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    v60[0] = v28;
    qfree(v29);
    v28 = _mm_load_si128(v60);
  }
  *(_QWORD *)(a1 + 216) = v27;
  *(__m128i *)(a1 + 224) = v28;
  v30 = a2[30];
  v31 = _mm_loadu_si128((const __m128i *)(a2 + 31));
  a2[30] = 0;
  *(_OWORD *)(a2 + 31) = 0;
  v32 = *(void **)(a1 + 240);
  if ( v32 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    v60[0] = v31;
    qfree(v32);
    v31 = _mm_load_si128(v60);
  }
  *(__m128i *)(a1 + 248) = v31;
  *(_QWORD *)(a1 + 240) = v30;
  *(_QWORD *)(a1 + 264) = a2[33];
  *(_BYTE *)(a1 + 272) = *((_BYTE *)a2 + 272);
  *(_BYTE *)(a1 + 273) = *((_BYTE *)a2 + 273);
  *(_BYTE *)(a1 + 274) = *((_BYTE *)a2 + 274);
  v33 = _mm_loadu_si128((const __m128i *)a2 + 18);
  v34 = a2[35];
  *((_OWORD *)a2 + 18) = 0;
  a2[35] = 0;
  v35 = *(char **)(a1 + 280);
  v60[0] = v33;
  if ( v35 )
  {
    v36 = *(_QWORD *)(a1 + 288);
    if ( v36 )
    {
      for ( i = 0; i != v36; ++i )
      {
        v38 = &v35[32 * i];
        v39 = *(void **)v38;
        if ( *(_QWORD *)v38 )
        {
          *((_QWORD *)v38 + 1) = 0;
          qfree(v39);
          v35 = *(char **)(a1 + 280);
        }
      }
    }
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v35);
  }
  v40 = _mm_load_si128(v60);
  *(_QWORD *)(a1 + 280) = v34;
  *(__m128i *)(a1 + 288) = v40;
  if ( a2 + 38 != (__int64 *)(a1 + 304) )
  {
    v41 = *(_QWORD **)(a1 + 320);
    while ( v41 )
    {
      v42 = v41;
      v41 = (_QWORD *)*v41;
      operator delete(v42, 0x20u);
    }
    v43 = *(void **)(a1 + 304);
    if ( v43 != (void *)(a1 + 352) )
      operator delete(v43, 8LL * *(_QWORD *)(a1 + 312));
    *(__m128i *)(a1 + 336) = _mm_loadu_si128((const __m128i *)a2 + 21);
    v44 = (__int64 *)a2[38];
    if ( v44 == a2 + 44 )
    {
      *(_QWORD *)(a1 + 304) = a1 + 352;
      *(_QWORD *)(a1 + 352) = a2[44];
    }
    else
    {
      *(_QWORD *)(a1 + 304) = v44;
    }
    v45 = a2[39];
    *(_QWORD *)(a1 + 312) = v45;
    v46 = a2[40];
    *(_QWORD *)(a1 + 320) = v46;
    *(_QWORD *)(a1 + 328) = a2[41];
    if ( v46 )
      *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8 * (*(_QWORD *)(v46 + 8) % v45)) = a1 + 320;
    a2[43] = 0;
    a2[39] = 1;
    a2[44] = 0;
    a2[38] = (__int64)(a2 + 44);
    a2[40] = 0;
    a2[41] = 0;
  }
  v47 = a2[45];
  v48 = _mm_loadu_si128((const __m128i *)a2 + 23);
  a2[45] = 0;
  *((_OWORD *)a2 + 23) = 0;
  v49 = *(void **)(a1 + 360);
  if ( v49 )
  {
    *(_QWORD *)(a1 + 368) = 0;
    v60[0] = v48;
    qfree(v49);
    v48 = _mm_load_si128(v60);
  }
  *(__m128i *)(a1 + 368) = v48;
  *(_QWORD *)(a1 + 360) = v47;
  v50 = _mm_loadu_si128((const __m128i *)(a2 + 49));
  v51 = a2[48];
  *(_OWORD *)(a2 + 49) = 0;
  a2[48] = 0;
  v52 = *(char **)(a1 + 384);
  v60[0] = v50;
  if ( v52 )
  {
    v53 = *(_QWORD *)(a1 + 392);
    if ( v53 )
    {
      for ( j = 0; j != v53; ++j )
      {
        v55 = &v52[144 * j];
        clear_tinfo_t(v55 + 64);
        v56 = *((void **)v55 + 5);
        if ( v56 )
        {
          *((_QWORD *)v55 + 6) = 0;
          qfree(v56);
        }
        v57 = *((void **)v55 + 2);
        if ( v57 )
        {
          *((_QWORD *)v55 + 3) = 0;
          qfree(v57);
        }
        v52 = *(char **)(a1 + 384);
      }
    }
    *(_QWORD *)(a1 + 392) = 0;
    qfree(v52);
  }
  v58 = _mm_load_si128(v60);
  *(_QWORD *)(a1 + 384) = v51;
  *(__m128i *)(a1 + 392) = v58;
  *(_DWORD *)(a1 + 408) = *((_DWORD *)a2 + 102);
  *(_DWORD *)(a1 + 412) = *((_DWORD *)a2 + 103);
  *(_BYTE *)(a1 + 416) = *((_BYTE *)a2 + 416);
  result = *((unsigned __int8 *)a2 + 417);
  *(_BYTE *)(a1 + 417) = result;
  return result;
}
