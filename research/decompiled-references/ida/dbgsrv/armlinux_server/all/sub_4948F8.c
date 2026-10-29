/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4948F8
// Address: 0x00000000004948F8

//----- (00000000004948F8) ----------------------------------------------------
__int64 __fastcall sub_4948F8(_QWORD *a1, int *a2, __pid_t a3, int a4, int a5)
{
  pthread_mutex_t *v10; // x23
  _QWORD *v11; // x22
  char *v12; // x0
  _BOOL4 v13; // w28
  __pid_t v14; // w0
  unsigned int v15; // w26
  int v16; // w1
  char *v18; // x26
  _QWORD **v19; // x22
  __int64 v20; // x1
  pthread_mutex_t *v21; // x20
  bool v22; // w0
  _BOOL4 v23; // w23
  int stat_loc; // [xsp+74h] [xbp-Ch] BYREF

  v10 = (pthread_mutex_t *)a1[6];
  sub_494720(v10);
  v11 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v12 = (char *)(v11 + 2);
      if ( a3 == -1 || (v12 = (char *)(v11 + 2), a3 == *((_DWORD *)v11 + 4)) )
      {
        v16 = *((_DWORD *)v12 + 1);
        if ( v16 != 0xFFFF || (a4 & 8) != 0 )
          break;
      }
      v11 = (_QWORD *)*v11;
      if ( v11 == a1 )
        goto LABEL_5;
    }
    if ( v12[8] )
    {
      *__errno_location() = 10;
    }
    else if ( a2 )
    {
      *a2 = v16;
    }
    v15 = *((_DWORD *)v11 + 4);
    *(_QWORD *)v11[1] = *v11;
    *(_QWORD *)(*v11 + 8LL) = v11[1];
    j__free(v11);
    --a1[2];
    goto LABEL_15;
  }
LABEL_5:
  v13 = 0;
  if ( a3 == -1 )
  {
LABEL_20:
    v18 = (char *)sub_491248(48);
    v19 = (_QWORD **)(v18 + 16);
    *((_DWORD *)v18 + 7) = 0;
    *((_QWORD *)v18 + 4) = 0;
    v18[40] = 0;
    v18[41] = 0;
    *((_QWORD *)v18 + 2) = 0;
    v18[24] = 0;
    *((_QWORD *)v18 + 4) = sub_493CB0(nullptr, 0);
    v18[40] = 0;
    v18[41] = 0;
    *(_QWORD *)v18 = a1 + 3;
    *((_QWORD *)v18 + 1) = a1[4];
    *(_QWORD *)a1[4] = v18;
    v20 = a1[5] + 1LL;
    a1[4] = v18;
    a1[5] = v20;
    *((_DWORD *)v18 + 4) = a3;
    *((_DWORD *)v18 + 7) = a4;
    v18[41] = v13;
    sub_494788((__int64)a1);
    sub_494760(v10);
    if ( v13 )
    {
      do
        sub_4948B8((__int64)a1);
      while ( !sub_4941A8(*((_QWORD *)v18 + 4), 100) );
      v21 = (pthread_mutex_t *)a1[6];
      sub_494720(v21);
      if ( v18[40] )
      {
        if ( v18[24] )
          goto LABEL_24;
LABEL_33:
        if ( a2 )
          *a2 = *((_DWORD *)v18 + 5);
        v15 = *((_DWORD *)v18 + 4);
        goto LABEL_25;
      }
      if ( v18[41] )
      {
        if ( !under_debugger )
          sub_492270(1355);
        __break(0x3E8u);
        goto LABEL_33;
      }
      sub_494760(v21);
    }
    v22 = sub_4941A8(*((_QWORD *)v18 + 4), a5);
    v21 = (pthread_mutex_t *)a1[6];
    v23 = v22;
    sub_494720(v21);
    if ( !v23 && !sub_4941A8(*((_QWORD *)v18 + 4), 0) )
    {
      v15 = 0;
      goto LABEL_25;
    }
    if ( !v18[24] )
    {
      if ( a2 )
        *a2 = *((_DWORD *)v18 + 5);
      v15 = *((_DWORD *)v18 + 4);
      goto LABEL_25;
    }
LABEL_24:
    v15 = -1;
    *__errno_location() = 10;
LABEL_25:
    sub_4942F8((__int64)a1, v19);
    sub_494760(v21);
    return v15;
  }
  v14 = waitpid(a3, &stat_loc, a4 | 1);
  v15 = v14;
  if ( v14 <= 0 )
  {
    v13 = 0;
    if ( v14 == -1 )
      v13 = *__errno_location() == 10;
    goto LABEL_20;
  }
  if ( a2 )
    *a2 = stat_loc;
LABEL_15:
  sub_494760(v10);
  return v15;
}
// 52451C: using guessed type char under_debugger;
