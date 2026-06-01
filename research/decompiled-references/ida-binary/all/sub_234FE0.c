_DWORD *__fastcall sub_234FE0(int a1)
{
  _DWORD *result; // rax
  __int64 v2; // rdx

  if ( !a1 )
    return nullptr;
  result = (_DWORD *)qword_8CC430;
  v2 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v2 )
    return nullptr;
  while ( *result != a1 )
  {
    result += 64;
    if ( result == (_DWORD *)v2 )
      return nullptr;
  }
  return result;
}
