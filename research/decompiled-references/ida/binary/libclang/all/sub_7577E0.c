__int64 __fastcall sub_7577E0(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // al
  int v5; // eax
  const char *v6; // rsi
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  const char *v11; // rsi
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
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
    sub_5FF0F0(a2, "[[clang::swift_async");
    v19[0] = 0;
    sub_5FF0F0(a2, "(");
    v6 = "swift_private";
    v7 = sub_5FF0F0(a2, "\"");
    v8 = *(_DWORD *)(a1 + 36);
    if ( v8 != 1 )
    {
      v6 = "not_swift_private";
      if ( v8 != 2 )
        v6 = "none";
    }
    v9 = sub_5FF0F0(v7, v6);
    sub_5FF0F0(v9, "\"");
    if ( *(char *)(a1 + 43) >= 0
      || (sub_722380(a2, v19),
          v15 = sub_5FF0F0(a2, &byte_3B9466E),
          v16 = sub_26238A0(v15, *(_DWORD *)(a1 + 40) & 0x3FFFFFFF),
          sub_5FF0F0(v16, &byte_3B9466E),
          !v19[0]) )
    {
      sub_5FF0F0(a2, ")");
    }
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((swift_async");
    v19[0] = 0;
    sub_5FF0F0(a2, "(");
    v11 = "swift_private";
    v12 = sub_5FF0F0(a2, "\"");
    v13 = *(_DWORD *)(a1 + 36);
    if ( v13 != 1 )
    {
      v11 = "not_swift_private";
      if ( v13 != 2 )
        v11 = "none";
    }
    v14 = sub_5FF0F0(v12, v11);
    sub_5FF0F0(v14, "\"");
    if ( *(char *)(a1 + 43) >= 0
      || (sub_722380(a2, v19),
          v17 = sub_5FF0F0(a2, &byte_3B9466E),
          v18 = sub_26238A0(v17, *(_DWORD *)(a1 + 40) & 0x3FFFFFFF),
          sub_5FF0F0(v18, &byte_3B9466E),
          !v19[0]) )
    {
      sub_5FF0F0(a2, ")");
    }
    return sub_5FF0F0(a2, "))");
  }
}

