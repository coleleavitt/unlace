__int64 __fastcall sub_C3F00(_QWORD *a1)
{
  unsigned int v1; // r13d
  char v2; // r12
  __int64 v4; // rbp
  __int64 v5; // r12
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rax
  int *v9; // rdi
  __int64 v10; // rax
  unsigned int *v11; // rdi
  unsigned int v12; // ebp
  char v13; // r15

  v1 = 0;
  v2 = 1;
  while ( 1 )
  {
    qsem_wait();
    if ( !a1[25] )
      break;
    v4 = a1[25];
    v5 = *(_QWORD *)(v4 + 8);
    a1[25] = 0;
    v6 = v5 & 4;
    v7 = (**(__int64 (__fastcall ***)(__int64, __int64))v4)(v4, 0xFFFFFFFFLL);
    if ( !qword_252758 )
      return (unsigned int)-1;
    if ( !v6 )
      *(_QWORD *)(v4 + 8) = v7;
    sub_C3DF0((__int64)a1, 30);
    qsem_wait();
    qmutex_lock();
    v8 = a1[31];
    if ( !v8 )
      goto LABEL_24;
    v9 = (int *)a1[30];
    v1 = *v9;
    v2 = *((_BYTE *)v9 + 4);
    if ( ((8 * v8) >> 3) - 2 >= 0 )
    {
      memmove(v9, v9 + 2, 8 * v8 - 8);
      v8 = a1[31];
    }
    a1[31] = v8 - 1;
    qmutex_unlock();
    if ( !v2 )
      qsnprintf();
  }
  qmutex_lock();
  v10 = a1[31];
  if ( !v10 )
    goto LABEL_22;
  v11 = (unsigned int *)a1[30];
  v12 = *v11;
  v13 = *((_BYTE *)v11 + 4);
  if ( ((8 * v10) >> 3) - 2 >= 0 )
  {
    memmove(v11, v11 + 2, 8 * v10 - 8);
    v10 = a1[31];
  }
  a1[31] = v10 - 1;
  qmutex_unlock();
  if ( !v13 )
  {
    qsnprintf();
    if ( v2 )
      return v12;
    goto LABEL_20;
  }
  if ( v2 )
  {
LABEL_20:
    if ( under_debugger )
      goto LABEL_26;
    interr();
LABEL_22:
    if ( !under_debugger )
    {
      interr();
LABEL_24:
      if ( !under_debugger )
        interr();
    }
LABEL_26:
    BUG();
  }
  v12 = v1;
  qsnprintf();
  return v12;
}

