__int64 __fastcall sub_657420(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const char *a5,
        const char *a6,
        _BYTE *a7)
{
  __int64 v8; // rax
  __int64 v9; // r12
  const char *v10; // r8
  const char *v11; // r9
  size_t v12; // rax
  const char *v13; // r9
  _BYTE *v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // edx
  unsigned int v17; // r12d
  const char *v18; // rax
  const char *v19; // r9
  const char *v20; // rax
  const char *v21; // r9
  __int64 v23; // rax
  char *v24; // r15
  __int64 v25; // rax
  char *v26; // rdx
  __int64 i; // rax
  unsigned int *v28; // rcx
  const char *src; // [rsp+8h] [rbp-A8h]
  _BYTE *srca; // [rsp+8h] [rbp-A8h]
  const char *v31; // [rsp+10h] [rbp-A0h]
  size_t nb; // [rsp+28h] [rbp-88h]
  size_t nc; // [rsp+28h] [rbp-88h]
  size_t nd; // [rsp+28h] [rbp-88h]
  unsigned int n; // [rsp+28h] [rbp-88h]
  int na; // [rsp+28h] [rbp-88h]
  void *v40; // [rsp+40h] [rbp-70h] BYREF
  __int128 v41; // [rsp+48h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-50h] BYREF
  __int128 v43; // [rsp+68h] [rbp-48h]
  unsigned __int64 v44; // [rsp+78h] [rbp-38h]

  v44 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 9) < 0 || !a6 || !a5 || !*a5 )
    return 0xFFFFFFFFLL;
  if ( a3 >= a4 )
    return 4294967294LL;
  if ( strcmp(a5, a6)
    && (!(unsigned __int8)is_uname(a6) || (unsigned __int8)is_name_defined_locally(a2, a6, 0, a3, a4) || strchr(a6, 32)) )
  {
    return 4294967293LL;
  }
  while ( 1 )
  {
    v8 = sub_6570B0(a1, a2, a3, a4, a5, nullptr);
    v9 = v8;
    if ( !v8 )
      break;
    v10 = *(const char **)(v8 + 16);
    v40 = nullptr;
    v41 = 0;
    if ( v10 )
    {
      src = v10;
      nb = strlen(v10);
      v40 = (void *)qvector_reserve(&v40, 0, nb + 1, 1);
      *(_QWORD *)&v41 = nb + 1;
      memmove(v40, src, nb);
      *((_BYTE *)v40 + nb) = 0;
    }
    v11 = *(const char **)(v9 + 24);
    ptr = nullptr;
    v43 = 0;
    if ( v11 )
    {
      nc = (size_t)v11;
      v12 = strlen(v11);
      v13 = (const char *)nc;
      v14 = (_BYTE *)v12;
      v15 = v12 + 1;
    }
    else
    {
      v14 = nullptr;
      v15 = 1;
      v13 = &byte_22CD811;
    }
    srca = v14;
    v31 = v13;
    nd = v15;
    ptr = (void *)qvector_reserve(&ptr, 0, v15, 1);
    *(_QWORD *)&v43 = nd;
    memmove(ptr, v31, (size_t)srca);
    srca[(_QWORD)ptr] = 0;
    v16 = *(_DWORD *)v9;
    v17 = *(_DWORD *)(v9 + 4);
    n = v16;
    sub_657340(a1, a2, v16, v17, a5);
    v18 = haystack;
    if ( (_QWORD)v43 )
      v18 = (const char *)ptr;
    v19 = haystack;
    if ( (_QWORD)v41 )
      LODWORD(v19) = (_DWORD)v40;
    sub_657420((_DWORD)a1, a2, n, a3, (_DWORD)a5, (_DWORD)v19, (__int64)v18);
    v20 = haystack;
    if ( (_QWORD)v43 )
      v20 = (const char *)ptr;
    v21 = haystack;
    if ( (_QWORD)v41 )
      LODWORD(v21) = (_DWORD)v40;
    sub_657420((_DWORD)a1, a2, a4, v17, (_DWORD)a5, (_DWORD)v21, (__int64)v20);
    if ( ptr )
    {
      *(_QWORD *)&v43 = 0;
      qfree(ptr);
    }
    if ( v40 )
    {
      *(_QWORD *)&v41 = 0;
      qfree(v40);
    }
  }
  na = *(_DWORD *)(a2 + 56) + 1;
  if ( 32LL * na < (unsigned __int64)na || (v23 = qrealloc(*(_QWORD *)(a2 + 64)), (v24 = (char *)v23) == nullptr) )
    sub_3B74D0((int)"add_regvar");
  *(_QWORD *)(a2 + 64) = v23;
  v25 = 32LL * *(int *)(a2 + 56);
  v26 = &v24[v25];
  for ( i = v25 >> 5; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v28 = (unsigned int *)&v24[32 * (i >> 1)];
      if ( a3 < *v28 )
        break;
      v24 = (char *)(v28 + 8);
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_33;
    }
  }
LABEL_33:
  if ( v26 != v24 )
    memmove(v24 + 32, v24, v26 - v24);
  *(_DWORD *)v24 = a3;
  *((_DWORD *)v24 + 1) = a4;
  *((_QWORD *)v24 + 1) = qstrdup(a5);
  *((_QWORD *)v24 + 2) = qstrdup(a6);
  if ( a7 )
  {
    if ( *a7 )
      v9 = qstrdup(a7);
  }
  else
  {
    v9 = 0;
  }
  *((_QWORD *)v24 + 3) = v9;
  *(_DWORD *)(a2 + 56) = na;
  sub_656810(a1, a2, 1);
  return 0;
}

