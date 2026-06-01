void __fastcall paint_context_t__::vfunc_0(__int64 a1)
{
  QT::QFontMetricsF *v2; // rdi

  v2 = (QT::QFontMetricsF *)(a1 + 88);
  *((_QWORD *)v2 - 11) = &paint_context_t___vtable;
  QT::QFontMetricsF::~QFontMetricsF(v2);
  QT::QFont::~QFont((QT::QFont *)(a1 + 72));
}
