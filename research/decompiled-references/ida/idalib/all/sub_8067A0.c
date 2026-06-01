__int64 __fastcall sub_8067A0(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __m128i *v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rsi
  __m128i v43; // xmm0
  __int64 v44; // rbp
  unsigned __int64 v45; // rbp
  __int64 v46; // r13
  __int64 v47; // r14
  unsigned __int64 v48; // r15
  __int64 v49; // r8
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  __int64 v55; // r14
  __int64 v56; // rbp
  unsigned __int64 v57; // r15
  __int64 v58; // r8
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rbp
  int v63; // r13d
  unsigned __int64 v64; // r13
  int v65; // ebp
  unsigned __int64 v66; // rbp
  int v67; // r13d
  unsigned __int64 v68; // r13
  int v69; // ebp
  unsigned __int64 v70; // r13
  __int64 v71; // rbp
  _BYTE *v72; // rsi
  unsigned __int64 v73; // rbp
  int v74; // r13d
  unsigned __int64 v75; // r13
  int v76; // ebp
  unsigned __int64 v77; // rbp
  int v78; // r13d
  unsigned __int64 v79; // r13
  int v80; // ebp
  unsigned __int64 v81; // rbp
  int v82; // r13d
  unsigned __int64 v83; // r13
  int v84; // ebp
  unsigned __int64 v85; // rbp
  int v86; // r13d
  unsigned __int64 v87; // rbp
  int v88; // r13d
  __int64 v89; // [rsp+8h] [rbp-40h]
  __int64 v90; // [rsp+8h] [rbp-40h]
  __int64 v91; // [rsp+8h] [rbp-40h]
  unsigned __int8 v92; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 19;
    v5 = v3 + 20;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 21;
    v4 = 20;
    if ( (unsigned __int64)a1[2] >= 0x15 )
      goto LABEL_3;
  }
  v11 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v11;
  v6 = v11;
LABEL_3:
  a1[1] = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8630);
  *(_BYTE *)(v6 + v4) = 0;
  v8 = (__m128i *)(*a1 + v3);
  v8[1].m128i_i32[0] = 542395477;
  *v8 = si128;
  sub_7D01E0(a1, 1);
  v9 = a2[3];
  if ( v9 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  if ( (_DWORD)v9 )
  {
    v12 = 5LL * (unsigned int)v9;
    v13 = 0;
    v14 = 16 * v12;
    while ( (unsigned __int8)sub_805C90(a1, v13 + a2[2], 1) )
    {
      v13 += 80;
      if ( v13 == v14 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v15 = a1[1];
  if ( v15 )
  {
    v17 = v15 + 10;
    v16 = v15 + 11;
    --v15;
  }
  else
  {
    v16 = 12;
    v17 = 11;
  }
  v18 = *a1;
  if ( a1[2] < v16 )
  {
    v23 = qvector_reserve(a1, v18, v16, 1);
    *a1 = v23;
    v18 = v23;
  }
  a1[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  qmemcpy((void *)(*a1 + v15), " // changes", 11);
  sub_7D01E0(a1, 1);
  v19 = a2[6];
  if ( v19 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  if ( (_DWORD)v19 )
  {
    v20 = 9LL * (unsigned int)v19;
    v21 = 0;
    v22 = 8 * v20;
    while ( (unsigned __int8)sub_8065F0(a1, v21 + a2[5], 1) )
    {
      v21 += 72;
      if ( v21 == v22 )
        goto LABEL_25;
    }
    return 0;
  }
LABEL_25:
  v24 = a1[1];
  if ( v24 )
  {
    v26 = v24 + 20;
    v25 = v24 + 21;
    --v24;
  }
  else
  {
    v25 = 22;
    v26 = 21;
  }
  v27 = *a1;
  if ( a1[2] < v25 )
  {
    v38 = qvector_reserve(a1, v27, v25, 1);
    *a1 = v38;
    v27 = v38;
  }
  v28 = _mm_load_si128((const __m128i *)&xmmword_23A8640);
  a1[1] = v25;
  *(_BYTE *)(v27 + v26) = 0;
  v29 = *a1 + v24;
  *(__m128i *)v29 = v28;
  *(_QWORD *)(v29 + 13) = 0x7365676E6168635FLL;
  sub_7D01E0(a1, 1);
  v30 = a2[9];
  if ( v30 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v31 = 0;
  v32 = 4LL * (unsigned int)v30;
  if ( (_DWORD)v30 )
  {
    do
    {
      v35 = a1[1];
      if ( v35 )
      {
        v33 = v35 + 1;
        v34 = a1[1];
        --v35;
      }
      else
      {
        v34 = 1;
        v33 = 2;
      }
      v36 = *a1;
      if ( a1[2] < v33 )
      {
        v89 = v34;
        v37 = qvector_reserve(a1, v36, v33, 1);
        v34 = v89;
        *a1 = v37;
        v36 = v37;
      }
      a1[1] = v33;
      *(_BYTE *)(v36 + v35) = 32;
      *(_BYTE *)(*a1 + v34) = 0;
      if ( !(unsigned __int8)sub_7D0270(a1) )
        return 0;
      v31 += 4;
    }
    while ( v31 != v32 );
  }
  v39 = a1[1];
  if ( v39 )
  {
    v41 = v39 + 24;
    v40 = v39 + 25;
    --v39;
  }
  else
  {
    v40 = 26;
    v41 = 25;
  }
  v42 = *a1;
  if ( a1[2] < v40 )
  {
    v53 = qvector_reserve(a1, v42, v40, 1);
    *a1 = v53;
    v42 = v53;
  }
  v43 = _mm_load_si128((const __m128i *)&xmmword_23A8650);
  a1[1] = v40;
  *(_BYTE *)(v42 + v41) = 0;
  v44 = *a1 + v39;
  *(__m128i *)v44 = v43;
  *(__m128i *)(v44 + 9) = _mm_load_si128((const __m128i *)&xmmword_23A8660);
  sub_7D01E0(a1, 1);
  v45 = a2[12];
  if ( v45 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v46 = 0;
  v47 = 4LL * (unsigned int)v45;
  if ( (_DWORD)v45 )
  {
    do
    {
      v50 = a1[1];
      if ( v50 )
      {
        v48 = v50 + 1;
        v49 = a1[1];
        --v50;
      }
      else
      {
        v49 = 1;
        v48 = 2;
      }
      v51 = *a1;
      if ( a1[2] < v48 )
      {
        v90 = v49;
        v52 = qvector_reserve(a1, v51, v48, 1);
        v49 = v90;
        *a1 = v52;
        v51 = v52;
      }
      a1[1] = v48;
      *(_BYTE *)(v51 + v50) = 32;
      *(_BYTE *)(*a1 + v49) = 0;
      if ( !(unsigned __int8)sub_7D0270(a1) )
        return 0;
      v46 += 4;
    }
    while ( v46 != v47 );
  }
  sub_7FE4E0(a1, " // change_index_to_input_hash_index");
  sub_7D01E0(a1, 1);
  v54 = a2[15];
  if ( v54 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  if ( (_DWORD)v54 )
  {
    v55 = 0;
    v56 = 16LL * (unsigned int)v54;
    do
    {
      v59 = a1[1];
      if ( v59 )
      {
        v57 = v59 + 1;
        v58 = a1[1];
        --v59;
      }
      else
      {
        v58 = 1;
        v57 = 2;
      }
      if ( a1[2] < v57 )
      {
        v91 = v58;
        v61 = qvector_reserve(a1, *a1, v57, 1);
        v58 = v91;
        *a1 = v61;
      }
      v60 = *a1;
      a1[1] = v57;
      *(_BYTE *)(v60 + v59) = 32;
      *(_BYTE *)(*a1 + v58) = 0;
      if ( !(unsigned __int8)sub_7FE0D0(a1, (_BYTE *)(v55 + a2[14]), 1) )
        return 0;
      v55 += 16;
    }
    while ( v55 != v56 );
  }
  sub_7FE4E0(a1, " // input_hashes");
  sub_7D01E0(a1, 1);
  v62 = a2[18];
  if ( v62 > 0x7FFFFFFF )
    return 0;
  v63 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v62 > v63 )
  {
    sub_7FE460(a1, 32);
    ++v63;
    if ( !(unsigned __int8)sub_7D0270(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // change_index_to_input_path_index");
  sub_7D01E0(a1, 1);
  v64 = a2[21];
  if ( v64 > 0x7FFFFFFF )
    return 0;
  v65 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v64 > v65 )
  {
    sub_7FE460(a1, 32);
    ++v65;
    if ( !(unsigned __int8)sub_7D0470(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // input_paths");
  sub_7D01E0(a1, 1);
  v66 = a2[24];
  if ( v66 > 0x7FFFFFFF )
    return 0;
  v67 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v66 > v67 )
  {
    sub_7FE460(a1, 32);
    ++v67;
    if ( !(unsigned __int8)sub_7D0270(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // change_index_to_idb_path_index");
  sub_7D01E0(a1, 1);
  v68 = a2[27];
  if ( v68 > 0x7FFFFFFF )
    return 0;
  v69 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v68 > v69 )
  {
    sub_7FE460(a1, 32);
    ++v69;
    if ( !(unsigned __int8)sub_7D0470(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // idb_paths");
  sub_7D01E0(a1, 1);
  v70 = a2[30];
  if ( v70 > 0x7FFFFFFF )
    return 0;
  v71 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v70 > (int)v71 )
  {
    sub_7FE460(a1, 32);
    v72 = (_BYTE *)(a2[29] + 16 * v71++);
    if ( !(unsigned __int8)sub_7FE0D0(a1, v72, 1) )
      return 0;
  }
  sub_7FE4E0(a1, " // calcrel_hashes");
  sub_7D01E0(a1, 1);
  v73 = a2[33];
  if ( v73 > 0x7FFFFFFF )
    return 0;
  v74 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v73 > v74 )
  {
    sub_7FE460(a1, 32);
    ++v74;
    if ( !(unsigned __int8)sub_7D0270(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // change_index_to_username_index");
  sub_7D01E0(a1, 1);
  v75 = a2[36];
  if ( v75 > 0x7FFFFFFF )
    return 0;
  v76 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v75 > v76 )
  {
    sub_7FE460(a1, 32);
    ++v76;
    if ( !(unsigned __int8)sub_7D0470(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // usernames");
  sub_7D01E0(a1, 1);
  v77 = a2[39];
  if ( v77 > 0x7FFFFFFF )
    return 0;
  v78 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v77 > v78 )
  {
    sub_7FE460(a1, 32);
    ++v78;
    if ( !(unsigned __int8)sub_7D0270(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // change_index_to_license_name_index");
  sub_7D01E0(a1, 1);
  v79 = a2[42];
  if ( v79 > 0x7FFFFFFF )
    return 0;
  v80 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v79 > v80 )
  {
    sub_7FE460(a1, 32);
    ++v80;
    if ( !(unsigned __int8)sub_7D0470(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // license_names");
  sub_7D01E0(a1, 1);
  v81 = a2[45];
  if ( v81 > 0x7FFFFFFF )
    return 0;
  v82 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v81 > v82 )
  {
    sub_7FE460(a1, 32);
    ++v82;
    if ( !(unsigned __int8)sub_7D0270(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // change_index_to_license_email_index");
  sub_7D01E0(a1, 1);
  v83 = a2[48];
  if ( v83 > 0x7FFFFFFF )
    return 0;
  v84 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v83 > v84 )
  {
    sub_7FE460(a1, 32);
    ++v84;
    if ( !(unsigned __int8)sub_7D0470(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // license_emails");
  sub_7D01E0(a1, 1);
  v85 = a2[51];
  if ( v85 > 0x7FFFFFFF )
    return 0;
  v86 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v85 > v86 )
  {
    sub_7FE460(a1, 32);
    ++v86;
    if ( !(unsigned __int8)sub_7D0270(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // change_index_to_license_id_index");
  sub_7D01E0(a1, 1);
  v87 = a2[54];
  if ( v87 > 0x7FFFFFFF )
    return 0;
  v88 = 0;
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  while ( (int)v87 > v88 )
  {
    sub_7FE460(a1, 32);
    ++v88;
    if ( !(unsigned __int8)sub_7D0470(a1) )
      return 0;
  }
  sub_7FE4E0(a1, " // license_ids");
  sub_7D01E0(a1, 1);
  v92 = sub_7D0270(a1);
  if ( !v92 )
    return 0;
  sub_7FE4E0(a1, " // has_more_results");
  sub_7D01E0(a1, 1);
  sub_7FE460(a1, 59);
  return v92;
}
