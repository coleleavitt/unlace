unsigned __int64 __fastcall sub_5CF7D0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  char v6; // r13
  __int64 v7; // rbx
  _BYTE *v8; // rbp
  const char *v9; // r13
  __int64 v10; // rax
  __int64 *i; // r15
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // r9
  _BYTE *v16; // r13
  void *v17; // rbp
  __int64 v18; // rbx
  size_t v19; // r13
  int v20; // eax
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h]
  __int64 v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2 )
    return v25 - __readfsqword(0x28u);
  v3 = v2[1];
  if ( v3 <= 1 )
    return v25 - __readfsqword(0x28u);
  v4 = *v2;
  if ( !*(_QWORD *)(*v2 + 8LL) )
  {
LABEL_17:
    v23 = 1;
    for ( i = (__int64 *)(*v2 + 88LL); ; i += 11 )
    {
      v13 = i[1];
      if ( v13 )
        break;
LABEL_28:
      if ( ++v23 == v3 )
        return v25 - __readfsqword(0x28u);
    }
    v14 = *i;
    v15 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 24) )
      {
        v16 = *(_BYTE **)(v14 + 16);
        if ( *v16 == 126 )
          break;
        v22 = v15;
        v21 = v13;
        v20 = strncmp(*(const char **)(v14 + 16), "dtr_", 4u);
        v13 = v21;
        v15 = v22;
        if ( !v20 )
          break;
      }
      ++v15;
      v14 += 128;
      if ( v13 == v15 )
        goto LABEL_28;
    }
    v17 = nullptr;
    sub_5CF660(a1, v16);
    v18 = *(_QWORD *)v4 + (*(_QWORD *)(v4 + 8) << 7) - 128LL;
    sub_5C9E80(a2, (_QWORD *)v18, *(const char **)(a1 + 24));
    v19 = *(_QWORD *)(v18 + 24);
    if ( v19 )
    {
      v17 = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 24), (const char *)v18);
      memcpy(v17, *(const void **)(v18 + 16), v19);
    }
    v24 = 0;
    copy_tinfo_t(&v24);
    sub_5CF660(a1, v17);
    clear_tinfo_t(&v24);
    if ( v17 )
      qfree(v17);
    return v25 - __readfsqword(0x28u);
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *(_QWORD *)v4 + (v5 << 7);
    if ( !*(_QWORD *)(v7 + 24) )
      goto LABEL_6;
    v8 = *(_BYTE **)(v7 + 16);
    if ( *v8 == 126 )
    {
      v9 = *(const char **)(a1 + 24);
      v10 = 1;
    }
    else
    {
      if ( strncmp(*(const char **)(v7 + 16), "dtr_", 4u) )
        goto LABEL_6;
      v9 = *(const char **)(a1 + 24);
      v10 = 4;
    }
    if ( strcmp(&v8[v10], v9) )
    {
      sub_5C9E80(a2, (_QWORD *)v7, v9);
      *(_BYTE *)(v4 + 80) = 1;
    }
    v6 = 1;
LABEL_6:
    ++v5;
  }
  while ( v5 < *(_QWORD *)(v4 + 8) );
  if ( !v6 )
  {
    v2 = *(_QWORD **)(a1 + 8);
    v3 = v2[1];
    if ( v3 > 1 )
      goto LABEL_17;
  }
  return v25 - __readfsqword(0x28u);
}

