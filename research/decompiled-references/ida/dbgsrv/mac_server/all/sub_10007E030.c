/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007E030
// Address: 0x000000010007E030

//----- (000000010007E030) ----------------------------------------------------
__int64 __fastcall sub_10007E030(__int64 a1, _DWORD *a2, pid_t a3, int a4, unsigned int a5)
{
  pthread_mutex_t *v7; // r15
  unsigned __int64 i; // r13
  int v9; // eax
  _DWORD *v10; // r12
  pid_t v11; // eax
  unsigned __int64 v12; // rax
  char v13; // r14
  __int64 v14; // r13
  pthread_mutex_t *v15; // r14
  pthread_mutex_t *v16; // r14
  char v17; // r15
  unsigned __int8 v18; // r15
  pthread_mutex_t *v19; // r14
  bool v22; // [rsp+10h] [rbp-50h]
  unsigned int v23; // [rsp+14h] [rbp-4Ch]
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  int v25[2]; // [rsp+28h] [rbp-38h] BYREF

  v7 = *(pthread_mutex_t **)(a1 + 48);
  if ( v7 )
    pthread_mutex_lock(v7);
  for ( i = *(_QWORD *)a1; ; i = *(_QWORD *)i )
  {
    if ( i == a1 )
      goto LABEL_13;
    if ( a3 == -1 || *(_DWORD *)(i + 16) == a3 )
    {
      v9 = *(_DWORD *)(i + 20);
      if ( (a4 & 0x10) != 0 || (v9 & 0xFFFFFF7F) != 0x137F )
        break;
    }
  }
  if ( i != a1 )
  {
    if ( *(_BYTE *)(i + 24) == 1 )
    {
      *__error() = 10;
      v10 = a2;
    }
    else
    {
      v10 = a2;
      if ( a2 )
        *a2 = v9;
    }
    v23 = *(_DWORD *)(i + 16);
    v12 = *(_QWORD *)i;
    **(_QWORD **)(i + 8) = *(_QWORD *)i;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(i + 8);
    qfree((void *)i);
    --*(_QWORD *)(a1 + 16);
    goto LABEL_23;
  }
LABEL_13:
  if ( a3 == -1 )
  {
    v22 = 0;
  }
  else
  {
    v11 = waitpid(a3, v25, a4 | 1);
    i = (unsigned int)v11;
    v23 = v11;
    if ( v11 > 0 )
    {
      v10 = a2;
      if ( a2 )
        *a2 = v25[0];
LABEL_23:
      v13 = 0;
      v22 = 0;
      if ( !v7 )
        goto LABEL_28;
      goto LABEL_27;
    }
    v22 = v11 == -1 && *__error() == 10;
  }
  v24 = a1 + 24;
  sub_1000803E0(v25, a1 + 24, &v24);
  v14 = *(_QWORD *)v25;
  *(_DWORD *)(*(_QWORD *)v25 + 16LL) = a3;
  *(_DWORD *)(v14 + 28) = a4;
  *(_BYTE *)(v14 + 41) = v22;
  sub_10007E3B0((void *)a1);
  i = v14 + 16;
  v13 = 1;
  v10 = a2;
  if ( !v7 )
    goto LABEL_28;
LABEL_27:
  pthread_mutex_unlock(v7);
LABEL_28:
  if ( v13 )
  {
    if ( !v22 )
      goto LABEL_53;
    do
    {
      v15 = *(pthread_mutex_t **)(a1 + 56);
      *(_QWORD *)v25 = v15;
      if ( v15 )
        pthread_mutex_lock(v15);
      if ( *(_BYTE *)(a1 + 76) == 1 )
        pthread_kill(*(pthread_t *)(a1 + 64), 31);
      if ( v15 )
        pthread_mutex_unlock(v15);
    }
    while ( !(unsigned __int8)qsem_wait(*(_QWORD *)(i + 16), (__int64 *)0x64) );
    v16 = *(pthread_mutex_t **)(a1 + 48);
    *(_QWORD *)v25 = v16;
    if ( v16 )
      pthread_mutex_lock(v16);
    v17 = *(_BYTE *)(i + 24);
    if ( v17 == 1 )
    {
      if ( *(_BYTE *)(i + 8) == 1 )
      {
        *__error() = 10;
        v23 = -1;
      }
      else
      {
        if ( v10 )
          *v10 = *(_DWORD *)(i + 4);
        v23 = *(_DWORD *)i;
      }
      sub_10007E5F0(a1, (__int64 *)i);
    }
    else if ( *(_BYTE *)(i + 25) == 1 )
    {
      if ( under_debugger != 1 )
        interr(0x54Bu);
      BUG();
    }
    if ( v16 )
      pthread_mutex_unlock(v16);
    if ( !v17 )
    {
LABEL_53:
      v18 = (unsigned __int8)qsem_wait(*(_QWORD *)(i + 16), (__int64 *)a5);
      v19 = *(pthread_mutex_t **)(a1 + 48);
      *(_QWORD *)v25 = v19;
      if ( v19 )
        pthread_mutex_lock(v19);
      if ( v18 || (v23 = 0, (unsigned __int8)qsem_wait(*(_QWORD *)(i + 16), nullptr)) )
      {
        if ( *(_BYTE *)(i + 8) == 1 )
        {
          *__error() = 10;
          v23 = -1;
        }
        else
        {
          if ( v10 )
            *v10 = *(_DWORD *)(i + 4);
          v23 = *(_DWORD *)i;
        }
      }
      sub_10007E5F0(a1, (__int64 *)i);
      if ( v19 )
        pthread_mutex_unlock(v19);
    }
  }
  return v23;
}
// 10007E337: variable 'v23' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
