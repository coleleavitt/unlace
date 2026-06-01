_QWORD *__fastcall sub_4DCA80(__int64 a1, unsigned __int64 a2, const char *a3)
{
  __int64 v3; // rbx
  _QWORD *result; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // r12
  const char *v12; // rsi
  char *v13; // rax
  const char *v14; // rdi
  char *v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rdx
  char *v18; // rdi
  _QWORD *v20; // rax
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  char v26; // bp
  _QWORD *v27; // r13
  _QWORD *v28; // rsi
  __int64 v29; // rdx
  size_t v30; // rbx
  void *v31; // rbp
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rax
  const char **v35; // r12
  size_t v36; // r13
  const char **v37; // r15
  __int64 v38; // rax
  const char *v39; // [rsp+0h] [rbp-98h]
  const char *v40; // [rsp+8h] [rbp-90h]
  _QWORD *v41; // [rsp+10h] [rbp-88h]
  const char **dest; // [rsp+20h] [rbp-78h]
  unsigned __int64 v43; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 *v44; // [rsp+38h] [rbp-60h] BYREF
  void *src; // [rsp+40h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-50h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v43 = a2;
  v47 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 1720LL);
  if ( !a3 || !*a3 )
  {
    result = *(_QWORD **)(v3 + 112);
    if ( !result )
      return nullptr;
    v6 = (_QWORD *)(v3 + 104);
    do
    {
      while ( 1 )
      {
        v7 = result[2];
        v8 = result[3];
        if ( result[4] < v43 )
          break;
        v6 = result;
        result = (_QWORD *)result[2];
        if ( !v7 )
          goto LABEL_8;
      }
      result = (_QWORD *)result[3];
    }
    while ( v8 );
LABEL_8:
    if ( (_QWORD *)(v3 + 104) != v6 && v43 >= v6[4] )
    {
      sub_4D5DE0(v3, v6);
      return (_QWORD *)(&dword_0 + 1);
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
  v40 = (const char *)(v3 + 144);
  v41 = sub_4D3F70(v3 + 144, (__int64)&src);
  if ( v41 == (_QWORD *)(v3 + 152) )
    goto LABEL_32;
  v12 = (const char *)v41[7];
  if ( v12 == (const char *)v43 )
    goto LABEL_53;
  v13 = *(char **)(v3 + 112);
  v14 = (const char *)(v3 + 104);
  if ( !v13 )
    goto LABEL_22;
  v15 = (char *)(v3 + 104);
  do
  {
    while ( 1 )
    {
      v16 = *((_QWORD *)v13 + 2);
      v17 = *((_QWORD *)v13 + 3);
      if ( *((_QWORD *)v13 + 4) < (unsigned __int64)v12 )
        break;
      v15 = v13;
      v13 = *((char **)v13 + 2);
      if ( !v16 )
        goto LABEL_20;
    }
    v13 = *((char **)v13 + 3);
  }
  while ( v17 );
LABEL_20:
  if ( v15 == v14 || (unsigned __int64)v12 < *((_QWORD *)v15 + 4) )
  {
LABEL_22:
    if ( !under_debugger )
      interr(1734);
    goto LABEL_68;
  }
  dest = *((const char ***)v15 + 5);
  v35 = &dest[3 * *((_QWORD *)v15 + 6)];
  if ( dest == v35 )
    goto LABEL_66;
  v36 = n[0];
  v37 = *((const char ***)v15 + 5);
  v39 = (const char *)src;
  while ( v37[1] )
  {
    v12 = *v37;
    v14 = haystack;
    if ( v36 )
      goto LABEL_63;
LABEL_58:
    if ( !strcmp(v14, v12) )
      goto LABEL_24;
    v37 += 3;
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
    sub_4C9300(*((_QWORD *)v15 + 4), 1, 0xAAAAAAAAAAAAAAABLL * (v37 - dest), (__int64)v37, 0x8Bu);
  v18 = (char *)*v37;
  if ( *v37 )
  {
    v37[1] = nullptr;
    qfree(v18);
  }
  memmove(v37, v37 + 3, *((_QWORD *)v15 + 5) + 24LL * *((_QWORD *)v15 + 6) - (_QWORD)v37 - 24);
  if ( (*((_QWORD *)v15 + 6))-- == 1 )
    sub_4D5A80(v3 + 96, v15, 136);
  sub_4D1360((__int64)v40, v41, 133);
LABEL_32:
  sub_4DC590(v40, (const char *)&src, &v43, 0x84u);
  v20 = *(_QWORD **)(v3 + 112);
  v21 = (_QWORD *)(v3 + 104);
  if ( !v20 )
  {
    v27 = (_QWORD *)(v3 + 104);
    v26 = 0;
    goto LABEL_45;
  }
  v22 = (_QWORD *)(v3 + 104);
  v23 = *(_QWORD **)(v3 + 112);
  do
  {
    while ( 1 )
    {
      v24 = v23[2];
      v25 = v23[3];
      if ( v23[4] < v43 )
        break;
      v22 = v23;
      v23 = (_QWORD *)v23[2];
      if ( !v24 )
        goto LABEL_37;
    }
    v23 = (_QWORD *)v23[3];
  }
  while ( v25 );
LABEL_37:
  v26 = 0;
  if ( v22 != v21 )
    v26 = v43 >= v22[4];
  v27 = (_QWORD *)(v3 + 104);
  do
  {
    while ( 1 )
    {
      v28 = (_QWORD *)v20[2];
      v29 = v20[3];
      if ( v20[4] < v43 )
        break;
      v27 = v20;
      v20 = (_QWORD *)v20[2];
      if ( !v28 )
        goto LABEL_43;
    }
    v20 = (_QWORD *)v20[3];
  }
  while ( v29 );
LABEL_43:
  if ( v21 == v27 || v43 < v27[4] )
  {
LABEL_45:
    v24 = v3 + 96;
    v28 = v27;
    v44 = &v43;
    v27 = sub_4D5760((_QWORD *)(v3 + 96), v27, (__int64)&unk_23ADC14, &v44);
  }
  if ( (unsigned __int8)must_journal(v24, v28, v29) )
    sub_4C9300(v43, v26, v27[6], (__int64)&src, 0x8Au);
  v30 = n[0];
  v31 = nullptr;
  if ( n[0] )
  {
    v31 = (void *)qalloc_or_throw(n[0]);
    memcpy(v31, src, v30);
  }
  v32 = v27[6];
  v33 = v27[5];
  if ( v27[7] < (unsigned __int64)(v32 + 1) )
  {
    v38 = qvector_reserve(v27 + 5, v33, v32 + 1, 24);
    v27[5] = v38;
    v32 = v27[6];
    v33 = v38;
  }
  v34 = v33 + 24 * v32;
  *(_QWORD *)v34 = v31;
  *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64((__m128i)v30, (__m128i)v30);
  ++v27[6];
LABEL_53:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return (_QWORD *)(&dword_0 + 1);
}
