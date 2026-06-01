__int64 __fastcall sub_7DCA10(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rbp
  unsigned int v9; // r14d
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 10;
    v4 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_3;
LABEL_7:
    v11 = qvector_reserve(a1, v6, v5, 1);
    *a1 = v11;
    v6 = v11;
    goto LABEL_3;
  }
  v4 = v3 + 8;
  v5 = v3 + 9;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_7;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v7 = *a1 + v3;
  *(_QWORD *)v7 = 0x4C54434755424544LL;
  *(_BYTE *)(v7 + 8) = 32;
  sub_7ACD80(a1, 1);
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 <= 0x7FFFFFFF && (v9 = sub_7ACE10(a1), (_BYTE)v9) )
  {
    if ( (_DWORD)v8 )
    {
      v12 = 0;
      v13 = 24LL * (unsigned int)v8;
      do
      {
        v17 = a1[1];
        if ( v17 )
        {
          v14 = v17 + 1;
          v15 = a1[1];
          v16 = *a1;
          --v17;
          if ( a1[2] < v14 )
            goto LABEL_16;
        }
        else
        {
          v16 = *a1;
          v15 = 1;
          v14 = 2;
          if ( (unsigned __int64)a1[2] < 2 )
          {
LABEL_16:
            v30 = v15;
            v29 = v14;
            v18 = qvector_reserve(a1, v16, v14, 1);
            v15 = v30;
            v14 = v29;
            *a1 = v18;
            v16 = v18;
          }
        }
        a1[1] = v14;
        *(_BYTE *)(v16 + v17) = 32;
        *(_BYTE *)(*a1 + v15) = 0;
        if ( !(unsigned __int8)sub_7AD010(a1) )
          return 0;
        v12 += 24;
      }
      while ( v13 != v12 );
    }
    v19 = a1[1];
    if ( v19 )
    {
      v21 = v19 + 7;
      v20 = v19 + 8;
      --v19;
    }
    else
    {
      v20 = 9;
      v21 = 8;
    }
    v22 = *a1;
    if ( a1[2] < v20 )
    {
      v28 = qvector_reserve(a1, v22, v20, 1);
      *a1 = v28;
      v22 = v28;
    }
    a1[1] = v20;
    *(_BYTE *)(v22 + v21) = 0;
    *(_QWORD *)(*a1 + v19) = 0x73677261202F2F20LL;
    sub_7ACD80(a1, 1);
    v23 = a1[1];
    if ( v23 )
    {
      v24 = v23 + 1;
      v25 = a1[1];
      --v23;
    }
    else
    {
      v25 = 1;
      v24 = 2;
    }
    v26 = *a1;
    if ( a1[2] < v24 )
    {
      v27 = qvector_reserve(a1, v26, v24, 1);
      *a1 = v27;
      v26 = v27;
    }
    a1[1] = v24;
    *(_BYTE *)(v26 + v23) = 59;
    *(_BYTE *)(*a1 + v25) = 0;
  }
  else
  {
    return 0;
  }
  return v9;
}

