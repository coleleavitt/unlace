__int64 __fastcall sub_ADA9B0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _BYTE v11[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v11[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_F83A90(a1);
  else
    v3 = v2 >> 4;
  if ( v3 == 1 )
  {
LABEL_6:
    sub_971800(a2, "[[gnu::section");
    sub_AD7BA0(a2, v11);
    v4 = sub_971800(a2, "\"");
    v5 = sub_9717A0(v4, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_971800(v5, "\"");
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  if ( v3 )
  {
    if ( v3 == 2 )
      goto LABEL_6;
    sub_971800(a2, "__declspec(allocate");
    sub_AD7BA0(a2, v11);
    v7 = sub_971800(a2, "\"");
    v8 = sub_9717A0(v7, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_971800(v8, "\"");
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, ")");
  }
  else
  {
    sub_971800(a2, "__attribute__((section");
    sub_AD7BA0(a2, v11);
    v9 = sub_971800(a2, "\"");
    v10 = sub_9717A0(v9, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_971800(v10, "\"");
    if ( !v11[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}

