__int64 __fastcall sub_73A7B0(__int64 a1, __int64 a2)
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
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int *v20; // rdx
  size_t v21; // rsi
  const char *v22; // rdx
  size_t v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v29[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 1 || v4 == 2 )
  {
    sub_5FF0F0(a2, "[[gnu::format");
    v29[0] = 0;
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
    sub_722380(a2, v29);
    v12 = sub_5FF0F0(a2, &byte_3B9466E);
    v13 = sub_26238C0(v12, *(int *)(a1 + 48));
    sub_5FF0F0(v13, &byte_3B9466E);
    sub_722380(a2, v29);
    v14 = sub_5FF0F0(a2, &byte_3B9466E);
    v15 = sub_26238C0(v14, *(int *)(a1 + 52));
    sub_5FF0F0(v15, &byte_3B9466E);
    if ( !v29[0] )
      sub_5FF0F0(a2, ")");
    v16 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((format");
    v29[0] = 0;
    sub_5FF0F0(a2, "(");
    v18 = sub_5FF0F0(a2, &byte_3B9466E);
    v19 = *(_QWORD *)(a1 + 40);
    if ( v19 )
    {
      v20 = *(unsigned int **)(v19 + 16);
      v21 = *v20;
      v22 = (const char *)(v20 + 4);
      v23 = v21;
    }
    else
    {
      v22 = &byte_3B9466E;
      v23 = 0;
    }
    v24 = sub_722320(v18, v22, v23);
    sub_5FF0F0(v24, &byte_3B9466E);
    sub_722380(a2, v29);
    v25 = sub_5FF0F0(a2, &byte_3B9466E);
    v26 = sub_26238C0(v25, *(int *)(a1 + 48));
    sub_5FF0F0(v26, &byte_3B9466E);
    sub_722380(a2, v29);
    v27 = sub_5FF0F0(a2, &byte_3B9466E);
    v28 = sub_26238C0(v27, *(int *)(a1 + 52));
    sub_5FF0F0(v28, &byte_3B9466E);
    if ( !v29[0] )
      sub_5FF0F0(a2, ")");
    v16 = "))";
  }
  return sub_5FF0F0(a2, v16);
}

