__int64 __fastcall sub_AE7720(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  const char *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  char v9[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v9[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  v5 = "__asm__";
  if ( !v4 )
    v5 = "asm";
  sub_971800(a2, v5);
  sub_AD7BA0(a2, v9);
  v6 = sub_971800(a2, "\"");
  v7 = sub_9717A0(v6, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
  sub_971800(v7, "\"");
  if ( !v9[0] )
    sub_971800(a2, ")");
  return sub_971800(a2, &byte_22CD811);
}

