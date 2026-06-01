__int64 __fastcall sub_19F430(
        QT::QAbstractItemView *this,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __m128 si128; // xmm1
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdi
  __m128i v19; // xmm1
  __int64 v20; // rax
  __m128 v21; // xmm0
  __int64 v22; // rax
  __m128 v23; // xmm1
  __m128i v24; // [rsp+0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+17h] [rbp-51h] BYREF
  char v26; // [rsp+1Fh] [rbp-49h]
  _BYTE v27[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-20h]

  v28 = __readfsqword(0x28u);
  v11 = sub_19B830(0, -1, a3, a4, a5, a6, a7, a8, a9, a10);
  result = 0;
  if ( v11 != -1 )
  {
    v13 = QT::QAbstractItemView::model(this);
    v14 = *(_QWORD *)(v13 + 216);
    if ( !v14 )
      v14 = *(_QWORD *)(v13 + 208);
    v25 = v11;
    v26 = 0;
    *(_OWORD *)v27 = -1;
    dirtree_find_entry(v27, v14, &v25);
    si128 = (__m128)_mm_load_si128((const __m128i *)v27);
    if ( si128.m128_u64[0] != -1 || !_mm_movehl_ps(a6, si128).m128_u64[0] )
    {
      memset(v27, 0, 24);
      v24 = (__m128i)si128;
      *(_OWORD *)&v27[24] = -1;
      v16 = qvector_reserve(v27, 0, 1, 16);
      v17 = _mm_load_si128(&v24);
      *(_QWORD *)v27 = v16;
      *(__m128i *)(v16 + 16LL * *(_QWORD *)&v27[8]) = v17;
      v18 = *(_QWORD *)(a2 + 72);
      *(__m128i *)&v27[24] = v17;
      v19 = _mm_loadu_si128((const __m128i *)(a2 + 88));
      *(_DWORD *)(a2 + 136) |= 2u;
      v20 = *(_QWORD *)v27;
      *(_QWORD *)v27 = v18;
      v21 = _mm_loadh_ps((const double *)&v27[16]);
      *(__m128i *)&v27[16] = v19;
      *(_QWORD *)(a2 + 72) = v20;
      v22 = *(_QWORD *)(a2 + 104);
      v23 = _mm_loadh_ps((const double *)&v27[32]);
      *(__m128 *)(a2 + 80) = v21;
      *(_QWORD *)&v27[32] = v22;
      *(__m128 *)(a2 + 96) = v23;
      if ( v18 )
      {
        *(_QWORD *)&v27[8] = 0;
        qfree(v18, nullptr);
      }
    }
    return 2;
  }
  return result;
}
