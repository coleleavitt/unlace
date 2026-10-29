__int64 __fastcall sub_5C5F20(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi

  v2 = lex_set_options(*(_QWORD *)(a1 + 232), 0);
  v3 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 220) = v2;
  lex_set_options(v3, v2 & 0xFFFFFFFC);
  return 0;
}

