unsigned __int64 __fastcall sub_590A80(_QWORD *a1, const char *a2)
{
  void *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int default_encoding_idx; // eax
  void *encoding_name; // rax
  __int64 v12; // rax
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+0h] [rbp-28h]
  void *v17; // [rsp+8h] [rbp-20h]
  __int64 v18; // [rsp+10h] [rbp-18h]
  int v19; // [rsp+18h] [rbp-10h]
  __int64 v20; // [rsp+20h] [rbp-8h]

  v3 = (void *)a1[23];
  if ( v3 )
  {
    a1[24] = 0;
    qfree(v3);
    a1[23] = 0;
    a1[25] = 0;
  }
  v4 = a1[185];
  v5 = 0;
  a1[26] = 0;
  v6 = *(_QWORD *)(v4 + 112);
  if ( v6 )
  {
    while ( 1 )
    {
      a2 = haystack;
      v7 = *(_QWORD *)(v4 + 104) + 24 * v5;
      if ( *(_QWORD *)(v7 + 8) )
        a2 = *(const char **)v7;
      if ( a2 )
      {
        v8 = sub_893780(a1, a2, sub_789390);
        if ( v8 )
        {
          a2 = (const char *)v8;
          rangeset_t_add2((_DWORD)a1 + 184);
        }
      }
      if ( v6 == ++v5 )
        break;
      v4 = a1[185];
    }
  }
  else
  {
    default_encoding_idx = get_default_encoding_idx(1);
    encoding_name = (void *)get_encoding_name(default_encoding_idx);
    v12 = sub_5E4250(encoding_name, v16, v17, v18, v19, v20);
    v13 = (_QWORD *)v12;
    if ( v12 && *(_QWORD *)(v12 + 8) )
    {
      do
      {
        a2 = haystack;
        v14 = *v13 + 24 * v6;
        if ( *(_QWORD *)(v14 + 8) )
          a2 = *(const char **)v14;
        if ( a2 )
        {
          v15 = sub_893780(a1, a2, sub_789390);
          if ( v15 )
          {
            a2 = (const char *)v15;
            rangeset_t_add2((_DWORD)a1 + 184);
          }
        }
        ++v6;
      }
      while ( v6 < v13[1] );
    }
  }
  sub_5908A0(a1[175] + 48LL, a2);
  sub_5908A0(a1[175] + 144LL, a2);
  sub_5908A0(a1[175] + 336LL, a2);
  return sub_5908A0(a1[175] + 240LL, a2);
}

