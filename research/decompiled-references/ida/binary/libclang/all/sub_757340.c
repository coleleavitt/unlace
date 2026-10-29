__int64 __fastcall sub_757340(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  unsigned int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  char v9; // bp
  const char *v10; // rsi
  __int64 v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // bp
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[57]; // [rsp+Fh] [rbp-39h] BYREF

  v3 = *(_BYTE *)(a1 + 30);
  v25[0] = 1;
  if ( (~v3 & 0xF0) != 0 )
    v4 = v3 >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::suppress");
    sub_5FF0F0(a2, &byte_3B9466E);
    v21 = *(_QWORD *)(a1 + 40);
    v22 = v21 + 16LL * *(unsigned int *)(a1 + 36);
    if ( v21 == v22 )
      goto LABEL_24;
    do
    {
      v21 += 16;
      sub_722380(a2, v25);
      v23 = sub_5FF0F0(a2, "\"");
      v24 = sub_722320(v23, *(const void **)(v21 - 16), *(_QWORD *)(v21 - 8));
      sub_5FF0F0(v24, "\"");
    }
    while ( v22 != v21 );
    goto LABEL_8;
  }
  if ( v4 > 2 )
  {
    sub_5FF0F0(a2, "[[clang::suppress");
    sub_5FF0F0(a2, &byte_3B9466E);
    v12 = *(_QWORD *)(a1 + 40);
    v13 = v12 + 16LL * *(unsigned int *)(a1 + 36);
    if ( v12 == v13 )
      goto LABEL_24;
    do
    {
      v12 += 16;
      sub_722380(a2, v25);
      v14 = sub_5FF0F0(a2, "\"");
      v15 = sub_722320(v14, *(const void **)(v12 - 16), *(_QWORD *)(v12 - 8));
      sub_5FF0F0(v15, "\"");
    }
    while ( v13 != v12 );
LABEL_8:
    v9 = v25[0];
    sub_5FF0F0(a2, &byte_3B9466E);
    if ( !v9 )
      sub_5FF0F0(a2, ")");
    goto LABEL_10;
  }
  if ( !v4 )
  {
    sub_5FF0F0(a2, "[[gsl::suppress");
    sub_5FF0F0(a2, &byte_3B9466E);
    v5 = *(_QWORD *)(a1 + 40);
    v6 = v5 + 16LL * *(unsigned int *)(a1 + 36);
    if ( v5 != v6 )
    {
      do
      {
        v5 += 16;
        sub_722380(a2, v25);
        v7 = sub_5FF0F0(a2, "\"");
        v8 = sub_722320(v7, *(const void **)(v5 - 16), *(_QWORD *)(v5 - 8));
        sub_5FF0F0(v8, "\"");
      }
      while ( v6 != v5 );
      goto LABEL_8;
    }
LABEL_24:
    sub_5FF0F0(a2, &byte_3B9466E);
LABEL_10:
    v10 = "]]";
    return sub_5FF0F0(a2, v10);
  }
  sub_5FF0F0(a2, "__attribute__((suppress");
  sub_5FF0F0(a2, &byte_3B9466E);
  v16 = *(_QWORD *)(a1 + 40);
  v17 = v16 + 16LL * *(unsigned int *)(a1 + 36);
  if ( v16 == v17 )
  {
    sub_5FF0F0(a2, &byte_3B9466E);
  }
  else
  {
    do
    {
      v16 += 16;
      sub_722380(a2, v25);
      v18 = sub_5FF0F0(a2, "\"");
      v19 = sub_722320(v18, *(const void **)(v16 - 16), *(_QWORD *)(v16 - 8));
      sub_5FF0F0(v19, "\"");
    }
    while ( v17 != v16 );
    v20 = v25[0];
    sub_5FF0F0(a2, &byte_3B9466E);
    if ( !v20 )
      sub_5FF0F0(a2, ")");
  }
  v10 = "))";
  return sub_5FF0F0(a2, v10);
}

