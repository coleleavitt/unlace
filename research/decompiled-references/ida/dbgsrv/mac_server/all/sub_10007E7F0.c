/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10007E7F0
// Address: 0x000000010007E7F0

//----- (000000010007E7F0) ----------------------------------------------------
void *__fastcall sub_10007E7F0(__int64 a1)
{
  int i; // r15d
  pid_t v2; // r12d
  pthread_mutex_t *v3; // r13
  int v4; // r14d
  int v5; // r15d
  _BYTE *v6; // rax
  _QWORD *v7; // rcx
  pthread_mutex_t *v8; // r13
  int v9; // r14d
  int v10; // eax
  pthread_mutex_t *v11; // r14
  int v13; // [rsp+Ch] [rbp-44h]
  int v14; // [rsp+1Ch] [rbp-34h] BYREF

  for ( i = 16; ; i = v13 )
  {
    while ( 1 )
    {
      v14 = 0;
      v2 = waitpid(-1, &v14, i);
      if ( v2 != -1 )
        goto LABEL_4;
      if ( *__error() == 10 )
        break;
LABEL_22:
      v10 = *__error();
      if ( v10 == 4 )
      {
        v2 = -1;
        goto LABEL_4;
      }
      if ( v10 == 22 )
      {
        if ( (i & 0x10) == 0 )
        {
          if ( under_debugger != 1 )
            interr(0x488u);
          BUG();
        }
        i &= ~0x10u;
      }
    }
    v8 = *(pthread_mutex_t **)(a1 + 48);
    if ( v8 )
      pthread_mutex_lock(v8);
    sub_10007EA30(a1);
    v2 = waitpid(-1, &v14, i | 1);
    if ( v2 == -1 )
      break;
    if ( v8 )
      pthread_mutex_unlock(v8);
LABEL_4:
    v3 = *(pthread_mutex_t **)(a1 + 48);
    if ( v3 )
      pthread_mutex_lock(v3);
    v13 = i;
    if ( v2 > 0 )
    {
      v4 = i | 1;
      do
      {
        if ( !(unsigned __int8)sub_10007EB10(a1, v2, v14) )
        {
          v5 = v14;
          v6 = qalloc_or_throw(32);
          v6[24] = 0;
          *((_QWORD *)v6 + 2) = 0;
          *(_QWORD *)v6 = a1;
          v7 = *(_QWORD **)(a1 + 8);
          *((_QWORD *)v6 + 1) = v7;
          *v7 = v6;
          *(_QWORD *)(a1 + 8) = v6;
          ++*(_QWORD *)(a1 + 16);
          *((_DWORD *)v6 + 4) = v2;
          *((_DWORD *)v6 + 5) = v5;
        }
        v2 = waitpid(-1, &v14, v4);
      }
      while ( v2 > 0 );
    }
    sub_10007EA30(a1);
    if ( v3 )
      pthread_mutex_unlock(v3);
  }
  v9 = *__error();
  if ( v8 )
    pthread_mutex_unlock(v8);
  if ( v9 != 10 )
    goto LABEL_22;
  v11 = *(pthread_mutex_t **)(a1 + 56);
  if ( v11 )
  {
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 56));
    *(_BYTE *)(a1 + 76) = 0;
    pthread_mutex_unlock(v11);
  }
  else
  {
    *(_BYTE *)(a1 + 76) = 0;
  }
  return nullptr;
}
// 1000AE23D: using guessed type char under_debugger;
