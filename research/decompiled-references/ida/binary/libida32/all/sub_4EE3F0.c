__int64 __fastcall sub_4EE3F0(__int64 a1, unsigned int *a2, double a3, double a4)
{
  unsigned int v4; // r12d
  char *v6; // rax
  _QWORD *v7; // rdi
  char *v8; // r13
  unsigned int v9; // eax
  __int64 v11; // rbp
  __int64 v12; // rdx
  char *v13; // r12
  void **v14; // r12
  void *v15; // rax
  __int64 v16; // rax

  v4 = *a2;
  if ( *a2 >= a2[1] || !*(_QWORD *)(a1 + 24) )
    return 0;
  sub_4EDD00(a1, (__int64)"create_range %a..%a", a3, a4);
  v6 = (char *)sub_4EF830(*(_QWORD *)(a1 + 24), v4);
  v7 = *(_QWORD **)(a1 + 24);
  v8 = v6;
  if ( v6 != (char *)(*v7 + 16LL * v7[1]) )
  {
    v9 = **(_DWORD **)v6;
    if ( v4 >= v9 && v4 < *(_DWORD *)(*(_QWORD *)v8 + 4LL) )
      return 0;
    if ( v9 < a2[1] )
      return 0;
  }
  sub_4EE190(v7 + 8, 0, a1, a2);
  v11 = *(_QWORD *)(a1 + 24);
  v12 = *(_QWORD *)(v11 + 8);
  v13 = &v8[-*(_QWORD *)v11];
  if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v12 + 1) )
  {
    v16 = qvector_reserve(v11, *(_QWORD *)v11, v12 + 1, 16);
    *(_QWORD *)v11 = v16;
    v12 = *(_QWORD *)(v11 + 8);
    v8 = &v13[v16];
  }
  memmove(v8 + 16, v8, 16 * v12 - (_QWORD)v13);
  *(_QWORD *)v8 = 0;
  *((_DWORD *)v8 + 2) = 0;
  v8[12] = 1;
  ++*(_QWORD *)(v11 + 8);
  qfree(nullptr);
  *(_QWORD *)(v11 + 24) = v8;
  qfree(nullptr);
  v14 = *(void ***)(v11 + 24);
  v15 = (void *)qalloc(*(unsigned int *)(v11 + 32));
  if ( !v15 )
    sub_3B74D0((int)"ranges_cache_t");
  *v14 = memcpy(v15, a2, *(unsigned int *)(v11 + 32));
  return 1;
}

