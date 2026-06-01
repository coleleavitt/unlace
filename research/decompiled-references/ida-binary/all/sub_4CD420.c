__int64 __fastcall sub_4CD420(QT::QWidget *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  v2 = QT::QWidget::layout(a1);
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( a2 >= (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2) )
    return 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 168LL))(v3, a2);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 104LL))(v4);
}
