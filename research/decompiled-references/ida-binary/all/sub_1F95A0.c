__int64 __fastcall sub_1F95A0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (*v2)(void); // rax
  QT::QWidget *v3; // rax
  __int64 result; // rax
  QT::QWidget *v5; // rdi

  v1 = *a1;
  *((_BYTE *)a1 + 880) = 0;
  v2 = *(__int64 (**)(void))(v1 + 760);
  if ( (char *)v2 != (char *)sub_1E6980 )
    return v2();
  v3 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)a1);
  result = QT::QWidget::update(v3);
  v5 = (QT::QWidget *)a1[96];
  if ( v5 )
  {
    result = *((_QWORD *)v5 + 4);
    if ( *(char *)(result + 9) < 0 )
      return QT::QWidget::update(v5);
  }
  return result;
}
