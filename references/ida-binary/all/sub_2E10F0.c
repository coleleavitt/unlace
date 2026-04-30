__int64 __fastcall sub_2E10F0(double a1)
{
  QT::QSplitter *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  QT::QAbstractScrollArea *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __m128i *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = sub_2E0B40(nullptr, nullptr);
  sub_2DE3A0(a1, (__int64)v1, 4194308, nullptr, v2);
  if ( *((_BYTE *)v1 + 64) )
  {
    v3 = QT::QAbstractScrollArea::viewport(nullptr);
    QT::QWidget::setFocus(v3, 7);
    return 0;
  }
  v5 = *((QT::QAbstractScrollArea **)v1 + 7);
  v6 = QT::QAbstractScrollArea::viewport(v5);
  QT::QWidget::setFocus(v6, 7);
  if ( !v5 )
    return 0;
  if ( qword_8CD7E8 )
  {
    v9 = (__m128i *)sub_1EA680(qword_8CD7E8 + 384LL, 7, v7, v8, a1);
    sub_1F1140((__int64)v5 + 384, v9, 4u, a1, v10, v11, v12);
  }
  return 1;
}
