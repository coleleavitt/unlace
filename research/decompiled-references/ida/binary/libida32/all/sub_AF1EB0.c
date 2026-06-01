__int64 __fastcall sub_AF1EB0(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int *v7; // rax
  size_t v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int *v13; // rax
  size_t v14; // rdx
  const char *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  unsigned int *v19; // rax
  size_t v20; // rdx
  const char *v21; // rsi
  __int64 v22; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned int *v26; // rax
  size_t v27; // rdx
  const char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  unsigned int *v32; // rax
  size_t v33; // rdx
  const char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned int *v38; // rax
  size_t v39; // rdx
  const char *v40; // rsi
  __int64 v41; // rax
  _BYTE v42[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v42[0] = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_F83A90(a1);
  else
    v4 = v3 >> 4;
  if ( v4 )
  {
    sub_971800(a2, "[[clang::objc_bridge_related");
    sub_AD7BA0(a2, v42);
    v24 = sub_971800(a2, &byte_22CD811);
    v25 = *(_QWORD *)(a1 + 40);
    if ( v25 )
    {
      v26 = *(unsigned int **)(v25 + 16);
      v27 = *v26;
      v28 = (const char *)(v26 + 4);
    }
    else
    {
      v28 = &byte_22CD811;
      v27 = j__strlen(&byte_22CD811);
    }
    v29 = sub_9717A0(v24, v28, v27);
    sub_971800(v29, &byte_22CD811);
    sub_AD7BA0(a2, v42);
    v30 = sub_971800(a2, &byte_22CD811);
    v31 = *(_QWORD *)(a1 + 48);
    if ( v31 )
    {
      v32 = *(unsigned int **)(v31 + 16);
      v33 = *v32;
      v34 = (const char *)(v32 + 4);
    }
    else
    {
      v34 = &byte_22CD811;
      v33 = j__strlen(&byte_22CD811);
    }
    v35 = sub_9717A0(v30, v34, v33);
    sub_971800(v35, &byte_22CD811);
    sub_AD7BA0(a2, v42);
    v36 = sub_971800(a2, &byte_22CD811);
    v37 = *(_QWORD *)(a1 + 56);
    if ( v37 )
    {
      v38 = *(unsigned int **)(v37 + 16);
      v39 = *v38;
      v40 = (const char *)(v38 + 4);
    }
    else
    {
      v40 = &byte_22CD811;
      v39 = j__strlen(&byte_22CD811);
    }
    v41 = sub_9717A0(v36, v40, v39);
    sub_971800(v41, &byte_22CD811);
    if ( !v42[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "]]");
  }
  else
  {
    sub_971800(a2, "__attribute__((objc_bridge_related");
    sub_AD7BA0(a2, v42);
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
    sub_AD7BA0(a2, v42);
    v11 = sub_971800(a2, &byte_22CD811);
    v12 = *(_QWORD *)(a1 + 48);
    if ( v12 )
    {
      v13 = *(unsigned int **)(v12 + 16);
      v14 = *v13;
      v15 = (const char *)(v13 + 4);
    }
    else
    {
      v15 = &byte_22CD811;
      v14 = j__strlen(&byte_22CD811);
    }
    v16 = sub_9717A0(v11, v15, v14);
    sub_971800(v16, &byte_22CD811);
    sub_AD7BA0(a2, v42);
    v17 = sub_971800(a2, &byte_22CD811);
    v18 = *(_QWORD *)(a1 + 56);
    if ( v18 )
    {
      v19 = *(unsigned int **)(v18 + 16);
      v20 = *v19;
      v21 = (const char *)(v19 + 4);
    }
    else
    {
      v21 = &byte_22CD811;
      v20 = j__strlen(&byte_22CD811);
    }
    v22 = sub_9717A0(v17, v21, v20);
    sub_971800(v22, &byte_22CD811);
    if ( !v42[0] )
      sub_971800(a2, ")");
    return sub_971800(a2, "))");
  }
}

