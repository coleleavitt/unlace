__int64 __fastcall sub_74A830(__int64 a1, __int64 a2)
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
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int *v14; // rdx
  size_t v15; // rsi
  const char *v16; // rdx
  size_t v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int *v21; // rdx
  size_t v22; // rsi
  const char *v23; // rdx
  size_t v24; // rcx
  __int64 v25; // rax
  const char *v26; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int *v30; // rdx
  size_t v31; // rsi
  const char *v32; // rdx
  size_t v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int *v37; // rdx
  size_t v38; // rsi
  const char *v39; // rdx
  size_t v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned int *v44; // rdx
  size_t v45; // rsi
  const char *v46; // rdx
  size_t v47; // rcx
  __int64 v48; // rax
  _BYTE v49[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v49[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 1 || v4 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::objc_bridge_related");
    v49[0] = 0;
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
    sub_722380(a2, v49);
    v12 = sub_5FF0F0(a2, &byte_3B9466E);
    v13 = *(_QWORD *)(a1 + 48);
    if ( v13 )
    {
      v14 = *(unsigned int **)(v13 + 16);
      v15 = *v14;
      v16 = (const char *)(v14 + 4);
      v17 = v15;
    }
    else
    {
      v16 = &byte_3B9466E;
      v17 = 0;
    }
    v18 = sub_722320(v12, v16, v17);
    sub_5FF0F0(v18, &byte_3B9466E);
    sub_722380(a2, v49);
    v19 = sub_5FF0F0(a2, &byte_3B9466E);
    v20 = *(_QWORD *)(a1 + 56);
    if ( v20 )
    {
      v21 = *(unsigned int **)(v20 + 16);
      v22 = *v21;
      v23 = (const char *)(v21 + 4);
      v24 = v22;
    }
    else
    {
      v23 = &byte_3B9466E;
      v24 = 0;
    }
    v25 = sub_722320(v19, v23, v24);
    sub_5FF0F0(v25, &byte_3B9466E);
    if ( !v49[0] )
      sub_5FF0F0(a2, ")");
    v26 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((objc_bridge_related");
    v49[0] = 0;
    sub_5FF0F0(a2, "(");
    v28 = sub_5FF0F0(a2, &byte_3B9466E);
    v29 = *(_QWORD *)(a1 + 40);
    if ( v29 )
    {
      v30 = *(unsigned int **)(v29 + 16);
      v31 = *v30;
      v32 = (const char *)(v30 + 4);
      v33 = v31;
    }
    else
    {
      v32 = &byte_3B9466E;
      v33 = 0;
    }
    v34 = sub_722320(v28, v32, v33);
    sub_5FF0F0(v34, &byte_3B9466E);
    sub_722380(a2, v49);
    v35 = sub_5FF0F0(a2, &byte_3B9466E);
    v36 = *(_QWORD *)(a1 + 48);
    if ( v36 )
    {
      v37 = *(unsigned int **)(v36 + 16);
      v38 = *v37;
      v39 = (const char *)(v37 + 4);
      v40 = v38;
    }
    else
    {
      v39 = &byte_3B9466E;
      v40 = 0;
    }
    v41 = sub_722320(v35, v39, v40);
    sub_5FF0F0(v41, &byte_3B9466E);
    sub_722380(a2, v49);
    v42 = sub_5FF0F0(a2, &byte_3B9466E);
    v43 = *(_QWORD *)(a1 + 56);
    if ( v43 )
    {
      v44 = *(unsigned int **)(v43 + 16);
      v45 = *v44;
      v46 = (const char *)(v44 + 4);
      v47 = v45;
    }
    else
    {
      v46 = &byte_3B9466E;
      v47 = 0;
    }
    v48 = sub_722320(v42, v46, v47);
    sub_5FF0F0(v48, &byte_3B9466E);
    if ( !v49[0] )
      sub_5FF0F0(a2, ")");
    v26 = "))";
  }
  return sub_5FF0F0(a2, v26);
}

