__int64 *__fastcall sub_6D6020(__int64 *a1, __int64 *a2, const char *a3)
{
  bool v3; // zf
  size_t v5; // rax
  size_t v6; // r12
  size_t v7; // rbp
  void *v8; // rax
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // rbp
  void *v13; // rax
  __int64 v14; // rax
  const void **v15; // rbp
  char *v16; // rdi
  const char *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // r14
  const char *v21; // rdi
  size_t v22; // rax
  size_t v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdx
  const void **v26; // r12
  const void **v27; // rax
  const void *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rsi
  char *v31; // rbx
  size_t v32; // r15
  char *v33; // r8
  __int64 v34; // r13
  __int64 v35; // rsi
  unsigned __int64 v36; // rbx
  void *v37; // rdi
  const void *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rbx
  char *v43; // rax
  void *v44; // rdi
  __int64 v45; // rax
  char *v47; // [rsp+8h] [rbp-90h]
  char *v48; // [rsp+10h] [rbp-88h]
  size_t v49; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int128 v51; // [rsp+28h] [rbp-70h]
  void *v52; // [rsp+40h] [rbp-58h] BYREF
  __int128 v53; // [rsp+48h] [rbp-50h]
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v3 = a2[1] == 0;
  v54 = __readfsqword(0x28u);
  if ( v3 )
  {
    *a1 = 0;
    *(_OWORD *)(a1 + 1) = 0;
    if ( a3 )
    {
      v5 = strlen(a3);
      v6 = v5 + 1;
      v7 = v5;
      v8 = (void *)qvector_reserve(a1, 0, v5 + 1, 1);
      a1[1] = v6;
      *a1 = (__int64)v8;
      memmove(v8, a3, v7);
      *(_BYTE *)(*a1 + v7) = 0;
    }
    return a1;
  }
  ptr = nullptr;
  v51 = 0;
  if ( a3 )
  {
    v10 = strlen(a3);
    v11 = v10 + 1;
    v12 = v10;
    v13 = (void *)qvector_reserve(&ptr, 0, v10 + 1, 1);
    *(_QWORD *)&v51 = v11;
    ptr = v13;
    memmove(v13, a3, v12);
    *((_BYTE *)ptr + v12) = 0;
  }
  v53 = 0;
  v52 = nullptr;
  sub_456FB0(&ptr, (__int64 *)&v52, "::", 0);
  v14 = v53;
  v15 = (const void **)v52;
  v16 = (char *)v52;
  v48 = (char *)v52 + 24 * v53;
  if ( v48 == v52 )
  {
    *a1 = 0;
    *(_OWORD *)(a1 + 1) = 0;
    if ( v14 )
    {
      v25 = 2 * v14 - 2;
LABEL_59:
      if ( v25 )
        goto LABEL_28;
      goto LABEL_51;
    }
LABEL_47:
    if ( v15 )
      goto LABEL_57;
    goto LABEL_48;
  }
  do
  {
    v17 = haystack;
    if ( v15[1] )
      v17 = (const char *)*v15;
    if ( !v17 )
      goto LABEL_19;
    v18 = a2[1];
    if ( v18 )
    {
      v19 = *a2;
      v20 = 0;
      while ( 1 )
      {
        v21 = haystack;
        if ( *(_QWORD *)(v19 + 32) )
          v21 = *(const char **)(v19 + 24);
        if ( !strcmp(v21, v17) )
          break;
        ++v20;
        v19 += 56;
        if ( v20 == v18 )
          goto LABEL_18;
      }
      v17 = *(const char **)v19;
      if ( !*(_QWORD *)v19 )
      {
LABEL_19:
        v15[1] = nullptr;
        goto LABEL_20;
      }
    }
LABEL_18:
    v22 = strlen(v17);
    v23 = v22;
    if ( !v22 )
      goto LABEL_19;
    v37 = (void *)*v15;
    v38 = (const void *)(v22 + 1);
    if ( (unsigned __int64)v15[2] < v22 + 1 )
    {
      v49 = v22 + 1;
      v39 = qvector_reserve(v15, *v15, v38, 1);
      v38 = (const void *)v49;
      *v15 = (const void *)v39;
      v37 = (void *)v39;
    }
    v15[1] = v38;
    memmove(v37, v17, v23);
    *((_BYTE *)*v15 + v23) = 0;
LABEL_20:
    v15 += 3;
  }
  while ( v48 != (char *)v15 );
  v15 = (const void **)v52;
  v24 = v53;
  *a1 = 0;
  v16 = (char *)v15;
  *(_OWORD *)(a1 + 1) = 0;
  if ( !v24 )
    goto LABEL_47;
  v25 = 2 * v24 - 2;
  v26 = &v15[3 * v24];
  if ( v26 == v15 )
    goto LABEL_59;
  v27 = v15;
  do
  {
    v28 = v27[1];
    if ( v28 )
      v25 = (__int64)v28 + v25 - 1;
    v27 += 3;
  }
  while ( v26 != v27 );
  if ( v25 )
  {
LABEL_28:
    v29 = qvector_reserve(a1, 0, v25, 1);
    v15 = (const void **)v52;
    *a1 = v29;
    v16 = (char *)v15;
    v26 = &v15[3 * v53];
    if ( v26 == v15 )
      goto LABEL_51;
  }
  do
  {
    v36 = a1[1];
    if ( v36 > 1 )
    {
      v30 = *a1;
      if ( a1[2] < v36 + 2 )
      {
        v40 = qvector_reserve(a1, v30, v36 + 2, 1);
        *a1 = v40;
        v30 = v40;
      }
      a1[1] = v36 + 2;
      *(_BYTE *)(v30 + v36 + 1) = 0;
      *(_WORD *)(*a1 + v36 - 1) = 14906;
    }
    v31 = (char *)v15[1];
    if ( v31 )
    {
      v32 = (size_t)(v31 - 1);
      if ( v31 != (_BYTE *)&dword_0 + 1 )
      {
        v33 = v31 - 1;
        v34 = a1[1];
        if ( v34 )
        {
          --v34;
          v33 = (char *)(v32 + v34);
          v31 += v34;
        }
        v35 = *a1;
        if ( a1[2] < (unsigned __int64)v31 )
        {
          v47 = v33;
          v45 = qvector_reserve(a1, v35, v31, 1);
          v33 = v47;
          *a1 = v45;
          v35 = v45;
        }
        a1[1] = (__int64)v31;
        v33[v35] = 0;
        memcpy((void *)(v34 + *a1), *v15, v32);
      }
    }
    v15 += 3;
  }
  while ( v26 != v15 );
  v15 = (const void **)v52;
  v16 = (char *)v52;
LABEL_51:
  if ( v16 )
  {
    v41 = v53;
    if ( (_QWORD)v53 )
    {
      v42 = 0;
      do
      {
        v43 = &v16[24 * v42];
        v44 = *(void **)v43;
        if ( *(_QWORD *)v43 )
        {
          *((_QWORD *)v43 + 1) = 0;
          qfree(v44);
          v15 = (const void **)v52;
        }
        ++v42;
        v16 = (char *)v15;
      }
      while ( v41 != v42 );
    }
LABEL_57:
    *(_QWORD *)&v53 = 0;
    qfree(v16);
  }
LABEL_48:
  if ( ptr )
  {
    *(_QWORD *)&v51 = 0;
    qfree(ptr);
  }
  return a1;
}
