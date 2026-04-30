__int64 __fastcall sub_304DE0(__int64 a1, char a2)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 1017);
  if ( a2 )
  {
    if ( !(_BYTE)result )
    {
      *(_BYTE *)(a1 + 1017) = 1;
      return QT::QBasicTimer::start(a1 + 1020, 1000, a1);
    }
  }
  else if ( (_BYTE)result )
  {
    result = *(unsigned int *)(a1 + 1020);
    *(_BYTE *)(a1 + 1017) = 0;
    if ( (_DWORD)result )
    {
      return QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 1020));
    }
    else if ( qword_8CD748 )
    {
      return sub_3140F0(qword_8CD748, 0, a1);
    }
  }
  return result;
}
