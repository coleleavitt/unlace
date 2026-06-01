void __fastcall sub_309250(__m128i *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v10; // r10
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // r8
  char *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // r12
  __int64 v26; // r15
  const QT::QFileInfo *v27; // rbx
  const QT::QFileInfo *v28; // r15
  QT::QFileInfo *v29; // rbp
  __int64 v30; // rax
  __m128i v31; // xmm3
  __m128i v32; // xmm0
  __int64 v33; // rdx
  void *v34; // r15
  const QT::QFileInfo *v35; // rbp
  const QT::QFileInfo *v36; // rbx
  QT::QFileInfo *v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __m128i v41; // xmm0
  const QT::QFileInfo *v42; // r15
  QT::QFileInfo *v43; // rbx
  __int64 v44; // r12
  __m128i v45; // xmm7
  __int64 v46; // rcx
  __m128i v47; // xmm7
  __m128i v48; // xmm7
  __m128i v49; // [rsp+0h] [rbp-78h] BYREF
  __m128i *v50; // [rsp+18h] [rbp-60h]
  __m128i v51; // [rsp+20h] [rbp-58h] BYREF
  __int64 v52; // [rsp+30h] [rbp-48h]
  unsigned __int64 v53; // [rsp+38h] [rbp-40h]

  v7 = a2;
  v8 = a3;
  v53 = __readfsqword(0x28u);
  if ( a2 || a4 )
  {
    v11 = a1->m128i_i64[0];
    v12 = a1[1].m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v13 = *(_QWORD *)(v11 + 8);
      v15 = a1->m128i_i64[1];
      v16 = v11 + 31;
      v19 = a1[1].m128i_i64[0];
      if ( v13 >= v12 )
        v19 = *(_QWORD *)(v11 + 8);
      v17 = (char *)(v8 + v19);
      if ( (_DWORD)v7 )
      {
        v18 = (__int64)&v17[-((__int64)(a1->m128i_i64[1] - ((v11 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3)];
        goto LABEL_16;
      }
LABEL_10:
      v18 = (__int64)&v17[v12 - v13 + ((__int64)(v15 - (v16 & 0xFFFFFFFFFFFFFFF0LL)) >> 3)];
LABEL_16:
      v20 = v13;
      if ( v18 >= v13 )
        v20 = v18;
      if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
        v18 = v20;
      goto LABEL_20;
    }
  }
  else
  {
    v10 = a1->m128i_i64[0];
    if ( a1->m128i_i64[0] )
    {
      v11 = a1->m128i_i64[0];
      if ( *(int *)v10 <= 1 && a3 > 0 )
      {
        v39 = QT::QArrayData::reallocateUnaligned(
                v11,
                a1->m128i_i64[1],
                8,
                ((__int64)(a1->m128i_i64[1] - ((v10 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 3) + a1[1].m128i_i64[0] + a3,
                0);
        v41 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)v40);
        if ( v40 )
        {
          *a1 = v41;
          return;
        }
        v8 = QT::qBadAlloc();
        goto LABEL_70;
      }
      v12 = a1[1].m128i_i64[0];
      if ( v10 )
      {
        v13 = *(_QWORD *)(v10 + 8);
        v14 = a1[1].m128i_i64[0];
        v15 = a1->m128i_i64[1];
        v16 = v10 + 31;
        if ( v13 >= v12 )
          v14 = *(_QWORD *)(v10 + 8);
        v17 = (char *)(v8 + v14);
        goto LABEL_10;
      }
    }
    else
    {
      v12 = a1[1].m128i_i64[0];
    }
  }
  v38 = 0;
  if ( v12 >= 0 )
    v38 = v12;
  v13 = 0;
  v18 = v8 + v38;
LABEL_20:
  v50 = &v51;
  v21 = QT::QArrayData::allocate(&v51, 8, 16, v18, v18 <= v13, a6);
  v22 = v51.m128i_i64[0];
  if ( !v21 || !v51.m128i_i64[0] )
  {
LABEL_27:
    v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)v21);
    if ( v8 > 0 )
    {
      if ( v21 )
        goto LABEL_29;
      QT::qBadAlloc();
      v7 = 0;
LABEL_70:
      v48 = _mm_load_si128(&v49);
      v52 = v7;
      v51 = v48;
      sub_308640((__int64)v50);
      _Unwind_Resume((struct _Unwind_Exception *)v8);
    }
LABEL_53:
    v25 = a1[1].m128i_i64[0];
    if ( v25 )
    {
      v25 += v8;
      goto LABEL_30;
    }
LABEL_54:
    v27 = (const QT::QFileInfo *)a1->m128i_i64[1];
    v30 = 0;
LABEL_38:
    v31 = _mm_load_si128(&v49);
    v32 = _mm_loadl_epi64(a1);
    a1[1].m128i_i64[0] = v25;
    *a1 = v31;
    if ( a4 )
    {
      v33 = *(_QWORD *)(a4 + 16);
      v34 = *(void **)a4;
      *(_QWORD *)(a4 + 16) = v30;
      v35 = *(const QT::QFileInfo **)(a4 + 8);
      *(__m128i *)a4 = _mm_unpacklo_epi64(v32, (__m128i)(unsigned __int64)v27);
    }
    else
    {
      v33 = v30;
      v35 = v27;
      v34 = (void *)v32.m128i_i64[0];
    }
    goto LABEL_40;
  }
  v23 = a1->m128i_i64[0];
  if ( (_DWORD)v7 == 1 )
  {
    v46 = (*(_QWORD *)(v51.m128i_i64[0] + 8) - v8 - a1[1].m128i_i64[0]) / 2;
    if ( v46 < 0 )
      v46 = 0;
    v21 += 8 * (v8 + v46);
    v24 = 0;
    if ( !v23 )
      goto LABEL_26;
    goto LABEL_25;
  }
  if ( v23 )
  {
    v21 = a1->m128i_i64[1] + v21 - ((v23 + 31) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_25:
    v24 = *(_DWORD *)(v23 + 4);
LABEL_26:
    *(_DWORD *)(v51.m128i_i64[0] + 4) = v24;
    goto LABEL_27;
  }
  *(_DWORD *)(v51.m128i_i64[0] + 4) = 0;
  v49 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)v21);
  if ( v8 <= 0 )
    goto LABEL_53;
LABEL_29:
  v25 = a1[1].m128i_i64[0];
  if ( !v25 )
    goto LABEL_54;
LABEL_30:
  v26 = 8 * v25;
  if ( !a1->m128i_i64[0] || *(int *)a1->m128i_i64[0] > 1 || a4 )
  {
    v27 = (const QT::QFileInfo *)a1->m128i_i64[1];
    v28 = (const QT::QFileInfo *)((char *)v27 + v26);
    if ( v28 == v27 )
    {
      v30 = a1[1].m128i_i64[0];
      v25 = 0;
    }
    else
    {
      v29 = (QT::QFileInfo *)v21;
      v25 = 0;
      if ( v27 < v28 )
      {
        do
        {
          QT::QFileInfo::QFileInfo(v29, v27);
          v27 = (const QT::QFileInfo *)((char *)v27 + 8);
          ++v25;
          v29 = (QT::QFileInfo *)((char *)v29 + 8);
        }
        while ( v27 < v28 );
        v27 = (const QT::QFileInfo *)a1->m128i_i64[1];
      }
      v30 = a1[1].m128i_i64[0];
    }
    goto LABEL_38;
  }
  v35 = (const QT::QFileInfo *)a1->m128i_i64[1];
  if ( v26 && (v42 = (const QT::QFileInfo *)((char *)v35 + v26), v35 < v42) )
  {
    v43 = (QT::QFileInfo *)v21;
    v44 = 0;
    do
    {
      QT::QFileInfo::QFileInfo(v43, v35);
      v35 = (const QT::QFileInfo *)((char *)v35 + 8);
      ++v44;
      v43 = (QT::QFileInfo *)((char *)v43 + 8);
    }
    while ( v35 < v42 );
    v45 = _mm_load_si128(&v49);
    v35 = (const QT::QFileInfo *)a1->m128i_i64[1];
    v33 = a1[1].m128i_i64[0];
    v34 = (void *)a1->m128i_i64[0];
    a1[1].m128i_i64[0] = v44;
    *a1 = v45;
  }
  else
  {
    v47 = _mm_load_si128(&v49);
    v34 = (void *)a1->m128i_i64[0];
    v33 = a1[1].m128i_i64[0];
    a1[1].m128i_i64[0] = 0;
    *a1 = v47;
  }
LABEL_40:
  if ( v34 && !_InterlockedSub((volatile signed __int32 *)v34, 1u) )
  {
    v36 = (const QT::QFileInfo *)((char *)v35 + 8 * v33);
    while ( v36 != v35 )
    {
      v37 = v35;
      v35 = (const QT::QFileInfo *)((char *)v35 + 8);
      QT::QFileInfo::~QFileInfo(v37);
    }
    free(v34);
  }
}
