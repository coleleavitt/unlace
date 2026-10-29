__int64 __fastcall set_parser_option(char *a1, __int64 a2, __int64 a3)
{
  __int64 srclang_parser; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 result; // rax

  srclang_parser = find_srclang_parser(a1);
  if ( !srclang_parser )
    return 0;
  v5 = srclang_parser;
  v6 = *(__int64 (__fastcall **)(__int64, __int64))(srclang_parser + 72);
  if ( v6 )
    result = v6(a2, a3);
  else
    result = 0;
  --*(_DWORD *)(v5 + 12);
  return result;
}
