__int64 __fastcall sub_5AA3A0(__int64 a1, int a2, const char *a3)
{
  __int64 v6; // r13
  __int64 v7; // rax
  size_t v9; // rax
  size_t v10; // r14
  size_t v11; // r12
  void *v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  const char *v15; // rsi
  const char *v16; // rdi
  int encoding_bpu_by_name; // eax
  __int64 v18; // rdx
  int v19; // r12d
  __int64 v20; // rax
  size_t v21; // rax
  size_t v22; // r12
  size_t v23; // rbp
  void **v24; // rbx
  void *v25; // rbp
  void *v26; // r13
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // [rsp+8h] [rbp-80h]
  char *ptr; // [rsp+10h] [rbp-78h]
  char *s1; // [rsp+18h] [rbp-70h]
  __int64 v32; // [rsp+20h] [rbp-68h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v34; // [rsp+38h] [rbp-50h]
  unsigned __int64 v35; // [rsp+48h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  if ( !a3 || !*a3 )
    return sub_5AA1E0(a1, a2);
  if ( a2 <= 0 )
    return 0;
  v6 = a2;
  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 16) )
    return 0;
  s1 = (char *)haystack;
  v32 = 24LL * a2;
  v7 = *(_QWORD *)(a1 + 8) + v32;
  if ( *(_QWORD *)(v7 + 8) )
    s1 = *(char **)v7;
  if ( !strcmp(s1, a3) )
    return 0;
  src = nullptr;
  v34 = 0;
  v9 = strlen(a3);
  v10 = v9 + 1;
  v11 = v9;
  v12 = (void *)qvector_reserve(&src, 0, v9 + 1, 1);
  *(_QWORD *)&v34 = v10;
  src = v12;
  memmove(v12, a3, v11);
  *((_BYTE *)src + v11) = 0;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v34;
  ptr = (char *)src;
  v29 = v13 + 24LL * *(_QWORD *)(a1 + 16);
  if ( v13 == v29 )
  {
    if ( src )
    {
      *(_QWORD *)&v34 = 0;
      qfree(src);
    }
    goto LABEL_22;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v13 + 8) )
    {
      v15 = *(const char **)v13;
      v16 = haystack;
      if ( !v14 )
        goto LABEL_13;
      goto LABEL_18;
    }
    if ( !v14 )
      break;
    v15 = haystack;
LABEL_18:
    v16 = ptr;
LABEL_13:
    if ( !strcmp(v16, v15) )
      break;
    v13 += 24;
    if ( v29 == v13 )
    {
      if ( !ptr )
        goto LABEL_22;
      goto LABEL_20;
    }
  }
  if ( !ptr )
    goto LABEL_21;
LABEL_20:
  *(_QWORD *)&v34 = 0;
  qfree(ptr);
LABEL_21:
  if ( v29 != v13 )
    return 0;
LABEL_22:
  encoding_bpu_by_name = get_encoding_bpu_by_name((__int64)s1);
  v18 = 0xFFFFFFFFLL;
  v19 = encoding_bpu_by_name;
  v20 = (unsigned int)(encoding_bpu_by_name - 1);
  if ( (unsigned int)v20 <= 3 )
    v18 = dword_23AF980[v20];
  if ( *(_DWORD *)(a1 + 4 * v18 + 32) == a2 && v19 != (unsigned int)get_encoding_bpu_by_name((__int64)a3) )
    return 0;
  src = nullptr;
  v34 = 0;
  v21 = strlen(a3);
  v22 = v21 + 1;
  v23 = v21;
  src = (void *)qvector_reserve(&src, 0, v21 + 1, 1);
  *(_QWORD *)&v34 = v22;
  memmove(src, a3, v23);
  *((_BYTE *)src + v23) = 0;
  sub_5A91E0(v6, *(_QWORD *)(a1 + 8) + v32, (__int64)&src, 0xB2u);
  v24 = (void **)(*(_QWORD *)(a1 + 8) + v32);
  if ( v24 != &src )
  {
    v25 = (void *)v34;
    if ( (unsigned __int64)v34 > 1 )
    {
      v26 = src;
      v27 = *v24;
      if ( (unsigned __int64)v24[2] < (unsigned __int64)v34 )
      {
        v28 = qvector_reserve(v24, *v24, v34, 1);
        *v24 = (void *)v28;
        v27 = (void *)v28;
      }
      v24[1] = v25;
      memmove(v27, v26, (size_t)v25 - 1);
      *((_BYTE *)v25 + (_QWORD)*v24 - 1) = 0;
    }
    else
    {
      v24[1] = nullptr;
    }
  }
  if ( src )
  {
    *(_QWORD *)&v34 = 0;
    qfree(src);
  }
  return 1;
}
