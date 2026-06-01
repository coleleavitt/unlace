__int64 __fastcall sub_AFBFA0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _BYTE v9[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v9[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_995540(a2, "[[gnu::weakref");
    sub_AFB8E0(a2, v9);
    v7 = sub_995540(a2, "\"");
    v8 = sub_9954E0(v7, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_995540(v8, "\"");
    if ( !v9[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((weakref");
    sub_AFB8E0(a2, v9);
    v4 = sub_995540(a2, "\"");
    v5 = sub_9954E0(v4, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_995540(v5, "\"");
    if ( !v9[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
