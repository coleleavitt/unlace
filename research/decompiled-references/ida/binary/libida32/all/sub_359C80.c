_BOOL8 __fastcall sub_359C80(_QWORD *a1, const char *a2, const char *a3)
{
  const char *v3; // r14
  const char *v4; // r12
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  __int64 (__fastcall *v8)(_QWORD *, char); // rax
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rsi
  const char *v13; // rbp
  char *v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // r8
  char v19; // r10
  __int64 (__fastcall *v20)(_QWORD *, char); // rax
  __int64 v21; // rax
  void (__fastcall *v22)(_QWORD *, __int64, _QWORD); // rbp
  __int64 v23; // rax
  void (__fastcall *v24)(_QWORD *, __int64, _QWORD); // rbp
  __int64 v25; // rax
  bool v27; // al
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+8h] [rbp-60h]
  unsigned __int64 v30; // [rsp+8h] [rbp-60h]
  char v31; // [rsp+17h] [rbp-51h]
  __int64 v32; // [rsp+18h] [rbp-50h]
  __int64 v33; // [rsp+20h] [rbp-48h]
  _QWORD *v34; // [rsp+28h] [rbp-40h]

  if ( *(_BYTE *)(a1[11] + 12LL) )
  {
    a1[4] = 0;
    return 0;
  }
  v3 = a2;
  v4 = a3;
  if ( !((unsigned __int64)a3 | (unsigned __int64)a2) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL) != 0;
  v34 = a1 + 3;
  while ( 1 )
  {
    v6 = getinf(41);
    v7 = getinf(40);
    (*(void (__fastcall **)(_QWORD *, _QWORD *, _QWORD))(*a1 + 48LL))(a1, v34, v6 - v7);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 4);
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 56LL))(a1, *(_QWORD *)(a1[60] + 48LL), 0);
    v8 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( v8 == sub_3598B0 )
    {
      v9 = a1[4];
      if ( v9 )
      {
        v10 = v9 + 1;
        v11 = a1[4];
        v12 = a1[3];
        --v9;
        if ( a1[5] >= v10 )
        {
LABEL_11:
          a1[4] = v10;
          *(_BYTE *)(v12 + v9) = 32;
          *(_BYTE *)(a1[3] + v11) = 0;
          goto LABEL_12;
        }
      }
      else
      {
        v12 = a1[3];
        v11 = 1;
        v10 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_11;
      }
      v30 = v10;
      v28 = qvector_reserve(v34, v12, v10, 1);
      v10 = v30;
      a1[3] = v28;
      v12 = v28;
      goto LABEL_11;
    }
    v8(a1, 32);
LABEL_12:
    v13 = v4;
    if ( !v4 )
      v13 = v3;
    v14 = strchr(v13, 10);
    if ( !v14 )
      v14 = (char *)&v13[strlen(v13)];
    if ( v13 < v14 )
      break;
    v24 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
    v25 = closing_comment();
    v24(a1, v25, 0);
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL) )
      return 1;
    if ( !v14 )
      goto LABEL_31;
LABEL_26:
    if ( *v14 )
    {
      if ( v4 )
        v4 = v14 + 1;
      else
        v3 = v14 + 1;
    }
    else
    {
LABEL_31:
      v27 = v4 == nullptr;
      v4 = nullptr;
      if ( v3 == nullptr || v27 )
        return 0;
    }
  }
  do
  {
    while ( 1 )
    {
      v19 = *v13++;
      v20 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
      if ( v20 != sub_3598B0 )
        break;
      v18 = a1[4];
      if ( v18 )
      {
        v15 = v18 + 1;
        v16 = a1[4];
        v17 = a1[3];
        --v18;
        if ( a1[5] < v15 )
          goto LABEL_23;
      }
      else
      {
        v17 = a1[3];
        v16 = 1;
        v15 = 2;
        if ( a1[5] < 2u )
        {
LABEL_23:
          v33 = v16;
          v32 = v18;
          v31 = *(v13 - 1);
          v29 = v15;
          v21 = qvector_reserve(v34, v17, v15, 1);
          v16 = v33;
          v18 = v32;
          a1[3] = v21;
          v19 = v31;
          v17 = v21;
          v15 = v29;
        }
      }
      a1[4] = v15;
      *(_BYTE *)(v17 + v18) = v19;
      *(_BYTE *)(a1[3] + v16) = 0;
      if ( v13 == v14 )
        goto LABEL_25;
    }
    v20(a1, v19);
  }
  while ( v13 != v14 );
LABEL_25:
  v22 = *(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL);
  v23 = closing_comment();
  v22(a1, v23, 0);
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 4);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL) )
    goto LABEL_26;
  return 1;
}

