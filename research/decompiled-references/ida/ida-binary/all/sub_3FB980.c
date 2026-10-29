void __fastcall sub_3FB980(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **v6; // r13
  unsigned __int64 v7; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __m128i v27; // xmm1
  __int64 v28; // rcx
  __int64 v29; // rdi
  const __m128i *v30; // rax
  const __m128i *v31; // rdi
  __int64 v32; // rcx
  __m128i v33; // xmm0
  __int64 v34; // rsi
  __int64 v35; // rdx
  __m128i v36; // xmm0
  void *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __m128i v41; // xmm0
  const __m128i *v42; // rax
  const __m128i *v43; // rdi
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __int64 v46; // rax
  struct _Unwind_Exception *v47; // rbx
  _QWORD v48[11]; // [rsp+0h] [rbp-58h] BYREF

  v48[3] = __readfsqword(0x28u);
  if ( a2 || a4 )
  {
    v13 = a1->m128i_i64[0];
    v14 = a1[1].m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v15 = *(_QWORD *)(v13 + 8);
      a6 = a1->m128i_i64[1];
      v17 = v13 + 31;
      v20 = a1[1].m128i_i64[0];
      if ( v15 >= v14 )
        v20 = *(_QWORD *)(v13 + 8);
      v18 = a3 + v20;
      v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(a1->m128i_i64[1] - ((v13 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3);
      if ( a2 )
      {
        v19 = v18 - v21;
        goto LABEL_15;
      }
LABEL_9:
      v19 = v18 + v14 - v15 - 0x5555555555555555LL * ((__int64)(a6 - (v17 & 0xFFFFFFFFFFFFFFF0LL)) >> 3);
LABEL_15:
      v22 = v15;
      if ( v19 >= v15 )
        v22 = v19;
      if ( (*(_BYTE *)(v13 + 4) & 1) != 0 )
        v19 = v22;
      goto LABEL_19;
    }
  }
  else
  {
    v12 = a1->m128i_i64[0];
    if ( v12 )
    {
      v13 = v12;
      if ( *(int *)v12 <= 1 && a3 > 0 )
      {
        v39 = QT::QArrayData::reallocateUnaligned(
                v12,
                a1->m128i_i64[1],
                24,
                0xAAAAAAAAAAAAAAABLL * ((__int64)(a1->m128i_i64[1] - ((v12 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3)
              + a1[1].m128i_i64[0]
              + a3,
                0);
        v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)v40);
        if ( v40 )
        {
          *a1 = v41;
          return;
        }
        QT::qBadAlloc();
        goto LABEL_65;
      }
      v14 = a1[1].m128i_i64[0];
      v15 = *(_QWORD *)(v12 + 8);
      v16 = v14;
      a6 = a1->m128i_i64[1];
      v17 = v12 + 31;
      if ( v15 >= v14 )
        v16 = *(_QWORD *)(v12 + 8);
      v18 = a3 + v16;
      goto LABEL_9;
    }
    v14 = a1[1].m128i_i64[0];
  }
  v38 = 0;
  if ( v14 >= 0 )
    v38 = v14;
  v15 = 0;
  v19 = a3 + v38;
LABEL_19:
  v6 = (void **)v48;
  v23 = QT::QArrayData::allocate(v48, 24, 16, v19, v19 <= v15, a6);
  v7 = v48[0];
  v24 = v23;
  if ( !v23 || !v48[0] )
  {
LABEL_26:
    v27 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v24);
    if ( a3 > 0 )
    {
      if ( v24 )
        goto LABEL_28;
LABEL_65:
      v47 = (struct _Unwind_Exception *)QT::qBadAlloc();
      v48[0] = v7;
      v48[1] = 0;
      v48[2] = 0;
      sub_3F8D50(v6);
      _Unwind_Resume(v47);
    }
LABEL_49:
    v28 = a1[1].m128i_i64[0];
    if ( v28 )
    {
      v28 += a3;
      goto LABEL_29;
    }
LABEL_50:
    v30 = (const __m128i *)a1->m128i_i64[1];
    v35 = 0;
    goto LABEL_36;
  }
  v25 = a1->m128i_i64[0];
  if ( a2 == 1 )
  {
    v46 = (*(_QWORD *)(v48[0] + 8LL) - a3 - a1[1].m128i_i64[0]) / 2;
    if ( v46 < 0 )
      v46 = 0;
    v24 += 24 * (a3 + v46);
    v26 = 0;
    if ( !v25 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( v25 )
  {
    v24 = a1->m128i_i64[1] + v23 - ((v25 + 31) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_24:
    v26 = *(_DWORD *)(v25 + 4);
LABEL_25:
    *(_DWORD *)(v48[0] + 4LL) = v26;
    goto LABEL_26;
  }
  *(_DWORD *)(v48[0] + 4LL) = 0;
  v27 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v23);
  if ( a3 <= 0 )
    goto LABEL_49;
LABEL_28:
  v28 = a1[1].m128i_i64[0];
  if ( !v28 )
    goto LABEL_50;
LABEL_29:
  v29 = 24 * v28;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v30 = (const __m128i *)a1->m128i_i64[1];
    v31 = (const __m128i *)((char *)v30 + v29);
    if ( v31 == v30 || (v32 = 1, v30 >= v31) )
    {
      v35 = a1[1].m128i_i64[0];
      v28 = 0;
    }
    else
    {
      do
      {
        v33 = _mm_loadu_si128(v30);
        v30 = (const __m128i *)((char *)v30 + 24);
        v24 += 24LL;
        *(__m128i *)(v24 - 24) = v33;
        *(_QWORD *)(v24 - 8) = v30[-1].m128i_i64[1];
        v34 = v32++;
      }
      while ( v30 < v31 );
      v30 = (const __m128i *)a1->m128i_i64[1];
      v35 = a1[1].m128i_i64[0];
      v28 = v34;
    }
LABEL_36:
    v36 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v28;
    *a1 = v27;
    v37 = (void *)v36.m128i_i64[0];
    if ( a4 )
    {
      *(_QWORD *)(a4 + 16) = v35;
      v37 = *(void **)a4;
      *(__m128i *)a4 = _mm_unpacklo_epi64(v36, (__m128i)(unsigned __int64)v30);
    }
    goto LABEL_38;
  }
  if ( v29 && (v42 = (const __m128i *)a1->m128i_i64[1], v43 = (const __m128i *)((char *)v42 + v29), v42 < v43) )
  {
    v44 = 0;
    do
    {
      v45 = _mm_loadu_si128(v42);
      v42 = (const __m128i *)((char *)v42 + 24);
      ++v44;
      v24 += 24LL;
      *(__m128i *)(v24 - 24) = v45;
      *(_QWORD *)(v24 - 8) = v42[-1].m128i_i64[1];
    }
    while ( v42 < v43 );
    v37 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = v44;
    *a1 = v27;
  }
  else
  {
    v37 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v27;
  }
LABEL_38:
  if ( v37 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v37, 1u) )
      free(v37);
  }
}
