__int64 __fastcall sub_340E20(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  if ( a2 == -1 )
  {
    *(_BYTE *)(a1 + 400) = 1;
    return QT::QWidget::update((QT::QWidget *)a1);
  }
  else if ( a2 >= *(_QWORD *)(a1 + 184) && a2 < *(_QWORD *)(a1 + 192) )
  {
    result = *(unsigned int *)(a1 + 408);
    *(_BYTE *)(a1 + 400) = 1;
    if ( !(_DWORD)result )
      return QT::QBasicTimer::start(a1 + 408, *(int *)(a1 + 404), a1);
  }
  return result;
}
