__int64 __fastcall sub_733370(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 == 2 )
  {
    v4 = "__attribute__((shared_capability";
  }
  else
  {
    if ( v3 > 2 )
    {
      v5 = "[[clang::shared_capability";
      goto LABEL_7;
    }
    v4 = "__attribute__((capability";
    if ( v3 )
    {
      v5 = "[[clang::capability";
LABEL_7:
      sub_5FF0F0(a2, v5);
      sub_5FF0F0(a2, "(");
      v6 = sub_5FF0F0(a2, "\"");
      v7 = sub_722320(v6, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
      sub_5FF0F0(v7, "\"");
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, "]]");
    }
  }
  sub_5FF0F0(a2, v4);
  sub_5FF0F0(a2, "(");
  v9 = sub_5FF0F0(a2, "\"");
  v10 = sub_722320(v9, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
  sub_5FF0F0(v10, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "))");
}

