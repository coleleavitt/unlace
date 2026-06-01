__int64 __fastcall sub_75F8F0(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  switch ( v3 )
  {
    case 0:
      v4 = "[[nodiscard";
      goto LABEL_6;
    case 1:
      v4 = "[[nodiscard";
      goto LABEL_6;
    case 2:
      v4 = "[[clang::warn_unused_result";
      goto LABEL_6;
    case 3:
      sub_5FF0F0(a2, "__attribute__((warn_unused_result");
      sub_5FF0F0(a2, "(");
      v8 = sub_5FF0F0(a2, "\"");
      v9 = sub_722320(v8, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
      sub_5FF0F0(v9, "\"");
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, "))");
    case 4:
      v4 = "[[gnu::warn_unused_result";
      goto LABEL_6;
    case 5:
      v4 = "[[gnu::warn_unused_result";
LABEL_6:
      sub_5FF0F0(a2, v4);
      sub_5FF0F0(a2, "(");
      v5 = sub_5FF0F0(a2, "\"");
      v6 = sub_722320(v5, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
      sub_5FF0F0(v6, "\"");
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, "]]");
  }
}

