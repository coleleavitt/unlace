__int64 __fastcall sub_AFD630(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rax
  int v7; // edx
  const char *v8; // rsi
  __int64 v9; // rax
  char v11[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v11[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 )
  {
    if ( v4 != 1 )
      return sub_AFD720();
    v5 = "__attribute__((swift_wrapper";
  }
  else
  {
    v5 = "__attribute__((swift_newtype";
  }
  sub_995540(a2, v5);
  sub_AFB8E0(a2, v11);
  v6 = sub_995540(a2, "\"");
  v7 = *(_DWORD *)(a1 + 40);
  if ( !v7 )
  {
    v8 = "struct";
    goto LABEL_8;
  }
  if ( v7 != 1 )
    return sub_AFD720();
  v8 = "enum";
LABEL_8:
  v9 = sub_995540(v6, v8);
  sub_995540(v9, "\"");
  if ( !v11[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "))");
}
