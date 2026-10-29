unsigned __int64 __fastcall sub_491C30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 i; // rax
  __int64 v9; // r15
  __int64 *v10; // r13
  __int64 v11; // rsi
  int v12; // edi
  int v13; // edx
  __int64 v14; // r14
  __int64 v15; // rdx
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // rdx
  __m128i v19; // xmm0
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  __m128i v24; // xmm0
  void *v25; // rdi
  __int64 v26; // rax
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // r13
  int v30; // eax
  int v31; // esi
  void *v32; // rdi
  __int64 v33; // rbx
  __m128i v34; // xmm0
  void *v35; // rdi
  __int64 v36; // rbx
  __m128i v37; // xmm0
  _QWORD *v38; // rdi
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v43; // r15
  __m128i v44; // [rsp+0h] [rbp-108h] BYREF
  __m128i v45; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v46; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+30h] [rbp-D8h]
  __int64 v48; // [rsp+38h] [rbp-D0h]
  __int64 v49; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h]
  __m128i v52; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h]
  __m128i v54; // [rsp+70h] [rbp-98h] BYREF
  __m128i v55; // [rsp+88h] [rbp-80h] BYREF
  __m128i v56; // [rsp+98h] [rbp-70h] BYREF
  int v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  char v59; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+C8h] [rbp-40h]

  v47 = a3;
  v48 = a4;
  v60 = __readfsqword(0x28u);
  v44.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 < v44.m128i_i64[0] )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = (__int64 *)(a1 + ((i + 1) << 8));
      v11 = *v10;
      v12 = *(_DWORD *)(*a5 + 4 * *v10);
      if ( v12 == -1 )
        break;
      v13 = *(_DWORD *)(*a5 + 4 * *(v10 - 16));
      if ( v13 == -1 )
        break;
      if ( v12 < v13 )
      {
        v10 = (__int64 *)(a1 + (--v9 << 7));
        v11 = *v10;
      }
      v14 = a1 + (i << 7);
      *(_QWORD *)v14 = v11;
      *(_QWORD *)(v14 + 8) = v10[1];
      v15 = v10[2];
      v16 = _mm_loadu_si128((const __m128i *)(v10 + 3));
      v10[2] = 0;
      *(_OWORD *)(v10 + 3) = 0;
      v17 = *(void **)(v14 + 16);
      if ( v17 )
      {
        *(_QWORD *)(v14 + 24) = 0;
        v45.m128i_i64[0] = v15;
        v46 = v16;
        qfree(v17);
        v16 = _mm_load_si128(&v46);
        v15 = v45.m128i_i64[0];
      }
      *(_QWORD *)(v14 + 16) = v15;
      *(__m128i *)(v14 + 24) = v16;
      v18 = v10[5];
      v19 = _mm_loadu_si128((const __m128i *)v10 + 3);
      v10[5] = 0;
      *((_OWORD *)v10 + 3) = 0;
      v20 = *(void **)(v14 + 40);
      if ( v20 )
      {
        *(_QWORD *)(v14 + 48) = 0;
        v46.m128i_i64[0] = v18;
        v45 = v19;
        qfree(v20);
        v18 = v46.m128i_i64[0];
        v19 = _mm_load_si128(&v45);
      }
      *(_QWORD *)(v14 + 40) = v18;
      *(__m128i *)(v14 + 48) = v19;
      copy_tinfo_t(v14 + 64);
      v21 = v44.m128i_i64[0];
      *(__m128i *)(v14 + 72) = _mm_loadu_si128((const __m128i *)(v10 + 9));
      *(__m128i *)(v14 + 88) = _mm_loadu_si128((const __m128i *)(v10 + 11));
      *(_DWORD *)(v14 + 104) = *((_DWORD *)v10 + 26);
      *(_DWORD *)(v14 + 112) = *((_DWORD *)v10 + 28);
      *(_DWORD *)(v14 + 116) = *((_DWORD *)v10 + 29);
      *(_BYTE *)(v14 + 120) = *((_BYTE *)v10 + 120);
      if ( v9 >= v21 )
      {
        if ( (v47 & 1) != 0 )
          goto LABEL_14;
        goto LABEL_30;
      }
    }
    if ( !under_debugger )
      interr(2166);
LABEL_39:
    BUG();
  }
  v9 = a2;
  if ( (v47 & 1) == 0 )
  {
LABEL_30:
    if ( (v47 - 2) / 2 == v9 )
    {
      sub_47EC10(a1 + (v9 << 7), a1 + ((v9 + 1) << 8) - 128);
      v9 = 2 * (v9 + 1) - 1;
    }
LABEL_14:
    v46.m128i_i64[0] = (__int64)&v49;
    sub_485740((__int64)&v49, v48);
    v22 = (v9 - 1) / 2;
    if ( v9 <= a2 )
    {
      v43 = a1 + (v9 << 7);
      goto LABEL_25;
    }
    while ( 1 )
    {
      v29 = a1 + (v22 << 7);
      v30 = *(_DWORD *)(*a5 + 4LL * *(_QWORD *)v29);
      if ( v30 == -1 )
        break;
      v31 = *(_DWORD *)(*a5 + 4 * v49);
      if ( v31 == -1 )
        break;
      v43 = a1 + (v9 << 7);
      if ( v30 >= v31 )
        goto LABEL_25;
      *(_QWORD *)v43 = *(_QWORD *)v29;
      *(_QWORD *)(v43 + 8) = *(_QWORD *)(v29 + 8);
      v23 = *(_QWORD *)(v29 + 16);
      v24 = _mm_loadu_si128((const __m128i *)(v29 + 24));
      *(_QWORD *)(v29 + 16) = 0;
      *(_OWORD *)(v29 + 24) = 0;
      v25 = *(void **)(v43 + 16);
      if ( v25 )
      {
        *(_QWORD *)(v43 + 24) = 0;
        v45.m128i_i64[0] = v23;
        v44 = v24;
        qfree(v25);
        v23 = v45.m128i_i64[0];
        v24 = _mm_load_si128(&v44);
      }
      *(_QWORD *)(v43 + 16) = v23;
      *(__m128i *)(v43 + 24) = v24;
      v26 = *(_QWORD *)(v29 + 40);
      v27 = _mm_loadu_si128((const __m128i *)(v29 + 48));
      *(_QWORD *)(v29 + 40) = 0;
      *(_OWORD *)(v29 + 48) = 0;
      v28 = *(void **)(v43 + 40);
      if ( v28 )
      {
        *(_QWORD *)(v43 + 48) = 0;
        v45.m128i_i64[0] = v26;
        v44 = v27;
        qfree(v28);
        v26 = v45.m128i_i64[0];
        v27 = _mm_load_si128(&v44);
      }
      *(_QWORD *)(v43 + 40) = v26;
      *(__m128i *)(v43 + 48) = v27;
      copy_tinfo_t(v43 + 64);
      *(__m128i *)(v43 + 72) = _mm_loadu_si128((const __m128i *)(v29 + 72));
      *(__m128i *)(v43 + 88) = _mm_loadu_si128((const __m128i *)(v29 + 88));
      *(_DWORD *)(v43 + 104) = *(_DWORD *)(v29 + 104);
      *(_DWORD *)(v43 + 112) = *(_DWORD *)(v29 + 112);
      *(_DWORD *)(v43 + 116) = *(_DWORD *)(v29 + 116);
      *(_BYTE *)(v43 + 120) = *(_BYTE *)(v29 + 120);
      v9 = v22;
      if ( a2 >= v22 )
      {
        v43 = a1 + (v22 << 7);
        goto LABEL_25;
      }
      v22 = (v22 - 1) / 2;
    }
    if ( !under_debugger )
      interr(2166);
    goto LABEL_39;
  }
  v46.m128i_i64[0] = (__int64)&v49;
  sub_485740((__int64)&v49, v48);
  v43 = a1 + (a2 << 7);
LABEL_25:
  v32 = *(void **)(v43 + 16);
  v33 = v51;
  v51 = 0;
  *(__m128 *)v43 = _mm_loadh_ps((const double *)&v50);
  v34 = _mm_loadu_si128(&v52);
  v52 = 0;
  if ( v32 )
  {
    *(_QWORD *)(v43 + 24) = 0;
    v44 = v34;
    qfree(v32);
    v34 = _mm_load_si128(&v44);
  }
  v35 = *(void **)(v43 + 40);
  *(_QWORD *)(v43 + 16) = v33;
  *(__m128i *)(v43 + 24) = v34;
  v36 = v53;
  v37 = _mm_load_si128(&v54);
  v53 = 0;
  v54 = 0;
  if ( v35 )
  {
    *(_QWORD *)(v43 + 48) = 0;
    v44 = v37;
    qfree(v35);
    v37 = _mm_load_si128(&v44);
  }
  *(_QWORD *)(v43 + 40) = v36;
  *(__m128i *)(v43 + 48) = v37;
  copy_tinfo_t(v43 + 64);
  v38 = (_QWORD *)v46.m128i_i64[0];
  v39 = _mm_loadu_si128(&v55);
  *(_DWORD *)(v43 + 104) = v57;
  v40 = v58;
  *(__m128i *)(v43 + 72) = v39;
  v41 = _mm_loadu_si128(&v56);
  *(_QWORD *)(v43 + 112) = v40;
  LOBYTE(v40) = v59;
  *(__m128i *)(v43 + 88) = v41;
  *(_BYTE *)(v43 + 120) = v40;
  sub_375BF0(v38);
  return v60 - __readfsqword(0x28u);
}

