int *__fastcall sub_1F61A0(_BYTE *a1)
{
  int *result; // rax

  result = (int *)*((unsigned int *)a1 + 6);
  if ( a1[28] || a1[29] )
  {
    if ( (_DWORD)result )
      return (int *)QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 24));
  }
  else if ( !(_DWORD)result )
  {
    result = &dword_8BA8D4;
    if ( dword_8BA8D4 > 0 )
      return (int *)QT::QBasicTimer::start(a1 + 24, dword_8BA8D4, a1);
  }
  return result;
}
