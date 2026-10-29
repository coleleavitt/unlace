__int64 __fastcall sub_736D30(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v3 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v3 = sub_C4A760(a1);
  switch ( v3 )
  {
    case 0:
      sub_5FF0F0(a2, "__attribute__((deprecated");
      v8 = sub_5FF0F0(a2, "(\"");
      v9 = sub_722320(v8, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
      sub_5FF0F0(v9, "\"");
      if ( *(_DWORD *)(a1 + 48) )
      {
        v12 = sub_5FF0F0(a2, ", \"");
        v13 = sub_722320(v12, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
        sub_5FF0F0(v13, "\"");
      }
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, "))");
    case 1:
      v4 = "[[gnu::deprecated";
      goto LABEL_6;
    case 2:
      v4 = "[[gnu::deprecated";
      goto LABEL_6;
    case 3:
      sub_5FF0F0(a2, "__declspec(deprecated");
      v10 = sub_5FF0F0(a2, "(\"");
      v11 = sub_722320(v10, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
      sub_5FF0F0(v11, "\"");
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, ")");
    case 4:
      v4 = "[[deprecated";
      goto LABEL_6;
    case 5:
      v4 = "[[deprecated";
LABEL_6:
      sub_5FF0F0(a2, v4);
      v5 = sub_5FF0F0(a2, "(\"");
      v6 = sub_722320(v5, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
      sub_5FF0F0(v6, "\"");
      sub_5FF0F0(a2, ")");
      return sub_5FF0F0(a2, "]]");
  }
}

