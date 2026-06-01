/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B3D90
// Address: 0x000B3D90

//----- (000B3D90) --------------------------------------------------------
int __cdecl sub_B3D90(void *ptr, __time_t *a2, __pid_t pid, int a4, int a5)
{
  _DWORD *v5; // ecx
  pthread_mutex_t *v6; // esi
  int v7; // edx
  _DWORD *v8; // esi
  __pid_t v9; // ecx
  int v10; // ecx
  int v11; // esi
  pthread_mutex_t *v12; // edi
  bool v13; // zf
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  sem_t *v17; // esi
  int tv_nsec; // ecx
  int v19; // ecx
  int v20; // ecx
  pthread_mutex_t *v21; // edi
  _DWORD *v22; // eax
  char v23; // al
  char v24; // di
  bool v25; // al
  int v26; // ecx
  pthread_mutex_t *v27; // edi
  _DWORD *v28; // eax
  int v29; // eax
  sem_t *v30; // esi
  bool v31; // al
  int v32; // ecx
  pthread_mutex_t *v34; // [esp+0h] [ebp-3Ch]
  int v35; // [esp+10h] [ebp-2Ch]
  bool v36; // [esp+10h] [ebp-2Ch]
  _DWORD *v37; // [esp+14h] [ebp-28h]
  bool v38; // [esp+18h] [ebp-24h]
  pthread_mutex_t *v39; // [esp+1Ch] [ebp-20h]
  struct timespec stat_loc; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v41; // [esp+28h] [ebp-14h]

  v5 = ptr;
  v41 = __readgsdword(0x14u);
  v6 = *((pthread_mutex_t **)ptr + 6);
  if ( v6 )
  {
    pthread_mutex_lock(*((pthread_mutex_t **)ptr + 6));
    v5 = ptr;
  }
  v39 = v6;
  v7 = a4;
  v8 = (_DWORD *)*v5;
  if ( v5 == (_DWORD *)*v5 )
    goto LABEL_9;
  while ( pid != -1 && v8[2] != pid || (a4 & 8) == 0 && v8[3] == 0xFFFF )
  {
    v8 = (_DWORD *)*v8;
    if ( v5 == v8 )
      goto LABEL_9;
  }
  if ( v5 == v8 )
  {
LABEL_9:
    if ( pid == -1 )
    {
      v38 = 0;
    }
    else
    {
      v9 = waitpid(pid, &stat_loc.tv_sec, a4 | 1);
      v35 = v9;
      if ( v9 > 0 )
      {
        v10 = (int)ptr;
        if ( a2 )
          *a2 = stat_loc.tv_sec;
        v11 = 1;
        v38 = 0;
        v12 = v39;
        if ( !v39 )
          goto LABEL_29;
LABEL_28:
        pthread_mutex_unlock(v12);
        v10 = (int)ptr;
        goto LABEL_29;
      }
      v13 = v9 == -1;
      v5 = ptr;
      if ( v13 )
      {
        v14 = (_DWORD *)__errno(ptr);
        v5 = ptr;
        v38 = *v14 == 10;
      }
      else
      {
        v38 = 0;
      }
      v7 = a4;
    }
    v12 = v39;
    v37 = sub_B4260((int)v5, pid, v7);
    *((_BYTE *)v37 + 21) = v38;
    v11 = 0;
    sub_B4360((char *)ptr);
    v10 = (int)ptr;
    if ( !v39 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( *((_BYTE *)v8 + 16) )
  {
    *(_DWORD *)__errno(v5) = 10;
    v12 = v39;
  }
  else
  {
    v12 = v39;
    if ( a2 )
      *a2 = v8[3];
  }
  v35 = v8[2];
  *(_DWORD *)v8[1] = *v8;
  *(_DWORD *)(*v8 + 4) = v8[1];
  qfree(v8);
  v10 = (int)ptr;
  --*((_DWORD *)ptr + 2);
  v11 = 1;
  v38 = 0;
  if ( v12 )
    goto LABEL_28;
LABEL_29:
  if ( v11 )
    return v35;
  v15 = v37;
  if ( v38 )
  {
    while ( 1 )
    {
      do
      {
        sub_B4420(v10);
        v10 = (int)ptr;
        v16 = v15[4];
      }
      while ( !v16 );
      v17 = (sem_t *)(v16 + 12);
      if ( *(_DWORD *)(v16 + 4) > 1u )
        v17 = (sem_t *)v17->__align;
      if ( sub_B18E0(&stat_loc) )
        break;
LABEL_32:
      v10 = (int)ptr;
      v15 = v37;
    }
    tv_nsec = stat_loc.tv_nsec;
    stat_loc.tv_nsec += 100000000;
    if ( stat_loc.tv_nsec >= 0x3B9ACA00u )
    {
      stat_loc.tv_nsec = tv_nsec - 900000000;
      ++stat_loc.tv_sec;
    }
    while ( sem_timedwait(v17, &stat_loc) )
    {
      if ( *(_DWORD *)__errno(v19) != 4 )
        goto LABEL_32;
    }
    v20 = (int)ptr;
    v21 = *((pthread_mutex_t **)ptr + 6);
    if ( v21 )
    {
      pthread_mutex_lock(*((pthread_mutex_t **)ptr + 6));
      v20 = (int)ptr;
    }
    v15 = v37;
    if ( *((_BYTE *)v37 + 20) )
    {
      if ( *((_BYTE *)v37 + 8) )
      {
        v22 = (_DWORD *)__errno(v20);
        v20 = (int)ptr;
        *v22 = 10;
        v35 = -1;
      }
      else
      {
        if ( a2 )
          *a2 = v37[1];
        v35 = *v37;
      }
      sub_B45B0(v20, v37);
      v23 = 0;
      if ( v21 )
      {
LABEL_54:
        v34 = v21;
        v24 = v23;
        pthread_mutex_unlock(v34);
        v23 = v24;
      }
    }
    else
    {
      v23 = 1;
      if ( *((_BYTE *)v37 + 21) )
      {
        if ( !(_BYTE)under_debugger )
          interr(1355);
        BUG();
      }
      if ( v21 )
        goto LABEL_54;
    }
    if ( !v23 )
      return v35;
  }
  v25 = qsem_wait(v15[4], a5);
  v26 = (int)ptr;
  v27 = *((pthread_mutex_t **)ptr + 6);
  if ( v27 )
  {
    v36 = v25;
    pthread_mutex_lock(*((pthread_mutex_t **)ptr + 6));
    v25 = v36;
    v26 = (int)ptr;
  }
  if ( v25 )
  {
    if ( *((_BYTE *)v15 + 8) )
    {
LABEL_60:
      v28 = (_DWORD *)__errno(v26);
      v26 = (int)ptr;
      *v28 = 10;
      v35 = -1;
      goto LABEL_75;
    }
LABEL_72:
    if ( a2 )
      *a2 = v15[1];
    v35 = *v15;
    goto LABEL_75;
  }
  v29 = v15[4];
  v35 = 0;
  if ( v29 )
  {
    v30 = (sem_t *)(v29 + 12);
    if ( *(_DWORD *)(v29 + 4) > 1u )
      v30 = (sem_t *)v30->__align;
    v31 = sub_B18E0(&stat_loc);
    v26 = (int)ptr;
    if ( v31 )
    {
      if ( stat_loc.tv_nsec >= 0x3B9ACA00u )
      {
        stat_loc.tv_nsec -= 1000000000;
        ++stat_loc.tv_sec;
      }
      while ( sem_timedwait(v30, &stat_loc) )
      {
        if ( *(_DWORD *)__errno(v32) != 4 )
        {
          v26 = (int)ptr;
          goto LABEL_70;
        }
      }
      v26 = (int)ptr;
      v15 = v37;
      if ( *((_BYTE *)v37 + 8) )
        goto LABEL_60;
      goto LABEL_72;
    }
LABEL_70:
    v15 = v37;
  }
LABEL_75:
  sub_B45B0(v26, v15);
  if ( v27 )
    pthread_mutex_unlock(v27);
  return v35;
}
// B3F49: variable 'v37' is possibly undefined
// B3FD0: variable 'v19' is possibly undefined
// B4124: variable 'v32' is possibly undefined
// B4180: variable 'v35' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E34C: using guessed type int under_debugger;
