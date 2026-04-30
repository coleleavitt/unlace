__int64 __fastcall sub_51C200(QT::QWidget *a1, __int64 a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a2 + 20);
  if ( *(_DWORD *)(a2 + 28) != (_DWORD)result )
    return QT::QWidget::update(a1);
  return result;
}
