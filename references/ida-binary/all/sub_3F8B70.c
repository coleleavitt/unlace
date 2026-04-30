unsigned __int64 __fastcall sub_3F8B70(QT::QLayout **this, __int64 a2)
{
  QT::QVBoxLayout *v2; // rbp
  QT::QWidget *v3; // rbp
  __m128i ptr; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QString::fromUtf8(&ptr, 7, "Filters");
  sub_1DE2E0((QT::QWidget *)this, a2, &ptr, 0, 1);
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  *(this + 20) = nullptr;
  *((_OWORD *)this + 9) = 0;
  *this = (QT::QLayout *)&xref_filters_section_t___vtable;
  *(this + 2) = (QT::QLayout *)xref_filters_section_t___vtable_at__16;
  v2 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v2);
  *(this + 17) = v2;
  QT::QLayout::setContentsMargins(v2, 5, 5, 5, 5);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*(this + 17) + 104LL))(*(this + 17), 2);
  v3 = (QT::QWidget *)operator new(0x28u);
  QT::QWidget::QWidget(v3, 0, 0);
  QT::QWidget::setLayout(v3, *(this + 17));
  sub_1DDA50((__int64)this, (__int64)v3);
  QT::QWidget::setVisible((QT::QWidget *)this, 0);
  return v6 - __readfsqword(0x28u);
}
