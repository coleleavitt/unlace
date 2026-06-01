__int64 __fastcall sub_807430(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r12d
  unsigned int v10; // r14d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  unsigned __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  __int64 v33; // rsi
  __m128i si128; // xmm0
  __int64 v35; // r14
  int v36; // ecx
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // r10
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbp
  unsigned __int64 v45; // r12
  __int64 v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rbp
  unsigned __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-58h]
  __int64 v55; // [rsp+0h] [rbp-58h]
  __int64 v56; // [rsp+0h] [rbp-58h]
  __int64 v57; // [rsp+0h] [rbp-58h]
  __int64 v58; // [rsp+0h] [rbp-58h]
  __int64 v59; // [rsp+0h] [rbp-58h]
  unsigned __int64 v60; // [rsp+8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+8h] [rbp-50h]
  __int64 v62; // [rsp+10h] [rbp-48h]
  __int64 v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+18h] [rbp-40h]

  sub_7D01E0(a1, a3);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 1;
    v7 = a1[1];
    v8 = *a1;
    --v5;
    if ( a1[2] >= v6 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a1, v8, v6, 1);
  *a1 = v12;
  v8 = v12;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 123;
  v9 = a3 + 1;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 9;
    v14 = 8;
    if ( (unsigned __int64)a1[2] >= 9 )
      goto LABEL_10;
LABEL_26:
    v55 = v14;
    v28 = qvector_reserve(a1, v16, v15, 1);
    v14 = v55;
    *a1 = v28;
    v16 = v28;
    goto LABEL_10;
  }
  v14 = v13 + 7;
  v15 = v13 + 8;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_26;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  *(_QWORD *)(*a1 + v13) = 0x65707974202F2F20LL;
  sub_7D01E0(a1, v9);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 9;
    v18 = v17 + 10;
    --v17;
  }
  else
  {
    v18 = 11;
    v19 = 10;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v56 = v19;
    v29 = qvector_reserve(a1, v20, v18, 1);
    v19 = v56;
    *a1 = v29;
    v20 = v29;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // widget", 10);
  sub_7D01E0(a1, v9);
  v21 = *(_QWORD *)(a2 + 16);
  if ( v21 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v22 = 0;
  v54 = 8LL * (unsigned int)v21;
  if ( (_DWORD)v21 )
  {
    do
    {
      v26 = a1[1];
      if ( v26 )
      {
        v23 = v26 + 1;
        v24 = a1[1];
        v25 = *a1;
        --v26;
        if ( a1[2] < v23 )
          goto LABEL_24;
      }
      else
      {
        v25 = *a1;
        v24 = 1;
        v23 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_24:
          v62 = v24;
          v60 = v23;
          v27 = qvector_reserve(a1, v25, v23, 1);
          v24 = v62;
          v23 = v60;
          *a1 = v27;
          v25 = v27;
        }
      }
      a1[1] = v23;
      *(_BYTE *)(v25 + v26) = 32;
      *(_BYTE *)(*a1 + v24) = 0;
      if ( !(unsigned __int8)sub_7D0290(a1) )
        return 0;
      v22 += 8;
    }
    while ( v22 != v54 );
  }
  v30 = a1[1];
  if ( v30 )
  {
    v32 = v30 + 20;
    v31 = v30 + 21;
    --v30;
  }
  else
  {
    v31 = 22;
    v32 = 21;
  }
  v33 = *a1;
  if ( a1[2] < v31 )
  {
    v59 = v32;
    v43 = qvector_reserve(a1, v33, v31, 1);
    v32 = v59;
    *a1 = v43;
    v33 = v43;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8670);
  a1[1] = v31;
  *(_BYTE *)(v33 + v32) = 0;
  v35 = *a1 + v30;
  *(__m128i *)v35 = si128;
  *(_QWORD *)(v35 + 13) = 0x73657865646E695FLL;
  sub_7D01E0(a1, v9);
  if ( *(_QWORD *)(a2 + 40) > 0x7FFFFFFFu )
    return 0;
  v57 = *(_QWORD *)(a2 + 40);
  v10 = sub_7D0270(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v36 = v57;
  v37 = 0;
  v58 = 4LL * (unsigned int)v57;
  if ( v36 )
  {
    do
    {
      v40 = a1[1];
      if ( v40 )
      {
        v38 = v40 + 1;
        v39 = a1[1];
        --v40;
      }
      else
      {
        v39 = 1;
        v38 = 2;
      }
      v41 = *a1;
      if ( a1[2] < v38 )
      {
        v64 = v39;
        v63 = v40;
        v61 = v38;
        v42 = qvector_reserve(a1, v41, v38, 1);
        v39 = v64;
        v40 = v63;
        *a1 = v42;
        v38 = v61;
        v41 = v42;
      }
      a1[1] = v38;
      *(_BYTE *)(v41 + v40) = 32;
      *(_BYTE *)(*a1 + v39) = 0;
      if ( !(unsigned __int8)sub_7D0270(a1) )
        return 0;
      v37 += 4;
    }
    while ( v58 != v37 );
  }
  v44 = a1[1];
  if ( v44 )
  {
    v46 = v44 + 7;
    v45 = v44 + 8;
    --v44;
  }
  else
  {
    v45 = 9;
    v46 = 8;
  }
  v47 = *a1;
  if ( a1[2] < v45 )
  {
    v53 = qvector_reserve(a1, v47, v45, 1);
    *a1 = v53;
    v47 = v53;
  }
  a1[1] = v45;
  *(_BYTE *)(v47 + v46) = 0;
  *(_QWORD *)(*a1 + v44) = 0x73677261202F2F20LL;
  sub_7D01E0(a1, a3);
  v48 = a1[1];
  if ( v48 )
  {
    v49 = v48 + 1;
    v50 = a1[1];
    --v48;
  }
  else
  {
    v50 = 1;
    v49 = 2;
  }
  v51 = *a1;
  if ( a1[2] < v49 )
  {
    v52 = qvector_reserve(a1, v51, v49, 1);
    *a1 = v52;
    v51 = v52;
  }
  a1[1] = v49;
  *(_BYTE *)(v51 + v48) = 125;
  *(_BYTE *)(*a1 + v50) = 0;
  return v10;
}
