__int64 __fastcall sub_510410(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 56);
  v6[1] = __readfsqword(0x28u);
  v6[0] = _mm_sub_epi32(
            _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 28)), _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
            _mm_loadl_epi64((const __m128i *)(v3 + 20))).m128i_u64[0];
  QT::QWidget::resize(v4, v6);
  return QT::QDialog::resizeEvent(a1, a2);
}
