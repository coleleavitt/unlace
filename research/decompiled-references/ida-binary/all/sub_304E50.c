__int64 __fastcall sub_304E50(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 1020);
  if ( *(_DWORD *)(a2 + 16) == (_DWORD)result )
  {
    result = QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 1020));
    if ( qword_8CD748 )
      return sub_3140F0(qword_8CD748, 1, v3);
  }
  return result;
}
