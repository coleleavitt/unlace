__int64 __fastcall sub_739A30(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  const char *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v23[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 1 || v4 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::external_source_symbol");
    v23[0] = 0;
    sub_5FF0F0(a2, "(");
    v5 = sub_5FF0F0(a2, "\"");
    v6 = sub_722320(v5, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
    sub_5FF0F0(v6, "\"");
    sub_722380(a2, v23);
    v7 = sub_5FF0F0(a2, "\"");
    v8 = sub_722320(v7, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
    sub_5FF0F0(v8, "\"");
    sub_722380(a2, v23);
    v9 = sub_5FF0F0(a2, &byte_3B9466E);
    v10 = sub_26238C0(v9, *(unsigned __int8 *)(a1 + 64));
    sub_5FF0F0(v10, &byte_3B9466E);
    sub_722380(a2, v23);
    v11 = sub_5FF0F0(a2, "\"");
    v12 = sub_722320(v11, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 68));
    sub_5FF0F0(v12, "\"");
    if ( !v23[0] )
      sub_5FF0F0(a2, ")");
    v13 = "]]";
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((external_source_symbol");
    v23[0] = 0;
    sub_5FF0F0(a2, "(");
    v15 = sub_5FF0F0(a2, "\"");
    v16 = sub_722320(v15, *(const void **)(a1 + 40), *(unsigned int *)(a1 + 36));
    sub_5FF0F0(v16, "\"");
    sub_722380(a2, v23);
    v17 = sub_5FF0F0(a2, "\"");
    v18 = sub_722320(v17, *(const void **)(a1 + 56), *(unsigned int *)(a1 + 48));
    sub_5FF0F0(v18, "\"");
    sub_722380(a2, v23);
    v19 = sub_5FF0F0(a2, &byte_3B9466E);
    v20 = sub_26238C0(v19, *(unsigned __int8 *)(a1 + 64));
    sub_5FF0F0(v20, &byte_3B9466E);
    sub_722380(a2, v23);
    v21 = sub_5FF0F0(a2, "\"");
    v22 = sub_722320(v21, *(const void **)(a1 + 72), *(unsigned int *)(a1 + 68));
    sub_5FF0F0(v22, "\"");
    if ( !v23[0] )
      sub_5FF0F0(a2, ")");
    v13 = "))";
  }
  return sub_5FF0F0(a2, v13);
}

