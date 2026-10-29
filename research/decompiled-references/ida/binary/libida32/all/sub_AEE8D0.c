__int64 __fastcall sub_AEE8D0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // edx
  const char *v12; // rsi
  __int64 v13; // rax
  _BYTE v14[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v14[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  if ( v4 != 1 )
  {
    if ( !v4 )
    {
      sub_971800(a2, "__attribute__((enum_extensibility");
      sub_AD7BA0(a2, v14);
      v5 = sub_971800(a2, "\"");
      v6 = *(_DWORD *)(a1 + 40);
      if ( !v6 )
      {
        v7 = "closed";
        goto LABEL_8;
      }
      if ( v6 == 1 )
      {
        v7 = "open";
LABEL_8:
        v8 = sub_971800(v5, v7);
        sub_971800(v8, "\"");
        if ( !v14[0] )
          sub_971800(a2, ")");
        return sub_971800(a2, "))");
      }
      return sub_AEEA70();
    }
    if ( v4 != 2 )
      return sub_AEEA70();
  }
  sub_971800(a2, "[[clang::enum_extensibility");
  sub_AD7BA0(a2, v14);
  v10 = sub_971800(a2, "\"");
  v11 = *(_DWORD *)(a1 + 40);
  if ( v11 )
  {
    if ( v11 != 1 )
      return sub_AEEA70();
    v12 = "open";
  }
  else
  {
    v12 = "closed";
  }
  v13 = sub_971800(v10, v12);
  sub_971800(v13, "\"");
  if ( !v14[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, "]]");
}

