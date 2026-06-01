__int64 __fastcall sub_4C5920(__int64 a1, unsigned int a2, const char *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // r12
  const char *v12; // rsi
  __int64 v13; // rax
  const char *v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  char *v18; // rdi
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  unsigned __int8 v26; // bp
  __int64 v27; // r13
  const char *v28; // rsi
  __int64 v29; // rdx
  size_t v30; // rbx
  void *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  char *v35; // r12
  size_t v36; // r13
  char *v37; // r15
  __int64 v38; // rax
  const char *v39; // [rsp+0h] [rbp-98h]
  const char *v40; // [rsp+8h] [rbp-90h]
  _QWORD *v41; // [rsp+10h] [rbp-88h]
  char *dest; // [rsp+20h] [rbp-78h]
  unsigned int v43[2]; // [rsp+2Ch] [rbp-6Ch] BYREF
  unsigned int *v44; // [rsp+38h] [rbp-60h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v43[0] = a2;
  v47 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1528LL);
  if ( !a3 || !*a3 )
  {
    result = *(_QWORD *)(v3 + 104);
    if ( !result )
      return 0;
    v6 = v3 + 96;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(result + 16);
        v8 = *(_QWORD *)(result + 24);
        if ( *(_DWORD *)(result + 32) < v43[0] )
          break;
        v6 = result;
        result = *(_QWORD *)(result + 16);
        if ( !v7 )
          goto LABEL_8;
      }
      result = *(_QWORD *)(result + 24);
    }
    while ( v8 );
LABEL_8:
    if ( v3 + 96 != v6 && v43[0] >= *(_DWORD *)(v6 + 32) )
    {
      sub_4BED20(v3, v6);
      return 1;
    }
    return result;
  }
  src = nullptr;
  *(_OWORD *)n = 0;
  v9 = strlen(a3);
  v10 = v9 + 1;
  v11 = v9;
  src = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
  n[0] = v10;
  memmove(src, a3, v11);
  *((_BYTE *)src + v11) = 0;
  v40 = (const char *)(v3 + 136);
  v41 = sub_3D80D0(v3 + 136, (__int64)&src);
  if ( v41 == (_QWORD *)(v3 + 144) )
    goto LABEL_32;
  v12 = (const char *)*((unsigned int *)v41 + 14);
  if ( (_DWORD)v12 == v43[0] )
    goto LABEL_53;
  v13 = *(_QWORD *)(v3 + 104);
  v14 = (const char *)(v3 + 96);
  if ( !v13 )
    goto LABEL_22;
  v15 = v3 + 96;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v13 + 16);
      v17 = *(_QWORD *)(v13 + 24);
      if ( *(_DWORD *)(v13 + 32) < (unsigned int)v12 )
        break;
      v15 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v16 )
        goto LABEL_20;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v17 );
LABEL_20:
  if ( (const char *)v15 == v14 || (unsigned int)v12 < *(_DWORD *)(v15 + 32) )
  {
LABEL_22:
    if ( !under_debugger )
      interr(1734);
    goto LABEL_68;
  }
  dest = *(char **)(v15 + 40);
  v35 = &dest[24 * *(_QWORD *)(v15 + 48)];
  if ( dest == v35 )
    goto LABEL_66;
  v36 = n[0];
  v37 = *(char **)(v15 + 40);
  v39 = (const char *)src;
  while ( *((_QWORD *)v37 + 1) )
  {
    v12 = *(const char **)v37;
    v14 = haystack;
    if ( v36 )
      goto LABEL_63;
LABEL_58:
    if ( !strcmp(v14, v12) )
      goto LABEL_24;
    v37 += 24;
    if ( v35 == v37 )
      goto LABEL_66;
  }
  if ( v36 )
  {
    v12 = haystack;
LABEL_63:
    v14 = v39;
    goto LABEL_58;
  }
LABEL_24:
  if ( v37 == v35 )
  {
LABEL_66:
    if ( !under_debugger )
      interr(1735);
LABEL_68:
    BUG();
  }
  if ( (unsigned __int8)must_journal(v14, v12, v17) )
    sub_4B2660(*(_DWORD *)(v15 + 32), 1, 0xAAAAAAAAAAAAAAABLL * ((v37 - dest) >> 3), (__int64)v37, 0x8Bu);
  v18 = *(char **)v37;
  if ( *(_QWORD *)v37 )
  {
    *((_QWORD *)v37 + 1) = 0;
    qfree(v18);
  }
  memmove(v37, v37 + 24, *(_QWORD *)(v15 + 40) + 24LL * *(_QWORD *)(v15 + 48) - (_QWORD)v37 - 24);
  if ( (*(_QWORD *)(v15 + 48))-- == 1 )
    sub_4BE9C0(v3 + 88, v15, 136);
  sub_4BA530((__int64)v40, (__int64)v41, 133);
LABEL_32:
  sub_4C5430(v40, (const char *)&src, v43, 0x84u);
  v20 = *(_QWORD *)(v3 + 104);
  v21 = v3 + 96;
  if ( !v20 )
  {
    v27 = v3 + 96;
    v26 = 0;
    goto LABEL_45;
  }
  v22 = v3 + 96;
  v23 = *(_QWORD *)(v3 + 104);
  do
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(v23 + 16);
      v25 = *(_QWORD *)(v23 + 24);
      if ( *(_DWORD *)(v23 + 32) < v43[0] )
        break;
      v22 = v23;
      v23 = *(_QWORD *)(v23 + 16);
      if ( !v24 )
        goto LABEL_37;
    }
    v23 = *(_QWORD *)(v23 + 24);
  }
  while ( v25 );
LABEL_37:
  v26 = 0;
  if ( v22 != v21 )
    v26 = v43[0] >= *(_DWORD *)(v22 + 32);
  v27 = v3 + 96;
  do
  {
    while ( 1 )
    {
      v28 = *(const char **)(v20 + 16);
      v29 = *(_QWORD *)(v20 + 24);
      if ( *(_DWORD *)(v20 + 32) < v43[0] )
        break;
      v27 = v20;
      v20 = *(_QWORD *)(v20 + 16);
      if ( !v28 )
        goto LABEL_43;
    }
    v20 = *(_QWORD *)(v20 + 24);
  }
  while ( v29 );
LABEL_43:
  if ( v21 == v27 || v43[0] < *(_DWORD *)(v27 + 32) )
  {
LABEL_45:
    v24 = v3 + 88;
    v28 = (const char *)v27;
    v44 = v43;
    v27 = sub_4BE680((_QWORD *)(v3 + 88), v27, (__int64)&unk_2389B34, &v44);
  }
  if ( (unsigned __int8)must_journal(v24, v28, v29) )
  {
    v28 = (const char *)v26;
    sub_4B2660(v43[0], v26, *(_QWORD *)(v27 + 48), (__int64)&src, 0x8Au);
  }
  v30 = n[0];
  v31 = nullptr;
  if ( n[0] )
  {
    v31 = (void *)qalloc_or_throw(n[0], v28);
    memcpy(v31, src, v30);
  }
  v32 = *(_QWORD *)(v27 + 48);
  v33 = *(_QWORD *)(v27 + 40);
  if ( *(_QWORD *)(v27 + 56) < (unsigned __int64)(v32 + 1) )
  {
    v38 = qvector_reserve(v27 + 40, v33, v32 + 1, 24);
    *(_QWORD *)(v27 + 40) = v38;
    v32 = *(_QWORD *)(v27 + 48);
    v33 = v38;
  }
  v34 = v33 + 24 * v32;
  *(_QWORD *)v34 = v31;
  *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
  ++*(_QWORD *)(v27 + 48);
LABEL_53:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 1;
}

