__int64 __fastcall sub_AE6730(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int *v7; // rax
  size_t v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned int *v14; // rax
  size_t v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rax
  _BYTE v18[25]; // [rsp+Fh] [rbp-19h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v18[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  if ( v4 )
  {
    sub_971800(a2, "[[clang::__clang_arm_builtin_alias");
    sub_AD7BA0(a2, v18);
    v12 = sub_971800(a2, &byte_22CD811);
    v13 = *(_QWORD *)(a1 + 40);
    if ( v13 )
    {
      v14 = *(unsigned int **)(v13 + 16);
      v15 = *v14;
      v16 = (const char *)(v14 + 4);
    }
    else
    {
      v16 = &byte_22CD811;
      v15 = j__strlen(&byte_22CD811);
    }
    v17 = sub_9717A0(v12, v16, v15);
    sub_971800(v17, &byte_22CD811);
    if ( !v18[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((__clang_arm_builtin_alias");
    sub_AD7BA0(a2, v18);
    v5 = sub_971800(a2, &byte_22CD811);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v7 = *(unsigned int **)(v6 + 16);
      v8 = *v7;
      v9 = (const char *)(v7 + 4);
    }
    else
    {
      v9 = &byte_22CD811;
      v8 = j__strlen(&byte_22CD811);
    }
    v10 = sub_9717A0(v5, v9, v8);
    sub_971800(v10, &byte_22CD811);
    if ( !v18[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}

