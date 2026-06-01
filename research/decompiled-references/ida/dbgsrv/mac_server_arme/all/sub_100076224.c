/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100076224
// Address: 0x0000000100076224

//----- (0000000100076224) ----------------------------------------------------
__int64 __fastcall sub_100076224(__int64 a1)
{
  int v2; // w20
  pid_t v3; // w21
  pthread_mutex_t *v4; // x22
  int v5; // w23
  _BYTE *v6; // x0
  _QWORD *v7; // x8
  __int64 v8; // x8
  pthread_mutex_t *v9; // x22
  int v10; // w21
  int v11; // w8
  pthread_mutex_t *v12; // x20
  int v14; // [xsp+14h] [xbp-3Ch] BYREF

  v2 = 16;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = 0;
      v3 = waitpid(-1, &v14, v2);
      if ( v3 != -1 )
        goto LABEL_3;
      if ( *__error() == 10 )
        break;
LABEL_20:
      v11 = *__error();
      if ( v11 == 4 )
      {
        v3 = -1;
        goto LABEL_3;
      }
      if ( v11 == 22 )
      {
        if ( (v2 & 0x10) == 0 )
        {
          if ( under_debugger != 1 )
            goto LABEL_31;
          while ( 1 )
          {
            __break(1u);
LABEL_31:
            interr(1160);
          }
        }
        v2 &= ~0x10u;
      }
    }
    v9 = *(pthread_mutex_t **)(a1 + 48);
    if ( v9 )
      pthread_mutex_lock(v9);
    sub_100076474((int *)a1);
    v3 = waitpid(-1, &v14, v2 | 1);
    if ( v3 == -1 )
      break;
    if ( v9 )
      pthread_mutex_unlock(v9);
LABEL_3:
    v4 = *(pthread_mutex_t **)(a1 + 48);
    if ( v4 )
      pthread_mutex_lock(v4);
    if ( v3 >= 1 )
    {
      do
      {
        if ( (sub_100076590(a1, v3, v14) & 1) == 0 )
        {
          v5 = v14;
          v6 = qalloc_or_throw(32);
          v6[24] = 0;
          *((_QWORD *)v6 + 2) = 0;
          *(_QWORD *)v6 = a1;
          v7 = *(_QWORD **)(a1 + 8);
          *((_QWORD *)v6 + 1) = v7;
          *v7 = v6;
          v8 = *(_QWORD *)(a1 + 16) + 1LL;
          *(_QWORD *)(a1 + 8) = v6;
          *(_QWORD *)(a1 + 16) = v8;
          *((_DWORD *)v6 + 4) = v3;
          *((_DWORD *)v6 + 5) = v5;
        }
        v3 = waitpid(-1, &v14, v2 | 1);
      }
      while ( v3 > 0 );
    }
    sub_100076474((int *)a1);
    if ( v4 )
      pthread_mutex_unlock(v4);
  }
  v10 = *__error();
  if ( v9 )
    pthread_mutex_unlock(v9);
  if ( v10 != 10 )
    goto LABEL_20;
  v12 = *(pthread_mutex_t **)(a1 + 56);
  if ( v12 )
  {
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 56));
    *(_BYTE *)(a1 + 76) = 0;
    pthread_mutex_unlock(v12);
  }
  else
  {
    *(_BYTE *)(a1 + 76) = 0;
  }
  return 0;
}
// 1000A590D: using guessed type char under_debugger;
