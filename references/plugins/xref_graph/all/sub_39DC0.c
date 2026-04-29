unsigned __int64 __fastcall sub_39DC0(__int64 a1, QT::QRectF *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = qvector_reserve(a1, 0, 4919, 96);
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = v3;
  v5 = v3;
  v6 = v4;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v12 = qvector_reserve(a1, v5, v4 + 1, 96);
    *(_QWORD *)a1 = v12;
    v5 = v12;
    v6 = *(_QWORD *)(a1 + 8);
  }
  v7 = (_QWORD *)(96 * v6 + v5);
  memset(v7, 0, 0x60u);
  *v7 = -1;
  ++*(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)a1 + 96 * v4;
  result = QT::QRectF::toAlignedRect(a2);
  v11 = _mm_sub_epi32(_mm_add_epi32(_mm_loadl_epi64((const __m128i *)&qword_40D18), (__m128i)v10), (__m128i)result);
  *(__m128d *)(v8 + 8) = _mm_cvtepi32_pd((__m128i)result);
  *(__m128d *)(v8 + 24) = _mm_cvtepi32_pd(v11);
  return result;
}
