__int64 __fastcall sub_AEAF30(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  int v6; // eax
  const char *v7; // rsi
  __int64 v8; // r12
  size_t v9; // rax
  __int64 v11; // r12
  size_t v12; // rax
  _BYTE v13[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = *(_BYTE *)(a1 + 34);
  v13[0] = 1;
  if ( (v5 & 0xF0) == 0xF0 )
    v6 = sub_F83A90(a1);
  else
    v6 = v5 >> 4;
  if ( v6 == 1 )
  {
    sub_971800(a2, "__attribute__((assume");
    sub_AD7BA0(a2, v13);
    sub_971800(a2, &byte_22CD811);
    v11 = *(_QWORD *)(a1 + 40);
    v12 = j__strlen("\n");
    sub_EE3EC0(v11, a2, 0, a3, 0, 0, (__int64)"\n", v12);
    sub_971800(a2, &byte_22CD811);
    if ( !v13[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
  else
  {
    if ( v6 )
      v7 = "[[clang::assume";
    else
      v7 = "[[assume";
    sub_971800(a2, v7);
    sub_AD7BA0(a2, v13);
    sub_971800(a2, &byte_22CD811);
    v8 = *(_QWORD *)(a1 + 40);
    v9 = j__strlen("\n");
    sub_EE3EC0(v8, a2, 0, a3, 0, 0, (__int64)"\n", v9);
    sub_971800(a2, &byte_22CD811);
    if ( !v13[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
}

