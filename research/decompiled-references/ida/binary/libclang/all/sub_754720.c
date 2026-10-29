__int64 __fastcall sub_754720(__int64 a1, __int64 a2)
{
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  const char *v10; // rsi
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v4 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 )
  {
    sub_5FF0F0(a2, "[[clang::return_typestate");
    sub_5FF0F0(a2, "(");
    v10 = "consumed";
    v11 = sub_5FF0F0(a2, "\"");
    v12 = *(_DWORD *)(a1 + 36);
    if ( v12 != 1 )
    {
      v10 = "unconsumed";
      if ( v12 != 2 )
        v10 = "unknown";
    }
    v13 = sub_5FF0F0(v11, v10);
    sub_5FF0F0(v13, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((return_typestate");
    sub_5FF0F0(a2, "(");
    v5 = "consumed";
    v6 = sub_5FF0F0(a2, "\"");
    v7 = *(_DWORD *)(a1 + 36);
    if ( v7 != 1 )
    {
      v5 = "unconsumed";
      if ( v7 != 2 )
        v5 = "unknown";
    }
    v8 = sub_5FF0F0(v6, v5);
    sub_5FF0F0(v8, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

