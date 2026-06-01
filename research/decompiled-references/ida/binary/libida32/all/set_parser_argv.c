__int64 __fastcall set_parser_argv(char *a1, __int64 a2)
{
  __int64 srclang_parser; // rax
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64, __int64); // rax
  __int64 result; // rax

  srclang_parser = find_srclang_parser(a1);
  if ( !srclang_parser )
    return 0xFFFFFFFFLL;
  v3 = srclang_parser;
  v4 = *(void (__fastcall **)(__int64, __int64))(srclang_parser + 40);
  if ( v4 )
  {
    v4(a2, 1);
    result = 0;
  }
  else
  {
    result = 4294967294LL;
  }
  --*(_DWORD *)(v3 + 12);
  return result;
}

