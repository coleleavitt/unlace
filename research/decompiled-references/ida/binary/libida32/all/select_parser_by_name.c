__int64 __fastcall select_parser_by_name(char *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  __int64 srclang_parser; // rax
  __int64 v4; // rbp

  v1 = *(_QWORD **)(qword_2CA1698 + 1696);
  if ( !a1 || !*a1 )
    return sub_7091D0(*(_QWORD **)(qword_2CA1698 + 1696), 0, 1);
  srclang_parser = find_srclang_parser(a1);
  v4 = srclang_parser;
  if ( !srclang_parser )
    return 0;
  result = sub_7091D0(v1, srclang_parser, 1);
  --*(_DWORD *)(v4 + 12);
  return result;
}

