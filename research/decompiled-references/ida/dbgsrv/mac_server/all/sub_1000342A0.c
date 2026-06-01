/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000342A0
// Address: 0x00000001000342A0

//----- (00000001000342A0) ----------------------------------------------------
char *__fastcall sub_1000342A0(_QWORD *a1, const char *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r13d
  unsigned __int64 v8; // rax
  char *v9; // r15
  const char *v10; // rdi
  int v11; // eax
  size_t v12; // rax
  size_t v13; // r12
  size_t v14; // rbx
  void *v15; // rdi
  int v16; // eax
  void *v17; // rax
  __int64 v18; // rcx
  pthread_mutex_t *v20; // [rsp+0h] [rbp-50h]
  pthread_mutex_t *v23; // [rsp+20h] [rbp-30h]

  if ( !a2 )
    return nullptr;
  v3 = qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v4 = qword_1000AD0F0;
  qmutex_lock((pthread_mutex_t *)qword_1000AD0F0);
  v23 = (pthread_mutex_t *)v4;
  v20 = (pthread_mutex_t *)v3;
  v5 = a1[9];
  if ( v5 )
  {
    v6 = a1[8];
    v7 = 1;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(char **)(v6 + 8 * v8);
      v10 = _s1;
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
  qmutex_unlock(v23);
  if ( !v9 )
  {
    v9 = (char *)operator new(0x48u);
    v11 = *((_DWORD *)a1 + 18);
    *(_OWORD *)(v9 + 8) = 0;
    *(_QWORD *)v9 = v9 + 8;
    *((_DWORD *)v9 + 6) = 0;
    *((_DWORD *)v9 + 7) = v11;
    *((_OWORD *)v9 + 2) = 0;
    *((_QWORD *)v9 + 6) = 0;
    *((_QWORD *)v9 + 7) = -1;
    *((_DWORD *)v9 + 16) = -1;
    v12 = strlen(a2);
    if ( v12 )
    {
      v13 = v12;
      v14 = v12 + 1;
      if ( v12 == -1 )
      {
        v15 = nullptr;
      }
      else
      {
        v15 = qvector_reserve((__int64)(v9 + 32), nullptr, v12 + 1, 1u);
        *((_QWORD *)v9 + 4) = v15;
      }
      *((_QWORD *)v9 + 5) = v14;
      memmove(v15, a2, v13);
      *(_BYTE *)(*((_QWORD *)v9 + 4) + v13) = 0;
    }
    else
    {
      *((_QWORD *)v9 + 5) = 0;
    }
    if ( a3 )
      v16 = *(_DWORD *)(a3 + 28);
    else
      v16 = 0;
    *((_DWORD *)v9 + 6) = v16;
    v17 = (void *)a1[8];
    v18 = a1[9];
    if ( a1[10] < (unsigned __int64)(v18 + 1) )
    {
      v17 = qvector_reserve((__int64)(a1 + 8), v17, v18 + 1, 8u);
      a1[8] = v17;
      v18 = a1[9];
    }
    *((_QWORD *)v17 + v18) = v9;
    ++a1[9];
  }
  qmutex_unlock(v20);
  return v9;
}
// 1000AD0F0: using guessed type __int64 qword_1000AD0F0;
