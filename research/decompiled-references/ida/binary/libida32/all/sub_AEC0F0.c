__int64 __fastcall sub_AEC0F0(const char *a1, const char *a2)
{
  const char *v2; // rbp
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  _BYTE v13[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = a1;
  v3 = (__int64)a2;
  v4 = a1[34];
  v13[0] = 1;
  if ( (v4 & 0xF0) == 0xF0 )
    v5 = sub_F83A90(a1);
  else
    v5 = v4 >> 4;
  if ( v5 != 1 )
  {
    if ( !v5 )
    {
      sub_971800((__int64)a2, "__attribute__((model");
      sub_AD7BA0((__int64)a2, v13);
      a1 = a2;
      v6 = sub_971800((__int64)a2, "\"");
      v7 = *((_DWORD *)v2 + 10);
      if ( v7 == 3 )
      {
        a2 = "medium";
        goto LABEL_8;
      }
      if ( v7 == 4 )
      {
        a2 = "large";
        goto LABEL_8;
      }
      a2 = "small";
      if ( v7 == 1 )
      {
LABEL_8:
        v8 = sub_971800(v6, a2);
        sub_971800(v8, "\"");
        if ( !v13[0] )
          sub_971800(v3, ")");
        return sub_971800(v3, "))");
      }
      return sub_AEC2C0(a1, a2);
    }
    if ( v5 != 2 )
      return sub_AEC2C0(a1, a2);
  }
  sub_971800((__int64)a2, "[[gnu::model");
  sub_AD7BA0((__int64)a2, v13);
  a1 = a2;
  v10 = sub_971800((__int64)a2, "\"");
  v11 = *((_DWORD *)v2 + 10);
  if ( v11 == 3 )
  {
    a2 = "medium";
  }
  else if ( v11 == 4 )
  {
    a2 = "large";
  }
  else
  {
    a2 = "small";
    if ( v11 != 1 )
      return sub_AEC2C0(a1, a2);
  }
  v12 = sub_971800(v10, a2);
  sub_971800(v12, "\"");
  if ( !v13[0] )
    sub_971800(v3, ")");
  return sub_971800(v3, "]]");
}

