const char *__fastcall sub_64F440(__int64 a1, const char *a2, __int16 a3)
{
  int v3; // r8d
  int v5; // edx
  size_t v6; // rax
  size_t v7; // r14
  size_t v8; // r13
  unsigned int v9; // eax
  const char *v10; // r13
  int v11; // edx
  char *v12; // rcx
  int v13; // ebx
  const char *v14; // rbp
  unsigned int v15; // ebx
  const char *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned int *v21; // rbx
  const char *v22; // r14
  unsigned int v23; // r13d
  __int64 v24; // rax
  int v25; // ecx
  const char *v26; // rbx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v28; // [rsp+8h] [rbp-40h]
  unsigned __int64 v29; // [rsp+18h] [rbp-30h]

  v3 = *(_DWORD *)(a1 + 12);
  v29 = __readfsqword(0x28u);
  if ( !v3 )
    return nullptr;
  v5 = *a2;
  if ( !*a2 )
    return nullptr;
  if ( (a3 & 9) != 8 )
  {
    ptr = nullptr;
    v28 = 0;
    if ( a2 )
    {
      v6 = strlen(a2);
      v7 = v6 + 1;
      v8 = v6;
      ptr = (void *)qvector_reserve(&ptr, 0, v6 + 1, 1);
      *(_QWORD *)&v28 = v7;
      memmove(ptr, a2, v8);
      *((_BYTE *)ptr + v8) = 0;
    }
    if ( (a3 & 0x401) == 0 )
      sub_648F50((char *)&ptr, a2);
    v9 = 0;
    v10 = haystack;
    if ( (_QWORD)v28 )
    {
      v10 = (const char *)ptr;
      v11 = *(char *)ptr;
      v12 = (char *)ptr + 1;
      if ( *(_BYTE *)ptr )
      {
        do
        {
          ++v12;
          v9 = v11 ^ __ROL4__(v9, 5);
          v11 = *(v12 - 1);
        }
        while ( *(v12 - 1) );
      }
    }
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (int)(v9 % *(_DWORD *)(a1 + 16)));
    while ( 1 )
    {
      v15 = v13 & 0x7FFFFFFF;
      if ( v15 == 0x7FFFFFFF )
        break;
      v14 = (const char *)(*(_QWORD *)(a1 + 32) + v15);
      v13 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 == 2147483646 )
      {
        if ( !under_debugger )
          interr(133);
        BUG();
      }
      if ( !strcmp(v14 + 4, v10) )
        goto LABEL_16;
    }
    v14 = nullptr;
LABEL_16:
    if ( ptr )
    {
      *(_QWORD *)&v28 = 0;
      qfree(ptr);
    }
    return v14;
  }
  if ( *(_QWORD *)(a1 + 64) )
  {
    v17 = a2 + 1;
LABEL_22:
    v18 = 0;
    do
    {
      ++v17;
      v18 = v5 ^ __ROL4__(v18, 5);
      v5 = *(v17 - 1);
    }
    while ( *(v17 - 1) );
    goto LABEL_24;
  }
  v23 = 0;
  v24 = qalloc_or_throw(&stru_10000);
  v25 = *(_DWORD *)(a1 + 12);
  v26 = *(const char **)(a1 + 32);
  *(_DWORD *)(a1 + 72) = (_DWORD)&stru_10000;
  *(_QWORD *)(a1 + 64) = v24;
  if ( v25 )
  {
    do
    {
      if ( *(_DWORD *)v26 != 2147483646 )
        sub_64F160(a1, v26);
      ++v23;
      v26 = (const char *)sub_647640(v26);
    }
    while ( v23 < *(_DWORD *)(a1 + 12) );
  }
  sub_648B00(a1, 1, 0);
  v5 = *a2;
  v17 = a2 + 1;
  v18 = 0;
  if ( *a2 )
    goto LABEL_22;
LABEL_24:
  v19 = *(unsigned int *)(*(_QWORD *)(a1 + 56) + 4LL * (int)(v18 % *(_DWORD *)(a1 + 16)));
  if ( (_DWORD)v19 == 0x7FFFFFFF )
    return nullptr;
  v20 = *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    v21 = (unsigned int *)(v20 + v19);
    v22 = (const char *)(v20 + v19 + 4);
    if ( !strcmp(v22, a2) )
      break;
    v19 = *v21;
    if ( (_DWORD)v19 == 0x7FFFFFFF )
      return nullptr;
  }
  return (const char *)(*(_QWORD *)(a1 + 32) + *(unsigned int *)((char *)v21 + strlen(v22) + 5));
}
