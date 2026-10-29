/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007198
// Address: 0x0000000100007198

//----- (0000000100007198) ----------------------------------------------------
__int64 __fastcall sub_100007198(
        pid_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  pid_t *v9; // x21
  pid_t **v10; // x22
  pid_t *v11; // x9
  pid_t **v12; // x8
  bool v13; // zf
  __int64 v14; // x19
  int v15; // w0
  int *v16; // x0
  pid_t **v17; // x20
  __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x10
  int v21; // w12
  unsigned __int64 v22; // x9
  __int64 v23; // x0
  pid_t *v25; // x9
  pid_t **v26; // x8
  _Unwind_Exception *v27; // x0
  int v28; // w1
  __int64 v29; // [xsp+38h] [xbp-C8h] BYREF
  __int64 v30; // [xsp+40h] [xbp-C0h]
  char v31; // [xsp+48h] [xbp-B8h]
  __int128 v32; // [xsp+4Ch] [xbp-B4h]
  __int128 v33; // [xsp+5Ch] [xbp-A4h]
  __int128 v34; // [xsp+6Ch] [xbp-94h]
  int v35; // [xsp+7Ch] [xbp-84h]
  _QWORD v36[2]; // [xsp+80h] [xbp-80h] BYREF
  char v37; // [xsp+90h] [xbp-70h]
  __int128 v38; // [xsp+94h] [xbp-6Ch]
  __int128 v39; // [xsp+A4h] [xbp-5Ch]
  __int128 v40; // [xsp+B4h] [xbp-4Ch]
  int v41; // [xsp+C4h] [xbp-3Ch]

  if ( *((_QWORD *)a1 + 208) )
  {
    if ( ((*(__int64 (__fastcall **)(pid_t *))(*(_QWORD *)a1 + 704LL))(a1) & 1) == 0 )
    {
      if ( under_debugger == 1 )
        __break(1u);
      interr(30101);
      if ( !v28 )
        _Unwind_Resume(v27);
      sub_1000013F4(v27);
    }
    *((_QWORD *)a1 + 208) = 0;
  }
  v36[0] = 0xFFFFFFFFLL;
  v36[1] = -1;
  v37 = 0;
  v38 = 0u;
  v39 = 0u;
  v40 = 0u;
  v41 = 0;
  if ( (sub_100006F4C(a1, (__int64)v36, a3, a4, a5, a6, a7, a8) & 1) != 0 )
  {
    v9 = *((pid_t **)a1 + 238);
    v10 = (pid_t **)(a1 + 478);
    if ( v9 != a1 + 478 )
    {
      do
      {
        if ( v9[14] == 2 )
        {
          v9[12] = -1;
          sub_100002A3C((__int64)a1, v9 + 10);
        }
        v11 = *((pid_t **)v9 + 1);
        if ( v11 )
        {
          do
          {
            v12 = (pid_t **)v11;
            v11 = *(pid_t **)v11;
          }
          while ( v11 );
        }
        else
        {
          do
          {
            v12 = *((pid_t ***)v9 + 2);
            v13 = *v12 == v9;
            v9 = (pid_t *)v12;
          }
          while ( !v13 );
        }
        v9 = (pid_t *)v12;
      }
      while ( v12 != v10 );
    }
    qsleep(250);
    sub_10000590C((__int64)a1);
    v15 = ptrace(11, a1[132], (caddr_t)1, 0);
    if ( *((_BYTE *)a1 + 664) == 1 )
    {
      if ( v15 )
      {
        v16 = __error();
        winerr(*v16);
      }
      sub_100000AA0();
    }
    v17 = *((pid_t ***)a1 + 238);
    if ( v17 != v10 )
    {
      do
      {
        sub_100002B58((__int64)a1, (__int64)(v17 + 5));
        v25 = v17[1];
        if ( v25 )
        {
          do
          {
            v26 = (pid_t **)v25;
            v25 = *(pid_t **)v25;
          }
          while ( v25 );
        }
        else
        {
          do
          {
            v26 = (pid_t **)v17[2];
            v13 = *v26 == (pid_t *)v17;
            v17 = v26;
          }
          while ( !v13 );
        }
        v17 = v26;
      }
      while ( v26 != v10 );
    }
    v29 = 0xFFFFFFFFLL;
    v30 = -1;
    v31 = 0;
    v32 = 0u;
    v33 = 0u;
    v34 = 0u;
    v35 = 0;
    set_debug_event_code((__int64)&v29, 12);
    v18 = *((_QWORD *)a1 + 17);
    v19 = *((_QWORD *)a1 + 16);
    v20 = 56 * ((unsigned __int64)(v18 - v19) >> 3) - 1;
    v21 = *(_DWORD *)(*((_QWORD *)a1 + 238) + 32LL);
    LODWORD(v29) = a1[132];
    HIDWORD(v29) = v21;
    v30 = -1;
    v31 = 1;
    if ( v18 == v19 )
      v20 = 0;
    v22 = *((_QWORD *)a1 + 20) + *((_QWORD *)a1 + 19);
    if ( v20 == v22 )
    {
      sub_100009D70((__int64)(a1 + 30));
      v19 = *((_QWORD *)a1 + 16);
      v22 = *((_QWORD *)a1 + 20) + *((_QWORD *)a1 + 19);
    }
    v23 = *(_QWORD *)(v19 + 8 * (v22 / 0x38)) + 72 * (v22 % 0x38);
    *(_QWORD *)v23 = 0xFFFFFFFFLL;
    *(_QWORD *)(v23 + 8) = -1;
    *(_BYTE *)(v23 + 16) = 0;
    *(_DWORD *)(v23 + 20) = 0;
    copy_debug_event(v23, (__int64)&v29);
    ++*((_QWORD *)a1 + 20);
    free_debug_event((__int64)&v29);
    v14 = 1;
  }
  else if ( (v38 & 0xFFFFFFF) == 2 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 4294967289LL;
  }
  free_debug_event((__int64)v36);
  return v14;
}
// 100007214: variable 'a3' is possibly undefined
// 100007214: variable 'a4' is possibly undefined
// 100007214: variable 'a5' is possibly undefined
// 100007214: variable 'a6' is possibly undefined
// 100007214: variable 'a7' is possibly undefined
// 100007214: variable 'a8' is possibly undefined
// 100007508: variable 'v28' is possibly undefined
// 100007510: variable 'v27' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
