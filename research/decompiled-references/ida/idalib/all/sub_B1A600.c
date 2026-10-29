__int64 __fastcall sub_B1A600(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int *v7; // rax
  size_t v8; // rdx
  const char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rax
  size_t v21; // rdx
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // [rsp+7h] [rbp-51h] BYREF
  __int64 v31; // [rsp+8h] [rbp-50h] BYREF
  void *v32; // [rsp+10h] [rbp-48h] BYREF
  __int64 v33; // [rsp+18h] [rbp-40h]
  _BYTE v34[56]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_BYTE *)(a1 + 34);
  v30 = 1;
  if ( (v3 & 0xF0) == 0xF0 )
    v4 = sub_FA77D0(a1);
  else
    v4 = v3 >> 4;
  if ( v4 )
  {
    sub_995540(a2, "[[clang::type_tag_for_datatype");
    sub_AFB8E0(a2, &v30);
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
    sub_AFB8E0(a2, &v30);
    v24 = sub_995540(a2, &byte_22F0C30);
    v31 = **(_QWORD **)(a1 + 48);
    sub_F78400(&v32, &v31);
    v25 = sub_227BF10(v24, v32, v33);
    sub_995540(v25, &byte_22F0C30);
    if ( v32 != v34 )
      operator delete(v32);
    sub_AFB8E0(a2, &v30);
    v26 = sub_995540(a2, &byte_22F0C30);
    v27 = sub_227B930(v26, *(unsigned __int8 *)(a1 + 56));
    sub_995540(v27, &byte_22F0C30);
    sub_AFB8E0(a2, &v30);
    v28 = sub_995540(a2, &byte_22F0C30);
    v29 = sub_227B930(v28, *(unsigned __int8 *)(a1 + 57));
    sub_995540(v29, &byte_22F0C30);
    if ( !v30 )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((type_tag_for_datatype");
    sub_AFB8E0(a2, &v30);
    v5 = sub_995540(a2, &byte_22F0C30);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v7 = *(unsigned int **)(v6 + 16);
      v8 = *v7;
      v9 = (const char *)(v7 + 4);
    }
    else
    {
      v9 = &byte_22F0C30;
      v8 = j__strlen(&byte_22F0C30);
    }
    v10 = sub_9954E0(v5, v9, v8);
    sub_995540(v10, &byte_22F0C30);
    sub_AFB8E0(a2, &v30);
    v11 = sub_995540(a2, &byte_22F0C30);
    v31 = **(_QWORD **)(a1 + 48);
    sub_F78400(&v32, &v31);
    v12 = sub_227BF10(v11, v32, v33);
    sub_995540(v12, &byte_22F0C30);
    if ( v32 != v34 )
      operator delete(v32);
    sub_AFB8E0(a2, &v30);
    v13 = sub_995540(a2, &byte_22F0C30);
    v14 = sub_227B930(v13, *(unsigned __int8 *)(a1 + 56));
    sub_995540(v14, &byte_22F0C30);
    sub_AFB8E0(a2, &v30);
    v15 = sub_995540(a2, &byte_22F0C30);
    v16 = sub_227B930(v15, *(unsigned __int8 *)(a1 + 57));
    sub_995540(v16, &byte_22F0C30);
    if ( !v30 )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
