/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_494DD0
// Address: 0x0000000000494DD0

//----- (0000000000494DD0) ----------------------------------------------------
__int64 __fastcall sub_494DD0(__int64 a1)
{
  int v2; // w24
  __pid_t v3; // w20
  pthread_mutex_t *v4; // x25
  int v5; // w23
  _QWORD *v6; // x0
  __int64 v7; // x2
  int *v8; // x22
  int v9; // w0
  pthread_mutex_t *v10; // x23
  pthread_mutex_t *v11; // x20
  int stat_loc; // [xsp+54h] [xbp-Ch] BYREF

  v2 = 1073741832;
LABEL_2:
  stat_loc = 0;
  v3 = waitpid(-1, &stat_loc, v2);
  if ( v3 != -1 )
  {
LABEL_3:
    v4 = *(pthread_mutex_t **)(a1 + 48);
    sub_494720(v4);
    for ( ; v3 > 0; v3 = waitpid(-1, &stat_loc, v2 | 1) )
    {
      if ( !(unsigned __int8)sub_494058(a1, v3, stat_loc) )
      {
        v5 = stat_loc;
        v6 = sub_491248(32);
        v6[2] = 0;
        *((_BYTE *)v6 + 24) = 0;
        *v6 = a1;
        v6[1] = *(_QWORD *)(a1 + 8);
        **(_QWORD **)(a1 + 8) = v6;
        v7 = *(_QWORD *)(a1 + 16) + 1LL;
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = v7;
        *((_DWORD *)v6 + 4) = v3;
        *((_DWORD *)v6 + 5) = v5;
      }
    }
    goto LABEL_7;
  }
  while ( 1 )
  {
    v8 = __errno_location();
    v9 = *v8;
    if ( *v8 != 10 )
      goto LABEL_9;
    v10 = *(pthread_mutex_t **)(a1 + 48);
    sub_494720(v10);
    sub_493F58(a1);
    v3 = waitpid(-1, &stat_loc, v2 | 1);
    if ( v3 != -1 )
    {
      sub_494760(v10);
      goto LABEL_3;
    }
    if ( *v8 == 10 )
      break;
    sub_494760(v10);
    v9 = *v8;
LABEL_9:
    if ( v9 != 4 )
    {
      if ( v9 != 22 )
        goto LABEL_2;
      if ( (v2 & 8) != 0 )
      {
        v2 &= ~8u;
        goto LABEL_2;
      }
      if ( (v2 & 0x40000000) != 0 )
      {
        v2 = 8;
        goto LABEL_2;
      }
      if ( !under_debugger )
        sub_492270(1160);
      __break(0x3E8u);
    }
    v4 = *(pthread_mutex_t **)(a1 + 48);
    sub_494720(v4);
LABEL_7:
    sub_493F58(a1);
    sub_494760(v4);
    stat_loc = 0;
    v3 = waitpid(-1, &stat_loc, v2);
    if ( v3 != -1 )
      goto LABEL_3;
  }
  sub_494760(v10);
  v11 = *(pthread_mutex_t **)(a1 + 56);
  sub_494720(v11);
  *(_BYTE *)(a1 + 200) = 0;
  sub_494760(v11);
  return 0;
}
// 52451C: using guessed type char under_debugger;
