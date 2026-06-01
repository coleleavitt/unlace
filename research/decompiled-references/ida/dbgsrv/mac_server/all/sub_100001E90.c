/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100001E90
// Address: 0x0000000100001E90

//----- (0000000100001E90) ----------------------------------------------------
__int64 __fastcall sub_100001E90(
        _DWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        const void *a5,
        const void *a6,
        double a7,
        double a8,
        __int64 a9)
{
  _DWORD *v12; // r13
  _DWORD *v13; // rcx
  int v14; // eax
  _DWORD *v15; // r15
  _DWORD *v16; // rcx
  int v17; // eax
  unsigned int v18; // r13d
  __int64 v19; // r12
  void *v20; // rdi
  int v21; // eax
  int *v22; // r12
  _QWORD *v23; // rax
  __int64 v24; // rdi
  const char *v25; // rcx
  const char *v26; // rdx
  _QWORD *v27; // r12
  char v28; // dl
  int v29; // eax
  unsigned int v30; // eax
  void *v32; // rax
  _BYTE *v33; // [rsp+8h] [rbp-48h]
  void *__srca; // [rsp+10h] [rbp-40h]
  void *v37; // [rsp+18h] [rbp-38h]
  int v38; // [rsp+24h] [rbp-2Ch]
  char v39; // [rsp+24h] [rbp-2Ch]
  char v40; // [rsp+24h] [rbp-2Ch]

  v38 = a2;
  v12 = a1 + 304;
  v13 = *((_DWORD **)a1 + 152);
  if ( !v13 )
    goto LABEL_14;
  v14 = *(_DWORD *)(a3 + 4);
  v15 = a1 + 304;
  do
  {
    if ( v13[8] >= v14 )
      v15 = v13;
    v13 = *(_DWORD **)&v13[2 * (v13[8] < v14)];
  }
  while ( v13 );
  if ( v15 == v12 || v15[8] > v14 )
  {
LABEL_14:
    sub_1000022E0((__int64)a1);
    v16 = *((_DWORD **)a1 + 152);
    if ( !v16 )
      goto LABEL_57;
    v17 = *(_DWORD *)(a3 + 4);
    v15 = a1 + 304;
    do
    {
      if ( v16[8] >= v17 )
        v15 = v16;
      v16 = *(_DWORD **)&v16[2 * (v16[8] < v17)];
    }
    while ( v16 );
    if ( v15 == v12 || v15[8] > v17 )
    {
LABEL_57:
      if ( under_debugger == 1 )
        goto LABEL_60;
      interr(0x757Bu);
LABEL_59:
      if ( under_debugger != 1 )
      {
        interr(0xCE3u);
        sub_100001690(v32);
      }
LABEL_60:
      BUG();
    }
  }
  v18 = a9;
  v15[12] = 0;
  v15[14] = a4;
  if ( a4 == 2 )
  {
    memcpy(v15 + 15, a5, 0x400u);
    memcpy(v15 + 271, a6, 0x400u);
    v15[530] = *(_DWORD *)(a9 + 8);
    *((_QWORD *)v15 + 264) = *(_QWORD *)a9;
    v19 = *(_QWORD *)(a9 + 24);
    if ( v19 )
    {
      v18 = 8 * v19;
      v37 = qalloc_or_throw(8 * v19);
      memcpy(v37, *(const void **)(a9 + 16), 8 * v19);
    }
    else
    {
      v37 = nullptr;
    }
    v20 = *((void **)v15 + 266);
    if ( v20 )
    {
      *((_QWORD *)v15 + 267) = 0;
      qfree(v20);
    }
    *((_QWORD *)v15 + 266) = v37;
    *((_QWORD *)v15 + 267) = v19;
    *((_QWORD *)v15 + 268) = v19;
  }
  *(_DWORD *)a3 = a1[132];
  *(_BYTE *)(a3 + 16) = 0;
  *(_QWORD *)(a3 + 8) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a1 + 640LL))(
                          a1,
                          *(unsigned int *)(a3 + 4));
  set_debug_event_code(a3, 7);
  v21 = *(_DWORD *)(a3 + 20);
  if ( (v21 & 0xFFFFFFF) != 7 )
    goto LABEL_59;
  v22 = v15 + 10;
  *(_DWORD *)(a3 + 24) = a2;
  *(_BYTE *)(a3 + 28) = 1;
  *(_QWORD *)(a3 + 32) = -1;
  if ( a2 == 17 )
  {
    if ( *((_BYTE *)v15 + 54) == 1 )
    {
      sub_100060FA0((__int64)a1, "got pending SIGSTOP, good!\n");
      *((_BYTE *)v15 + 54) = 0;
      if ( *((_BYTE *)v15 + 52) == 1 )
      {
        *((_BYTE *)v15 + 53) = 1;
        (*(void (__fastcall **)(_DWORD *, _DWORD *))(*(_QWORD *)a1 + 648LL))(a1, v15 + 10);
      }
      if ( *((_BYTE *)v15 + 2152) != 1 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( a1[215] == 1 )
    {
      sub_100060FA0((__int64)a1, "successfully paused the process, good!\n");
      a1[215] = 0;
      set_debug_event_code(a3, 0);
      a2 = 17;
      v21 = *(_DWORD *)(a3 + 20);
    }
  }
  LOBYTE(v18) = 1;
  if ( (v21 & 0xFFFFFFF) != 7 )
    return v18;
  v23 = (_QWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 56LL))(a1);
  v24 = a3 + 40;
  __srca = v23;
  if ( !v23 )
  {
    sub_100002D00(v24, "got unknown signal #%d", a2);
    v28 = 1;
    v29 = a2;
LABEL_45:
    v22 = v15 + 10;
    if ( v29 == 5 )
    {
      v40 = v28;
      v29 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 680LL))(
              a1,
              a3,
              a9,
              *((unsigned __int8 *)v15 + 52));
      v28 = v40;
    }
    goto LABEL_47;
  }
  v25 = _s1;
  v26 = _s1;
  if ( v23[2] )
    v26 = (const char *)v23[1];
  if ( v23[5] )
    v25 = (const char *)v23[4];
  v27 = v23;
  sub_100002D00(v24, "got %s signal (%s)", v26, v25);
  v28 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD *))(*(_QWORD *)a1 + 472LL))(a1, a3, v27);
  *(_BYTE *)(a3 + 16) = (*((_BYTE *)v27 + 4) & 2) != 0;
  v29 = v38;
  if ( v38 != 9 )
    goto LABEL_45;
  v29 = 9;
  v22 = v15 + 10;
  if ( (int)a1[215] > 2 )
  {
    *(_BYTE *)(a3 + 16) = 0;
    v33 = v15 + 538;
    *((_BYTE *)v15 + 2152) = 0;
    v15[12] = 9;
    if ( a1[215] == 1 )
      goto LABEL_53;
    v39 = 0;
    goto LABEL_51;
  }
LABEL_47:
  v33 = v15 + 538;
  *((_BYTE *)v15 + 2152) = *(_BYTE *)(a3 + 16);
  v15[12] = v29;
  if ( a1[215] == 1 )
  {
    if ( v28 )
      return v18;
    goto LABEL_53;
  }
  v39 = v28;
LABEL_51:
  LOBYTE(v30) = sub_100063700(a1, a3, 0, a7);
  v18 = v30;
  LOBYTE(v18) = v30 ^ 1;
  if ( (_BYTE)v30 || v39 )
    return v18;
LABEL_53:
  LOBYTE(v18) = 1;
  if ( (*(_DWORD *)(a3 + 20) & 0xFFFFFFF) != 7 )
    return v18;
  sub_1000641F0((__int64)a1, a3, (__int64)__srca, a7, a8);
  if ( *v33 != 1 )
    goto LABEL_29;
LABEL_28:
  v15[12] = 0;
LABEL_29:
  if ( v15[14] == 2 )
    sub_100003050((__int64)a1, v22);
  sub_100003180((__int64)a1, (__int64)v22);
  return 0;
}
// 100002253: variable 'v30' is possibly undefined
// 1000022D9: variable 'v32' is possibly undefined
// 1000AE23D: using guessed type char under_debugger;
