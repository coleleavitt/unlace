__int64 __fastcall sub_AEEA70(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE v12[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v12[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  switch ( v4 )
  {
    case 0:
      v9 = "__attribute__((error";
      goto LABEL_11;
    case 1:
    case 2:
      v5 = "[[gnu::error";
      goto LABEL_5;
    case 3:
      v9 = "__attribute__((warning";
LABEL_11:
      sub_971800(a2, v9);
      sub_AD7BA0(a2, v12);
      v10 = sub_971800(a2, "\"");
      v11 = sub_9717A0(v10, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_971800(v11, "\"");
      if ( !v12[0] )
        sub_971800(a2, ")");
      return sub_971800(a2, "))");
    case 4:
    case 5:
      v5 = "[[gnu::warning";
LABEL_5:
      sub_971800(a2, v5);
      sub_AD7BA0(a2, v12);
      v6 = sub_971800(a2, "\"");
      v7 = sub_9717A0(v6, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
      sub_971800(v7, "\"");
      if ( !v12[0] )
        sub_971800(a2, ")");
      return sub_971800(a2, "]]");
  }
}

