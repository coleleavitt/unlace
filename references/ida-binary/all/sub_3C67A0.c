unsigned __int64 __fastcall sub_3C67A0(
        __int64 a1,
        unsigned int a2,
        char a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  char v11; // bp
  QT::QAbstractItemView *v12; // r12
  QT::QAbstractItemView *v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  __m128i si128; // xmm2
  const char *v18; // rsi
  __int128 v19; // kr00_16
  __m128 v20; // xmm3
  __int64 v21; // rdi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i *v26; // rax
  __m128i *v27; // rcx
  __m128i v28; // [rsp+0h] [rbp-88h] BYREF
  __int64 v29; // [rsp+17h] [rbp-71h] BYREF
  char v30; // [rsp+1Fh] [rbp-69h]
  _BYTE v31[24]; // [rsp+20h] [rbp-68h] BYREF
  __m128i v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( !a2 )
    return v33 - __readfsqword(0x28u);
  v11 = *(_BYTE *)(a1 + 80);
  if ( v11 )
    return v33 - __readfsqword(0x28u);
  v12 = *(QT::QAbstractItemView **)(a1 + 72);
  if ( !v12 )
    return v33 - __readfsqword(0x28u);
  v13 = *(QT::QAbstractItemView **)(a1 + 72);
  v30 = 0;
  v29 = a2;
  v15 = QT::QAbstractItemView::model(v13);
  v16 = *(_QWORD *)(v15 + 216);
  if ( !v16 )
    v16 = *(_QWORD *)(v15 + 208);
  *(_OWORD *)v31 = -1;
  dirtree_find_entry(v31, v16, &v29);
  si128 = _mm_load_si128((const __m128i *)v31);
  v18 = nullptr;
  v19 = *(_OWORD *)v31;
  memset(v31, 0, sizeof(v31));
  v28 = si128;
  v32 = (__m128i)-1LL;
  sub_48FF00(v12);
  if ( (a3 & 3) == 0 )
  {
    if ( *(_QWORD *)v31 )
    {
      *(_QWORD *)&v31[8] = 0;
      qfree(*(_QWORD *)v31, nullptr);
      *(_QWORD *)v31 = 0;
      v23 = 0;
      *(_QWORD *)&v31[16] = 0;
    }
    else
    {
      v23 = *(_QWORD *)&v31[16];
    }
    v24 = *(_QWORD *)&v31[8];
    v25 = 0;
    v32 = (__m128i)-1LL;
    v18 = (const char *)(*(_QWORD *)&v31[8] + 1LL);
    if ( v23 < *(_QWORD *)&v31[8] + 1LL )
    {
      v18 = nullptr;
      v25 = qvector_reserve(v31, 0, *(_QWORD *)&v31[8] + 1LL, 16);
      *(_QWORD *)v31 = v25;
      v24 = *(_QWORD *)&v31[8];
    }
    *(__m128i *)(v25 + 16 * v24) = _mm_load_si128(&v28);
    ++*(_QWORD *)&v31[8];
    if ( (a3 & 4) != 0 )
      goto LABEL_12;
    goto LABEL_22;
  }
  if ( (a3 & 3) != 1 || (v18 = *(const char **)&v31[8]) == nullptr )
  {
    if ( (a3 & 4) != 0 )
    {
LABEL_13:
      v21 = *(_QWORD *)v31;
      goto LABEL_14;
    }
    goto LABEL_10;
  }
  v21 = *(_QWORD *)v31;
  v27 = (__m128i *)(*(_QWORD *)v31 + 16LL * *(_QWORD *)&v31[8]);
  if ( *(__m128i **)v31 == v27 )
    goto LABEL_26;
  v26 = *(__m128i **)v31;
  while ( 1 )
  {
    v11 = v26->m128i_i64[1] != *((_QWORD *)&v19 + 1) || v26->m128i_i64[0] != (_QWORD)v19;
    if ( !v11 )
      break;
    if ( v27 == ++v26 )
      goto LABEL_26;
  }
  if ( v26 == v27 )
  {
LABEL_26:
    if ( *(_QWORD *)&v31[16] < (unsigned __int64)(*(_QWORD *)&v31[8] + 1LL) )
    {
      v18 = *(const char **)v31;
      *(_QWORD *)v31 = qvector_reserve(v31, *(_QWORD *)v31, *(_QWORD *)&v31[8] + 1LL, 16);
      v27 = (__m128i *)(*(_QWORD *)v31 + 16LL * *(_QWORD *)&v31[8]);
    }
    *v27 = _mm_load_si128(&v28);
    ++*(_QWORD *)&v31[8];
    if ( (a3 & 4) != 0 )
    {
LABEL_12:
      v18 = v31;
      sub_493F70(v12);
      goto LABEL_13;
    }
LABEL_22:
    v11 = 1;
    goto LABEL_10;
  }
  if ( (a3 & 4) == 0 )
  {
LABEL_10:
    v20 = (__m128)_mm_load_si128(&v28);
    if ( *(_OWORD *)&v32 == __PAIR128__(_mm_movehl_ps(a11, v20).m128_u64[0], v20.m128_u64[0]) )
    {
      if ( !v11 )
        goto LABEL_13;
    }
    else
    {
      v32 = _mm_load_si128(&v28);
    }
    goto LABEL_12;
  }
LABEL_14:
  if ( v21 )
  {
    *(_QWORD *)&v31[8] = 0;
    qfree(v21, v18);
  }
  return v33 - __readfsqword(0x28u);
}
