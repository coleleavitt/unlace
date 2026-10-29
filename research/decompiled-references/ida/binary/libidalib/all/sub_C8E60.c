__int64 __fastcall sub_C8E60(__int64 a1, int *a2)
{
  int v2; // ecx
  __int64 v3; // rsi
  __int64 result; // rax

  if ( !(_QWORD)xmmword_252598 )
    return -1;
  v2 = *a2;
  if ( !*a2 )
    return -1;
  v3 = qword_252590;
  result = 0;
  while ( *(_DWORD *)(qword_252590 + (result << 8)) != v2 )
  {
    if ( (_QWORD)xmmword_252598 == ++result )
    {
      if ( under_debugger )
        BUG();
      interr();
      return sub_C8EC0(40058, v3);
    }
  }
  return result;
}

