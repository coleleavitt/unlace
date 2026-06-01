__int64 __fastcall sub_B12E40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 v5; // al
  int v6; // eax
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int *v9; // rax
  size_t v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  size_t v16; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned int *v20; // rax
  size_t v21; // rdx
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  size_t v27; // rax
  _BYTE v28[41]; // [rsp+Fh] [rbp-29h] BYREF

  v5 = *(_BYTE *)(a1 + 34);
  v28[0] = 1;
  if ( (v5 & 0xF0) == 0xF0 )
    v6 = sub_FA77D0(a1);
  else
    v6 = v5 >> 4;
  if ( v6 )
  {
    sub_995540(a2, "[[gnu::format_matches");
    sub_AFB8E0(a2, v28);
    v18 = sub_995540(a2, &byte_22F0C30);
    v19 = *(_QWORD *)(a1 + 40);
    if ( v19 )
    {
      v20 = *(unsigned int **)(v19 + 16);
      v21 = *v20;
      v22 = (const char *)(v20 + 4);
    }
    else
    {
      v22 = &byte_22F0C30;
      v21 = j__strlen(&byte_22F0C30);
    }
    v23 = sub_9954E0(v18, v22, v21);
    sub_995540(v23, &byte_22F0C30);
    sub_AFB8E0(a2, v28);
    v24 = sub_995540(a2, &byte_22F0C30);
    v25 = sub_227B930(v24, *(int *)(a1 + 48));
    sub_995540(v25, &byte_22F0C30);
    sub_AFB8E0(a2, v28);
    sub_995540(a2, &byte_22F0C30);
    v26 = *(_QWORD *)(a1 + 56);
    v27 = j__strlen("\n");
    sub_F07C00(v26, a2, 0, a3, 0, 0, (__int64)"\n", v27);
    sub_995540(a2, &byte_22F0C30);
    if ( !v28[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((format_matches");
    sub_AFB8E0(a2, v28);
    v7 = sub_995540(a2, &byte_22F0C30);
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      v9 = *(unsigned int **)(v8 + 16);
      v10 = *v9;
      v11 = (const char *)(v9 + 4);
    }
    else
    {
      v11 = &byte_22F0C30;
      v10 = j__strlen(&byte_22F0C30);
    }
    v12 = sub_9954E0(v7, v11, v10);
    sub_995540(v12, &byte_22F0C30);
    sub_AFB8E0(a2, v28);
    v13 = sub_995540(a2, &byte_22F0C30);
    v14 = sub_227B930(v13, *(int *)(a1 + 48));
    sub_995540(v14, &byte_22F0C30);
    sub_AFB8E0(a2, v28);
    sub_995540(a2, &byte_22F0C30);
    v15 = *(_QWORD *)(a1 + 56);
    v16 = j__strlen("\n");
    sub_F07C00(v15, a2, 0, a3, 0, 0, (__int64)"\n", v16);
    sub_995540(a2, &byte_22F0C30);
    if ( !v28[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
