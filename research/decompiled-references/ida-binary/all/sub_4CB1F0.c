QT::QWidget *__fastcall sub_4CB1F0(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // rax
  QT::QWidget *v3; // rbx
  unsigned __int64 v5; // [rsp+8h] [rbp-60h]
  __int64 v6; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v6 = 0;
  v5 = _mm_sub_epi32(
         _mm_add_epi32(
           _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 32) + 28LL)),
           _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
         _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(a2 + 32) + 20LL))).m128i_u64[0];
  v2 = QT::QWidget::mapToGlobal(a2, &v6);
  v9 = 0;
  v7[0] = v2;
  *(_OWORD *)ptr = 0;
  v7[1] = v5;
  v3 = sub_4CAF60(this, a2, (__int64)v7, 0);
  sub_4C6AF0(v3);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v3;
}
