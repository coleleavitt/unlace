__int64 __fastcall sub_B09A30(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  const char *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r12
  const char *v15; // rsi
  _BYTE v16[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v16[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 )
  {
    sub_995540(a2, "[[clang::annotate_type");
    sub_AFB8E0(a2, v16);
    v11 = sub_995540(a2, "\"");
    v12 = sub_9954E0(v11, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_995540(v12, "\"");
    sub_995540(a2, &byte_22F0C30);
    v13 = *(_QWORD *)(a1 + 64);
    v14 = v13 + 8LL * *(unsigned int *)(a1 + 56);
    while ( v14 != v13 )
    {
      v15 = ", ";
      if ( v16[0] )
      {
        v16[0] = 0;
        v15 = "(";
      }
      v13 += 8;
      sub_995540(a2, v15);
      sub_227B9B0(a2, *(_QWORD *)(v13 - 8));
    }
  }
  else
  {
    sub_995540(a2, "[[clang::annotate_type");
    sub_AFB8E0(a2, v16);
    v5 = sub_995540(a2, "\"");
    v6 = sub_9954E0(v5, *(const void **)(a1 + 48), *(unsigned int *)(a1 + 40));
    sub_995540(v6, "\"");
    sub_995540(a2, &byte_22F0C30);
    v7 = *(_QWORD *)(a1 + 64);
    v8 = v7 + 8LL * *(unsigned int *)(a1 + 56);
    while ( v8 != v7 )
    {
      v9 = ", ";
      if ( v16[0] )
      {
        v16[0] = 0;
        v9 = "(";
      }
      v7 += 8;
      sub_995540(a2, v9);
      sub_227B9B0(a2, *(_QWORD *)(v7 - 8));
    }
  }
  sub_995540(a2, &byte_22F0C30);
  if ( !v16[0] )
    sub_995540(a2, ")");
  return sub_995540(a2, "]]");
}
