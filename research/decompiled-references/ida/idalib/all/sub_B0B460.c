__int64 __fastcall sub_B0B460(__int64 a1, __int64 a2)
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
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  v5 = "__asm__";
  if ( !v4 )
    v5 = "asm";
  sub_995540(a2, v5);
  sub_AFB8E0(a2, v9);
  v6 = sub_995540(a2, "\"");
  v7 = sub_9954E0(v6, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
  sub_995540(v7, "\"");
  if ( !v9[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, &byte_22F0C30);
}
