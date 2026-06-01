__int64 __fastcall sub_7E1C90(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r13d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbp
  unsigned __int64 v32; // r15
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rbp
  unsigned __int64 v38; // r15
  __int64 v39; // r8
  __int64 v40; // rax
  __m128i si128; // xmm0
  __int64 v42; // rbp
  unsigned __int64 v43; // rbp
  __int64 v44; // r15
  unsigned __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rbp
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rbp
  int v60; // r15d
  unsigned __int64 v61; // rbp
  int v62; // r15d
  unsigned __int64 v63; // rbp
  __int64 v64; // r15
  _BYTE *v65; // rsi
  unsigned __int64 v66; // rbp
  __int64 v67; // r15
  _BYTE *v68; // rsi
  unsigned __int64 v69; // rbp
  __int64 v70; // r15
  __int64 v71; // rsi
  __int64 v72; // [rsp+8h] [rbp-50h]
  __int64 v73; // [rsp+8h] [rbp-50h]
  __int64 v74; // [rsp+8h] [rbp-50h]
  __int64 v75; // [rsp+8h] [rbp-50h]
  __int64 v76; // [rsp+8h] [rbp-50h]
  __int64 v77; // [rsp+8h] [rbp-50h]
  __int64 v78; // [rsp+8h] [rbp-50h]
  __int64 v79; // [rsp+8h] [rbp-50h]
  __int64 v80; // [rsp+8h] [rbp-50h]
  unsigned __int8 v81; // [rsp+8h] [rbp-50h]
  unsigned __int64 v82; // [rsp+10h] [rbp-48h]
  unsigned __int64 v83; // [rsp+10h] [rbp-48h]
  __int64 v84; // [rsp+18h] [rbp-40h]
  __int64 v85; // [rsp+18h] [rbp-40h]
  __int64 v86; // [rsp+18h] [rbp-40h]

  sub_7ACD80(a1, a3);
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
  v11 = qvector_reserve(a1, v8, v6, 1);
  *a1 = v11;
  v8 = v11;
LABEL_3:
  a1[1] = v6;
  v9 = a3 + 1;
  *(_BYTE *)(v8 + v5) = 123;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_7ACD80(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v12 = a1[1];
  if ( !v12 )
  {
    v15 = *a1;
    v14 = 10;
    v13 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_9;
LABEL_20:
    v73 = v13;
    v24 = qvector_reserve(a1, v15, v14, 1);
    v13 = v73;
    *a1 = v24;
    v15 = v24;
    goto LABEL_9;
  }
  v13 = v12 + 8;
  v14 = v12 + 9;
  v15 = *a1;
  --v12;
  if ( a1[2] < v14 )
    goto LABEL_20;
LABEL_9:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  v16 = *a1 + v12;
  *(_QWORD *)v16 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v16 + 8) = 115;
  sub_7ACD80(a1, v9);
  v17 = a2[2];
  if ( v17 > 0x7FFFFFFF || !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  if ( (_DWORD)v17 )
  {
    v18 = 0;
    v72 = 24LL * (unsigned int)v17;
    do
    {
      v22 = a1[1];
      if ( v22 )
      {
        v19 = v22 + 1;
        v20 = a1[1];
        v21 = *a1;
        --v22;
        if ( a1[2] < v19 )
          goto LABEL_18;
      }
      else
      {
        v21 = *a1;
        v20 = 1;
        v19 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_18:
          v84 = v20;
          v82 = v19;
          v23 = qvector_reserve(a1, v21, v19, 1);
          v20 = v84;
          v19 = v82;
          *a1 = v23;
          v21 = v23;
        }
      }
      a1[1] = v19;
      *(_BYTE *)(v21 + v22) = 32;
      *(_BYTE *)(*a1 + v20) = 0;
      if ( !(unsigned __int8)sub_7AD010(a1) )
        return 0;
      v18 += 24;
    }
    while ( v18 != v72 );
  }
  v25 = a1[1];
  if ( v25 )
  {
    v27 = v25 + 13;
    v26 = v25 + 14;
    --v25;
  }
  else
  {
    v26 = 15;
    v27 = 14;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v75 = v27;
    v30 = qvector_reserve(a1, v28, v26, 1);
    v27 = v75;
    *a1 = v30;
    v28 = v30;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v27) = 0;
  qmemcpy((void *)(*a1 + v25), " // license_id", 14);
  sub_7ACD80(a1, v9);
  if ( a2[5] > 0x7FFFFFFFu )
    return 0;
  v74 = a2[5];
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v29 = 0;
  if ( (_DWORD)v74 )
  {
    while ( (unsigned __int8)sub_7E0C30(a1, v29 + a2[4], v9) )
    {
      v29 += 16;
      if ( v29 == 16LL * (unsigned int)v74 )
        goto LABEL_33;
    }
    return 0;
  }
LABEL_33:
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
    v77 = v33;
    v36 = qvector_reserve(a1, v34, v32, 1);
    v33 = v77;
    *a1 = v36;
    v34 = v36;
  }
  a1[1] = v32;
  *(_BYTE *)(v34 + v33) = 0;
  qmemcpy((void *)(*a1 + v31), " // time_ranges", 15);
  sub_7ACD80(a1, v9);
  if ( a2[8] > 0x7FFFFFFFu )
    return 0;
  v76 = a2[8];
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v35 = 0;
  if ( (_DWORD)v76 )
  {
    while ( (unsigned __int8)sub_7E1A30(a1, v35 + a2[7], v9) )
    {
      v35 += 16;
      if ( v35 == 16LL * (unsigned int)v76 )
        goto LABEL_45;
    }
    return 0;
  }
LABEL_45:
  v37 = a1[1];
  if ( v37 )
  {
    v39 = v37 + 20;
    v38 = v37 + 21;
    --v37;
  }
  else
  {
    v38 = 22;
    v39 = 21;
  }
  if ( a1[2] < v38 )
  {
    v79 = v39;
    v50 = qvector_reserve(a1, *a1, v38, 1);
    v39 = v79;
    *a1 = v50;
  }
  v40 = *a1;
  a1[1] = v38;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23845C0);
  *(_BYTE *)(v40 + v39) = 0;
  v42 = *a1 + v37;
  *(__m128i *)v42 = si128;
  *(_QWORD *)(v42 + 13) = 0x7365676E61725F64LL;
  sub_7ACD80(a1, v9);
  v43 = a2[11];
  if ( v43 > 0x7FFFFFFF || !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  if ( (_DWORD)v43 )
  {
    v44 = 0;
    v78 = 24LL * (unsigned int)v43;
    do
    {
      v47 = a1[1];
      if ( v47 )
      {
        v45 = v47 + 1;
        v46 = a1[1];
        --v47;
      }
      else
      {
        v46 = 1;
        v45 = 2;
      }
      v48 = *a1;
      if ( a1[2] < v45 )
      {
        v85 = v46;
        v83 = v45;
        v49 = qvector_reserve(a1, v48, v45, 1);
        v46 = v85;
        v45 = v83;
        *a1 = v49;
        v48 = v49;
      }
      a1[1] = v45;
      *(_BYTE *)(v48 + v47) = 32;
      *(_BYTE *)(*a1 + v46) = 0;
      if ( !(unsigned __int8)sub_7AD010(a1) )
        return 0;
      v44 += 24;
    }
    while ( v44 != v78 );
  }
  sub_7DB340(a1, " // idbs");
  sub_7ACD80(a1, v9);
  v51 = a2[14];
  if ( v51 > 0x7FFFFFFF || !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  if ( (_DWORD)v51 )
  {
    v52 = 24LL * (unsigned int)v51;
    v53 = 0;
    v80 = v52;
    do
    {
      v55 = a1[1];
      v56 = 1;
      if ( v55 )
      {
        v56 = a1[1];
        --v55;
      }
      v57 = v55 + 2;
      if ( a1[2] < (unsigned __int64)(v55 + 2) )
      {
        v86 = v56;
        v58 = qvector_reserve(a1, *a1, v57, 1);
        v56 = v86;
        v57 = v55 + 2;
        *a1 = v58;
      }
      v54 = *a1;
      a1[1] = v57;
      *(_BYTE *)(v54 + v55) = 32;
      *(_BYTE *)(*a1 + v56) = 0;
      if ( !(unsigned __int8)sub_7AD010(a1) )
        return 0;
      v53 += 24;
    }
    while ( v53 != v80 );
  }
  sub_7DB340(a1, " // inputs");
  sub_7ACD80(a1, v9);
  v59 = a2[17];
  if ( v59 > 0x7FFFFFFF )
    return 0;
  v60 = 0;
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  while ( (int)v59 > v60 )
  {
    sub_7DB2C0(a1, 32);
    ++v60;
    if ( !(unsigned __int8)sub_7AD010(a1) )
      return 0;
  }
  sub_7DB340(a1, " // funcs");
  sub_7ACD80(a1, v9);
  v61 = a2[20];
  if ( v61 > 0x7FFFFFFF )
    return 0;
  v62 = 0;
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  while ( (int)v61 > v62 )
  {
    sub_7DB2C0(a1, 32);
    ++v62;
    if ( !(unsigned __int8)sub_7AD010(a1) )
      return 0;
  }
  sub_7DB340(a1, " // usernames");
  sub_7ACD80(a1, v9);
  v63 = a2[23];
  if ( v63 > 0x7FFFFFFF )
    return 0;
  v64 = 0;
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  while ( (int)v63 > (int)v64 )
  {
    sub_7DB2C0(a1, 32);
    v65 = (_BYTE *)(a2[22] + 16 * v64++);
    if ( !(unsigned __int8)sub_7DAF30(a1, v65, v9) )
      return 0;
  }
  sub_7DB340(a1, " // input_hashes");
  sub_7ACD80(a1, v9);
  v66 = a2[26];
  if ( v66 > 0x7FFFFFFF )
    return 0;
  v67 = 0;
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  while ( (int)v66 > (int)v67 )
  {
    sub_7DB2C0(a1, 32);
    v68 = (_BYTE *)(a2[25] + 16 * v67++);
    if ( !(unsigned __int8)sub_7DAF30(a1, v68, v9) )
      return 0;
  }
  sub_7DB340(a1, " // calcrel_hashes");
  sub_7ACD80(a1, v9);
  v69 = a2[29];
  if ( v69 > 0x7FFFFFFF )
    return 0;
  v70 = 0;
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  while ( (int)v69 > (int)v70 )
  {
    v71 = v70++;
    if ( !(unsigned __int8)sub_7E1A30(a1, a2[28] + 16 * v71, v9) )
      return 0;
  }
  sub_7DB340(a1, " // push_id_ranges");
  sub_7ACD80(a1, v9);
  v81 = sub_7ACE30(a1);
  if ( !v81 )
    return 0;
  sub_7DB340(a1, " // max_entries");
  sub_7ACD80(a1, a3);
  sub_7DB2C0(a1, 125);
  return v81;
}

