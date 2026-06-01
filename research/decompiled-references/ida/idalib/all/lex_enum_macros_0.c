__int64 __fastcall lex_enum_macros_0(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, const char *, _QWORD, _QWORD, __int64),
        __int64 a3)
{
  __int64 **v3; // rbx
  const char *v6; // rsi
  __int64 result; // rax

  v3 = *(__int64 ***)(*(_QWORD *)(a1 + 584) + 16LL);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v6 = haystack;
    if ( v3[3] )
      v6 = (const char *)v3[2];
    result = a2((__int64)v3[1], v6, *((unsigned __int8 *)v3 + 40), *((unsigned __int8 *)v3 + 41), a3);
    if ( (_DWORD)result )
      break;
    v3 = (__int64 **)*v3;
    if ( !v3 )
      return 0;
  }
  return result;
}
