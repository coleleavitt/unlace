__int64 __fastcall sub_558320(_QWORD *a1, char a2)
{
  __int64 v3; // rbp
  __int64 (__fastcall *v4)(_QWORD *, char); // rax
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  _QWORD *v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD *, char); // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE *v22; // rcx

  v3 = a1[4];
  if ( !v3 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 64LL);
    if ( v4 == sub_558200 )
    {
      v5 = a1[3];
      v6 = 1;
      v7 = 2;
      v8 = a1 + 3;
      if ( a1[5] >= 2u )
        goto LABEL_4;
LABEL_16:
      v19 = qvector_reserve(v8, v5, v7, 1);
      a1[3] = v19;
      v5 = v19;
LABEL_4:
      a1[4] = v7;
      *(_BYTE *)(v5 + v3) = 1;
      *(_BYTE *)(a1[3] + v6) = 0;
      v9 = a1[4];
      if ( v9 )
      {
        v10 = v9 + 1;
        v11 = a1[4];
        v12 = a1[3];
        --v9;
        if ( a1[5] >= v10 )
        {
LABEL_6:
          a1[4] = v10;
          *(_BYTE *)(v12 + v9) = 9;
          *(_BYTE *)(a1[3] + v11) = 0;
          goto LABEL_7;
        }
      }
      else
      {
        v12 = a1[3];
        v11 = 1;
        v10 = 2;
        if ( a1[5] >= 2u )
          goto LABEL_6;
      }
      v21 = qvector_reserve(v8, v12, v10, 1);
      a1[3] = v21;
      v12 = v21;
      goto LABEL_6;
    }
    goto LABEL_19;
  }
  if ( (unsigned __int64)(v3 - 1) <= 2 )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 64LL);
    if ( v4 == sub_558200 )
    {
      v5 = a1[3];
      goto LABEL_15;
    }
    goto LABEL_19;
  }
  v5 = a1[3];
  if ( *(_BYTE *)(v5 + v3 - 2) != 9 || (v22 = (_BYTE *)(v5 + v3 - 3), *v22 != 2) )
  {
    v4 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 64LL);
    if ( v4 == sub_558200 )
    {
LABEL_15:
      v7 = v3 + 1;
      v6 = a1[4];
      v8 = a1 + 3;
      --v3;
      if ( a1[5] >= v7 )
        goto LABEL_4;
      goto LABEL_16;
    }
LABEL_19:
    v4(a1, 9);
    goto LABEL_7;
  }
  a1[4] = v3 - 2;
  *v22 = 0;
LABEL_7:
  v13 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v13 != sub_3598B0 )
  {
    v13(a1, a2);
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 9);
  }
  v14 = a1[4];
  if ( !v14 )
  {
    v17 = a1[3];
    v16 = 1;
    v15 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_10;
LABEL_21:
    v20 = qvector_reserve(a1 + 3, v17, v15, 1);
    a1[3] = v20;
    v17 = v20;
    goto LABEL_10;
  }
  v15 = v14 + 1;
  v16 = a1[4];
  v17 = a1[3];
  --v14;
  if ( a1[5] < v15 )
    goto LABEL_21;
LABEL_10:
  a1[4] = v15;
  *(_BYTE *)(v17 + v14) = a2;
  *(_BYTE *)(a1[3] + v16) = 0;
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 9);
}

