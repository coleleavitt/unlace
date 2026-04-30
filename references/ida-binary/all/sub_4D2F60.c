unsigned __int64 __fastcall sub_4D2F60(__int64 a1)
{
  QT::QLabel *v1; // r13
  __int64 v2; // r13
  void (__fastcall *v3)(__int64, _QWORD); // r14
  unsigned __int8 isNull; // al
  QT::QLabel *v5; // r13
  __int64 v7; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  QT::QWidget::windowIcon((QT::QWidget *)&v7);
  v1 = *(QT::QLabel **)(a1 + 48);
  v8 = _mm_sub_epi32(
         _mm_add_epi32(
           _mm_loadl_epi64((const __m128i *)(*((_QWORD *)v1 + 4) + 28LL)),
           _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
         _mm_loadl_epi64((const __m128i *)(*((_QWORD *)v1 + 4) + 20LL))).m128i_u64[0];
  QT::QIcon::pixmap(ptr, &v7, &v8, 0, 1);
  QT::QLabel::setPixmap(v1, (const QT::QPixmap *)ptr);
  QT::QPixmap::~QPixmap((QT::QPixmap *)ptr);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL);
  isNull = QT::QIcon::isNull((QT::QIcon *)&v7);
  v3(v2, isNull ^ 1u);
  v5 = *(QT::QLabel **)(a1 + 56);
  QT::QWidget::windowTitle((QT::QWidget *)ptr);
  QT::QLabel::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QIcon::~QIcon((QT::QIcon *)&v7);
  return v10 - __readfsqword(0x28u);
}
