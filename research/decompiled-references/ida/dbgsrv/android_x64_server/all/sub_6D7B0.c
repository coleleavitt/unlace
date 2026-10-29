/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6D7B0
// Address: 0x000000000006D7B0

//----- (000000000006D7B0) ----------------------------------------------------
char *__fastcall sub_6D7B0(__int64 a1, const char *a2, __int64 a3)
{
  pthread_mutex_t *v3; // r14
  pthread_mutex_t *v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // r12
  int v7; // r14d
  unsigned __int64 v8; // rax
  char *v9; // rbx
  const char *v10; // rdi
  __int64 v11; // rbp
  int v12; // eax
  size_t v13; // rax
  size_t v14; // r15
  unsigned __int64 v15; // r12
  void *v16; // rax
  int v17; // eax
  char **v18; // rdi
  __int64 v19; // rcx
  char *v20; // rax
  pthread_mutex_t *v24; // [rsp+18h] [rbp-40h]
  pthread_mutex_t *v25; // [rsp+20h] [rbp-38h]

  if ( !a2 )
    return nullptr;
  v3 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v4 = (pthread_mutex_t *)qword_1557E8;
  qmutex_lock((pthread_mutex_t *)qword_1557E8);
  v25 = v4;
  v24 = v3;
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(char **)(v6 + 8 * v8);
      v10 = s1;
      if ( *((_QWORD *)v9 + 5) )
        v10 = *((const char **)v9 + 4);
      if ( !strcmp(v10, a2) )
        break;
      v8 = v7++;
      if ( v5 <= v8 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v9 = nullptr;
  }
  qmutex_unlock(v25);
  if ( !v9 )
  {
    v9 = (char *)operator new(0x48u);
    v11 = a1;
    v12 = *(_DWORD *)(a1 + 72);
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)v9 = v9 + 8;
    *((_DWORD *)v9 + 6) = 0;
    *((_DWORD *)v9 + 7) = v12;
    *((_OWORD *)v9 + 2) = 0;
    *((_QWORD *)v9 + 6) = 0;
    *((_QWORD *)v9 + 7) = -1;
    *((_DWORD *)v9 + 16) = -1;
    v13 = strlen(a2);
    if ( v13 )
    {
      v14 = v13;
      v15 = v13 + 1;
      v16 = *((void **)v9 + 4);
      if ( *((_QWORD *)v9 + 6) < v15 )
      {
        v16 = qvector_reserve((__int64)(v9 + 32), *((char **)v9 + 4), v15, 1u);
        *((_QWORD *)v9 + 4) = v16;
        v11 = a1;
      }
      *((_QWORD *)v9 + 5) = v15;
      memmove(v16, a2, v14);
      *(_BYTE *)(*((_QWORD *)v9 + 4) + v14) = 0;
    }
    else
    {
      *((_QWORD *)v9 + 5) = 0;
    }
    if ( a3 )
      v17 = *(_DWORD *)(a3 + 28);
    else
      v17 = 0;
    v18 = (char **)(v11 + 64);
    *((_DWORD *)v9 + 6) = v17;
    v19 = *(_QWORD *)(v11 + 72);
    if ( *(_QWORD *)(v11 + 80) >= (unsigned __int64)(v19 + 1) )
    {
      v20 = *v18;
    }
    else
    {
      v20 = (char *)qvector_reserve((__int64)v18, *v18, v19 + 1, 8u);
      v11 = a1;
      *(_QWORD *)(a1 + 64) = v20;
      v19 = *(_QWORD *)(a1 + 72);
    }
    *(_QWORD *)&v20[8 * v19] = v9;
    ++*(_QWORD *)(v11 + 72);
  }
  qmutex_unlock(v24);
  return v9;
}
