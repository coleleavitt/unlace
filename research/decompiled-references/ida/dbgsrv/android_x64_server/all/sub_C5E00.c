/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C5E00
// Address: 0x00000000000C5E00

//----- (00000000000C5E00) ----------------------------------------------------
__int64 __fastcall sub_C5E00(pthread_mutex_t *arg, _DWORD *a2, unsigned int a3, int a4, int a5)
{
  __int64 v6; // r14
  pthread_mutex_t **v7; // rbx
  pthread_mutex_t *v8; // r12
  pthread_mutex_t **v9; // rbp
  __pid_t v10; // eax
  unsigned int v11; // r15d
  int v12; // ebp
  bool v13; // r13
  __int64 v14; // rbp
  bool v15; // zf
  __int64 v16; // r13
  __int64 v17; // rax
  sem_t *v18; // rbp
  __m128i si128; // xmm0
  pthread_mutex_t *v20; // rdi
  pthread_mutex_t *v21; // r14
  char v22; // bp
  pthread_mutex_t *v23; // rdi
  bool v24; // bp
  pthread_mutex_t *v25; // r14
  __int64 v26; // rax
  sem_t *v27; // rbp
  __pid_t v29; // [rsp+8h] [rbp-60h]
  pthread_mutex_t **v31; // [rsp+18h] [rbp-50h] BYREF
  int stat_loc[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+30h] [rbp-38h]

  v6 = a3;
  v7 = (pthread_mutex_t **)arg;
  v33 = __readfsqword(0x28u);
  v8 = (pthread_mutex_t *)*(&arg[1].__align + 1);
  if ( v8 )
  {
    arg = (pthread_mutex_t *)*(&arg[1].__align + 1);
    pthread_mutex_lock(arg);
  }
  v9 = (pthread_mutex_t **)*v7;
  if ( v7 == (pthread_mutex_t **)*v7 )
  {
LABEL_11:
    v9 = v7;
  }
  else
  {
    while ( (_DWORD)v6 != -1 && *((_DWORD *)v9 + 4) != (_DWORD)v6 || (a4 & 8) == 0 && *((_DWORD *)v9 + 5) == 0xFFFF )
    {
      v9 = (pthread_mutex_t **)*v9;
      if ( v7 == v9 )
        goto LABEL_11;
    }
  }
  if ( v7 != v9 )
  {
    if ( *((_BYTE *)v9 + 24) )
    {
      *(_DWORD *)__errno(arg) = 10;
    }
    else if ( a2 )
    {
      *a2 = *((_DWORD *)v9 + 5);
    }
    v11 = *((_DWORD *)v9 + 4);
    v9[1]->__align = (__int64)*v9;
    *(&(*v9)->__align + 1) = (__int64)v9[1];
    qfree(v9);
    v7[2] = (pthread_mutex_t *)((char *)v7[2] - 1);
    goto LABEL_22;
  }
  if ( (_DWORD)v6 == -1 )
  {
    v13 = 0;
    goto LABEL_28;
  }
  v10 = waitpid(v6, stat_loc, a4 | 1);
  if ( v10 <= 0 )
  {
    v29 = v10;
    v13 = v10 == -1 && *(_DWORD *)__errno((unsigned int)v6) == 10;
LABEL_28:
    v31 = v7 + 3;
    sub_C8810(stat_loc, (__int64)(v7 + 3), (__int64 *)&v31);
    v14 = *(_QWORD *)stat_loc;
    *(_DWORD *)(*(_QWORD *)stat_loc + 16LL) = v6;
    *(_DWORD *)(v14 + 28) = a4;
    *(_BYTE *)(v14 + 41) = v13;
    sub_C62D0((char *)v7);
    v6 = v14 + 16;
    v12 = 0;
    v11 = v29;
    if ( !v8 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v11 = v10;
  if ( a2 )
    *a2 = stat_loc[0];
LABEL_22:
  v12 = 1;
  v13 = 0;
  if ( v8 )
LABEL_29:
    pthread_mutex_unlock(v8);
LABEL_30:
  if ( v12 )
    return v11;
  v15 = !v13;
  v16 = v6;
  if ( !v15 )
  {
    do
    {
      do
      {
LABEL_32:
        sub_C6380((__int64)v7);
        v17 = *(_QWORD *)(v6 + 16);
      }
      while ( !v17 );
      v18 = (sem_t *)(v17 + 24);
      if ( *(_QWORD *)(v17 + 8) > 1u )
        v18 = (sem_t *)v18->__align;
    }
    while ( !sub_C3BE0((struct timespec *)stat_loc) );
    si128 = _mm_load_si128((const __m128i *)stat_loc);
    *(_QWORD *)&stat_loc[2] = _mm_extract_epi64(si128, 1) + 100000000;
    if ( *(__int64 *)&stat_loc[2] >= 1000000000 )
      *(__m128i *)stat_loc = _mm_add_epi64(si128, (__m128i)xmmword_FE350);
    while ( 1 )
    {
      v20 = (pthread_mutex_t *)v18;
      if ( !sem_timedwait(v18, (const struct timespec *)stat_loc) )
        break;
      if ( *(_DWORD *)__errno(v18) != 4 )
        goto LABEL_32;
    }
    v21 = v7[6];
    if ( v21 )
    {
      v20 = v7[6];
      pthread_mutex_lock(v20);
    }
    if ( *(_BYTE *)(v16 + 24) )
    {
      if ( *(_BYTE *)(v16 + 8) )
      {
        *(_DWORD *)__errno(v20) = 10;
        v11 = -1;
      }
      else
      {
        if ( a2 )
          *a2 = *(_DWORD *)(v16 + 4);
        v11 = *(_DWORD *)v16;
      }
      sub_C6510((__int64)v7, (_QWORD *)v16);
      v22 = 0;
      if ( v21 )
LABEL_53:
        pthread_mutex_unlock(v21);
    }
    else
    {
      v22 = 1;
      if ( *(_BYTE *)(v16 + 25) )
      {
        if ( !(_BYTE)under_debugger )
          interr(1355);
        BUG();
      }
      if ( v21 )
        goto LABEL_53;
    }
    if ( !v22 )
      return v11;
  }
  v23 = *(pthread_mutex_t **)(v16 + 16);
  v24 = qsem_wait((__int64)v23, a5);
  v25 = v7[6];
  if ( v25 )
  {
    v23 = v7[6];
    pthread_mutex_lock(v23);
  }
  if ( !v24 )
  {
    v26 = *(_QWORD *)(v16 + 16);
    v11 = 0;
    if ( !v26 )
      goto LABEL_72;
    v27 = (sem_t *)(v26 + 24);
    if ( *(_QWORD *)(v26 + 8) > 1u )
      v27 = (sem_t *)v27->__align;
    if ( !sub_C3BE0((struct timespec *)stat_loc) )
      goto LABEL_72;
    if ( *(__int64 *)&stat_loc[2] >= 1000000000 )
    {
      *(_QWORD *)&stat_loc[2] -= 1000000000LL;
      ++*(_QWORD *)stat_loc;
    }
    while ( 1 )
    {
      v23 = (pthread_mutex_t *)v27;
      if ( !sem_timedwait(v27, (const struct timespec *)stat_loc) )
        break;
      if ( *(_DWORD *)__errno(v27) != 4 )
      {
        v11 = 0;
        goto LABEL_72;
      }
    }
  }
  if ( *(_BYTE *)(v16 + 8) )
  {
    *(_DWORD *)__errno(v23) = 10;
    v11 = -1;
  }
  else
  {
    if ( a2 )
      *a2 = *(_DWORD *)(v16 + 4);
    v11 = *(_DWORD *)v16;
  }
LABEL_72:
  sub_C6510((__int64)v7, (_QWORD *)v16);
  if ( v25 )
    pthread_mutex_unlock(v25);
  return v11;
}
// C5F61: variable 'v29' is possibly undefined
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// FE350: using guessed type __int128 xmmword_FE350;
// 158B40: using guessed type __int64 under_debugger;
