__int64 __fastcall sub_81FCE0(char *arg, char *p_stat_loc, __pid_t a3, int a4, unsigned int a5)
{
  _DWORD *v6; // r13
  __int64 v9; // r15
  char *v10; // rdi
  int v11; // eax
  __pid_t v12; // eax
  unsigned int v13; // ebp
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // rax
  __int64 v17; // r12
  __int64 v18; // r12
  char v19; // al
  char v20; // r14
  char *v22; // rax
  bool v24; // [rsp+17h] [rbp-51h]
  _QWORD *v25; // [rsp+18h] [rbp-50h]
  int stat_loc; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v6 = p_stat_loc;
  v27 = __readfsqword(0x28u);
  v9 = *((_QWORD *)arg + 6);
  qmutex_lock(v9);
  v10 = *(char **)arg;
  if ( arg != *(char **)arg )
  {
    while ( 1 )
    {
      if ( a3 != -1 )
      {
        while ( a3 != *((_DWORD *)v10 + 4) )
        {
          v10 = *(char **)v10;
          if ( arg == v10 )
            goto LABEL_5;
        }
      }
      v11 = *((_DWORD *)v10 + 5);
      if ( v11 != 0xFFFF || (a4 & 8) != 0 )
        break;
      v10 = *(char **)v10;
      if ( arg == v10 )
        goto LABEL_5;
    }
    if ( arg != v10 )
    {
      if ( v10[24] )
      {
        *__errno_location() = 10;
      }
      else if ( p_stat_loc )
      {
        *(_DWORD *)p_stat_loc = v11;
      }
      v22 = *(char **)v10;
      v13 = *((_DWORD *)v10 + 4);
      **((_QWORD **)v10 + 1) = *(_QWORD *)v10;
      *((_QWORD *)v22 + 1) = *((_QWORD *)v10 + 1);
      qfree(v10);
      --*((_QWORD *)arg + 2);
      goto LABEL_35;
    }
  }
LABEL_5:
  if ( a3 == -1 )
  {
    v24 = 0;
    goto LABEL_13;
  }
  p_stat_loc = (char *)&stat_loc;
  v12 = waitpid(a3, &stat_loc, a4 | 1);
  v13 = v12;
  if ( v12 > 0 )
  {
    if ( v6 )
      *v6 = stat_loc;
LABEL_35:
    qmutex_unlock(v9);
    return v13;
  }
  v24 = 0;
  if ( v12 == -1 )
    v24 = *__errno_location() == 10;
LABEL_13:
  v14 = qalloc_or_throw(48, p_stat_loc);
  *(_OWORD *)(v14 + 16) = 0;
  v15 = v14;
  *(_OWORD *)(v14 + 32) = 0;
  v25 = (_QWORD *)(v14 + 16);
  *(_QWORD *)(v14 + 32) = qsem_create(nullptr, 0);
  *(_WORD *)(v15 + 40) = 0;
  *(_QWORD *)v15 = arg + 24;
  v16 = *((__int64 **)arg + 4);
  *(_QWORD *)(v15 + 8) = v16;
  *v16 = v15;
  *((_QWORD *)arg + 4) = v15;
  ++*((_QWORD *)arg + 5);
  *(_DWORD *)(v15 + 28) = a4;
  *(_DWORD *)(v15 + 16) = a3;
  *(_BYTE *)(v15 + 41) = v24;
  sub_81F9A0(arg);
  qmutex_unlock(v9);
  if ( v24 )
  {
    do
    {
      v17 = *((_QWORD *)arg + 7);
      qmutex_lock(v17);
      if ( arg[200] )
        pthread_kill(*((_QWORD *)arg + 8), 12);
      qmutex_unlock(v17);
    }
    while ( !(unsigned __int8)qsem_wait(*(_QWORD *)(v15 + 32), 100) );
    v18 = *((_QWORD *)arg + 6);
    qmutex_lock(v18);
    if ( *(_BYTE *)(v15 + 40) )
    {
      if ( !*(_BYTE *)(v15 + 24) )
      {
        if ( v6 )
          *v6 = *(_DWORD *)(v15 + 20);
        v13 = *(_DWORD *)(v15 + 16);
        goto LABEL_26;
      }
LABEL_45:
      v13 = -1;
      *__errno_location() = 10;
      goto LABEL_26;
    }
    if ( *(_BYTE *)(v15 + 41) )
    {
      if ( !under_debugger )
        interr(1355);
      BUG();
    }
    qmutex_unlock(v18);
  }
  v19 = qsem_wait(*(_QWORD *)(v15 + 32), a5);
  v18 = *((_QWORD *)arg + 6);
  v20 = v19;
  qmutex_lock(v18);
  if ( v20 || (unsigned __int8)qsem_wait(*(_QWORD *)(v15 + 32), 0) )
  {
    if ( !*(_BYTE *)(v15 + 24) )
    {
      if ( v6 )
        *v6 = *(_DWORD *)(v15 + 20);
      v13 = *(_DWORD *)(v15 + 16);
      goto LABEL_26;
    }
    goto LABEL_45;
  }
  v13 = 0;
LABEL_26:
  sub_81F5A0((__int64)arg, v25);
  qmutex_unlock(v18);
  return v13;
}

