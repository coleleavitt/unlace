QT::QWidget *__fastcall sub_4CD980(QT::QWidget *a1, _BYTE *a2)
{
  QT::QWidget *result; // rax
  void (__fastcall *v3)(__int64, char); // rbp

  result = (QT::QWidget *)sub_4CD420(a1, 1u);
  if ( result )
  {
    v3 = *(void (__fastcall **)(__int64, char))(*(_QWORD *)a2 + 16LL);
    result = (QT::QWidget *)QT::QWidget::close(result);
    if ( v3 == IRendererUpdateModel__::vfunc_2 )
      a2[12] = (_BYTE)result;
    else
      return (QT::QWidget *)((__int64 (__fastcall *)(_BYTE *, _QWORD))v3)(a2, (unsigned __int8)result);
  }
  return result;
}
