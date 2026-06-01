__int64 __fastcall sub_8430A0(char *arg, int *a2, __pid_t a3, int a4, unsigned int a5)
{
  __int64 v8; // r15
  char *v9; // rdi
  int v10; // eax
  __pid_t v11; // eax
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r12
  char v18; // al
  char v19; // r14
  char *v21; // rax
  bool v23; // [rsp+17h] [rbp-51h]
  _QWORD *v24; // [rsp+18h] [rbp-50h]
  int stat_loc; // [rsp+24h] [rbp-44h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v8 = *((_QWORD *)arg + 6);
  qmutex_lock(v8);
  v9 = *(char **)arg;
  if ( arg != *(char **)arg )
  {
    while ( 1 )
    {
      if ( a3 != -1 )
      {
        while ( a3 != *((_DWORD *)v9 + 4) )
        {
          v9 = *(char **)v9;
          if ( arg == v9 )
            goto LABEL_5;
        }
      }
      v10 = *((_DWORD *)v9 + 5);
      if ( v10 != 0xFFFF || (a4 & 8) != 0 )
        break;
      v9 = *(char **)v9;
      if ( arg == v9 )
        goto LABEL_5;
    }
    if ( arg != v9 )
    {
      if ( v9[24] )
      {
        *__errno_location() = 10;
      }
      else if ( a2 )
      {
        *a2 = v10;
      }
      v21 = *(char **)v9;
      v12 = *((_DWORD *)v9 + 4);
      **((_QWORD **)v9 + 1) = *(_QWORD *)v9;
      *((_QWORD *)v21 + 1) = *((_QWORD *)v9 + 1);
      qfree(v9);
      --*((_QWORD *)arg + 2);
      goto LABEL_35;
    }
  }
LABEL_5:
  if ( a3 == -1 )
  {
    v23 = 0;
    goto LABEL_13;
  }
  v11 = waitpid(a3, &stat_loc, a4 | 1);
  v12 = v11;
  if ( v11 > 0 )
  {
    if ( a2 )
      *a2 = stat_loc;
LABEL_35:
    qmutex_unlock(v8);
    return v12;
  }
  v23 = 0;
  if ( v11 == -1 )
    v23 = *__errno_location() == 10;
LABEL_13:
  v13 = qalloc_or_throw(48);
  *(_OWORD *)(v13 + 16) = 0;
  v14 = v13;
  *(_OWORD *)(v13 + 32) = 0;
  v24 = (_QWORD *)(v13 + 16);
  *(_QWORD *)(v13 + 32) = qsem_create(nullptr, 0);
  *(_WORD *)(v14 + 40) = 0;
  *(_QWORD *)v14 = arg + 24;
  v15 = *((__int64 **)arg + 4);
  *(_QWORD *)(v14 + 8) = v15;
  *v15 = v14;
  *((_QWORD *)arg + 4) = v14;
  ++*((_QWORD *)arg + 5);
  *(_DWORD *)(v14 + 28) = a4;
  *(_DWORD *)(v14 + 16) = a3;
  *(_BYTE *)(v14 + 41) = v23;
  sub_842D60(arg);
  qmutex_unlock(v8);
  if ( v23 )
  {
    do
    {
      v16 = *((_QWORD *)arg + 7);
      qmutex_lock(v16);
      if ( arg[200] )
        pthread_kill(*((_QWORD *)arg + 8), 12);
      qmutex_unlock(v16);
    }
    while ( !(unsigned __int8)qsem_wait(*(_QWORD *)(v14 + 32), 100) );
    v17 = *((_QWORD *)arg + 6);
    qmutex_lock(v17);
    if ( *(_BYTE *)(v14 + 40) )
    {
      if ( !*(_BYTE *)(v14 + 24) )
      {
        if ( a2 )
          *a2 = *(_DWORD *)(v14 + 20);
        v12 = *(_DWORD *)(v14 + 16);
        goto LABEL_26;
      }
LABEL_45:
      v12 = -1;
      *__errno_location() = 10;
      goto LABEL_26;
    }
    if ( *(_BYTE *)(v14 + 41) )
    {
      if ( !under_debugger )
        interr(1355);
      BUG();
    }
    qmutex_unlock(v17);
  }
  v18 = qsem_wait(*(_QWORD *)(v14 + 32), a5);
  v17 = *((_QWORD *)arg + 6);
  v19 = v18;
  qmutex_lock(v17);
  if ( v19 || (unsigned __int8)qsem_wait(*(_QWORD *)(v14 + 32), 0) )
  {
    if ( !*(_BYTE *)(v14 + 24) )
    {
      if ( a2 )
        *a2 = *(_DWORD *)(v14 + 20);
      v12 = *(_DWORD *)(v14 + 16);
      goto LABEL_26;
    }
    goto LABEL_45;
  }
  v12 = 0;
LABEL_26:
  sub_842960((__int64)arg, v24);
  qmutex_unlock(v17);
  return v12;
}
