__int64 __fastcall sub_6752F0(
        char **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        const char *a5,
        const char *a6,
        _BYTE *a7)
{
  __int64 v9; // rax
  unsigned __int64 *v10; // r12
  const char *v11; // r8
  const char *v12; // r9
  size_t v13; // rax
  const char *v14; // r9
  _BYTE *v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r12
  const char *v19; // rax
  const char *v20; // r9
  const char *v21; // rax
  const char *v22; // r9
  __int64 v24; // rax
  char *v25; // r15
  __int64 v26; // rax
  char *v27; // rdx
  __int64 i; // rax
  unsigned __int64 *v29; // rsi
  const char *src; // [rsp+8h] [rbp-A8h]
  _BYTE *srca; // [rsp+8h] [rbp-A8h]
  const char *v32; // [rsp+10h] [rbp-A0h]
  size_t nb; // [rsp+28h] [rbp-88h]
  size_t nc; // [rsp+28h] [rbp-88h]
  size_t nd; // [rsp+28h] [rbp-88h]
  int n; // [rsp+28h] [rbp-88h]
  int na; // [rsp+28h] [rbp-88h]
  void *v41; // [rsp+40h] [rbp-70h] BYREF
  __int128 v42; // [rsp+48h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-50h] BYREF
  __int128 v44; // [rsp+68h] [rbp-48h]
  unsigned __int64 v45; // [rsp+78h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( !a2 || *(char *)(a2 + 17) < 0 || !a6 || !a5 || !*a5 )
    return 0xFFFFFFFFLL;
  if ( a3 >= a4 )
    return 4294967294LL;
  if ( strcmp(a5, a6)
    && (!(unsigned __int8)is_uname(a6) || is_name_defined_locally(a2, (__int64)a6, 0, a3, a4) || strchr(a6, 32)) )
  {
    return 4294967293LL;
  }
  while ( 1 )
  {
    v9 = sub_674F40(a1, a2, a3, a4, a5, nullptr);
    v10 = (unsigned __int64 *)v9;
    if ( !v9 )
      break;
    v11 = *(const char **)(v9 + 24);
    v41 = nullptr;
    v42 = 0;
    if ( v11 )
    {
      src = v11;
      nb = strlen(v11);
      v41 = (void *)qvector_reserve(&v41, 0, nb + 1, 1);
      *(_QWORD *)&v42 = nb + 1;
      memmove(v41, src, nb);
      *((_BYTE *)v41 + nb) = 0;
    }
    v12 = (const char *)v10[4];
    ptr = nullptr;
    v44 = 0;
    if ( v12 )
    {
      nc = (size_t)v12;
      v13 = strlen(v12);
      v14 = (const char *)nc;
      v15 = (_BYTE *)v13;
      v16 = v13 + 1;
    }
    else
    {
      v15 = nullptr;
      v16 = 1;
      v14 = &byte_22F0C30;
    }
    srca = v15;
    v32 = v14;
    nd = v16;
    ptr = (void *)qvector_reserve(&ptr, 0, v16, 1);
    *(_QWORD *)&v44 = nd;
    memmove(ptr, v32, (size_t)srca);
    srca[(_QWORD)ptr] = 0;
    v17 = *v10;
    v18 = v10[1];
    n = v17;
    sub_6751E0(a1, a2, v17, v18, a5);
    v19 = haystack;
    if ( (_QWORD)v44 )
      v19 = (const char *)ptr;
    v20 = haystack;
    if ( (_QWORD)v42 )
      LODWORD(v20) = (_DWORD)v41;
    sub_6752F0((_DWORD)a1, a2, n, a3, (_DWORD)a5, (_DWORD)v20, (__int64)v19);
    v21 = haystack;
    if ( (_QWORD)v44 )
      v21 = (const char *)ptr;
    v22 = haystack;
    if ( (_QWORD)v42 )
      LODWORD(v22) = (_DWORD)v41;
    sub_6752F0((_DWORD)a1, a2, a4, v18, (_DWORD)a5, (_DWORD)v22, (__int64)v21);
    if ( ptr )
    {
      *(_QWORD *)&v44 = 0;
      qfree(ptr);
    }
    if ( v41 )
    {
      *(_QWORD *)&v42 = 0;
      qfree(v41);
    }
  }
  na = *(_DWORD *)(a2 + 80) + 1;
  if ( 40LL * na < (unsigned __int64)na || (v24 = qrealloc(*(_QWORD *)(a2 + 88)), (v25 = (char *)v24) == nullptr) )
    sub_3BC000((int)"add_regvar");
  *(_QWORD *)(a2 + 88) = v24;
  v26 = 40LL * *(int *)(a2 + 80);
  v27 = &v25[v26];
  for ( i = 0xCCCCCCCCCCCCCCCDLL * (v26 >> 3); i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v29 = (unsigned __int64 *)&v25[40 * (i >> 1)];
      if ( a3 < *v29 )
        break;
      v25 = (char *)(v29 + 5);
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_33;
    }
  }
LABEL_33:
  if ( v27 != v25 )
    memmove(v25 + 40, v25, v27 - v25);
  *(_QWORD *)v25 = a3;
  *((_QWORD *)v25 + 1) = a4;
  *((_QWORD *)v25 + 2) = qstrdup(a5);
  *((_QWORD *)v25 + 3) = qstrdup(a6);
  if ( a7 )
  {
    if ( *a7 )
      v10 = (unsigned __int64 *)qstrdup(a7);
  }
  else
  {
    v10 = nullptr;
  }
  *((_QWORD *)v25 + 4) = v10;
  *(_DWORD *)(a2 + 80) = na;
  sub_674600((__int64 *)a1, a2, 1);
  return 0;
}
