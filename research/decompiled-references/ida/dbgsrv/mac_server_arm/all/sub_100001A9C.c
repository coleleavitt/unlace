/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001A9C
// Address: 0x0000000100001A9C

//----- (0000000100001A9C) ----------------------------------------------------
__int64 __fastcall sub_100001A9C(_DWORD *a1, __int64 a2, __int64 a3, int a4, void *__src, const void *a6, __int64 *a7)
{
  _DWORD *v14; // x27
  _DWORD *v15; // x9
  int v16; // w8
  _DWORD *v17; // x26
  _DWORD *v18; // x9
  int v19; // w8
  __int64 v20; // x8
  __int64 v21; // x25
  void *v22; // x23
  void *v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x5
  __int64 v28; // x6
  __int64 v29; // x7
  int v30; // w8
  __int64 result; // x0
  __int64 v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  __int64 v36; // x5
  __int64 v37; // x6
  __int64 v38; // x7
  __int64 v39; // x23
  char *v40; // x8
  __int64 v41; // x3
  __int64 v42; // x4
  __int64 v43; // x5
  __int64 v44; // x6
  __int64 v45; // x7
  char v46; // w24
  _BYTE *v47; // x22
  int v48; // w0
  char v49; // w8
  void *v50; // x0
  char v51; // [xsp+0h] [xbp-60h]

  v14 = a1 + 478;
  v15 = *((_DWORD **)a1 + 239);
  if ( !v15 )
    goto LABEL_14;
  v16 = *(_DWORD *)(a3 + 4);
  v17 = a1 + 478;
  do
  {
    if ( v15[8] >= v16 )
      v17 = v15;
    v15 = *(_DWORD **)&v15[2 * (v15[8] < v16)];
  }
  while ( v15 );
  if ( v17 == v14 || v17[8] > v16 )
  {
LABEL_14:
    sub_100001EE8((__int64)a1);
    v18 = *((_DWORD **)a1 + 239);
    if ( !v18 )
      goto LABEL_56;
    v19 = *(_DWORD *)(a3 + 4);
    v17 = v14;
    do
    {
      if ( v18[8] >= v19 )
        v17 = v18;
      v18 = *(_DWORD **)&v18[2 * (v18[8] < v19)];
    }
    while ( v18 );
    if ( v17 == v14 || v17[8] > v19 )
    {
LABEL_56:
      if ( under_debugger == 1 )
      {
LABEL_59:
        __break(1u);
LABEL_60:
        interr(3299);
        sub_1000013F4(v50);
      }
      interr(30075);
LABEL_58:
      if ( under_debugger != 1 )
        goto LABEL_60;
      goto LABEL_59;
    }
  }
  v17[12] = 0;
  v17[14] = a4;
  if ( a4 == 2 )
  {
    memcpy(v17 + 15, __src, 0x400u);
    memcpy(v17 + 271, a6, 0x400u);
    v20 = *a7;
    v17[530] = *((_DWORD *)a7 + 2);
    *((_QWORD *)v17 + 264) = v20;
    v21 = a7[3];
    if ( v21 )
    {
      v22 = qalloc_or_throw(8 * v21);
      memcpy(v22, (const void *)a7[2], 8 * v21);
      v23 = *((void **)v17 + 266);
      if ( !v23 )
        goto LABEL_21;
    }
    else
    {
      v22 = nullptr;
      v23 = *((void **)v17 + 266);
      if ( !v23 )
      {
LABEL_21:
        *((_QWORD *)v17 + 266) = v22;
        *((_QWORD *)v17 + 267) = v21;
        *((_QWORD *)v17 + 268) = v21;
        goto LABEL_22;
      }
    }
    *((_QWORD *)v17 + 267) = 0;
    qfree(v23);
    goto LABEL_21;
  }
LABEL_22:
  *(_DWORD *)a3 = a1[132];
  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 672LL))(
                          a1,
                          *(unsigned int *)(a3 + 4));
  set_debug_event_code(a3, 7);
  v30 = *(_DWORD *)(a3 + 20);
  if ( (v30 & 0xFFFFFFF) != 7 )
    goto LABEL_58;
  *(_DWORD *)(a3 + 24) = a2;
  *(_BYTE *)(a3 + 28) = 1;
  *(_QWORD *)(a3 + 32) = -1;
  if ( (_DWORD)a2 != 17 )
    goto LABEL_34;
  if ( *((_BYTE *)v17 + 54) != 1 )
  {
    if ( a1[389] == 1 )
    {
      sub_1000560A0((__int64)a1, "successfully paused the process, good!\n", v24, v25, v26, v27, v28, v29, v51);
      a1[389] = 0;
      set_debug_event_code(a3, 0);
      v30 = *(_DWORD *)(a3 + 20);
    }
LABEL_34:
    if ( (v30 & 0xFFFFFFF) != 7 )
      return 1;
    v32 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(a1, a2);
    v39 = v32;
    if ( v32 )
    {
      if ( *(_QWORD *)(v32 + 16) )
        v40 = *(char **)(v32 + 8);
      else
        v40 = &byte_100075A30;
      sub_10000273C((char **)(a3 + 40), "got %s signal (%s)", v33, v34, v35, v36, v37, v38, (char)v40);
      v46 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)a1 + 472LL))(a1, a3, v39);
      *(_BYTE *)(a3 + 16) = (*(_BYTE *)(v39 + 4) & 2) != 0;
      if ( (_DWORD)a2 == 9 )
      {
        LODWORD(a2) = 9;
        if ( (int)a1[389] > 2 )
        {
          v46 = 0;
          *(_BYTE *)(a3 + 16) = 0;
          v47 = v17 + 538;
          *((_BYTE *)v17 + 2152) = 0;
          v17[12] = 9;
          if ( a1[389] == 1 )
            goto LABEL_51;
          goto LABEL_49;
        }
LABEL_46:
        v47 = v17 + 538;
        *((_BYTE *)v17 + 2152) = *(_BYTE *)(a3 + 16);
        v17[12] = a2;
        if ( a1[389] == 1 )
        {
          if ( (v46 & 1) != 0 )
            return 1;
          goto LABEL_51;
        }
LABEL_49:
        v48 = sub_100058530(a1, a3, 0, v41, v42, v43, v44, v45);
        v49 = v48;
        result = v48 ^ 1u;
        if ( (v49 & 1) != 0 || (v46 & 1) != 0 )
          return result;
LABEL_51:
        if ( (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) == 7 )
        {
          sub_100059064((__int64)a1, a3, v39, v41, v42, v43, v44, v45);
          if ( *v47 != 1 )
            goto LABEL_29;
          goto LABEL_28;
        }
        return 1;
      }
    }
    else
    {
      sub_10000273C((char **)(a3 + 40), "got unknown signal #%d", v33, v34, v35, v36, v37, v38, a2);
      v46 = 1;
    }
    if ( (_DWORD)a2 == 5 )
      LODWORD(a2) = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 712LL))(
                      a1,
                      a3,
                      a7,
                      *((unsigned __int8 *)v17 + 52));
    goto LABEL_46;
  }
  sub_1000560A0((__int64)a1, "got pending SIGSTOP, good!\n", v24, v25, v26, v27, v28, v29, v51);
  *((_BYTE *)v17 + 54) = 0;
  if ( *((_BYTE *)v17 + 52) == 1 )
  {
    *((_BYTE *)v17 + 53) = 1;
    (*(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)a1 + 680LL))(a1, v17 + 10);
  }
  if ( *((_BYTE *)v17 + 2152) != 1 )
    goto LABEL_29;
LABEL_28:
  v17[12] = 0;
LABEL_29:
  if ( v17[14] == 2 )
    sub_100002A3C((__int64)a1, v17 + 10);
  sub_100002B58((__int64)a1, (__int64)(v17 + 10));
  return 0;
}
// 100001C60: variable 'v24' is possibly undefined
// 100001C60: variable 'v25' is possibly undefined
// 100001C60: variable 'v26' is possibly undefined
// 100001C60: variable 'v27' is possibly undefined
// 100001C60: variable 'v28' is possibly undefined
// 100001C60: variable 'v29' is possibly undefined
// 100001C60: variable 'v51' is possibly undefined
// 100001D4C: variable 'v33' is possibly undefined
// 100001D4C: variable 'v34' is possibly undefined
// 100001D4C: variable 'v35' is possibly undefined
// 100001D4C: variable 'v36' is possibly undefined
// 100001D4C: variable 'v37' is possibly undefined
// 100001D4C: variable 'v38' is possibly undefined
// 100001E40: variable 'v41' is possibly undefined
// 100001E40: variable 'v42' is possibly undefined
// 100001E40: variable 'v43' is possibly undefined
// 100001E40: variable 'v44' is possibly undefined
// 100001E40: variable 'v45' is possibly undefined
// 100001EE4: variable 'v50' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10009D90D: using guessed type char under_debugger;
