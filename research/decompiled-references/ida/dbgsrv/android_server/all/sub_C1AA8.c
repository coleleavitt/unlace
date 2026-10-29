/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C1AA8
// Address: 0x00000000000C1AA8

//----- (00000000000C1AA8) ----------------------------------------------------
__int64 __fastcall sub_C1AA8(__int64 a1)
{
  unsigned int v2; // w20
  __int64 v3; // x0
  __pid_t v4; // w22
  pthread_mutex_t *v5; // x21
  int v6; // w25
  _BYTE *v7; // x0
  __int64 v8; // x8
  int *v9; // x0
  int v10; // w8
  pthread_mutex_t *v11; // x23
  int *v12; // x21
  int v13; // w22
  pthread_mutex_t *v14; // x20
  int stat_loc; // [xsp+4h] [xbp-4Ch] BYREF
  __int64 v17; // [xsp+8h] [xbp-48h]

  v2 = 1073741832;
  v17 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    stat_loc = 0;
    v3 = waitpid(-1, &stat_loc, v2);
    v4 = v3;
    if ( (_DWORD)v3 != -1 )
      goto LABEL_4;
    v9 = (int *)__errno(v3);
    v10 = *v9;
    if ( *v9 == 10 )
      break;
LABEL_22:
    if ( v10 == 4 )
    {
      v4 = -1;
      v5 = *(pthread_mutex_t **)(a1 + 48);
      if ( v5 )
        goto LABEL_5;
LABEL_6:
      if ( v4 >= 1 )
      {
        do
        {
          if ( (sub_C1E00(a1, v4, stat_loc) & 1) == 0 )
          {
            v6 = stat_loc;
            v7 = qalloc_or_throw(32);
            v7[24] = 0;
            *((_QWORD *)v7 + 2) = 0;
            *(_QWORD *)v7 = a1;
            *((_QWORD *)v7 + 1) = *(_QWORD *)(a1 + 8);
            **(_QWORD **)(a1 + 8) = v7;
            v8 = *(_QWORD *)(a1 + 16) + 1LL;
            *(_QWORD *)(a1 + 8) = v7;
            *(_QWORD *)(a1 + 16) = v8;
            *((_DWORD *)v7 + 4) = v4;
            *((_DWORD *)v7 + 5) = v6;
          }
          v4 = waitpid(-1, &stat_loc, v2 | 1);
        }
        while ( v4 > 0 );
      }
      sub_C1D00(a1);
      if ( v5 )
        pthread_mutex_unlock(v5);
    }
    else if ( v10 == 22 )
    {
      if ( (v2 & 8) != 0 )
      {
        v2 &= ~8u;
      }
      else
      {
        if ( (v2 & 0x40000000) == 0 )
        {
          if ( !under_debugger )
            interr(1160);
          __break(1u);
        }
        v2 = v2 & 0xBFFFFFF7 | 8;
      }
    }
  }
  v11 = *(pthread_mutex_t **)(a1 + 48);
  v12 = v9;
  if ( v11 )
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 48));
  sub_C1D00(a1);
  v4 = waitpid(-1, &stat_loc, v2 | 1);
  if ( v4 != -1 )
  {
    if ( v11 )
      pthread_mutex_unlock(v11);
LABEL_4:
    v5 = *(pthread_mutex_t **)(a1 + 48);
    if ( !v5 )
      goto LABEL_6;
LABEL_5:
    pthread_mutex_lock(v5);
    goto LABEL_6;
  }
  v13 = *v12;
  if ( v11 )
    pthread_mutex_unlock(v11);
  if ( v13 != 10 )
  {
    v10 = *v12;
    goto LABEL_22;
  }
  v14 = *(pthread_mutex_t **)(a1 + 56);
  if ( v14 )
  {
    pthread_mutex_lock(*(pthread_mutex_t **)(a1 + 56));
    *(_BYTE *)(a1 + 80) = 0;
    pthread_mutex_unlock(v14);
  }
  else
  {
    *(_BYTE *)(a1 + 80) = 0;
  }
  return 0;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DF0: using guessed type char under_debugger;
