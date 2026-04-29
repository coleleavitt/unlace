unsigned __int64 sub_32C190(_QWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v10; // r14
  size_t v11; // rax
  size_t v12; // rbp
  size_t v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rbx
  const char *v17; // rsi
  const char *v18; // rdi
  void *v19; // rbx
  __int64 v20; // rax
  const char *v21; // rax
  size_t v22; // rbp
  void *v23; // rax
  __int64 v24; // rsi
  const char *v25; // [rsp+8h] [rbp-550h]
  __int64 v26; // [rsp+10h] [rbp-548h]
  __int64 v27; // [rsp+18h] [rbp-540h]
  void *src; // [rsp+30h] [rbp-528h] BYREF
  __int128 v29; // [rsp+38h] [rbp-520h]
  gcc_va_list va; // [rsp+48h] [rbp-510h] BYREF
  char s[1032]; // [rsp+60h] [rbp-4F8h] BYREF
  unsigned __int64 v32; // [rsp+468h] [rbp-F0h]
  __int64 v33; // [rsp+488h] [rbp-D0h]
  __int64 v34; // [rsp+490h] [rbp-C8h]
  __int64 v35; // [rsp+498h] [rbp-C0h]

  va_start(va, a3);
  v33 = va_arg(va, _QWORD);
  v34 = va_arg(va, _QWORD);
  v3 = v34;
  v35 = va_arg(va, _QWORD);
  v4 = v35;
  va_end(va);
  v32 = __readfsqword(0x28u);
  if ( a3 > 0x39 )
  {
    if ( !under_debugger )
      sub_37E160(50668);
    BUG();
  }
  v7 = (unsigned __int64)a3 >> 3;
  v8 = a3 & 7;
  *((_BYTE *)a1 + v7 + 752) |= 1 << v8;
  LODWORD(v7) = *(unsigned __int8 *)(a1[187] + v7 + 608);
  if ( !_bittest((const int *)&v7, v8) )
    return v32 - __readfsqword(0x28u);
  va_start(va, a3);
  qvsnprintf(s, 1024, off_4C3F00[a3], va, v3, v4);
  src = nullptr;
  v29 = 0;
  if ( a2 == -1 )
    v10 = a1[5];
  else
    v10 = sub_32BF20(a1, a2);
  v11 = strlen(s);
  v12 = v11;
  v13 = v11;
  if ( v11 )
  {
    v22 = v11 + 1;
    v23 = (void *)qvector_reserve(&src, 0, v11 + 1, 1);
    *(_QWORD *)&v29 = v22;
    src = v23;
    memmove(v23, s, v13);
    *((_BYTE *)src + v13) = 0;
    v24 = a1[91];
    v12 = v29;
    v27 = a1[92];
    v15 = v24 + 40 * v27;
    v26 = v24;
    if ( v24 == v15 )
      goto LABEL_27;
  }
  else
  {
    v14 = a1[91];
    v27 = a1[92];
    v15 = v14 + 40 * v27;
    v26 = v14;
    if ( v14 == v15 )
      goto LABEL_22;
  }
  v16 = v26;
  v25 = (const char *)src;
  while ( 1 )
  {
    if ( *(_QWORD *)v16 != v10 || *(_DWORD *)(v16 + 8) != a3 )
      goto LABEL_11;
    if ( *(_QWORD *)(v16 + 24) )
    {
      v17 = *(const char **)(v16 + 16);
      v18 = s1;
      if ( !v12 )
        goto LABEL_10;
    }
    else
    {
      if ( !v12 )
      {
        if ( v15 == v16 )
          goto LABEL_22;
        goto LABEL_20;
      }
      v17 = s1;
    }
    v18 = v25;
LABEL_10:
    if ( !strcmp(v18, v17) )
      break;
LABEL_11:
    v16 += 40;
    if ( v15 == v16 )
      goto LABEL_27;
  }
  if ( v15 != v16 )
    goto LABEL_20;
LABEL_27:
  if ( v12 )
  {
    v19 = (void *)qalloc_or_throw(v12);
    memcpy(v19, src, v12);
    v27 = a1[92];
    v26 = a1[91];
    goto LABEL_23;
  }
LABEL_22:
  v19 = nullptr;
LABEL_23:
  if ( a1[93] < (unsigned __int64)(v27 + 1) )
  {
    v26 = qvector_reserve(a1 + 91, v26, v27 + 1, 40);
    a1[91] = v26;
    v27 = a1[92];
  }
  v20 = v26 + 40 * v27;
  *(_QWORD *)v20 = v10;
  *(_DWORD *)(v20 + 8) = a3;
  *(_QWORD *)(v20 + 16) = v19;
  *(__m128i *)(v20 + 24) = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v12);
  v21 = (const char *)src;
  ++a1[92];
  v25 = v21;
LABEL_20:
  if ( v25 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v25);
  }
  return v32 - __readfsqword(0x28u);
}
