void __fastcall sub_1B21C0(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r13
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
  __m128i *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __m128i v27; // xmm1
  __int64 v28; // rcx
  __int64 v29; // rdi
  const __m128i *v30; // rax
  const __m128i *v31; // rdi
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rcx
  void *v36; // r13
  void **v37; // rbx
  void **i; // rbp
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __m128i v42; // xmm0
  void **v43; // rdi
  __int64 v44; // rax
  void *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  struct _Unwind_Exception *v49; // rbx
  _QWORD v50[11]; // [rsp+0h] [rbp-58h] BYREF

  v50[3] = __readfsqword(0x28u);
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
        v40 = QT::QArrayData::reallocateUnaligned(
                v12,
                a1->m128i_i64[1],
                24,
                0xAAAAAAAAAAAAAAABLL * ((__int64)(a1->m128i_i64[1] - ((v12 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3)
              + a1[1].m128i_i64[0]
              + a3,
                0);
        v42 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v40, (__m128i)v41);
        if ( v41 )
        {
          *a1 = v42;
          return;
        }
        QT::qBadAlloc();
        goto LABEL_75;
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
  v39 = 0;
  if ( v14 >= 0 )
    v39 = v14;
  v15 = 0;
  v19 = a3 + v39;
LABEL_19:
  v6 = v50;
  v23 = QT::QArrayData::allocate(v50, 24, 16, v19, v19 <= v15, a6);
  v7 = v50[0];
  v24 = (__m128i *)v23;
  if ( !v23 || !v50[0] )
  {
LABEL_26:
    v27 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v24);
    if ( a3 > 0 )
    {
      if ( v24 )
        goto LABEL_28;
LABEL_75:
      v49 = (struct _Unwind_Exception *)QT::qBadAlloc();
      v50[0] = v7;
      v50[1] = 0;
      v50[2] = 0;
      sub_1AF880((__int64)v6);
      _Unwind_Resume(v49);
    }
LABEL_58:
    v28 = a1[1].m128i_i64[0];
    if ( v28 )
    {
      v28 += a3;
      goto LABEL_29;
    }
LABEL_59:
    v30 = (const __m128i *)a1->m128i_i64[1];
    v33 = 0;
LABEL_40:
    v34 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v28;
    *a1 = v27;
    if ( a4 )
    {
      v35 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)(a4 + 16) = v33;
      v36 = *(void **)a4;
      v37 = *(void ***)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v34, (__m128i)(unsigned __int64)v30);
    }
    else
    {
      v35 = v33;
      v37 = (void **)v30;
      v36 = (void *)v34.m128i_i64[0];
    }
    goto LABEL_42;
  }
  v25 = a1->m128i_i64[0];
  if ( a2 == 1 )
  {
    v48 = (*(_QWORD *)(v50[0] + 8LL) - a3 - a1[1].m128i_i64[0]) / 2;
    if ( v48 < 0 )
      v48 = 0;
    v24 = (__m128i *)((char *)v24 + 24 * a3 + 24 * v48);
    v26 = 0;
    if ( !v25 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( v25 )
  {
    v24 = (__m128i *)(a1->m128i_i64[1] + v23 - ((v25 + 31) & 0xFFFFFFFFFFFFFFF0LL));
LABEL_24:
    v26 = *(_DWORD *)(v25 + 4);
LABEL_25:
    *(_DWORD *)(v50[0] + 4LL) = v26;
    goto LABEL_26;
  }
  *(_DWORD *)(v50[0] + 4LL) = 0;
  v27 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v23);
  if ( a3 <= 0 )
    goto LABEL_58;
LABEL_28:
  v28 = a1[1].m128i_i64[0];
  if ( !v28 )
    goto LABEL_59;
LABEL_29:
  v29 = 24 * v28;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v30 = (const __m128i *)a1->m128i_i64[1];
    v31 = (const __m128i *)((char *)v30 + v29);
    if ( v31 == v30 || (v28 = 1, v30 >= v31) )
    {
      v33 = a1[1].m128i_i64[0];
      v28 = 0;
    }
    else
    {
      while ( 1 )
      {
        v32 = _mm_loadu_si128(v30);
        v24[1].m128i_i64[0] = v30[1].m128i_i64[0];
        *v24 = v32;
        if ( v32.m128i_i64[0] )
          _InterlockedAdd((volatile signed __int32 *)v32.m128i_i64[0], 1u);
        v30 = (const __m128i *)((char *)v30 + 24);
        v24 = (__m128i *)((char *)v24 + 24);
        if ( v30 >= v31 )
          break;
        ++v28;
      }
      v30 = (const __m128i *)a1->m128i_i64[1];
      v33 = a1[1].m128i_i64[0];
    }
    goto LABEL_40;
  }
  v37 = (void **)a1->m128i_i64[1];
  if ( v29 && (v43 = &v37[(unsigned __int64)v29 / 8], v37 < v43) )
  {
    v44 = 0;
    do
    {
      v45 = *v37;
      v37 += 3;
      ++v44;
      v24 = (__m128i *)((char *)v24 + 24);
      *(v37 - 3) = nullptr;
      v24[-2].m128i_i64[1] = (__int64)v45;
      v46 = (__int64)*(v37 - 2);
      *(v37 - 2) = nullptr;
      v24[-1].m128i_i64[0] = v46;
      v47 = (__int64)*(v37 - 1);
      *(v37 - 1) = nullptr;
      v24[-1].m128i_i64[1] = v47;
    }
    while ( v37 < v43 );
    v37 = (void **)a1->m128i_i64[1];
    v35 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = v44;
    v36 = (void *)a1->m128i_i64[0];
    *a1 = v27;
  }
  else
  {
    v36 = (void *)a1->m128i_i64[0];
    v35 = a1[1].m128i_i64[0];
    *a1 = v27;
    a1[1].m128i_i64[0] = 0;
  }
LABEL_42:
  if ( v36 && !_InterlockedSub((volatile signed __int32 *)v36, 1u) )
  {
    for ( i = &v37[3 * v35]; i != v37; v37 += 3 )
    {
      if ( *v37 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)*v37, 1u) )
          free(*v37);
      }
    }
    free(v36);
  }
}
