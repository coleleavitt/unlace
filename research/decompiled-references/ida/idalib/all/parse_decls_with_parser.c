__int64 __fastcall parse_decls_with_parser(char *a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 srclang_parser; // rax
  __int64 v7; // r13
  __int64 result; // rax

  srclang_parser = find_srclang_parser(a1);
  if ( !srclang_parser )
    return 0xFFFFFFFFLL;
  v7 = srclang_parser;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(srclang_parser + 32))(a2, a3, a4 << 6);
  --*(_DWORD *)(v7 + 12);
  return result;
}
