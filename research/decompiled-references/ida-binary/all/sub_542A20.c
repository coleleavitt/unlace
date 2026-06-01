unsigned __int64 __fastcall sub_542A20(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  __int64 v16; // rbx
  size_t v17; // r12
  void *v18; // r13
  size_t v19; // r15
  void *v20; // r14
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // rcx
  const char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r12
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r13
  QT::QTimer *v30; // rdi
  char v31; // dl
  __int64 v32; // r12
  const void *v33; // r15
  void *v34; // rdi
  const void *v35; // r15
  void *v36; // rax
  __int64 v37; // rax
  unsigned __int8 v38; // [rsp+Bh] [rbp-3Dh]
  unsigned int v39; // [rsp+Ch] [rbp-3Ch]

  v16 = a2;
  if ( !*(_BYTE *)(a2 + 50) || !(_QWORD)xmmword_8D2598 )
  {
    v17 = *(_QWORD *)(a2 + 8);
    v18 = nullptr;
    if ( v17 )
    {
      v20 = nullptr;
      v18 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
      memcpy(v18, *(const void **)a2, v17);
      v19 = *(_QWORD *)(a2 + 32);
      if ( !v19 )
        goto LABEL_5;
    }
    else
    {
      v19 = *(_QWORD *)(a2 + 32);
      v20 = nullptr;
      if ( !v19 )
      {
LABEL_5:
        v21 = xmmword_8D2598;
        a13 = *(unsigned __int8 *)(a2 + 50);
        a14 = *(unsigned __int16 *)(a2 + 48);
        a2 = qword_8D2590;
        if ( *((_QWORD *)&xmmword_8D2598 + 1) < (unsigned __int64)(xmmword_8D2598 + 1) )
        {
          v39 = *(unsigned __int16 *)(v16 + 48);
          v38 = a13;
          qword_8D2590 = qvector_reserve(&qword_8D2590, qword_8D2590, xmmword_8D2598 + 1, 56);
          v21 = xmmword_8D2598;
          a2 = qword_8D2590;
          a14 = v39;
          a13 = v38;
        }
        v22 = a2 + 56 * v21;
        *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
        *(_QWORD *)v22 = v18;
        a3 = (__m128)_mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
        *(_QWORD *)&xmmword_8D2598 = xmmword_8D2598 + 1;
        *(_QWORD *)(v22 + 24) = v20;
        *(_WORD *)(v22 + 48) = a14;
        *(_BYTE *)(v22 + 50) = a13;
        *(__m128 *)(v22 + 32) = a3;
        goto LABEL_8;
      }
    }
    v20 = (void *)qalloc_or_throw(v19);
    memcpy(v20, *(const void **)(a2 + 24), v19);
    goto LABEL_5;
  }
  v27 = qword_8D2590 + 56 * xmmword_8D2598 - 56;
  if ( a2 != v27 )
  {
    v28 = *(_QWORD *)(a2 + 8);
    if ( v28 > 1 )
    {
      v33 = *(const void **)a2;
      v34 = *(void **)v27;
      if ( *(_QWORD *)(v27 + 16) < v28 )
      {
        v37 = qvector_reserve(qword_8D2590 + 56 * xmmword_8D2598 - 56, *(_QWORD *)v27, v28, 1);
        *(_QWORD *)v27 = v37;
        v34 = (void *)v37;
      }
      *(_QWORD *)(v27 + 8) = v28;
      a2 = (__int64)v33;
      memmove(v34, v33, v28 - 1);
      *(_BYTE *)(*(_QWORD *)v27 + v28 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v27 + 8) = 0;
    }
  }
  if ( v27 + 24 != v16 + 24 )
  {
    v29 = *(_QWORD *)(v16 + 32);
    if ( v29 > 1 )
    {
      v35 = *(const void **)(v16 + 24);
      v36 = *(void **)(v27 + 24);
      if ( *(_QWORD *)(v27 + 40) < v29 )
      {
        v36 = (void *)qvector_reserve(v27 + 24, *(_QWORD *)(v27 + 24), *(_QWORD *)(v16 + 32), 1);
        *(_QWORD *)(v27 + 24) = v36;
      }
      *(_QWORD *)(v27 + 32) = v29;
      a2 = (__int64)v35;
      memmove(v36, v35, v29 - 1);
      *(_BYTE *)(*(_QWORD *)(v27 + 24) + v29 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v27 + 32) = 0;
    }
  }
  *(_BYTE *)(v27 + 48) = *(_BYTE *)(v16 + 48);
  *(_BYTE *)(v27 + 49) = *(_BYTE *)(v16 + 49);
  *(_BYTE *)(v27 + 50) = *(_BYTE *)(v16 + 50);
LABEL_8:
  result = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(result + 120) && (_QWORD)xmmword_8D2598 )
  {
    v24 = *(unsigned int *)(a1 + 84);
    if ( (int)v24 <= 0 )
    {
      v30 = (QT::QTimer *)(*(_QWORD *)(result + 24) + 656LL);
      result = QT::QTimer::isActive(v30);
      v31 = *(_BYTE *)(v16 + 50);
      if ( (_BYTE)result )
      {
        if ( v31 )
          return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 8) + 448LL))(
                   *(_QWORD *)(a1 + 8),
                   20,
                   1);
      }
      else
      {
        v32 = *(_QWORD *)(a1 + 8);
        if ( !v31 && *(_BYTE *)(v16 + 49) )
        {
          *(_QWORD *)(v32 + 672) = get_nsec_stamp(v30, a2);
          return QT::QTimer::start((QT::QTimer *)(*(_QWORD *)(a1 + 8) + 656LL), 500);
        }
        else
        {
          return sub_542320(*(QT::QWidget **)(v32 + 120), qword_8D2590 + 56 * xmmword_8D2598 - 56);
        }
      }
    }
    else if ( !*(_BYTE *)(v16 + 50) )
    {
      v25 = &s1;
      v26 = qword_8D2590 + 56 * xmmword_8D2598 - 56;
      if ( *(_QWORD *)(v26 + 8) )
        v25 = *(const char **)v26;
      return sub_169700((int)"%s\n", (__int64)v25, qword_8D2590, v24, a13, a14, a3, a4, a5, a6, a7, a8, a9, a10, a15);
    }
  }
  return result;
}
