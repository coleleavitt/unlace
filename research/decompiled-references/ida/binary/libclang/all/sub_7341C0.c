__int64 __fastcall sub_7341C0(__int64 a1, __int64 a2)
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
  if ( v4 == 1 || v4 == 2 )
  {
    sub_5FF0F0(a2, "[[gnu::model");
    sub_5FF0F0(a2, "(");
    v5 = "medium";
    v6 = sub_5FF0F0(a2, "\"");
    v7 = *(_DWORD *)(a1 + 36);
    if ( v7 != 3 )
    {
      v5 = "extreme";
      if ( v7 != 4 )
        v5 = "normal";
    }
    v8 = sub_5FF0F0(v6, v5);
    sub_5FF0F0(v8, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((model");
    sub_5FF0F0(a2, "(");
    v10 = "medium";
    v11 = sub_5FF0F0(a2, "\"");
    v12 = *(_DWORD *)(a1 + 36);
    if ( v12 != 3 )
    {
      v10 = "extreme";
      if ( v12 != 4 )
        v10 = "normal";
    }
    v13 = sub_5FF0F0(v11, v10);
    sub_5FF0F0(v13, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

