unsigned __int64 __fastcall sub_4A6D70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rsi
  __m128i v15; // xmm0
  void *v16; // rdi
  __int64 v17; // rsi
  __m128i v18; // xmm0
  void *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r14
  __m128i v22; // xmm0
  void *v23; // rdi
  __int64 v24; // r14
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rsi
  void *v30; // rdi
  __int64 v31; // rbp
  __m128i v32; // xmm0
  void *v33; // rdi
  __int64 v34; // rbp
  __m128i v35; // xmm0
  _QWORD *v36; // rdi
  __m128i v37; // xmm0
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rbx
  __m128i v45; // [rsp+0h] [rbp-118h] BYREF
  __m128i v46; // [rsp+10h] [rbp-108h] BYREF
  __m128i v47; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-E8h]
  __int64 v49; // [rsp+38h] [rbp-E0h]
  __int64 v50; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-C8h]
  __m128i v53; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+68h] [rbp-B0h]
  __m128i v55; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v56; // [rsp+88h] [rbp-90h] BYREF
  __m128i v57; // [rsp+98h] [rbp-80h] BYREF
  __m128i v58; // [rsp+A8h] [rbp-70h] BYREF
  int v59; // [rsp+B8h] [rbp-60h]
  __int64 v60; // [rsp+C0h] [rbp-58h]
  char v61; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+D8h] [rbp-40h]

  v6 = (a3 - 1) / 2;
  v45.m128i_i64[0] = a2;
  v48 = a3;
  v49 = a4;
  v62 = __readfsqword(0x28u);
  if ( a2 < v6 )
  {
    while ( 1 )
    {
      v8 = 2 * (a2 + 1);
      v9 = (__int64 *)(a1 + 288 * (a2 + 1));
      v10 = *v9;
      v11 = *(_QWORD *)(*a5 + 8 * *v9);
      if ( v11 == -1 )
        break;
      v12 = *(_QWORD *)(*a5 + 8 * *(v9 - 18));
      if ( v12 == -1 )
        break;
      if ( v11 < v12 )
      {
        --v8;
        v9 = (__int64 *)(a1 + 144 * v8);
        v10 = *v9;
      }
      v13 = a1 + 144 * a2;
      *(_QWORD *)v13 = v10;
      *(_QWORD *)(v13 + 8) = v9[1];
      v14 = v9[2];
      v15 = _mm_loadu_si128((const __m128i *)(v9 + 3));
      v9[2] = 0;
      *(_OWORD *)(v9 + 3) = 0;
      v16 = *(void **)(v13 + 16);
      if ( v16 )
      {
        *(_QWORD *)(v13 + 24) = 0;
        v46.m128i_i64[0] = v14;
        v47 = v15;
        qfree(v16);
        v15 = _mm_load_si128(&v47);
        v14 = v46.m128i_i64[0];
      }
      *(_QWORD *)(v13 + 16) = v14;
      *(__m128i *)(v13 + 24) = v15;
      v17 = v9[5];
      v18 = _mm_loadu_si128((const __m128i *)v9 + 3);
      v9[5] = 0;
      *((_OWORD *)v9 + 3) = 0;
      v19 = *(void **)(v13 + 40);
      if ( v19 )
      {
        *(_QWORD *)(v13 + 48) = 0;
        v47.m128i_i64[0] = v17;
        v46 = v18;
        qfree(v19);
        v17 = v47.m128i_i64[0];
        v18 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v13 + 40) = v17;
      *(__m128i *)(v13 + 48) = v18;
      copy_tinfo_t(v13 + 64);
      *(__m128i *)(v13 + 72) = _mm_loadu_si128((const __m128i *)(v9 + 9));
      *(__m128i *)(v13 + 88) = _mm_loadu_si128((const __m128i *)(v9 + 11));
      *(__m128i *)(v13 + 104) = _mm_loadu_si128((const __m128i *)(v9 + 13));
      *(_DWORD *)(v13 + 120) = *((_DWORD *)v9 + 30);
      *(_DWORD *)(v13 + 128) = *((_DWORD *)v9 + 32);
      *(_DWORD *)(v13 + 132) = *((_DWORD *)v9 + 33);
      *(_BYTE *)(v13 + 136) = *((_BYTE *)v9 + 136);
      if ( v8 >= v6 )
      {
        if ( (v48 & 1) != 0 )
          goto LABEL_14;
        goto LABEL_30;
      }
      a2 = v8;
    }
    if ( !under_debugger )
      interr(2166);
LABEL_39:
    BUG();
  }
  v8 = v45.m128i_i64[0];
  if ( (v48 & 1) == 0 )
  {
LABEL_30:
    if ( (v48 - 2) / 2 == v8 )
    {
      v42 = 18 * (v8 + 1);
      v43 = a1 + 144 * v8;
      v8 = 2 * (v8 + 1) - 1;
      sub_493710(v43, a1 + 16 * v42 - 144);
    }
LABEL_14:
    v47.m128i_i64[0] = (__int64)&v50;
    sub_49A3E0((__int64)&v50, v49);
    v20 = (v8 - 1) / 2;
    if ( v8 <= v45.m128i_i64[0] )
    {
      v44 = a1 + 144 * v8;
      goto LABEL_25;
    }
    while ( 1 )
    {
      v27 = a1 + 144 * v20;
      v28 = *(_QWORD *)(*a5 + 8LL * *(_QWORD *)v27);
      if ( v28 == -1 )
        break;
      v29 = *(_QWORD *)(*a5 + 8 * v50);
      if ( v29 == -1 )
        break;
      v44 = a1 + 144 * v8;
      if ( v28 >= v29 )
        goto LABEL_25;
      *(_QWORD *)v44 = *(_QWORD *)v27;
      *(_QWORD *)(v44 + 8) = *(_QWORD *)(v27 + 8);
      v21 = *(_QWORD *)(v27 + 16);
      v22 = _mm_loadu_si128((const __m128i *)(v27 + 24));
      *(_QWORD *)(v27 + 16) = 0;
      *(_OWORD *)(v27 + 24) = 0;
      v23 = *(void **)(v44 + 16);
      if ( v23 )
      {
        *(_QWORD *)(v44 + 24) = 0;
        v46 = v22;
        qfree(v23);
        v22 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v44 + 16) = v21;
      *(__m128i *)(v44 + 24) = v22;
      v24 = *(_QWORD *)(v27 + 40);
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 48));
      *(_QWORD *)(v27 + 40) = 0;
      *(_OWORD *)(v27 + 48) = 0;
      v26 = *(void **)(v44 + 40);
      if ( v26 )
      {
        *(_QWORD *)(v44 + 48) = 0;
        v46 = v25;
        qfree(v26);
        v25 = _mm_load_si128(&v46);
      }
      *(_QWORD *)(v44 + 40) = v24;
      *(__m128i *)(v44 + 48) = v25;
      copy_tinfo_t(v44 + 64);
      v8 = v20;
      *(__m128i *)(v44 + 72) = _mm_loadu_si128((const __m128i *)(v27 + 72));
      *(__m128i *)(v44 + 88) = _mm_loadu_si128((const __m128i *)(v27 + 88));
      *(__m128i *)(v44 + 104) = _mm_loadu_si128((const __m128i *)(v27 + 104));
      *(_DWORD *)(v44 + 120) = *(_DWORD *)(v27 + 120);
      *(_DWORD *)(v44 + 128) = *(_DWORD *)(v27 + 128);
      *(_DWORD *)(v44 + 132) = *(_DWORD *)(v27 + 132);
      *(_BYTE *)(v44 + 136) = *(_BYTE *)(v27 + 136);
      if ( v45.m128i_i64[0] >= v20 )
      {
        v44 = a1 + 144 * v20;
        goto LABEL_25;
      }
      v20 = (v20 - 1) / 2;
    }
    if ( !under_debugger )
      interr(2166);
    goto LABEL_39;
  }
  v47.m128i_i64[0] = (__int64)&v50;
  sub_49A3E0((__int64)&v50, v49);
  v44 = a1 + 144 * v45.m128i_i64[0];
LABEL_25:
  v30 = *(void **)(v44 + 16);
  v31 = v52;
  v52 = 0;
  *(__m128 *)v44 = _mm_loadh_ps((const double *)&v51);
  v32 = _mm_loadu_si128(&v53);
  v53 = 0;
  if ( v30 )
  {
    *(_QWORD *)(v44 + 24) = 0;
    v45 = v32;
    qfree(v30);
    v32 = _mm_load_si128(&v45);
  }
  v33 = *(void **)(v44 + 40);
  *(_QWORD *)(v44 + 16) = v31;
  *(__m128i *)(v44 + 24) = v32;
  v34 = v54;
  v35 = _mm_load_si128(&v55);
  v54 = 0;
  v55 = 0;
  if ( v33 )
  {
    *(_QWORD *)(v44 + 48) = 0;
    v45 = v35;
    qfree(v33);
    v35 = _mm_load_si128(&v45);
  }
  *(_QWORD *)(v44 + 40) = v34;
  *(__m128i *)(v44 + 48) = v35;
  copy_tinfo_t(v44 + 64);
  v36 = (_QWORD *)v47.m128i_i64[0];
  v37 = _mm_loadu_si128(&v56);
  *(_DWORD *)(v44 + 120) = v59;
  v38 = v60;
  *(__m128i *)(v44 + 72) = v37;
  v39 = _mm_loadu_si128(&v57);
  *(_QWORD *)(v44 + 128) = v38;
  LOBYTE(v38) = v61;
  *(__m128i *)(v44 + 88) = v39;
  v40 = _mm_loadu_si128(&v58);
  *(_BYTE *)(v44 + 136) = v38;
  *(__m128i *)(v44 + 104) = v40;
  sub_379560(v36);
  return v62 - __readfsqword(0x28u);
}
