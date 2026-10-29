__int64 __fastcall sub_727FF0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 30);
  v13[0] = 1;
  if ( (~v2 & 0xF0) != 0 )
    v3 = v2 >> 4;
  else
    v3 = sub_C4A760(a1);
  if ( v3 == 1 || v3 == 2 )
  {
    sub_5FF0F0(a2, "[[gnu::alloc_size");
    v13[0] = 0;
    sub_5FF0F0(a2, "(");
    v4 = sub_5FF0F0(a2, &byte_3B9466E);
    v5 = sub_26238A0(v4, *(_DWORD *)(a1 + 36) & 0x3FFFFFFF);
    sub_5FF0F0(v5, &byte_3B9466E);
    if ( *(char *)(a1 + 43) >= 0
      || (sub_722380(a2, v13),
          v9 = sub_5FF0F0(a2, &byte_3B9466E),
          v10 = sub_26238A0(v9, *(_DWORD *)(a1 + 40) & 0x3FFFFFFF),
          sub_5FF0F0(v10, &byte_3B9466E),
          !v13[0]) )
    {
      sub_5FF0F0(a2, ")");
    }
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((alloc_size");
    v13[0] = 0;
    sub_5FF0F0(a2, "(");
    v7 = sub_5FF0F0(a2, &byte_3B9466E);
    v8 = sub_26238A0(v7, *(_DWORD *)(a1 + 36) & 0x3FFFFFFF);
    sub_5FF0F0(v8, &byte_3B9466E);
    if ( *(char *)(a1 + 43) >= 0
      || (sub_722380(a2, v13),
          v11 = sub_5FF0F0(a2, &byte_3B9466E),
          v12 = sub_26238A0(v11, *(_DWORD *)(a1 + 40) & 0x3FFFFFFF),
          sub_5FF0F0(v12, &byte_3B9466E),
          !v13[0]) )
    {
      sub_5FF0F0(a2, ")");
    }
    return sub_5FF0F0(a2, "))");
  }
}

