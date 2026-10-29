__int64 __fastcall sub_7DDD80(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  unsigned __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // rbp
  unsigned __int64 v15; // rbp
  __int64 v16; // r13
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rsi
  unsigned __int64 v28; // r15
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // r13
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // r12
  unsigned __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 7;
    v5 = v3 + 8;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 9;
    v4 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_3;
  }
  v9 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v9;
  v6 = v9;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  *(_QWORD *)(*a1 + v3) = 0x20444D5F4C4C5550LL;
  sub_7ACD80(a1, 1);
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v10 = a1[1];
  if ( !v10 )
  {
    v13 = *a1;
    v12 = 10;
    v11 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
LABEL_21:
    v23 = qvector_reserve(a1, v13, v12, 1);
    *a1 = v23;
    v13 = v23;
    goto LABEL_10;
  }
  v11 = v10 + 8;
  v12 = v10 + 9;
  v13 = *a1;
  --v10;
  if ( a1[2] < v12 )
    goto LABEL_21;
LABEL_10:
  a1[1] = v12;
  *(_BYTE *)(v13 + v11) = 0;
  v14 = *a1 + v10;
  *(_QWORD *)v14 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v14 + 8) = 115;
  sub_7ACD80(a1, 1);
  v15 = a2[3];
  if ( v15 > 0x7FFFFFFF || !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v16 = 0;
  v17 = 4LL * (unsigned int)v15;
  if ( (_DWORD)v15 )
  {
    do
    {
      v21 = a1[1];
      if ( v21 )
      {
        v18 = v21 + 1;
        v19 = a1[1];
        v20 = *a1;
        --v21;
        if ( a1[2] < v18 )
          goto LABEL_19;
      }
      else
      {
        v20 = *a1;
        v19 = 1;
        v18 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_19:
          v41 = v19;
          v22 = qvector_reserve(a1, v20, v18, 1);
          v19 = v41;
          *a1 = v22;
          v20 = v22;
        }
      }
      a1[1] = v18;
      *(_BYTE *)(v20 + v21) = 32;
      *(_BYTE *)(*a1 + v19) = 0;
      if ( !(unsigned __int8)sub_7ACE10(a1) )
        return 0;
      v16 += 4;
    }
    while ( v16 != v17 );
  }
  v24 = a1[1];
  if ( v24 )
  {
    v26 = v24 + 7;
    v25 = v24 + 8;
    --v24;
  }
  else
  {
    v25 = 9;
    v26 = 8;
  }
  v27 = *a1;
  if ( a1[2] < v25 )
  {
    v30 = qvector_reserve(a1, v27, v25, 1);
    *a1 = v30;
    v27 = v30;
  }
  a1[1] = v25;
  *(_BYTE *)(v27 + v26) = 0;
  *(_QWORD *)(*a1 + v24) = 0x7379656B202F2F20LL;
  sub_7ACD80(a1, 1);
  v28 = a2[6];
  if ( v28 > 0x7FFFFFFF )
    return 0;
  v7 = sub_7ACE10(a1);
  if ( !(_BYTE)v7 )
    return 0;
  v29 = 0;
  if ( (_DWORD)v28 )
  {
    while ( (unsigned __int8)sub_7DDB20(a1, v29 + a2[5], 1) )
    {
      v29 += 32;
      if ( 32LL * (unsigned int)v28 == v29 )
        goto LABEL_34;
    }
    return 0;
  }
LABEL_34:
  v31 = a1[1];
  if ( v31 )
  {
    v33 = v31 + 14;
    v32 = v31 + 15;
    --v31;
  }
  else
  {
    v32 = 16;
    v33 = 15;
  }
  v34 = *a1;
  if ( a1[2] < v32 )
  {
    v40 = qvector_reserve(a1, v34, v32, 1);
    *a1 = v40;
    v34 = v40;
  }
  a1[1] = v32;
  *(_BYTE *)(v34 + v33) = 0;
  qmemcpy((void *)(*a1 + v31), " // pattern_ids", 15);
  sub_7ACD80(a1, 1);
  v35 = a1[1];
  if ( v35 )
  {
    v36 = v35 + 1;
    v37 = a1[1];
    --v35;
  }
  else
  {
    v37 = 1;
    v36 = 2;
  }
  v38 = *a1;
  if ( a1[2] < v36 )
  {
    v39 = qvector_reserve(a1, v38, v36, 1);
    *a1 = v39;
    v38 = v39;
  }
  a1[1] = v36;
  *(_BYTE *)(v38 + v35) = 59;
  *(_BYTE *)(*a1 + v37) = 0;
  return v7;
}

