__int64 __fastcall sub_AEF100(__int64 a1, __int64 a2, int a3)
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
    v6 = sub_F83A90(a1);
  else
    v6 = v5 >> 4;
  if ( v6 )
  {
    sub_971800(a2, "[[gnu::format_matches");
    sub_AD7BA0(a2, v28);
    v18 = sub_971800(a2, &byte_22CD811);
    v19 = *(_QWORD *)(a1 + 40);
    if ( v19 )
    {
      v20 = *(unsigned int **)(v19 + 16);
      v21 = *v20;
      v22 = (const char *)(v20 + 4);
    }
    else
    {
      v22 = &byte_22CD811;
      v21 = j__strlen(&byte_22CD811);
    }
    v23 = sub_9717A0(v18, v22, v21);
    sub_971800(v23, &byte_22CD811);
    sub_AD7BA0(a2, v28);
    v24 = sub_971800(a2, &byte_22CD811);
    v25 = sub_2257BF0(v24, *(int *)(a1 + 48));
    sub_971800(v25, &byte_22CD811);
    sub_AD7BA0(a2, v28);
    sub_971800(a2, &byte_22CD811);
    v26 = *(_QWORD *)(a1 + 56);
    v27 = j__strlen("\n");
    sub_EE3EC0(v26, a2, 0, a3, 0, 0, (__int64)"\n", v27);
    sub_971800(a2, &byte_22CD811);
    if ( !v28[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((format_matches");
    sub_AD7BA0(a2, v28);
    v7 = sub_971800(a2, &byte_22CD811);
    v8 = *(_QWORD *)(a1 + 40);
    if ( v8 )
    {
      v9 = *(unsigned int **)(v8 + 16);
      v10 = *v9;
      v11 = (const char *)(v9 + 4);
    }
    else
    {
      v11 = &byte_22CD811;
      v10 = j__strlen(&byte_22CD811);
    }
    v12 = sub_9717A0(v7, v11, v10);
    sub_971800(v12, &byte_22CD811);
    sub_AD7BA0(a2, v28);
    v13 = sub_971800(a2, &byte_22CD811);
    v14 = sub_2257BF0(v13, *(int *)(a1 + 48));
    sub_971800(v14, &byte_22CD811);
    sub_AD7BA0(a2, v28);
    sub_971800(a2, &byte_22CD811);
    v15 = *(_QWORD *)(a1 + 56);
    v16 = j__strlen("\n");
    sub_EE3EC0(v15, a2, 0, a3, 0, 0, (__int64)"\n", v16);
    sub_971800(a2, &byte_22CD811);
    if ( !v28[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}

