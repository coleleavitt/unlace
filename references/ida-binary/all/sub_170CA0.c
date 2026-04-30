void __fastcall sub_170CA0(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **v6; // r14
  unsigned __int64 v7; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  __m128i v26; // xmm1
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  void *v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __m128i v38; // xmm0
  unsigned __int64 v39; // rdi
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  struct _Unwind_Exception *v43; // rbx
  _QWORD v44[11]; // [rsp+0h] [rbp-58h] BYREF

  v44[3] = __readfsqword(0x28u);
  if ( a2 || a4 )
  {
    v12 = a1->m128i_i64[0];
    v13 = a1[1].m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v14 = *(_QWORD *)(v12 + 8);
      v16 = a1->m128i_i64[1];
      v17 = v12 + 31;
      v20 = a1[1].m128i_i64[0];
      if ( v14 >= v13 )
        v20 = *(_QWORD *)(v12 + 8);
      v18 = a3 + v20;
      a6 = (__int64)(a1->m128i_i64[1] - ((v12 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3;
      if ( a2 )
      {
        v19 = v18 - a6;
        goto LABEL_16;
      }
LABEL_10:
      v19 = ((__int64)(v16 - (v17 & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + v13 + v18 - v14;
LABEL_16:
      v21 = v14;
      if ( v19 >= v14 )
        v21 = v19;
      if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
        v19 = v21;
      goto LABEL_20;
    }
  }
  else
  {
    a6 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v12 = a1->m128i_i64[0];
      if ( *(int *)a6 <= 1 && a3 > 0 )
      {
        v36 = QT::QArrayData::reallocateUnaligned(
                v12,
                a1->m128i_i64[1],
                8,
                ((__int64)(a1->m128i_i64[1] - ((a6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + a1[1].m128i_i64[0] + a3,
                0);
        v38 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)v37);
        if ( v37 )
        {
          *a1 = v38;
          return;
        }
        QT::qBadAlloc();
        goto LABEL_67;
      }
      v13 = a1[1].m128i_i64[0];
      if ( a6 )
      {
        v14 = *(_QWORD *)(a6 + 8);
        v15 = a1[1].m128i_i64[0];
        v16 = a1->m128i_i64[1];
        v17 = a6 + 31;
        if ( v14 >= v13 )
          v15 = *(_QWORD *)(a6 + 8);
        v18 = a3 + v15;
        goto LABEL_10;
      }
    }
    else
    {
      v13 = a1[1].m128i_i64[0];
    }
  }
  v35 = 0;
  if ( v13 >= 0 )
    v35 = v13;
  v14 = 0;
  v19 = a3 + v35;
LABEL_20:
  v6 = (void **)v44;
  v22 = QT::QArrayData::allocate(v44, 8, 16, v19, v19 <= v14, a6);
  v7 = v44[0];
  v23 = v22;
  if ( !v22 || !v44[0] )
  {
LABEL_27:
    v26 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v23);
    if ( a3 > 0 )
    {
      if ( v23 )
        goto LABEL_29;
LABEL_67:
      v43 = (struct _Unwind_Exception *)QT::qBadAlloc();
      v44[0] = v7;
      v44[1] = 0;
      v44[2] = 0;
      sub_16DE80(v6);
      _Unwind_Resume(v43);
    }
LABEL_51:
    v27 = a1[1].m128i_u64[0];
    if ( v27 )
    {
      v27 += a3;
      goto LABEL_30;
    }
LABEL_52:
    v29 = a1->m128i_u64[1];
    v32 = 0;
    goto LABEL_38;
  }
  v24 = a1->m128i_i64[0];
  if ( a2 == 1 )
  {
    v42 = (*(_QWORD *)(v44[0] + 8LL) - a3 - a1[1].m128i_i64[0]) / 2;
    if ( v42 < 0 )
      v42 = 0;
    v23 += 8 * (a3 + v42);
    v25 = 0;
    if ( !v24 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( v24 )
  {
    v23 = a1->m128i_i64[1] + v22 - ((v24 + 31) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_25:
    v25 = *(_DWORD *)(v24 + 4);
LABEL_26:
    *(_DWORD *)(v44[0] + 4LL) = v25;
    goto LABEL_27;
  }
  *(_DWORD *)(v44[0] + 4LL) = 0;
  v26 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)(unsigned __int64)v22);
  if ( a3 <= 0 )
    goto LABEL_51;
LABEL_29:
  v27 = a1[1].m128i_u64[0];
  if ( !v27 )
    goto LABEL_52;
LABEL_30:
  v28 = 8 * v27;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v29 = a1->m128i_u64[1];
    if ( v29 + v28 == v29 || v29 >= v29 + v28 )
    {
      v32 = a1[1].m128i_i64[0];
      v27 = 0;
    }
    else
    {
      v30 = ((unsigned __int64)(v28 - 1) >> 3) + 1;
      v31 = 0;
      do
      {
        *(_QWORD *)(v23 + 8 * v31) = *(_QWORD *)(v29 + 8 * v31);
        ++v31;
      }
      while ( v30 != v31 );
      v27 = v30;
      v29 = a1->m128i_u64[1];
      v32 = a1[1].m128i_i64[0];
    }
LABEL_38:
    v33 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v27;
    *a1 = v26;
    v34 = (void *)v33.m128i_i64[0];
    if ( a4 )
    {
      *(_QWORD *)(a4 + 16) = v32;
      v34 = *(void **)a4;
      *(__m128i *)a4 = _mm_unpacklo_epi64(v33, (__m128i)v29);
    }
    goto LABEL_40;
  }
  if ( v28 && (v39 = a1->m128i_u64[1], v39 < v39 + v28) )
  {
    v40 = 0;
    v41 = ((unsigned __int64)(v28 - 1) >> 3) + 1;
    do
    {
      *(_QWORD *)(v23 + 8 * v40) = *(_QWORD *)(v39 + 8 * v40);
      ++v40;
    }
    while ( v41 != v40 );
    v34 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = v41;
    *a1 = v26;
  }
  else
  {
    v34 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v26;
  }
LABEL_40:
  if ( v34 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v34, 1u) )
      free(v34);
  }
}
