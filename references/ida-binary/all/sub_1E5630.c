QT::QWidget *__fastcall sub_1E5630(__int64 a1)
{
  QT::QWidget *v1; // rax
  QT::QWidget *result; // rax
  __int64 v3; // rdi

  *(_BYTE *)(a1 + 256) = 0;
  v1 = (QT::QWidget *)sub_2EDA50(a1, 1);
  if ( v1 )
    QT::QWidget::update(v1);
  result = (QT::QWidget *)sub_2EDA50(a1, 2);
  if ( result )
    result = (QT::QWidget *)QT::QWidget::update(result);
  if ( !*(_BYTE *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 )
      return (QT::QWidget *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 664LL))(v3);
  }
  return result;
}
