__int64 __fastcall sub_366140(__int64 a1, __int64 a2)
{
  const char *v3; // rsi
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax

  v3 = haystack;
  v4 = *(unsigned int *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  v5 = qword_2CA1698;
  v6 = sub_4D6E40(qword_2CA1698, v3, 1);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)sub_4D31C0(v5, v6, v4);
  return 0;
}

