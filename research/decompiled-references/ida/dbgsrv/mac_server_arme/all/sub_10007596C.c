/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007596C
// Address: 0x000000010007596C

//----- (000000010007596C) ----------------------------------------------------
__int64 __fastcall sub_10007596C(__int64 a1, unsigned int *a2, pid_t a3, unsigned int a4, int a5)
{
  __int64 v5; // x22
  pthread_mutex_t *v11; // x24
  unsigned int *v12; // x23
  unsigned int v13; // w9
  __int64 v14; // x0
  int v15; // w25
  _BOOL4 v16; // w27
  unsigned int *v17; // x8
  __int64 v18; // x23
  pthread_mutex_t *v19; // x24
  pthread_mutex_t *v20; // x24
  int v21; // w25
  char v22; // w22
  pthread_mutex_t *v23; // x21
  __int64 v25; // [xsp+8h] [xbp-68h] BYREF
  int v26[2]; // [xsp+10h] [xbp-60h] BYREF

  v11 = *(pthread_mutex_t **)(a1 + 48);
  if ( v11 )
    pthread_mutex_lock(v11);
  v12 = *(unsigned int **)a1;
  if ( *(_QWORD *)a1 != a1 )
  {
    while ( 1 )
    {
      if ( a3 == -1 || v12[4] == a3 )
      {
        v13 = v12[5];
        if ( (a4 & 0x10) != 0 || (v13 & 0xFFFFFF7F) != 0x137F )
          break;
      }
      v12 = *(unsigned int **)v12;
      if ( v12 == (unsigned int *)a1 )
        goto LABEL_13;
    }
    if ( v12 != (unsigned int *)a1 )
    {
      if ( *((_BYTE *)v12 + 24) == 1 )
      {
        *__error() = 10;
      }
      else if ( a2 )
      {
        *a2 = v13;
      }
      v5 = v12[4];
      v17 = *(unsigned int **)v12;
      **((_QWORD **)v12 + 1) = *(_QWORD *)v12;
      *((_QWORD *)v17 + 1) = *((_QWORD *)v12 + 1);
      qfree(v12);
      v15 = 0;
      v16 = 0;
      --*(_QWORD *)(a1 + 16);
      if ( !v11 )
        goto LABEL_29;
LABEL_28:
      pthread_mutex_unlock(v11);
      goto LABEL_29;
    }
  }
LABEL_13:
  if ( a3 == -1 )
  {
    v16 = 0;
    goto LABEL_27;
  }
  v14 = waitpid(a3, v26, a4 | 1);
  v5 = v14;
  if ( (int)v14 < 1 )
  {
    v16 = (_DWORD)v14 == -1 && *__error() == 10;
LABEL_27:
    v25 = a1 + 24;
    sub_100077F5C(a1 + 24, &v25, v26);
    v18 = *(_QWORD *)v26;
    *(_DWORD *)(*(_QWORD *)v26 + 16LL) = a3;
    v12 = (unsigned int *)(v18 + 16);
    v12[3] = a4;
    *((_BYTE *)v12 + 25) = v16;
    sub_100075D2C(a1);
    v15 = 1;
    if ( !v11 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( a2 )
    *a2 = v26[0];
  v15 = 0;
  v16 = 0;
  if ( v11 )
    goto LABEL_28;
LABEL_29:
  if ( !v15 )
    return v5;
  if ( !v16 )
    goto LABEL_54;
  do
  {
    v19 = *(pthread_mutex_t **)(a1 + 56);
    *(_QWORD *)v26 = v19;
    if ( v19 )
      pthread_mutex_lock(v19);
    if ( *(_BYTE *)(a1 + 76) == 1 )
      pthread_kill(*(pthread_t *)(a1 + 64), 31);
    if ( v19 )
      pthread_mutex_unlock(v19);
  }
  while ( !(unsigned int)qsem_wait(*((_QWORD *)v12 + 2), 100) );
  v20 = *(pthread_mutex_t **)(a1 + 48);
  *(_QWORD *)v26 = v20;
  if ( v20 )
    pthread_mutex_lock(v20);
  v21 = *((unsigned __int8 *)v12 + 24);
  if ( v21 != 1 )
  {
    if ( *((_BYTE *)v12 + 25) != 1 )
      goto LABEL_51;
    if ( under_debugger != 1 )
      interr(1355);
    __break(1u);
    goto LABEL_47;
  }
  if ( *((_BYTE *)v12 + 8) != 1 )
  {
LABEL_47:
    if ( a2 )
      *a2 = v12[1];
    v5 = *v12;
    goto LABEL_50;
  }
  *__error() = 10;
  v5 = 0xFFFFFFFFLL;
LABEL_50:
  sub_100075FF4(a1, (__int64 *)v12);
LABEL_51:
  if ( v20 )
    pthread_mutex_unlock(v20);
  if ( (v21 & 1) == 0 )
  {
LABEL_54:
    v22 = qsem_wait(*((_QWORD *)v12 + 2), a5);
    v23 = *(pthread_mutex_t **)(a1 + 48);
    *(_QWORD *)v26 = v23;
    if ( v23 )
      pthread_mutex_lock(v23);
    if ( (v22 & 1) != 0 || (unsigned int)qsem_wait(*((_QWORD *)v12 + 2), 0) )
    {
      if ( *((_BYTE *)v12 + 8) == 1 )
      {
        *__error() = 10;
        v5 = 0xFFFFFFFFLL;
      }
      else
      {
        if ( a2 )
          *a2 = v12[1];
        v5 = *v12;
      }
    }
    else
    {
      v5 = 0;
    }
    sub_100075FF4(a1, (__int64 *)v12);
    if ( v23 )
      pthread_mutex_unlock(v23);
  }
  return v5;
}
// 100075C98: variable 'v5' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
