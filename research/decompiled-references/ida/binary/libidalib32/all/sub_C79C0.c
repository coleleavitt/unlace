__int64 __fastcall sub_C79C0(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax

  if ( !(_QWORD)xmmword_251418 || !*a2 )
    return -1;
  v2 = (_DWORD *)qword_251410;
  result = 0;
  while ( *v2 != *a2 )
  {
    ++result;
    v2 += 58;
    if ( (_QWORD)xmmword_251418 == result )
    {
      if ( under_debugger )
        BUG();
      interr();
      return sub_C7A20(40058);
    }
  }
  return result;
}

