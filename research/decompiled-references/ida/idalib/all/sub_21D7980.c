void *__fastcall sub_21D7980(__int64 a1)
{
  _BYTE *v1; // rbx
  _BYTE *v2; // rax
  size_t v3; // r13
  void *v4; // rbp
  size_t v6; // rax
  void *v7; // rax
  char v8; // dl
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // dl
  void *v13; // rax
  char v14; // [rsp+Fh] [rbp-E9h]
  __int64 v15; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v17[184]; // [rsp+40h] [rbp-B8h] BYREF

  v1 = *(_BYTE **)a1;
  v2 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v2 )
    return nullptr;
  v3 = 0;
  if ( (unsigned __int8)(*v1 - 48) > 9u )
    return nullptr;
  do
  {
    *(_QWORD *)a1 = ++v1;
    v3 = (char)*(v1 - 1) - 48 + 10 * v3;
  }
  while ( v2 != v1 && (unsigned __int8)(*v1 - 48) <= 9u );
  if ( v2 - v1 < v3 || !v3 )
    return nullptr;
  *(_QWORD *)a1 = &v1[v3];
  v6 = j__strlen("_GLOBAL__N");
  if ( sub_20D1BF0(v3, v1, v6, "_GLOBAL__N") )
  {
    v7 = (void *)sub_21D40E0((__int64 *)(a1 + 808), *(_BYTE *)(a1 + 937), "(anonymous namespace)");
    v4 = v7;
    if ( !v8 )
    {
      if ( !v7 )
        return v4;
      ptr[0] = v7;
      v9 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
      if ( !v9 )
        goto LABEL_26;
      goto LABEL_24;
    }
LABEL_19:
    *(_QWORD *)(a1 + 920) = v4;
    return v4;
  }
  v14 = *(_BYTE *)(a1 + 937);
  ptr[1] = (void *)0x2000000000LL;
  ptr[0] = v17;
  sub_9B7040((__int64)ptr, 8);
  sub_21CFFC0((__int64)ptr);
  sub_2222BB0(ptr, v1, v3);
  v10 = sub_2223360(a1 + 904, ptr, &v15, off_2BE9FD0);
  v4 = (void *)v10;
  if ( !v10 )
  {
    if ( v14 )
    {
      v11 = sub_21D40A0((__int64 *)(a1 + 808), 40, 3u);
      *(_WORD *)(v11 + 16) = 16392;
      v12 = *(_BYTE *)(v11 + 18);
      v4 = (void *)(v11 + 8);
      *(_QWORD *)v11 = 0;
      *(_QWORD *)(v11 + 24) = v3;
      *(_QWORD *)(v11 + 32) = v1;
      *(_BYTE *)(v11 + 18) = v12 & 0xF0 | 5;
      *(_QWORD *)(v11 + 8) = off_2BE68A0;
      sub_2223210(a1 + 904, v11, v15, off_2BE9FD0);
    }
    if ( ptr[0] != v17 )
      free(ptr[0]);
    goto LABEL_19;
  }
  v4 = (void *)(v10 + 8);
  if ( ptr[0] != v17 )
    free(ptr[0]);
  if ( v4 )
  {
    ptr[0] = v4;
    v9 = sub_21D4F30(a1 + 944, (__int64 *)ptr);
    if ( !v9 )
    {
LABEL_26:
      if ( *(void **)(a1 + 928) == v4 )
        *(_BYTE *)(a1 + 936) = 1;
      return v4;
    }
LABEL_24:
    v13 = (void *)v9[1];
    if ( v13 )
      v4 = v13;
    goto LABEL_26;
  }
  return v4;
}
