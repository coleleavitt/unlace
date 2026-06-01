__int64 __fastcall sub_3D83C0(QT::QWidget *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 64);
  if ( *((_DWORD *)a1 + 22) == (_DWORD)result )
    return QT::QWidget::close(a1);
  return result;
}
