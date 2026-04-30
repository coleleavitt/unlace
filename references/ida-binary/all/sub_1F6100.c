__int64 __fastcall sub_1F6100(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v6; // rax
  __int64 result; // rax
  QT::QWidget *v8; // rdi

  *(_BYTE *)(a1 + 30) = 1;
  if ( a3 > 0 )
  {
    if ( dword_8BA8D4 > 0 )
      QT::QBasicTimer::start(a1 + 24, dword_8BA8D4, a1);
  }
  else if ( *(_DWORD *)(a1 + 24) )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 24));
  }
  v3 = *(__int64 **)(a1 + 16);
  v4 = *v3;
  *((_BYTE *)v3 + 880) = 0;
  v5 = *(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(v4 + 760);
  if ( v5 != sub_1E6980 )
    return v5((QT::QAbstractScrollArea *)v3);
  v6 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)v3);
  result = QT::QWidget::update(v6);
  v8 = (QT::QWidget *)v3[96];
  if ( v8 )
  {
    result = *((_QWORD *)v8 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::update(v8);
  }
  return result;
}
