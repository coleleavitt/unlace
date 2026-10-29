__int64 __fastcall select_parser_by_srclang(int a1)
{
  _QWORD *v1; // rbp
  __int64 srclang_parser; // rax
  __int64 v3; // rbx
  __int64 result; // rax
  char s2[4]; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  *(_DWORD *)s2 = a1;
  v1 = *(_QWORD **)(qword_2CCB598 + 1888);
  srclang_parser = find_srclang_parser(s2);
  if ( !srclang_parser )
    return 0;
  v3 = srclang_parser;
  result = sub_7297B0(v1, srclang_parser, 1);
  --*(_DWORD *)(v3 + 12);
  return result;
}
