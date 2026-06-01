__int64 __fastcall sub_340E80(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !a2 )
    a2 = 200;
  result = *(unsigned int *)(a1 + 408);
  *(_DWORD *)(a1 + 404) = a2;
  if ( (_DWORD)result )
    return QT::QBasicTimer::start(a1 + 408, a2, a1);
  return result;
}
