void __fastcall sub_3FD800(__m128i *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r13
  unsigned __int64 v7; // r14
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
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  unsigned __int64 v25; // r13
  __int64 v26; // r13
  QT::QRegularExpression *v27; // rbx
  QT::QRegularExpression *v28; // r14
  QT::QRegularExpression *v29; // rbp
  const QT::QRegularExpression *v30; // rsi
  QT::QRegularExpression *v31; // rdi
  __int64 v32; // rax
  __m128i v33; // xmm3
  __m128i v34; // xmm0
  __int64 v35; // rdx
  void *v36; // r14
  QT::QRegularExpression *v37; // rbp
  QT::QRegularExpression *v38; // rbx
  QT::QRegularExpression *v39; // rdi
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __m128i v43; // xmm0
  QT::QRegularExpression *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __m128i v47; // xmm7
  struct _Unwind_Exception *v48; // rbx
  __m128i v49; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v50[11]; // [rsp+10h] [rbp-58h] BYREF

  v50[3] = __readfsqword(0x28u);
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
        v41 = QT::QArrayData::reallocateUnaligned(
                v12,
                a1->m128i_i64[1],
                8,
                ((__int64)(a1->m128i_i64[1] - ((a6 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + a1[1].m128i_i64[0] + a3,
                0);
        v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)v42);
        if ( v42 )
        {
          *a1 = v43;
          return;
        }
        QT::qBadAlloc();
        goto LABEL_68;
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
  v40 = 0;
  if ( v13 >= 0 )
    v40 = v13;
  v14 = 0;
  v19 = a3 + v40;
LABEL_20:
  v6 = v50;
  v22 = QT::QArrayData::allocate(v50, 8, 16, v19, v19 <= v14, a6);
  v7 = v50[0];
  if ( !v22 || !v50[0] )
  {
LABEL_27:
    v49 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v22);
    if ( a3 > 0 )
    {
      if ( v22 )
        goto LABEL_29;
LABEL_68:
      v48 = (struct _Unwind_Exception *)QT::qBadAlloc();
      v50[0] = v7;
      v50[1] = 0;
      v50[2] = 0;
      sub_3F8D70((__int64)v6);
      _Unwind_Resume(v48);
    }
LABEL_52:
    v25 = a1[1].m128i_u64[0];
    if ( v25 )
    {
      v25 += a3;
      goto LABEL_30;
    }
LABEL_53:
    v27 = (QT::QRegularExpression *)a1->m128i_i64[1];
    v32 = 0;
LABEL_37:
    v33 = _mm_load_si128(&v49);
    v34 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v25;
    *a1 = v33;
    if ( a4 )
    {
      v35 = *(_QWORD *)(a4 + 16);
      *(_QWORD *)(a4 + 16) = v32;
      v36 = *(void **)a4;
      v37 = *(QT::QRegularExpression **)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v34, (__m128i)(unsigned __int64)v27);
    }
    else
    {
      v35 = v32;
      v37 = v27;
      v36 = (void *)v34.m128i_i64[0];
    }
    goto LABEL_39;
  }
  v23 = a1->m128i_i64[0];
  if ( a2 == 1 )
  {
    v46 = (*(_QWORD *)(v50[0] + 8LL) - a3 - a1[1].m128i_i64[0]) / 2;
    if ( v46 < 0 )
      v46 = 0;
    v22 += 8 * (a3 + v46);
    v24 = 0;
    if ( !v23 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( v23 )
  {
    v22 = a1->m128i_i64[1] + v22 - ((v23 + 31) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_25:
    v24 = *(_DWORD *)(v23 + 4);
LABEL_26:
    *(_DWORD *)(v50[0] + 4LL) = v24;
    goto LABEL_27;
  }
  *(_DWORD *)(v50[0] + 4LL) = 0;
  v49 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v22);
  if ( a3 <= 0 )
    goto LABEL_52;
LABEL_29:
  v25 = a1[1].m128i_u64[0];
  if ( !v25 )
    goto LABEL_53;
LABEL_30:
  v26 = 8 * v25;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v27 = (QT::QRegularExpression *)a1->m128i_i64[1];
    v28 = (QT::QRegularExpression *)((char *)v27 + v26);
    if ( (QT::QRegularExpression *)((char *)v27 + v26) == v27 || (v29 = (QT::QRegularExpression *)v22, v27 >= v28) )
    {
      v32 = a1[1].m128i_i64[0];
      v25 = 0;
    }
    else
    {
      do
      {
        v30 = v27;
        v31 = v29;
        v27 = (QT::QRegularExpression *)((char *)v27 + 8);
        v29 = (QT::QRegularExpression *)((char *)v29 + 8);
        QT::QRegularExpression::QRegularExpression(v31, v30);
      }
      while ( v27 < v28 );
      v27 = (QT::QRegularExpression *)a1->m128i_i64[1];
      v32 = a1[1].m128i_i64[0];
      v25 = ((unsigned __int64)(v26 - 1) >> 3) + 1;
    }
    goto LABEL_37;
  }
  v37 = (QT::QRegularExpression *)a1->m128i_i64[1];
  if ( v26 && (v44 = (QT::QRegularExpression *)((char *)v37 + v26), v37 < (QT::QRegularExpression *)((char *)v37 + v26)) )
  {
    do
    {
      v45 = *(_QWORD *)v37;
      *(_QWORD *)v37 = 0;
      v37 = (QT::QRegularExpression *)((char *)v37 + 8);
      v22 += 8LL;
      *(_QWORD *)(v22 - 8) = v45;
    }
    while ( v37 < v44 );
    v37 = (QT::QRegularExpression *)a1->m128i_i64[1];
    v35 = a1[1].m128i_i64[0];
    v36 = (void *)a1->m128i_i64[0];
    *a1 = _mm_load_si128(&v49);
    a1[1].m128i_i64[0] = ((unsigned __int64)(v26 - 1) >> 3) + 1;
  }
  else
  {
    v47 = _mm_load_si128(&v49);
    v36 = (void *)a1->m128i_i64[0];
    v35 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v47;
  }
LABEL_39:
  if ( v36 && !_InterlockedSub((volatile signed __int32 *)v36, 1u) )
  {
    v38 = (QT::QRegularExpression *)((char *)v37 + 8 * v35);
    while ( v38 != v37 )
    {
      v39 = v37;
      v37 = (QT::QRegularExpression *)((char *)v37 + 8);
      QT::QRegularExpression::~QRegularExpression(v39);
    }
    free(v36);
  }
}
