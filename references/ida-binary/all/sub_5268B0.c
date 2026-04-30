unsigned __int64 __fastcall sub_5268B0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  unsigned __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 32);
  v5 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = _mm_sub_epi32(
         _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(v1 + 28)), _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
         _mm_loadl_epi64((const __m128i *)(v1 + 20))).m128i_u64[0];
  QT::QWidget::resize(v2, &v4);
  return v5 - __readfsqword(0x28u);
}
