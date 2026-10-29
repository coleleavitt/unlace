unsigned __int64 __fastcall sub_279170(__m128i *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // edi
  signed int v6; // edx
  unsigned int v7; // esi
  unsigned __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v9 = 0;
  v3 = QT::QWidget::mapToParent(a2, &v9);
  v9 = _mm_sub_epi32(
         _mm_add_epi32(
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 32) + 28LL)),
           _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
         _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 32) + 20LL))).m128i_u64[0];
  v4 = QT::QWidget::mapToParent(a2, &v9);
  LODWORD(v4) = v4 + 1;
  v5 = v4;
  v6 = HIDWORD(v4) + 1;
  if ( (int)v3 > (int)v4 )
    LODWORD(v4) = v3;
  else
    v5 = v3;
  v7 = HIDWORD(v4) + 1;
  if ( SHIDWORD(v3) > v6 )
    v6 = HIDWORD(v3);
  else
    v7 = HIDWORD(v3);
  *a1 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), _mm_cvtsi32_si128(v7)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v4), _mm_cvtsi32_si128(v6)));
  return v10 - __readfsqword(0x28u);
}
