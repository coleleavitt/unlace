__int64 __fastcall sub_8086E0(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r13d
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 v18; // rbp
  __int64 v19; // r15
  unsigned __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rsi
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rbp
  unsigned __int64 v39; // r15
  __int64 v40; // r8
  __int64 v41; // rax
  __m128i si128; // xmm0
  __m128i *v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rax
  int v46; // esi
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+8h] [rbp-50h]
  __int64 v53; // [rsp+8h] [rbp-50h]
  __int64 v54; // [rsp+8h] [rbp-50h]
  __int64 v55; // [rsp+8h] [rbp-50h]
  __int64 v56; // [rsp+8h] [rbp-50h]
  __int64 v57; // [rsp+8h] [rbp-50h]
  unsigned __int64 v58; // [rsp+10h] [rbp-48h]
  __int64 v59; // [rsp+18h] [rbp-40h]

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
  v9 = a3 + 1;
  *(_BYTE *)(v8 + v5) = 123;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 10;
    v14 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
LABEL_21:
    v52 = v14;
    v25 = qvector_reserve(a1, v16, v15, 1);
    v14 = v52;
    *a1 = v25;
    v16 = v25;
    goto LABEL_10;
  }
  v14 = v13 + 8;
  v15 = v13 + 9;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_21;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_QWORD *)v17 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v17 + 8) = 115;
  sub_7D01E0(a1, v9);
  v18 = a2[2];
  if ( v18 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  if ( (_DWORD)v18 )
  {
    v19 = 0;
    v51 = 24LL * (unsigned int)v18;
    do
    {
      v23 = a1[1];
      if ( v23 )
      {
        v20 = v23 + 1;
        v21 = a1[1];
        v22 = *a1;
        --v23;
        if ( a1[2] < v20 )
          goto LABEL_19;
      }
      else
      {
        v22 = *a1;
        v21 = 1;
        v20 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_19:
          v59 = v21;
          v58 = v20;
          v24 = qvector_reserve(a1, v22, v20, 1);
          v21 = v59;
          v20 = v58;
          *a1 = v24;
          v22 = v24;
        }
      }
      a1[1] = v20;
      *(_BYTE *)(v22 + v23) = 32;
      *(_BYTE *)(*a1 + v21) = 0;
      if ( !(unsigned __int8)sub_7D0470(a1) )
        return 0;
      v19 += 24;
    }
    while ( v19 != v51 );
  }
  v26 = a1[1];
  if ( v26 )
  {
    v28 = v26 + 13;
    v27 = v26 + 14;
    --v26;
  }
  else
  {
    v27 = 15;
    v28 = 14;
  }
  v29 = *a1;
  if ( a1[2] < v27 )
  {
    v54 = v28;
    v31 = qvector_reserve(a1, v29, v27, 1);
    v28 = v54;
    *a1 = v31;
    v29 = v31;
  }
  a1[1] = v27;
  *(_BYTE *)(v29 + v28) = 0;
  qmemcpy((void *)(*a1 + v26), " // license_id", 14);
  sub_7D01E0(a1, v9);
  if ( a2[5] > 0x7FFFFFFFu )
    return 0;
  v53 = a2[5];
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v30 = 0;
  if ( (_DWORD)v53 )
  {
    while ( (unsigned __int8)sub_803DD0(a1, v30 + a2[4], v9) )
    {
      v30 += 16;
      if ( 16LL * (unsigned int)v53 == v30 )
        goto LABEL_34;
    }
    return 0;
  }
LABEL_34:
  v32 = a1[1];
  if ( v32 )
  {
    v34 = v32 + 14;
    v33 = v32 + 15;
    --v32;
  }
  else
  {
    v33 = 16;
    v34 = 15;
  }
  v35 = *a1;
  if ( a1[2] < v33 )
  {
    v56 = v34;
    v37 = qvector_reserve(a1, v35, v33, 1);
    v34 = v56;
    *a1 = v37;
    v35 = v37;
  }
  a1[1] = v33;
  *(_BYTE *)(v35 + v34) = 0;
  qmemcpy((void *)(*a1 + v32), " // time_ranges", 15);
  sub_7D01E0(a1, v9);
  if ( a2[8] > 0x7FFFFFFFu )
    return 0;
  v55 = a2[8];
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v36 = 0;
  if ( (_DWORD)v55 )
  {
    while ( (unsigned __int8)sub_804BD0(a1, v36 + a2[7], v9) )
    {
      v36 += 16;
      if ( 16LL * (unsigned int)v55 == v36 )
        goto LABEL_46;
    }
    return 0;
  }
LABEL_46:
  v38 = a1[1];
  if ( v38 )
  {
    v40 = v38 + 16;
    v39 = v38 + 17;
    --v38;
  }
  else
  {
    v39 = 18;
    v40 = 17;
  }
  if ( a1[2] < v39 )
  {
    v57 = v40;
    v50 = qvector_reserve(a1, *a1, v39, 1);
    v40 = v57;
    *a1 = v50;
  }
  v41 = *a1;
  a1[1] = v39;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A86B0);
  *(_BYTE *)(v41 + v40) = 0;
  v43 = (__m128i *)(*a1 + v38);
  v43[1].m128i_i8[0] = 115;
  *v43 = si128;
  sub_7D01E0(a1, v9);
  v10 = sub_7D0290(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v44 = (a1[1] == 0) + a1[1] - 1;
  if ( a1[2] < (unsigned __int64)(v44 + 16) )
    *a1 = qvector_reserve(a1, *a1, v44 + 16, 1);
  v45 = *a1;
  a1[1] = v44 + 16;
  v46 = a3;
  v47 = 1;
  *(_BYTE *)(v45 + v44 + 15) = 0;
  qmemcpy((void *)(*a1 + v44), " // max_entries", 15);
  sub_7D01E0(a1, v46);
  v48 = a1[1];
  if ( v48 )
  {
    v47 = a1[1];
    --v48;
  }
  if ( a1[2] < (unsigned __int64)(v48 + 2) )
    *a1 = qvector_reserve(a1, *a1, v48 + 2, 1);
  v49 = *a1;
  a1[1] = v48 + 2;
  *(_BYTE *)(v49 + v48) = 125;
  *(_BYTE *)(*a1 + v47) = 0;
  return v10;
}
