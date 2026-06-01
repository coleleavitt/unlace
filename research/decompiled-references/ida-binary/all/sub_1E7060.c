__int64 __fastcall sub_1E7060(__int64 a1)
{
  QT::QAbstractScrollArea *v1; // rbx
  __int64 (__fastcall *v2)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v3; // rax
  __int64 result; // rax
  QT::QWidget *v5; // rdi

  if ( dword_8BA8D4 > 0 )
    QT::QBasicTimer::start(a1 + 24, dword_8BA8D4, a1);
  *(_BYTE *)(a1 + 30) = 1;
  v1 = *(QT::QAbstractScrollArea **)(a1 + 16);
  v2 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)v1 + 760LL);
  if ( v2 != sub_1E6980 )
    return v2(v1);
  v3 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(v1);
  result = QT::QWidget::update(v3);
  v5 = *((QT::QWidget **)v1 + 96);
  if ( v5 )
  {
    result = *((_QWORD *)v5 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::update(v5);
  }
  return result;
}
