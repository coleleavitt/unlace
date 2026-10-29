__int64 __fastcall sub_75B3B0(__int64 a1, __int64 a2)
{
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  const char *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v4 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 )
  {
    sub_5FF0F0(a2, "[[clang::test_typestate");
    sub_5FF0F0(a2, "(");
    v9 = "consumed";
    v10 = sub_5FF0F0(a2, "\"");
    if ( *(_DWORD *)(a1 + 36) )
      v9 = "unconsumed";
    v11 = sub_5FF0F0(v10, v9);
    sub_5FF0F0(v11, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((test_typestate");
    sub_5FF0F0(a2, "(");
    v5 = "consumed";
    v6 = sub_5FF0F0(a2, "\"");
    if ( *(_DWORD *)(a1 + 36) )
      v5 = "unconsumed";
    v7 = sub_5FF0F0(v6, v5);
    sub_5FF0F0(v7, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

