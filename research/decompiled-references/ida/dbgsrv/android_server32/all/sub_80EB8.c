/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80EB8
// Address: 0x00080EB8

//----- (00080EB8) --------------------------------------------------------
int __fastcall sub_80EB8(int a1)
{
  unsigned int v2; // r6
  int i; // r6
  __pid_t v4; // r5
  pthread_mutex_t *v5; // r6
  int v6; // r6
  _DWORD *v7; // r0
  int *v8; // r0
  int v9; // r1
  pthread_mutex_t *v10; // r7
  int *v11; // r2
  int v12; // r5
  pthread_mutex_t *v13; // r5
  pthread_mutex_t *mutex; // [sp+14h] [bp-14h]
  int v16; // [sp+18h] [bp-10h]
  int *v17; // [sp+18h] [bp-10h]
  int stat_loc; // [sp+20h] [bp-8h] BYREF

  v2 = 0x40000000;
LABEL_2:
  for ( i = v2 + 8; ; i = v16 )
  {
    while ( 1 )
    {
      stat_loc = 0;
      v4 = waitpid(-1, &stat_loc, i);
      if ( v4 != -1 )
        goto LABEL_5;
      v8 = (int *)_errno(0);
      v9 = *v8;
      if ( *v8 == 10 )
        break;
LABEL_24:
      v4 = -1;
      if ( v9 == 4 )
        goto LABEL_5;
      if ( v9 == 22 )
      {
        if ( (i & 8) == 0 )
        {
          if ( (i & 0x40000000) == 0 )
          {
            if ( !under_debugger )
              interr(1160);
            __debugbreak();
          }
          v2 = i & 0xBFFFFFF7;
          goto LABEL_2;
        }
        i &= ~8u;
      }
    }
    v17 = v8;
    v10 = *(pthread_mutex_t **)(a1 + 24);
    if ( v10 )
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
    sub_81070(a1);
    v4 = waitpid(-1, &stat_loc, i | 1);
    if ( v4 == -1 )
      break;
    if ( v10 )
      pthread_mutex_unlock(v10);
LABEL_5:
    v16 = i;
    v5 = *(pthread_mutex_t **)(a1 + 24);
    if ( v5 )
      pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 24));
    mutex = v5;
    if ( v4 >= 1 )
    {
      do
      {
        if ( !sub_81100(a1, v4, stat_loc) )
        {
          v6 = stat_loc;
          v7 = qalloc_or_throw(20);
          v7[3] = 0;
          v7[2] = 0;
          *((_BYTE *)v7 + 16) = 0;
          *v7 = a1;
          v7[1] = *(_DWORD *)(a1 + 4);
          **(_DWORD **)(a1 + 4) = v7;
          *(_DWORD *)(a1 + 4) = v7;
          ++*(_DWORD *)(a1 + 8);
          v7[2] = v4;
          v7[3] = v6;
        }
        v4 = waitpid(-1, &stat_loc, v16 | 1);
      }
      while ( v4 > 0 );
    }
    sub_81070(a1);
    if ( mutex )
      pthread_mutex_unlock(mutex);
  }
  v11 = v17;
  v12 = *v17;
  if ( v10 )
  {
    pthread_mutex_unlock(v10);
    v11 = v17;
  }
  if ( v12 != 10 )
  {
    v9 = *v11;
    goto LABEL_24;
  }
  v13 = *(pthread_mutex_t **)(a1 + 28);
  if ( v13 )
  {
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 28));
    *(_BYTE *)(a1 + 40) = 0;
    pthread_mutex_unlock(v13);
  }
  else
  {
    *(_BYTE *)(a1 + 40) = 0;
  }
  return 0;
}
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// E0550: using guessed type char under_debugger;
