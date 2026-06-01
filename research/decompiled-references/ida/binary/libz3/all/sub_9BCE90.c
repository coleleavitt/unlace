__int64 __fastcall sub_9BCE90(__m128i *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // r12
  __int64 *v9; // rbp
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 *v14; // r12
  void *v15; // rdi
  __int64 v16; // r14
  unsigned int v17; // eax
  __int64 v18; // r13
  __int64 v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rax
  bool v22; // al
  __int64 v23; // rdx
  __int64 v24; // rsi
  unsigned int v25; // eax
  bool v26; // al
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __m128d v33; // xmm0
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // r12
  char *v38; // rbp
  void *v39; // r10
  int v40; // eax
  char *v41; // r15
  char v42; // al
  __m128i v43; // xmm0
  char v44; // dl
  void *v45; // rdi
  __m128i *v46; // r12
  char v47; // al
  __int64 v48; // rcx
  __int64 v49; // r14
  __m128i *v50; // r13
  __int64 v51; // rbp
  __m128i *v52; // r12
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // rdx
  __int64 v56; // rsi
  char v57; // al
  bool v58; // al
  char v59; // al
  int v60; // eax
  __int64 *v61; // r14
  __int64 v62; // r15
  __int8 *v63; // r14
  __int64 v64; // r13
  __int64 v65; // rsi
  char v66; // al
  unsigned int v67; // eax
  unsigned int v68; // eax
  char *v69; // r14
  __int64 v70; // rcx
  unsigned __int128 v71; // rax
  __int64 i; // r15
  __int64 v73; // rbp
  char *v74; // r12
  __int64 v75; // r13
  __int64 v76; // rcx
  char v77; // al
  void *v78; // r8
  bool v79; // al
  bool v80; // al
  __int64 v81; // rbp
  __int64 v82; // rax
  int v83; // eax
  __int64 v84; // rsi
  int v85; // eax
  bool v86; // al
  int v87; // eax
  __int64 v88; // r8
  int v89; // eax
  __int64 v90; // [rsp+8h] [rbp-80h]
  __int64 v91; // [rsp+8h] [rbp-80h]
  __int64 v92; // [rsp+8h] [rbp-80h]
  __int64 v93; // [rsp+8h] [rbp-80h]
  __int64 v94; // [rsp+8h] [rbp-80h]
  __int64 v95; // [rsp+8h] [rbp-80h]
  void *v96; // [rsp+8h] [rbp-80h]
  void *v97; // [rsp+8h] [rbp-80h]
  __int64 v98; // [rsp+8h] [rbp-80h]
  __int64 v99; // [rsp+10h] [rbp-78h]
  __int64 v100; // [rsp+10h] [rbp-78h]
  __int64 v101; // [rsp+10h] [rbp-78h]
  __int64 v102; // [rsp+10h] [rbp-78h]
  __int64 v103; // [rsp+10h] [rbp-78h]
  __int64 v104; // [rsp+10h] [rbp-78h]
  __int64 v105; // [rsp+10h] [rbp-78h]
  __int64 v107; // [rsp+18h] [rbp-70h]
  __int64 v108; // [rsp+18h] [rbp-70h]
  __int64 v109; // [rsp+18h] [rbp-70h]
  __int64 v110; // [rsp+18h] [rbp-70h]
  __int64 v111; // [rsp+18h] [rbp-70h]
  __int64 v112; // [rsp+20h] [rbp-68h]
  __int64 v113; // [rsp+28h] [rbp-60h]
  __int64 v114; // [rsp+28h] [rbp-60h]
  __int64 *v115; // [rsp+30h] [rbp-58h]
  __int64 v116; // [rsp+38h] [rbp-50h]
  __int64 v117; // [rsp+40h] [rbp-48h]
  __int64 v118; // [rsp+40h] [rbp-48h]
  char v119; // [rsp+48h] [rbp-40h]
  __int64 v120; // [rsp+48h] [rbp-40h]

  result = a2 - (char *)a1;
  v115 = (__int64 *)a2;
  if ( a2 - (char *)a1 <= 128 )
    return result;
  while ( 1 )
  {
    v5 = result;
    v6 = result >> 4;
    v7 = v5 >> 3;
    if ( !a3 )
      break;
    v8 = &a1->m128i_i64[v6];
    --a3;
    v9 = &a1->m128i_i64[1];
    v10 = sub_927C80(a1->m128i_i64[1] + 88, *v8 + 88);
    v11 = *(v115 - 1) + 88;
    if ( v10 )
    {
      if ( sub_927C80(*v8 + 88, v11) )
      {
        v12 = a1->m128i_i64[0];
LABEL_6:
        a1->m128i_i64[0] = *v8;
        *v8 = v12;
        v13 = a1->m128i_i64[0];
        goto LABEL_7;
      }
      v42 = sub_927C80(a1->m128i_i64[1] + 88, *(v115 - 1) + 88);
      v43 = _mm_loadl_epi64(a1);
      if ( v42 )
      {
        a1->m128i_i64[0] = *(v115 - 1);
        *(v115 - 1) = v43.m128i_i64[0];
        v13 = a1->m128i_i64[0];
      }
      else
      {
        v13 = a1->m128i_i64[1];
        *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, v43);
      }
    }
    else if ( sub_927C80(a1->m128i_i64[1] + 88, v11) )
    {
      v33 = (__m128d)_mm_loadu_si128(a1);
      v13 = a1->m128i_i64[1];
      *(__m128d *)a1 = _mm_shuffle_pd(v33, v33, 1);
    }
    else
    {
      v44 = sub_927C80(*v8 + 88, *(v115 - 1) + 88);
      v12 = a1->m128i_i64[0];
      if ( !v44 )
        goto LABEL_6;
      a1->m128i_i64[0] = *(v115 - 1);
      *(v115 - 1) = v12;
      v13 = a1->m128i_i64[0];
    }
LABEL_7:
    v14 = v115;
LABEL_8:
    v15 = qword_1C7F2C0;
    while ( 1 )
    {
      v16 = *v9;
      v90 = v13 + 88;
      v99 = *v9 + 88;
      if ( (*(_BYTE *)(*v9 + 108) & 1) != 0
        || *(_DWORD *)(v16 + 104) != 1
        || (*(_BYTE *)(v13 + 108) & 1) != 0
        || *(_DWORD *)(v13 + 104) != 1 )
      {
        LOBYTE(v17) = sub_1848D40(v15, v99, v90);
        v15 = qword_1C7F2C0;
      }
      else if ( (*(_BYTE *)(v16 + 92) & 1) != 0 || (*(_BYTE *)(v13 + 92) & 1) != 0 )
      {
        v29 = sub_182C7B0(v15, v99, v90);
        v15 = qword_1C7F2C0;
        v17 = v29 >> 31;
      }
      else
      {
        LOBYTE(v17) = *(_DWORD *)(v16 + 88) < *(_DWORD *)(v13 + 88);
      }
      if ( (_BYTE)v17 )
        goto LABEL_9;
      if ( (*(_BYTE *)(v16 + 92) & 1) == 0 && (*(_BYTE *)(v13 + 92) & 1) == 0 )
      {
        if ( *(_DWORD *)(v16 + 88) != *(_DWORD *)(v13 + 88) )
          break;
        goto LABEL_28;
      }
      if ( (unsigned int)sub_182C7B0(v15, v99, v90) )
        break;
LABEL_28:
      if ( (*(_BYTE *)(v16 + 108) & 1) != 0 || (*(_BYTE *)(v13 + 108) & 1) != 0 )
        v22 = (unsigned int)sub_182C7B0(v15, v16 + 104, v13 + 104) == 0;
      else
        v22 = *(_DWORD *)(v16 + 104) == *(_DWORD *)(v13 + 104);
      v15 = qword_1C7F2C0;
      if ( !v22 )
        goto LABEL_18;
      v23 = v13 + 120;
      v24 = v16 + 120;
      if ( (*(_BYTE *)(v16 + 140) & 1) != 0
        || *(_DWORD *)(v16 + 136) != 1
        || (*(_BYTE *)(v13 + 140) & 1) != 0
        || *(_DWORD *)(v13 + 136) != 1 )
      {
        LOBYTE(v25) = sub_1848D40(qword_1C7F2C0, v24, v23);
        v15 = qword_1C7F2C0;
      }
      else if ( (*(_BYTE *)(v16 + 124) & 1) != 0 || (*(_BYTE *)(v13 + 124) & 1) != 0 )
      {
        v31 = sub_182C7B0(qword_1C7F2C0, v24, v23);
        v15 = qword_1C7F2C0;
        v25 = v31 >> 31;
      }
      else
      {
        LOBYTE(v25) = *(_DWORD *)(v16 + 120) < *(_DWORD *)(v13 + 120);
      }
      if ( !(_BYTE)v25 )
        goto LABEL_18;
LABEL_9:
      v13 = a1->m128i_i64[0];
      ++v9;
    }
    while ( 2 )
    {
      v15 = qword_1C7F2C0;
      do
      {
LABEL_18:
        v18 = *(v14 - 1);
        v19 = a1->m128i_i64[0];
        --v14;
        v91 = v18 + 88;
        v100 = a1->m128i_i64[0] + 88;
        if ( (*(_BYTE *)(a1->m128i_i64[0] + 108) & 1) != 0
          || *(_DWORD *)(v19 + 104) != 1
          || (*(_BYTE *)(v18 + 108) & 1) != 0
          || *(_DWORD *)(v18 + 104) != 1 )
        {
          LOBYTE(v20) = sub_1848D40(v15, v100, v91);
          v15 = qword_1C7F2C0;
        }
        else if ( (*(_BYTE *)(v19 + 92) & 1) != 0 || (*(_BYTE *)(v18 + 92) & 1) != 0 )
        {
          v30 = sub_182C7B0(v15, v100, v91);
          v15 = qword_1C7F2C0;
          v20 = v30 >> 31;
        }
        else
        {
          LOBYTE(v20) = *(_DWORD *)(v19 + 88) < *(_DWORD *)(v18 + 88);
        }
      }
      while ( (_BYTE)v20 );
      if ( (*(_BYTE *)(v19 + 92) & 1) != 0 || (*(_BYTE *)(v18 + 92) & 1) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(v15, v100, v91) )
          goto LABEL_25;
      }
      else if ( *(_DWORD *)(v19 + 88) != *(_DWORD *)(v18 + 88) )
      {
        goto LABEL_25;
      }
      if ( (*(_BYTE *)(v19 + 108) & 1) != 0 || (*(_BYTE *)(v18 + 108) & 1) != 0 )
        v26 = (unsigned int)sub_182C7B0(v15, v19 + 104, v18 + 104) == 0;
      else
        v26 = *(_DWORD *)(v19 + 104) == *(_DWORD *)(v18 + 104);
      if ( !v26 )
        goto LABEL_25;
      v27 = v18 + 120;
      v28 = v19 + 120;
      if ( (*(_BYTE *)(v19 + 140) & 1) != 0
        || *(_DWORD *)(v19 + 136) != 1
        || (*(_BYTE *)(v18 + 140) & 1) != 0
        || *(_DWORD *)(v18 + 136) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v28, v27) )
          continue;
        if ( v9 < v14 )
        {
LABEL_26:
          v21 = *v9++;
          *(v9 - 1) = *v14;
          *v14 = v21;
          v13 = a1->m128i_i64[0];
          goto LABEL_8;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v19 + 124) & 1) != 0 || (*(_BYTE *)(v18 + 124) & 1) != 0 )
          v32 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v28, v27) >> 31;
        else
          LOBYTE(v32) = *(_DWORD *)(v19 + 120) < *(_DWORD *)(v18 + 120);
        if ( (_BYTE)v32 )
          continue;
LABEL_25:
        if ( v9 < v14 )
          goto LABEL_26;
      }
      break;
    }
    sub_9BCE90(v9, v115, a3);
    result = (char *)v9 - (char *)a1;
    if ( (char *)v9 - (char *)a1 <= 128 )
      return result;
    v115 = v9;
  }
  v45 = qword_1C7F2C0;
  v117 = v6 - 1;
  v46 = a1;
  v112 = (v7 - 1) >> 1;
  v47 = ~(_BYTE)v7;
  v48 = v117;
  v119 = v47 & 1;
  while ( 1 )
  {
    v113 = v46->m128i_i64[v48];
    if ( v48 < v112 )
      break;
    v61 = &v46->m128i_i64[v48];
    if ( v117 == v48 && v119 )
    {
      v51 = v48;
LABEL_163:
      v81 = 2 * v51 + 2;
      v82 = v46->m128i_i64[v81 - 1];
      v51 = v81 - 1;
      *v61 = v82;
      v61 = &v46->m128i_i64[v51];
      goto LABEL_122;
    }
LABEL_196:
    *v61 = v113;
LABEL_132:
    --v48;
  }
  v116 = v48;
  v49 = v48;
  v50 = v46;
  while ( 1 )
  {
    v51 = 2 * (v49 + 1);
    v52 = &v50[v49 + 1];
    v53 = v52[-1].m128i_i64[1];
    v54 = v52->m128i_i64[0];
    v107 = v53;
    v55 = v53 + 88;
    v56 = v52->m128i_i64[0] + 88;
    if ( (*(_BYTE *)(v52->m128i_i64[0] + 108) & 1) != 0
      || *(_DWORD *)(v54 + 104) != 1
      || (*(_BYTE *)(v53 + 108) & 1) != 0
      || *(_DWORD *)(v53 + 104) != 1 )
    {
      v102 = v53 + 88;
      v57 = sub_1848D40(v45, v56, v55);
      v45 = qword_1C7F2C0;
      v56 = v54 + 88;
      v55 = v102;
      if ( v57 )
        goto LABEL_103;
    }
    else if ( (*(_BYTE *)(v54 + 92) & 1) != 0 || (*(_BYTE *)(v53 + 92) & 1) != 0 )
    {
      v103 = v53 + 88;
      v60 = sub_182C7B0(v45, v56, v55);
      v45 = qword_1C7F2C0;
      if ( v60 < 0 )
        goto LABEL_103;
      v56 = v54 + 88;
      v55 = v103;
    }
    else if ( *(_DWORD *)(v54 + 88) < *(_DWORD *)(v53 + 88) )
    {
      goto LABEL_103;
    }
    v58 = sub_3ED680((__int64)v45, v56, v55);
    v45 = qword_1C7F2C0;
    if ( v58 )
    {
      v59 = sub_3ED700((__int64)qword_1C7F2C0, v54 + 120, v107 + 120);
      v45 = qword_1C7F2C0;
      if ( v59 )
      {
LABEL_103:
        --v51;
        v52 = (__m128i *)((char *)v50 + 8 * v51);
      }
    }
    v50->m128i_i64[v49] = v52->m128i_i64[0];
    if ( v51 >= v112 )
      break;
    v49 = v51;
  }
  v61 = (__int64 *)v52;
  v48 = v116;
  v46 = v50;
  if ( v117 == v51 && v119 )
    goto LABEL_163;
LABEL_122:
  v62 = (v51 - 1) >> 1;
  if ( v48 >= v51 )
    goto LABEL_196;
  v108 = v48;
  v104 = v113 + 88;
  while ( 2 )
  {
    v63 = &v46->m128i_i8[8 * v62];
    v64 = *(_QWORD *)v63;
    v65 = *(_QWORD *)v63 + 88LL;
    if ( (*(_BYTE *)(*(_QWORD *)v63 + 108LL) & 1) != 0
      || *(_DWORD *)(v64 + 104) != 1
      || (*(_BYTE *)(v113 + 108) & 1) != 0
      || *(_DWORD *)(v113 + 104) != 1 )
    {
      v93 = *(_QWORD *)v63 + 88LL;
      v66 = sub_1848D40(v45, v65, v104);
      v65 = v93;
      if ( !v66 )
      {
LABEL_129:
        if ( !sub_3ED680((__int64)qword_1C7F2C0, v65, v104)
          || !sub_3ED700((__int64)qword_1C7F2C0, v64 + 120, v113 + 120) )
        {
          v48 = v108;
          v46->m128i_i64[v51] = v113;
          if ( !v108 )
            goto LABEL_143;
LABEL_131:
          v45 = qword_1C7F2C0;
          goto LABEL_132;
        }
      }
    }
    else
    {
      if ( (*(_BYTE *)(v64 + 92) & 1) != 0 || (*(_BYTE *)(v113 + 92) & 1) != 0 )
      {
        v94 = *(_QWORD *)v63 + 88LL;
        v67 = sub_182C7B0(v45, v65, v104);
        v65 = v94;
        v68 = v67 >> 31;
      }
      else
      {
        LOBYTE(v68) = *(_DWORD *)(v64 + 88) < *(_DWORD *)(v113 + 88);
      }
      if ( !(_BYTE)v68 )
        goto LABEL_129;
    }
    v46->m128i_i64[v51] = *(_QWORD *)v63;
    if ( v108 < v62 )
    {
      v45 = qword_1C7F2C0;
      v51 = v62;
      v62 = (v62 - 1) / 2;
      continue;
    }
    break;
  }
  v48 = v108;
  *(_QWORD *)v63 = v113;
  if ( v108 )
    goto LABEL_131;
LABEL_143:
  v69 = (char *)v46;
  result = (char *)v115 - (char *)v46;
  if ( (char *)v115 - (char *)v46 <= 8 )
    return result;
LABEL_144:
  while ( 2 )
  {
    v114 = *--v115;
    *v115 = *(_QWORD *)v69;
    v70 = (char *)v115 - v69;
    if ( (char *)v115 - v69 > 16 )
    {
      v120 = v70 >> 3;
      v118 = (v70 >> 3) & 1;
      for ( i = 0; ; i = v73 )
      {
        v73 = 2 * (i + 1);
        v74 = &v69[16 * i + 16];
        v75 = *((_QWORD *)v74 - 1);
        v76 = *(_QWORD *)v74;
        v95 = v75 + 88;
        v105 = *(_QWORD *)v74 + 88LL;
        if ( (*(_BYTE *)(*(_QWORD *)v74 + 108LL) & 1) != 0
          || *(_DWORD *)(v76 + 104) != 1
          || (*(_BYTE *)(v75 + 108) & 1) != 0
          || *(_DWORD *)(v75 + 104) != 1 )
        {
          v109 = *(_QWORD *)v74;
          v77 = sub_1848D40(qword_1C7F2C0, v105, v95);
          v76 = v109;
          if ( v77 )
            goto LABEL_146;
        }
        else
        {
          v78 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v76 + 92) & 1) == 0 && (*(_BYTE *)(v75 + 92) & 1) == 0 )
          {
            if ( *(_DWORD *)(v75 + 88) > *(_DWORD *)(v76 + 88) )
              goto LABEL_146;
            goto LABEL_154;
          }
          v111 = *(_QWORD *)v74;
          v89 = sub_182C7B0(qword_1C7F2C0, v105, v95);
          v76 = v111;
          if ( v89 < 0 )
            goto LABEL_146;
        }
        v78 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v76 + 92) & 1) != 0 || (*(_BYTE *)(v75 + 92) & 1) != 0 )
        {
          v110 = v76;
          v96 = qword_1C7F2C0;
          v83 = sub_182C7B0(qword_1C7F2C0, v105, v75 + 88);
          v78 = v96;
          v76 = v110;
          v79 = v83 == 0;
          goto LABEL_155;
        }
LABEL_154:
        v79 = *(_DWORD *)(v76 + 88) == *(_DWORD *)(v75 + 88);
LABEL_155:
        if ( v79 )
        {
          if ( (*(_BYTE *)(v76 + 108) & 1) != 0 || (*(_BYTE *)(v75 + 108) & 1) != 0 )
          {
            v98 = v76;
            v87 = sub_182C7B0(v78, v76 + 104, v75 + 104);
            v76 = v98;
            v80 = v87 == 0;
          }
          else
          {
            v80 = *(_DWORD *)(v76 + 104) == *(_DWORD *)(v75 + 104);
          }
          if ( v80 && sub_3ED700((__int64)qword_1C7F2C0, v76 + 120, v75 + 120) )
          {
LABEL_146:
            --v73;
            v74 = &v69[8 * v73];
          }
        }
        *(_QWORD *)&v69[8 * i] = *(_QWORD *)v74;
        if ( v73 >= ((((char *)v115 - v69) >> 3) - 1) / 2 )
        {
          if ( !v118 && v73 == (v120 - 2) >> 1 )
            goto LABEL_191;
          v34 = (v73 - 1) / 2;
          if ( v73 )
            goto LABEL_80;
          *(_QWORD *)v74 = v114;
          goto LABEL_144;
        }
      }
    }
    v41 = v69;
    *((_QWORD *)&v71 + 1) = (((char *)v115 - v69) >> 3) & 1;
    *(_QWORD *)&v71 = (((char *)v115 - v69) >> 3) - 1;
    if ( v71 <= 2 )
    {
      v74 = v69;
      v73 = 0;
LABEL_191:
      v88 = 2 * v73 + 2;
      v73 = 2 * v73 + 1;
      v34 = (v88 >> 1) - 1;
      *(_QWORD *)v74 = *(_QWORD *)&v69[8 * v88 - 8];
LABEL_80:
      v35 = v34;
      v36 = v73;
      v101 = v114 + 88;
      while ( 2 )
      {
        v38 = &v69[8 * v35];
        v37 = *(_QWORD *)v38;
        v92 = *(_QWORD *)v38 + 88LL;
        if ( (*(_BYTE *)(*(_QWORD *)v38 + 108LL) & 1) != 0
          || *(_DWORD *)(v37 + 104) != 1
          || (*(_BYTE *)(v114 + 108) & 1) != 0
          || *(_DWORD *)(v114 + 104) != 1 )
        {
          if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, v92, v101) )
            goto LABEL_87;
        }
        else
        {
          v39 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v37 + 92) & 1) == 0 && (*(_BYTE *)(v114 + 92) & 1) == 0 )
          {
            v40 = *(_DWORD *)(v37 + 88);
            if ( v40 >= *(_DWORD *)(v114 + 88) )
              goto LABEL_90;
LABEL_82:
            *(_QWORD *)&v69[8 * v36] = v37;
            v36 = v35;
            if ( !v35 )
            {
              v41 = v69;
              goto LABEL_92;
            }
            v35 = (v35 - 1) / 2;
            continue;
          }
          if ( (int)sub_182C7B0(qword_1C7F2C0, v92, v101) >= 0 )
          {
LABEL_87:
            v39 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v37 + 92) & 1) != 0 || (*(_BYTE *)(v114 + 92) & 1) != 0 )
            {
              v84 = v92;
              v97 = qword_1C7F2C0;
              v85 = sub_182C7B0(qword_1C7F2C0, v84, v101);
              v39 = v97;
              if ( v85 )
                goto LABEL_91;
            }
            else
            {
              v40 = *(_DWORD *)(v37 + 88);
LABEL_90:
              if ( v40 != *(_DWORD *)(v114 + 88) )
                goto LABEL_91;
            }
            if ( (*(_BYTE *)(v37 + 108) & 1) != 0 || (*(_BYTE *)(v114 + 108) & 1) != 0 )
              v86 = (unsigned int)sub_182C7B0(v39, v37 + 104, v114 + 104) == 0;
            else
              v86 = *(_DWORD *)(v37 + 104) == *(_DWORD *)(v114 + 104);
            if ( !v86 || !sub_3ED700((__int64)qword_1C7F2C0, v37 + 120, v114 + 120) )
            {
LABEL_91:
              v41 = &v69[8 * v36];
              goto LABEL_92;
            }
          }
        }
        break;
      }
      v37 = *(_QWORD *)v38;
      goto LABEL_82;
    }
LABEL_92:
    result = v114;
    *(_QWORD *)v41 = v114;
    if ( (char *)v115 - v69 > 8 )
      continue;
    return result;
  }
}

