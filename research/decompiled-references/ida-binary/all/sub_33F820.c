__int64 __fastcall sub_33F820(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax

  result = a1[102];
  if ( *(_DWORD *)(a2 + 16) == (_DWORD)result )
    return QT::QWidget::update((QT::QWidget *)a1);
  return result;
}
