__int64 __fastcall sub_AD9BA0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rax
  int v13; // edx
  const char *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v18[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  if ( v4 != 1 )
  {
    if ( !v4 )
    {
      sub_971800(a2, "__attribute__((swift_async_error");
      sub_AD7BA0(a2, v18);
      v5 = sub_971800(a2, "\"");
      v6 = *(_DWORD *)(a1 + 40);
      switch ( v6 )
      {
        case 1:
          v7 = "nonnull_error";
          goto LABEL_10;
        case 0:
          v7 = "none";
          goto LABEL_10;
        case 2:
          v7 = "zero_argument";
          goto LABEL_10;
        case 3:
          v7 = "nonzero_argument";
LABEL_10:
          v8 = sub_971800(v5, v7);
          sub_971800(v8, "\"");
          sub_AD7BA0(a2, v18);
          v9 = sub_971800(a2, &byte_22CD811);
          v10 = sub_2257BD0(v9, *(unsigned int *)(a1 + 44));
          sub_971800(v10, &byte_22CD811);
          if ( !v18[0] )
            sub_971800(a2, ")");
          return sub_971800(a2, "))");
      }
      return sub_AD9E20();
    }
    if ( v4 != 2 )
      return sub_AD9E20();
  }
  sub_971800(a2, "[[clang::swift_async_error");
  sub_AD7BA0(a2, v18);
  v12 = sub_971800(a2, "\"");
  v13 = *(_DWORD *)(a1 + 40);
  if ( v13 == 1 )
  {
    v14 = "nonnull_error";
  }
  else if ( v13 )
  {
    if ( v13 == 2 )
    {
      v14 = "zero_argument";
    }
    else
    {
      if ( v13 != 3 )
        return sub_AD9E20();
      v14 = "nonzero_argument";
    }
  }
  else
  {
    v14 = "none";
  }
  v15 = sub_971800(v12, v14);
  sub_971800(v15, "\"");
  sub_AD7BA0(a2, v18);
  v16 = sub_971800(a2, &byte_22CD811);
  v17 = sub_2257BD0(v16, *(unsigned int *)(a1 + 44));
  sub_971800(v17, &byte_22CD811);
  if ( !v18[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, "]]");
}

