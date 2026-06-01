_DWORD *__fastcall sub_C4D00(int a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rdx

  if ( !a1 )
    return nullptr;
  result = (_DWORD *)qword_251410;
  v2 = (_DWORD *)(qword_251410 + 232 * xmmword_251418);
  if ( (_DWORD *)qword_251410 == v2 )
    return nullptr;
  while ( *result != a1 )
  {
    result += 58;
    if ( result == v2 )
      return nullptr;
  }
  return result;
}

