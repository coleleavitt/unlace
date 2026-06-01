__int64 __fastcall sub_75C700(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rdx
  size_t v8; // rsi
  const char *v9; // rdx
  size_t v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int *v22; // rdx
  size_t v23; // rsi
  const char *v24; // rdx
  size_t v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  char v33; // [rsp+7h] [rbp-61h] BYREF
  __int64 v34; // [rsp+8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+10h] [rbp-58h] BYREF
  __int64 v36; // [rsp+18h] [rbp-50h]

  v3 = *(_BYTE *)(a1 + 30);
  v33 = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 1 || v4 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::type_tag_for_datatype");
    v33 = 0;
    sub_5FF0F0(a2, "(");
    v5 = sub_5FF0F0(a2, &byte_3B9466E);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      v7 = *(unsigned int **)(v6 + 16);
      v8 = *v7;
      v9 = (const char *)(v7 + 4);
      v10 = v8;
    }
    else
    {
      v9 = &byte_3B9466E;
      v10 = 0;
    }
    v11 = sub_722320(v5, v9, v10);
    sub_5FF0F0(v11, &byte_3B9466E);
    sub_722380(a2, &v33);
    v12 = sub_5FF0F0(a2, &byte_3B9466E);
    v34 = **(_QWORD **)(a1 + 48);
    sub_B2ACF0(&v35, &v34);
    v13 = sub_26240F0(v12, v35, v36);
    sub_5FF0F0(v13, &byte_3B9466E);
    std::string::_M_dispose();
    sub_722380(a2, &v33);
    v14 = sub_5FF0F0(a2, &byte_3B9466E);
    v15 = sub_26238C0(v14, *(unsigned __int8 *)(a1 + 56));
    sub_5FF0F0(v15, &byte_3B9466E);
    sub_722380(a2, &v33);
    v16 = sub_5FF0F0(a2, &byte_3B9466E);
    v17 = sub_26238C0(v16, *(unsigned __int8 *)(a1 + 57));
    sub_5FF0F0(v17, &byte_3B9466E);
    if ( !v33 )
      sub_5FF0F0(a2, ")");
    v18 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((type_tag_for_datatype");
    v33 = 0;
    sub_5FF0F0(a2, "(");
    v20 = sub_5FF0F0(a2, &byte_3B9466E);
    v21 = *(_QWORD *)(a1 + 40);
    if ( v21 )
    {
      v22 = *(unsigned int **)(v21 + 16);
      v23 = *v22;
      v24 = (const char *)(v22 + 4);
      v25 = v23;
    }
    else
    {
      v24 = &byte_3B9466E;
      v25 = 0;
    }
    v26 = sub_722320(v20, v24, v25);
    sub_5FF0F0(v26, &byte_3B9466E);
    sub_722380(a2, &v33);
    v27 = sub_5FF0F0(a2, &byte_3B9466E);
    v34 = **(_QWORD **)(a1 + 48);
    sub_B2ACF0(&v35, &v34);
    v28 = sub_26240F0(v27, v35, v36);
    sub_5FF0F0(v28, &byte_3B9466E);
    std::string::_M_dispose();
    sub_722380(a2, &v33);
    v29 = sub_5FF0F0(a2, &byte_3B9466E);
    v30 = sub_26238C0(v29, *(unsigned __int8 *)(a1 + 56));
    sub_5FF0F0(v30, &byte_3B9466E);
    sub_722380(a2, &v33);
    v31 = sub_5FF0F0(a2, &byte_3B9466E);
    v32 = sub_26238C0(v31, *(unsigned __int8 *)(a1 + 57));
    sub_5FF0F0(v32, &byte_3B9466E);
    if ( !v33 )
      sub_5FF0F0(a2, ")");
    v18 = "))";
  }
  return sub_5FF0F0(a2, v18);
}

