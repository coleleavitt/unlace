unsigned __int64 __fastcall sub_5AAC40(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  const char *v6; // rsi
  __int64 v7; // rax
  unsigned int default_encoding_idx; // eax
  void *encoding_name; // rax
  __int64 v11; // rax
  _QWORD *v12; // r13
  const char *v13; // rsi
  __int64 v14; // rax
  int v15; // [rsp+0h] [rbp-28h]
  void *v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  int v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  v2 = (void *)a1[23];
  if ( v2 )
  {
    a1[24] = 0;
    qfree(v2);
    a1[23] = 0;
    a1[25] = 0;
  }
  v3 = a1[209];
  v4 = 0;
  a1[26] = 0;
  v5 = *(_QWORD *)(v3 + 120);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = haystack;
      v7 = *(_QWORD *)(v3 + 112) + 24 * v4;
      if ( *(_QWORD *)(v7 + 8) )
        v6 = *(const char **)v7;
      if ( v6 && sub_8B7120(a1, v6, sub_7A9730) )
        rangeset_t_add2((_DWORD)a1 + 184);
      if ( v5 == ++v4 )
        break;
      v3 = a1[209];
    }
  }
  else
  {
    default_encoding_idx = get_default_encoding_idx(1);
    encoding_name = (void *)get_encoding_name(default_encoding_idx);
    v11 = sub_600110(encoding_name, v15, v16, v17, v18, v19);
    v12 = (_QWORD *)v11;
    if ( v11 && *(_QWORD *)(v11 + 8) )
    {
      do
      {
        v13 = haystack;
        v14 = *v12 + 24 * v5;
        if ( *(_QWORD *)(v14 + 8) )
          v13 = *(const char **)v14;
        if ( v13 && sub_8B7120(a1, v13, sub_7A9730) )
          rangeset_t_add2((_DWORD)a1 + 184);
        ++v5;
      }
      while ( v5 < v12[1] );
    }
  }
  sub_5AAA60(a1[199] + 48LL);
  sub_5AAA60(a1[199] + 144LL);
  sub_5AAA60(a1[199] + 336LL);
  return sub_5AAA60(a1[199] + 240LL);
}
