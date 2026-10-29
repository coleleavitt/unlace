__int64 __fastcall parse_decls_for_srclang(int a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 srclang_parser; // rax
  __int64 v7; // rbp
  __int64 result; // rax
  char s2[4]; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  *(_DWORD *)s2 = a1;
  srclang_parser = find_srclang_parser(s2);
  if ( !srclang_parser )
    return 0xFFFFFFFFLL;
  v7 = srclang_parser;
  result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(srclang_parser + 32))(a2, a3, a4 << 6);
  --*(_DWORD *)(v7 + 12);
  return result;
}

