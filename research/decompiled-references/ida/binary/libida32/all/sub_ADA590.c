__int64 __fastcall sub_ADA590(__int64 a1, __int64 a2)
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
  if ( !v4 )
  {
    sub_971800(a2, "__attribute__((set_typestate");
    sub_AD7BA0(a2, v14);
    v5 = sub_971800(a2, "\"");
    v6 = *(_DWORD *)(a1 + 40);
    switch ( v6 )
    {
      case 1:
        v7 = "consumed";
        goto LABEL_7;
      case 0:
        v7 = "unknown";
LABEL_7:
        v8 = sub_971800(v5, v7);
        sub_971800(v8, "\"");
        if ( !v14[0] )
          sub_971800(a2, ")");
        return sub_971800(a2, "))");
      case 2:
        v7 = "unconsumed";
        goto LABEL_7;
    }
    return sub_ADA750();
  }
  if ( v4 != 1 )
    return sub_ADA750();
  sub_971800(a2, "[[clang::set_typestate");
  sub_AD7BA0(a2, v14);
  v10 = sub_971800(a2, "\"");
  v11 = *(_DWORD *)(a1 + 40);
  if ( v11 == 1 )
  {
    v12 = "consumed";
  }
  else if ( v11 )
  {
    if ( v11 != 2 )
      return sub_ADA750();
    v12 = "unconsumed";
  }
  else
  {
    v12 = "unknown";
  }
  v13 = sub_971800(v10, v12);
  sub_971800(v13, "\"");
  if ( !v14[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, "]]");
}

