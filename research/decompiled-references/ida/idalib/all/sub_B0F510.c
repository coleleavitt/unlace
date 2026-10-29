__int64 __fastcall sub_B0F510(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  const char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v12[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 == 1 )
  {
    v5 = "[[clang::capability";
  }
  else
  {
    if ( !v4 )
    {
      v6 = "__attribute__((capability";
      goto LABEL_7;
    }
    v5 = "[[clang::shared_capability";
    if ( v4 == 2 )
    {
      v6 = "__attribute__((shared_capability";
LABEL_7:
      sub_995540(a2, v6);
      sub_AFB8E0(a2, v12);
      v7 = sub_995540(a2, "\"");
      v8 = sub_9954E0(v7, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_995540(v8, "\"");
      if ( !v12[0] )
        sub_995540(a2, ")");
      return sub_995540(a2, "))");
    }
  }
  sub_995540(a2, v5);
  sub_AFB8E0(a2, v12);
  v10 = sub_995540(a2, "\"");
  v11 = sub_9954E0(v10, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
  sub_995540(v11, "\"");
  if ( !v12[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
