__int64 __fastcall sub_757DF0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  int v5; // eax
  const char *v6; // rsi
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  const char *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[25]; // [rsp+Fh] [rbp-19h] BYREF

  v4 = *(_BYTE *)(a1 + 30);
  v19[0] = 1;
  if ( (~v4 & 0xF0) != 0 )
    v5 = v4 >> 4;
  else
    v5 = sub_C4A760(a1);
  if ( v5 == 1 || v5 == 2 )
  {
    sub_5FF0F0(a2, "[[clang::swift_async_error");
    v19[0] = 0;
    sub_5FF0F0(a2, "(");
    v6 = "zero_argument";
    v7 = sub_5FF0F0(a2, "\"");
    v8 = *(_DWORD *)(a1 + 36);
    if ( v8 != 2 )
    {
      v6 = "nonzero_argument";
      if ( v8 <= 2 )
      {
        v6 = "none";
        if ( v8 )
          v6 = "nonnull_error";
      }
    }
    v9 = sub_5FF0F0(v7, v6);
    sub_5FF0F0(v9, "\"");
    sub_722380(a2, v19);
    v10 = sub_5FF0F0(a2, &byte_3B9466E);
    v11 = sub_26238A0(v10, *(unsigned int *)(a1 + 40));
    sub_5FF0F0(v11, &byte_3B9466E);
    if ( !v19[0] )
      sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((swift_async_error");
    v19[0] = 0;
    sub_5FF0F0(a2, "(");
    v13 = "zero_argument";
    v14 = sub_5FF0F0(a2, "\"");
    v15 = *(_DWORD *)(a1 + 36);
    if ( v15 != 2 )
    {
      v13 = "nonzero_argument";
      if ( v15 <= 2 )
      {
        v13 = "none";
        if ( v15 )
          v13 = "nonnull_error";
      }
    }
    v16 = sub_5FF0F0(v14, v13);
    sub_5FF0F0(v16, "\"");
    sub_722380(a2, v19);
    v17 = sub_5FF0F0(a2, &byte_3B9466E);
    v18 = sub_26238A0(v17, *(unsigned int *)(a1 + 40));
    sub_5FF0F0(v18, &byte_3B9466E);
    if ( !v19[0] )
      sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

