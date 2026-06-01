void __fastcall sub_503260(
        __m128i *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __m128 v12; // xmm1
  __int64 v13; // rcx
  unsigned __int64 v14; // xmm2_8
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rsi
  void *v19; // r13
  unsigned __int64 v20; // rbx
  unsigned __int64 i; // rbp
  volatile signed __int32 *v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  char v27; // cl
  __m128i v28; // xmm0
  int v29; // ecx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  char v32; // cl
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  __m128i v36; // xmm0
  char v37; // cl
  __m128i v38; // xmm0
  int v39; // ecx
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  struct _Unwind_Exception *v45; // rbx
  __m128i v46; // [rsp+0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+10h] [rbp-38h]
  unsigned __int64 v48; // [rsp+18h] [rbp-30h]

  v48 = __readfsqword(0x28u);
  sub_5030B0(&v46, a1->m128i_i64, a3, a2, a5, a6);
  v12 = (__m128)_mm_load_si128(&v46);
  v13 = v47;
  v14 = _mm_movehl_ps(a9, v12).m128_u64[0];
  if ( a3 <= 0 )
  {
    v15 = a1[1].m128i_i64[0];
    if ( !v15 )
    {
LABEL_4:
      v16 = a1->m128i_u64[1];
LABEL_5:
      v17 = _mm_loadl_epi64(a1);
      a1[1].m128i_i64[0] = v13;
      *a1 = (__m128i)v12;
      if ( a4 )
      {
        v18 = *(_QWORD *)(a4 + 16);
        *(_QWORD *)(a4 + 16) = v15;
        v19 = *(void **)a4;
        v20 = *(_QWORD *)(a4 + 8);
        *(__m128i *)a4 = _mm_unpacklo_epi64(v17, (__m128i)v16);
      }
      else
      {
        v18 = v15;
        v20 = v16;
        v19 = (void *)v17.m128i_i64[0];
      }
      goto LABEL_7;
    }
    v15 += a3;
  }
  else
  {
    if ( !v14 )
    {
      v45 = (struct _Unwind_Exception *)QT::qBadAlloc();
      v46.m128i_i64[1] = 0;
      sub_4FC030((__int64)&v46);
      _Unwind_Resume(v45);
    }
    v15 = a1[1].m128i_i64[0];
    if ( !v15 )
      goto LABEL_4;
  }
  v23 = 96 * v15;
  if ( !a1->m128i_i64[0] || a4 || *(int *)a1->m128i_i64[0] > 1 )
  {
    v16 = a1->m128i_u64[1];
    v24 = v16 + v23;
    if ( v24 != v16 && v16 < v24 )
    {
      v25 = v47 + 1;
      v26 = v14 + 96 * v47;
      while ( 1 )
      {
        v27 = *(_BYTE *)(v16 + 16);
        *(__m128i *)v26 = _mm_loadu_si128((const __m128i *)v16);
        v28 = _mm_loadu_si128((const __m128i *)(v16 + 20));
        *(_BYTE *)(v26 + 16) = v27;
        v29 = *(_DWORD *)(v16 + 36);
        *(__m128i *)(v26 + 20) = v28;
        v30 = _mm_loadu_si128((const __m128i *)(v16 + 40));
        *(_DWORD *)(v26 + 36) = v29;
        *(__m128i *)(v26 + 40) = v30;
        v31 = _mm_loadu_si128((const __m128i *)(v16 + 56));
        *(_QWORD *)(v26 + 72) = *(_QWORD *)(v16 + 72);
        *(__m128i *)(v26 + 56) = v31;
        if ( v31.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)v31.m128i_i64[0], 1u);
        v32 = *(_BYTE *)(v16 + 80);
        v16 += 96LL;
        v26 += 96LL;
        *(_BYTE *)(v26 - 16) = v32;
        *(_DWORD *)(v26 - 12) = *(_DWORD *)(v16 - 12);
        *(_DWORD *)(v26 - 8) = *(_DWORD *)(v16 - 8);
        if ( v16 >= v24 )
          break;
        ++v25;
      }
      v16 = a1->m128i_u64[1];
      v13 = v25;
    }
    v15 = a1[1].m128i_i64[0];
    goto LABEL_5;
  }
  v20 = a1->m128i_u64[1];
  if ( v23 && (v33 = v20 + v23, v20 < v33) )
  {
    v34 = v47 + 1;
    v35 = v14 + 96 * v47;
    do
    {
      v36 = _mm_loadu_si128((const __m128i *)v20);
      v37 = *(_BYTE *)(v20 + 16);
      v20 += 96LL;
      v35 += 96LL;
      *(__m128i *)(v35 - 96) = v36;
      v38 = _mm_loadu_si128((const __m128i *)(v20 - 76));
      *(_BYTE *)(v35 - 80) = v37;
      v39 = *(_DWORD *)(v20 - 60);
      *(__m128i *)(v35 - 76) = v38;
      v40 = _mm_loadu_si128((const __m128i *)(v20 - 56));
      *(_DWORD *)(v35 - 60) = v39;
      *(__m128i *)(v35 - 56) = v40;
      v41 = *(_QWORD *)(v20 - 40);
      *(_QWORD *)(v20 - 40) = 0;
      *(_QWORD *)(v35 - 40) = v41;
      v42 = *(_QWORD *)(v20 - 32);
      *(_QWORD *)(v20 - 32) = 0;
      *(_QWORD *)(v35 - 32) = v42;
      v43 = *(_QWORD *)(v20 - 24);
      *(_QWORD *)(v20 - 24) = 0;
      *(_QWORD *)(v35 - 24) = v43;
      *(_BYTE *)(v35 - 16) = *(_BYTE *)(v20 - 16);
      *(_DWORD *)(v35 - 12) = *(_DWORD *)(v20 - 12);
      *(_DWORD *)(v35 - 8) = *(_DWORD *)(v20 - 8);
      v44 = v34++;
    }
    while ( v20 < v33 );
    v20 = a1->m128i_u64[1];
    v18 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = v44;
    v19 = (void *)a1->m128i_i64[0];
    *a1 = (__m128i)v12;
  }
  else
  {
    v19 = (void *)a1->m128i_i64[0];
    v18 = a1[1].m128i_i64[0];
    *a1 = (__m128i)v12;
    a1[1].m128i_i64[0] = v13;
  }
LABEL_7:
  if ( v19 && !_InterlockedSub((volatile signed __int32 *)v19, 1u) )
  {
    for ( i = v20 + 96 * v18; i != v20; v20 += 96LL )
    {
      v22 = *(volatile signed __int32 **)(v20 + 56);
      if ( v22 )
      {
        if ( !_InterlockedSub(v22, 1u) )
          free(*(void **)(v20 + 56));
      }
    }
    free(v19);
  }
}
