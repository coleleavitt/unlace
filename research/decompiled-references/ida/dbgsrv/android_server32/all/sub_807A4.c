/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807A4
// Address: 0x000807A4

//----- (000807A4) --------------------------------------------------------
__pid_t __fastcall sub_807A4(int a1, __time_t *a2, int a3, int a4, int a5)
{
  pthread_mutex_t *v7; // r5
  int v8; // r4
  _DWORD *v9; // r4
  _BOOL4 v10; // r4
  __pid_t v11; // r0
  int v12; // r7
  int v13; // r5
  unsigned int v14; // r0
  sem_t *v15; // r5
  int tv_nsec; // r0
  int v17; // r0
  pthread_mutex_t *v18; // r5
  int v19; // r0
  int v20; // r4
  _BOOL4 v21; // r7
  pthread_mutex_t *v22; // r5
  int v23; // r0
  int v24; // r7
  unsigned int v25; // r0
  sem_t *v26; // r7
  int v27; // r0
  __pid_t v30; // [sp+Ch] [bp-14h]
  _DWORD *v31; // [sp+10h] [bp-10h]
  struct timespec stat_loc; // [sp+14h] [bp-Ch] BYREF

  v7 = *(pthread_mutex_t **)(a1 + 24);
  if ( v7 )
  {
    v8 = a4;
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
    a4 = v8;
  }
  v9 = *(_DWORD **)a1;
  if ( a1 == *(_DWORD *)a1 )
  {
LABEL_9:
    v9 = (_DWORD *)a1;
  }
  else
  {
    while ( a3 != -1 && v9[2] != a3 || (a4 & 8) == 0 && v9[3] == 0xFFFF )
    {
      v9 = (_DWORD *)*v9;
      if ( (_DWORD *)a1 == v9 )
        goto LABEL_9;
    }
  }
  if ( (_DWORD *)a1 != v9 )
  {
    if ( *((_BYTE *)v9 + 16) )
    {
      *(_DWORD *)_errno(*((unsigned __int8 *)v9 + 16)) = 10;
    }
    else if ( a2 )
    {
      *a2 = v9[3];
    }
    v30 = v9[2];
    *(_DWORD *)v9[1] = *v9;
    *(_DWORD *)(*v9 + 4) = v9[1];
    qfree(v9);
    --*(_DWORD *)(a1 + 8);
    goto LABEL_20;
  }
  v10 = 0;
  if ( a3 == -1 )
  {
LABEL_26:
    v31 = sub_80AB8(a1, a3, a4);
    *((_BYTE *)v31 + 21) = v10;
    v12 = 0;
    sub_80B44(a1);
    if ( !v7 )
      goto LABEL_28;
    goto LABEL_27;
  }
  v31 = (_DWORD *)a4;
  v11 = waitpid(a3, &stat_loc.tv_sec, a4 | 1);
  v30 = v11;
  if ( v11 < 1 )
  {
    v10 = 0;
    if ( v11 == -1 )
      v10 = *(_DWORD *)_errno(0) == 10;
    a4 = (int)v31;
    goto LABEL_26;
  }
  if ( a2 )
    *a2 = stat_loc.tv_sec;
LABEL_20:
  v10 = 0;
  v12 = 1;
  if ( v7 )
LABEL_27:
    pthread_mutex_unlock(v7);
LABEL_28:
  if ( v12 )
    return v30;
  if ( !v10 )
  {
LABEL_54:
    v21 = qsem_wait(v31[4], a5);
    v22 = *(pthread_mutex_t **)(a1 + 24);
    if ( v22 )
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
    if ( v21 )
    {
LABEL_57:
      if ( *((_BYTE *)v31 + 8) )
      {
        *(_DWORD *)_errno(*((unsigned __int8 *)v31 + 8)) = 10;
        v23 = -1;
      }
      else
      {
        if ( a2 )
          *a2 = v31[1];
        v23 = *v31;
      }
      goto LABEL_71;
    }
    v24 = v31[4];
    v23 = 0;
    if ( v24 )
    {
      v25 = *(_DWORD *)(v24 + 4);
      v26 = (sem_t *)(v24 + 12);
      if ( v25 > 1 )
        v26 = (sem_t *)v26->__align;
      if ( sub_7F0E8(&stat_loc) )
      {
        if ( stat_loc.tv_nsec > 0x3B9AC9FFu )
        {
          stat_loc.tv_nsec -= 1000000000;
          ++stat_loc.tv_sec;
        }
        do
        {
          v27 = sem_timedwait(v26, &stat_loc);
          if ( !v27 )
            goto LABEL_57;
        }
        while ( *(_DWORD *)_errno(v27) == 4 );
      }
      v23 = 0;
    }
LABEL_71:
    v30 = v23;
    sub_80CCC(a1, v31);
    if ( v22 )
      pthread_mutex_unlock(v22);
    return v30;
  }
  do
  {
    do
    {
LABEL_30:
      sub_80BC4(a1);
      v13 = v31[4];
    }
    while ( !v13 );
    v14 = *(_DWORD *)(v13 + 4);
    v15 = (sem_t *)(v13 + 12);
    if ( v14 > 1 )
      v15 = (sem_t *)v15->__align;
  }
  while ( !sub_7F0E8(&stat_loc) );
  tv_nsec = stat_loc.tv_nsec;
  stat_loc.tv_nsec += 100000000;
  if ( stat_loc.tv_nsec > 0x3B9AC9FFu )
  {
    ++stat_loc.tv_sec;
    stat_loc.tv_nsec = tv_nsec - 900000000;
  }
  while ( 1 )
  {
    v17 = sem_timedwait(v15, &stat_loc);
    if ( !v17 )
      break;
    if ( *(_DWORD *)_errno(v17) != 4 )
      goto LABEL_30;
  }
  v18 = *(pthread_mutex_t **)(a1 + 24);
  if ( v18 )
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
  if ( *((_BYTE *)v31 + 20) )
  {
    if ( *((_BYTE *)v31 + 8) )
    {
      *(_DWORD *)_errno(*((unsigned __int8 *)v31 + 8)) = 10;
      v19 = -1;
    }
    else
    {
      if ( a2 )
        *a2 = v31[1];
      v19 = *v31;
    }
    v30 = v19;
    v20 = 0;
    sub_80CCC(a1, v31);
  }
  else
  {
    v20 = 1;
    if ( *((_BYTE *)v31 + 21) )
    {
      if ( !under_debugger )
        interr(1355);
      __debugbreak();
    }
  }
  if ( v18 )
    pthread_mutex_unlock(v18);
  if ( v20 )
    goto LABEL_54;
  return v30;
}
// 808B0: variable 'v31' is possibly undefined
// 80A06: variable 'v30' is possibly undefined
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
