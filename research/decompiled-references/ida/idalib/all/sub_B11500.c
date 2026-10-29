__int64 __fastcall sub_B11500(__int64 a1, __int64 a2)
{
  int v3; // eax
  const char *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = *(_BYTE *)(a1 + 34) >> 4;
  switch ( v3 )
  {
    case 0:
      sub_995540(a2, "__attribute__((deprecated");
      v10 = sub_995540(a2, "(\"");
      v11 = sub_9954E0(v10, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_995540(v11, "\"");
      if ( *(_DWORD *)(a1 + 56) )
      {
        v12 = sub_995540(a2, ", \"");
        v13 = sub_9954E0(v12, *(const void **)(a1 + 64), *(unsigned int *)(a1 + 56));
        sub_995540(v13, "\"");
      }
      sub_995540(a2, ")");
      result = sub_995540(a2, "))");
      break;
    case 1:
    case 2:
      v4 = "[[gnu::deprecated";
      goto LABEL_5;
    case 3:
      sub_995540(a2, "__declspec(deprecated");
      v8 = sub_995540(a2, "(\"");
      v9 = sub_9954E0(v8, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_995540(v9, "\"");
      sub_995540(a2, ")");
      result = sub_995540(a2, ")");
      break;
    case 4:
    case 5:
      v4 = "[[deprecated";
LABEL_5:
      sub_995540(a2, v4);
      v5 = sub_995540(a2, "(\"");
      v6 = sub_9954E0(v5, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_995540(v6, "\"");
      sub_995540(a2, ")");
      result = sub_995540(a2, "]]");
      break;
  }
  return result;
}
