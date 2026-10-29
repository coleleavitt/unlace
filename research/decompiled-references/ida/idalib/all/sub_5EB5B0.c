unsigned __int64 __fastcall sub_5EB5B0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // r13
  __int64 *v4; // r12
  unsigned __int64 v5; // r15
  char v6; // r14
  __int64 v7; // rbx
  _BYTE *v8; // r13
  const char *v9; // r14
  __int64 v10; // rax
  __int64 *i; // r15
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  _BYTE *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // r12
  __int64 v20; // rbx
  size_t v21; // r13
  int v22; // eax
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2 )
    return v27 - __readfsqword(0x28u);
  v3 = v2[1];
  if ( v3 <= 1 )
    return v27 - __readfsqword(0x28u);
  v4 = (__int64 *)*v2;
  if ( !*(_QWORD *)(*v2 + 8LL) )
  {
LABEL_17:
    v25 = 1;
    for ( i = (__int64 *)(*v2 + 88LL); ; i += 11 )
    {
      v13 = i[1];
      if ( v13 )
        break;
LABEL_28:
      if ( ++v25 == v3 )
        return v27 - __readfsqword(0x28u);
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
        v24 = v15;
        v23 = v13;
        v22 = strncmp(*(const char **)(v14 + 16), "dtr_", 4u);
        v13 = v23;
        v15 = v24;
        if ( !v22 )
          break;
      }
      ++v15;
      v14 += 144;
      if ( v13 == v15 )
        goto LABEL_28;
    }
    sub_5EB430(a1, v16);
    v17 = v4[1];
    v18 = *v4;
    v19 = nullptr;
    v20 = v18 + 144 * v17 - 144;
    sub_5E5C30(a2, (_QWORD *)v20, *(const char **)(a1 + 24));
    v21 = *(_QWORD *)(v20 + 24);
    if ( v21 )
    {
      v19 = (void *)qalloc_or_throw(*(_QWORD *)(v20 + 24));
      memcpy(v19, *(const void **)(v20 + 16), v21);
    }
    v26 = 0;
    copy_tinfo_t(&v26);
    sub_5EB430(a1, v19);
    clear_tinfo_t(&v26);
    if ( v19 )
      qfree(v19);
    return v27 - __readfsqword(0x28u);
  }
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *v4 + 144 * v5;
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
      sub_5E5C30(a2, (_QWORD *)v7, v9);
      *((_BYTE *)v4 + 80) = 1;
    }
    v6 = 1;
LABEL_6:
    ++v5;
  }
  while ( v5 < v4[1] );
  if ( !v6 )
  {
    v2 = *(_QWORD **)(a1 + 8);
    v3 = v2[1];
    if ( v3 > 1 )
      goto LABEL_17;
  }
  return v27 - __readfsqword(0x28u);
}
