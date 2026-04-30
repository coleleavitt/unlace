__int64 __fastcall sub_29A200(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  result = (unsigned int)a3;
  if ( a3 < 0 || a3 >= a2 )
    return 0xFFFFFFFFLL;
  for ( i = (_DWORD *)(*(_QWORD *)(a1 + 80) + 4LL * a3); a2 != (*i & 0x7FFFFFFF); ++i )
  {
    result = (unsigned int)(result + 1);
    if ( a2 == (_DWORD)result )
      return 0xFFFFFFFFLL;
  }
  return result;
}
