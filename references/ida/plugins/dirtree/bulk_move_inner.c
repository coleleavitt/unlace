__int64 __fastcall sub_779220(_QWORD *a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rax
  _BYTE *v14; // rdx
  int v15; // ebx
  unsigned __int64 v16; // r10
  char *v17; // r14
  char *v18; // r15
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  int v23; // r9d
  __int64 v24; // rsi
  __int64 v25; // rax
  void *v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  const char *v31; // rax
  char v32; // al
  __int8 v33; // r15
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // rax
  char *v37; // rbx
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int8 v41; // r14
  __int64 v42; // rsi
  __int32 v43; // ebx
  __m128i *v44; // rax
  unsigned __int64 v45; // rbx
  void *v46; // rdi
  __int64 v47; // rcx
  __m128i v48; // xmm0
  __int64 v49; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // r11
  __int64 v57; // rax
  char *v58; // r11
  char *v59; // rsi
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rax
  unsigned __int64 v65; // rsi
  __int64 v66; // rdi
  char *v67; // r11
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  _BYTE *v73; // rdx
  _BYTE *v74; // rax
  char v75; // al
  void *v76; // rax
  void *v77; // rdx
  __int64 v78; // r8
  bool v79; // zf
  void *v80; // r9
  void **v81; // rcx
  __int64 v82; // r14
  __int32 v83; // r15d
  __int64 v84; // rax
  __m128i *v85; // rax
  char *v86; // rax
  __int8 v87; // dl
  char *v88; // rbx
  __int8 v89; // bp
  void **v90; // r11
  __m128i *v91; // rax
  char *v92; // r9
  __int8 v93; // r10
  char *v94; // r11
  __int64 v95; // rdx
  const __m128i *v96; // r15
  const __m128i *i; // r13
  void *v98; // rax
  __m128i v99; // xmm0
  __m128i v100; // xmm1
  __int8 v101; // r9
  __int32 v102; // r8d
  char *v103; // rsi
  __m128i *v104; // rax
  __int64 v105; // rdx
  char *v106; // rsi
  char *v107; // r10
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r11
  __int64 v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rdi
  __int64 v116; // [rsp+0h] [rbp-140h]
  unsigned __int64 v117; // [rsp+8h] [rbp-138h]
  __m128i v118; // [rsp+10h] [rbp-130h] BYREF
  __m128i v119; // [rsp+20h] [rbp-120h] BYREF
  __int64 v120; // [rsp+30h] [rbp-110h]
  __int64 v121; // [rsp+38h] [rbp-108h]
  unsigned __int64 v122; // [rsp+40h] [rbp-100h]
  __int64 v123; // [rsp+48h] [rbp-F8h]
  char *v124; // [rsp+50h] [rbp-F0h]
  unsigned __int64 v125; // [rsp+58h] [rbp-E8h]
  unsigned __int64 v126; // [rsp+60h] [rbp-E0h]
  char *v127; // [rsp+68h] [rbp-D8h]
  int v128; // [rsp+74h] [rbp-CCh]
  __int64 v129; // [rsp+80h] [rbp-C0h] BYREF
  void *v130; // [rsp+88h] [rbp-B8h] BYREF
  __int128 v131; // [rsp+90h] [rbp-B0h]
  void *v132; // [rsp+A8h] [rbp-98h] BYREF
  __int128 v133; // [rsp+B0h] [rbp-90h]
  void *ptr; // [rsp+C8h] [rbp-78h] BYREF
  __m128i v135; // [rsp+D0h] [rbp-70h] BYREF
  char *v136; // [rsp+E8h] [rbp-58h] BYREF
  void *v137[2]; // [rsp+F0h] [rbp-50h]
  unsigned __int64 v138; // [rsp+100h] [rbp-40h]

  v121 = a3;
  v7 = a2[1];
  v123 = a5;
  v118.m128i_i64[0] = a6;
  v138 = __readfsqword(0x28u);
  v131 = 0;
  v130 = 0;
  if ( v7 )
  {
    v76 = (void *)qvector_reserve(&v130, 0, v7, 24);
    v79 = a2[1] == 0;
    v130 = v76;
    v80 = v76;
    if ( !v79 )
    {
      v81 = (void **)&v136;
      v82 = v131;
      v83 = 0;
      v84 = 0;
      v118.m128i_i64[1] = (__int64)&v136;
      while ( 1 )
      {
        v86 = (char *)sub_775F70(a1, *a2 + 16 * v84, v77, v81, v78, v80);
        v135.m128i_i8[0] = v87;
        v88 = v86;
        v89 = v87;
        ptr = v86;
        v94 = (char *)*v90;
        v93 = 2 * (v86 + 1 == 0);
        v137[0] = v86;
        LOBYTE(v137[1]) = v87;
        v77 = (void *)(v82 + 1);
        v136 = v94;
        BYTE1(v137[1]) = v93;
        HIDWORD(v137[1]) = v83;
        if ( v118.m128i_i64[1] < (unsigned __int64)v92
          || v118.m128i_i64[1] >= (unsigned __int64)&v92[24 * *((_QWORD *)&v131 + 1)] )
        {
          if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)v77 )
          {
            v130 = (void *)qvector_reserve(&v130, v92, v77, 24);
            v82 = v131;
            v92 = (char *)v130;
          }
          v91 = (__m128i *)&v92[24 * v82];
          *v91 = _mm_load_si128((const __m128i *)&v136);
          v77 = v137[1];
          v91[1].m128i_i64[0] = (__int64)v137[1];
        }
        else
        {
          if ( *((_QWORD *)&v131 + 1) < (unsigned __int64)v77 )
          {
            v119.m128i_i8[8] = 2 * (v86 + 1 == 0);
            v119.m128i_i64[0] = (__int64)v94;
            v130 = (void *)qvector_reserve(&v130, v92, v77, 24);
            v82 = v131;
            v92 = (char *)v130;
            v93 = v119.m128i_i8[8];
            v94 = (char *)v119.m128i_i64[0];
          }
          v85 = (__m128i *)&v92[24 * v82];
          v85[1].m128i_i8[0] = v89;
          v85[1].m128i_i8[1] = v93;
          v85[1].m128i_i32[1] = v83;
          *v85 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v94, (__m128i)(unsigned __int64)v88);
        }
        ++v83;
        v82 = v131 + 1;
        v84 = v83;
        *(_QWORD *)&v131 = v131 + 1;
        if ( (unsigned __int64)v83 >= a2[1] )
          break;
        v80 = v130;
      }
    }
  }
  v129 = -1;
  v8 = sub_778D30(a1, v121, &v129);
  v9 = v8;
  if ( (_BYTE)v8 == 1 )
  {
    v117 = v129;
    if ( v129 == -1 )
    {
      v9 = 3;
      goto LABEL_59;
    }
  }
  else
  {
    if ( (_BYTE)v8 )
      goto LABEL_59;
    v117 = v129;
  }
  v10 = 176 * v117 + a1[6];
  v120 = 176 * v117;
  v11 = *(_QWORD *)(v10 + 24);
  v12 = v11 + 9LL * *(_QWORD *)(v10 + 32);
  if ( v11 == v12 )
  {
    v15 = 0;
  }
  else
  {
    v13 = (_BYTE *)(v11 + 8);
    v14 = (_BYTE *)(v12 + 8);
    v15 = 0;
    do
    {
      if ( !*v13 )
        break;
      v13 += 9;
      ++v15;
    }
    while ( v13 != v14 );
  }
  v16 = v131;
  v17 = (char *)v130;
  v18 = (char *)v130 + 24 * v131;
  if ( v130 != v18 )
  {
    while ( 1 )
    {
      if ( v17[17] )
        goto LABEL_14;
      if ( v17[16] )
      {
        if ( (unsigned __int8)sub_773B80(a1, *((_QWORD *)v17 + 1), v117) )
        {
          v17[17] = 7;
          goto LABEL_14;
        }
        if ( (*(_BYTE *)(v10 + 168) & 4) == 0 || a4 == -1 )
          goto LABEL_14;
        if ( v15 < (__int64)a4 )
          goto LABEL_13;
        v17 += 24;
        if ( v18 == v17 )
        {
LABEL_22:
          v16 = v131;
          break;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v10 + 168) & 4) != 0 && a4 != -1 )
        {
LABEL_13:
          if ( (unsigned __int8)sub_7773F0(a1, v117, 0, 0) )
          {
            if ( !under_debugger )
              interr(3429);
            goto LABEL_183;
          }
        }
LABEL_14:
        v17 += 24;
        if ( v18 == v17 )
          goto LABEL_22;
      }
    }
  }
  if ( (*(_BYTE *)(v10 + 168) & 4) != 0 || a4 == -1 )
  {
    v116 = -1;
  }
  else
  {
    v19 = *(_QWORD *)(v10 + 32);
    if ( a4 <= v19 )
      v19 = a4;
    v116 = v19;
  }
  v132 = 0;
  v133 = 0;
  if ( !v16 )
  {
    ptr = 0;
    v135 = 0;
LABEL_135:
    if ( v123 )
      goto LABEL_53;
    goto LABEL_56;
  }
  v118.m128i_i32[2] = 0;
  v20 = 0;
  v21 = 0;
  do
  {
    v26 = v130;
    v37 = (char *)v130 + 24 * v21;
    v33 = v37[17];
    if ( v33 )
    {
LABEL_44:
      if ( v118.m128i_i64[0] )
      {
        v38 = *(_QWORD *)(v118.m128i_i64[0] + 8);
        v39 = _mm_loadl_epi64((const __m128i *)v37);
        v40 = _mm_loadl_epi64((const __m128i *)(v37 + 8));
        v41 = v37[16];
        v42 = *(_QWORD *)v118.m128i_i64[0];
        v43 = *((_DWORD *)v37 + 5);
        if ( *(_QWORD *)(v118.m128i_i64[0] + 16) < (unsigned __int64)(v38 + 1) )
        {
          v119.m128i_i64[1] = v40.m128i_i64[0];
          v119.m128i_i64[0] = v39.m128i_i64[0];
          v42 = qvector_reserve(v118.m128i_i64[0], v42, v38 + 1, 24);
          v62 = v118.m128i_i64[0];
          v40 = _mm_loadl_epi64((const __m128i *)&v119.m128i_u64[1]);
          v39 = _mm_loadl_epi64(&v119);
          *(_QWORD *)v118.m128i_i64[0] = v42;
          v38 = *(_QWORD *)(v62 + 8);
        }
        v44 = (__m128i *)(v42 + 24 * v38);
        *v44 = _mm_unpacklo_epi64(v39, v40);
        v44[1].m128i_i8[0] = v41;
        v44[1].m128i_i8[1] = v33;
        v44[1].m128i_i32[1] = v43;
        ++*(_QWORD *)(v118.m128i_i64[0] + 8);
      }
      goto LABEL_42;
    }
    v22 = *(_QWORD *)v37;
    v23 = *(_DWORD *)(a1[5] + 8LL) & 0xB;
    if ( *(_QWORD *)v37 == v117 )
    {
      if ( v23 )
        goto LABEL_69;
      goto LABEL_64;
    }
    if ( v37[16] )
    {
      if ( v23 )
      {
        v30 = v116;
        v31 = 0;
        v29 = (__int64)(v37 + 8);
LABEL_37:
        v32 = sub_774EB0(a1, v22, v117, v29, v31, v30);
        v37[17] = v32;
        v33 = v32;
        v34 = 1;
        goto LABEL_38;
      }
LABEL_64:
      v27 = (__int64)(v37 + 8);
LABEL_35:
      v119.m128i_i64[0] = v27;
      v28 = sub_7761E0(a1, &v132);
      v22 = *(_QWORD *)v37;
      v29 = v119.m128i_i64[0];
      if ( v28 )
      {
        if ( (_QWORD)v133 )
        {
          if ( v117 != v22 )
          {
            v31 = (const char *)v132;
            v30 = v116;
            goto LABEL_37;
          }
        }
        else
        {
          v30 = v116;
          v31 = haystack;
          if ( v117 != v22 )
            goto LABEL_37;
        }
      }
      else
      {
        v30 = v116;
        v31 = 0;
        if ( v117 != v22 )
          goto LABEL_37;
      }
LABEL_69:
      if ( (*(_BYTE *)(v10 + 168) & 4) != 0 && !v37[16] )
        goto LABEL_42;
      v51 = v116;
      if ( v116 == -1 )
      {
        if ( v37[16] )
        {
          v71 = *(_QWORD *)(v10 + 24);
          v72 = v71 + 9LL * *(_QWORD *)(v10 + 32);
          if ( v71 == v72 )
          {
            v51 = 0;
          }
          else
          {
            v73 = (_BYTE *)(v71 + 8);
            v74 = (_BYTE *)(v72 + 8);
            v51 = 0;
            do
            {
              if ( !*v73 )
                break;
              v73 += 9;
              ++v51;
            }
            while ( v74 != v73 );
          }
        }
        else
        {
          v51 = sub_772520(v10, *((_QWORD *)v37 + 1));
        }
      }
      v52 = sub_776DE0(a1, (unsigned int)v117, v37 + 8, v51, 0);
      v33 = v37[17];
      v34 = 1;
      v116 -= v52 < v116;
      goto LABEL_38;
    }
    if ( !v23 )
    {
      if ( (*(_BYTE *)(v10 + 168) & 4) != 0 )
      {
        v53 = *(_QWORD *)(v10 + 32);
        v54 = *(_QWORD *)(v10 + 24);
        v119.m128i_i32[2] = *(_DWORD *)(a1[5] + 8LL) & 0xB;
        v119.m128i_i64[0] = (__int64)v130;
        v55 = sub_771150(v54, v54 + 9 * v53);
        v26 = (void *)v119.m128i_i64[0];
        v23 = v119.m128i_i32[2];
        if ( v56 != v55 && *(_QWORD *)v55 == *((_QWORD *)v37 + 1) && !*(_BYTE *)(v55 + 8) )
          goto LABEL_35;
      }
      else
      {
        v24 = *((_QWORD *)v37 + 1);
        v124 = v37 + 8;
        LODWORD(v122) = 0;
        v119.m128i_i64[1] = v16;
        v119.m128i_i64[0] = (__int64)v130;
        v25 = sub_771620(v10 + 48, v24);
        v16 = v119.m128i_u64[1];
        v26 = (void *)v119.m128i_i64[0];
        v23 = v122;
        v27 = (__int64)v124;
        if ( v25 )
          goto LABEL_35;
      }
    }
    v57 = a1[6] + 176 * v22;
    v58 = *(char **)(v57 + 24);
    v59 = &v58[9 * *(_QWORD *)(v57 + 32)];
    if ( (*(_BYTE *)(v57 + 168) & 4) != 0 )
    {
      v60 = *(_QWORD *)(v57 + 24);
      v119.m128i_i64[0] = (__int64)&v58[9 * *(_QWORD *)(v57 + 32)];
      LODWORD(v122) = v23;
      v119.m128i_i64[1] = (__int64)v26;
      v61 = sub_771150(v60, v59);
      if ( v61 == v119.m128i_i64[0] )
        goto LABEL_79;
      v23 = v122;
      v26 = (void *)v119.m128i_i64[1];
      if ( *(_QWORD *)v61 != *((_QWORD *)v37 + 1) || *(_BYTE *)(v61 + 8) )
        goto LABEL_79;
    }
    else
    {
      if ( v58 == v59 )
        goto LABEL_79;
      v61 = *(_QWORD *)(v57 + 24);
      while ( *((_QWORD *)v37 + 1) != *(_QWORD *)v61 || *(_BYTE *)(v61 + 8) )
      {
        v61 += 9;
        if ( (char *)v61 == v59 )
          goto LABEL_79;
      }
      if ( (char *)v61 == v59 )
      {
LABEL_79:
        if ( !under_debugger )
          interr(3430);
        goto LABEL_183;
      }
    }
    v119.m128i_i64[1] = 0x8E38E38E38E38E39LL * (v61 - (_QWORD)v58);
    if ( v119.m128i_i64[1] == -1 )
      goto LABEL_79;
    if ( v116 == -1 )
    {
      v63 = *((_QWORD *)v37 + 1);
      LODWORD(v125) = v23;
      v124 = v58;
      v122 = v16;
      v119.m128i_i64[0] = (__int64)v26;
      v64 = sub_772520(v10, v63);
      v29 = (__int64)(v37 + 8);
      v30 = v64;
      v31 = 0;
      if ( v30 == -1 )
        goto LABEL_37;
      v26 = (void *)v119.m128i_i64[0];
      v16 = v122;
      v58 = v124;
      v23 = v125;
    }
    else
    {
      v30 = v116;
    }
    v65 = -1;
    if ( v30 < *(_QWORD *)(v10 + 32) )
      v65 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 9 * v30);
    if ( v20 + 1 >= v16 )
      goto LABEL_179;
    v66 = v10;
    v67 = &v58[9 * v119.m128i_i64[1] + 9 + 9 * (v20 - v21)];
    v68 = (__int64)v26 + 24 * v20 + 32;
    v69 = v20 + 1;
    do
    {
      v70 = *(_QWORD *)v68;
      if ( *(_QWORD *)v68 != *(_QWORD *)v67
        || v67[8]
        || *(_BYTE *)(v68 + 8)
        || v22 != *(_QWORD *)(v68 - 8)
        || *(_BYTE *)(v68 + 9)
        || (*(_BYTE *)(v66 + 168) & 4) != 0 && (*(_QWORD *)(v68 - 24) >= v70 || v70 >= v65) )
      {
        break;
      }
      if ( !v23 )
      {
        v128 = 0;
        v127 = v67;
        v126 = v30;
        v125 = v16;
        v124 = (char *)v69;
        v122 = v68;
        v119.m128i_i64[0] = v66;
        v75 = sub_772430(v66, v68);
        v66 = v119.m128i_i64[0];
        v68 = v122;
        v69 = (unsigned __int64)v124;
        v16 = v125;
        v30 = v126;
        v67 = v127;
        v23 = v128;
        if ( v75 )
          break;
      }
      ++v69;
      v67 += 9;
      v68 += 24;
    }
    while ( v69 < v16 );
    v10 = v66;
    if ( v69 - v20 == 1 )
    {
LABEL_179:
      v31 = 0;
      v29 = (__int64)(v37 + 8);
      goto LABEL_37;
    }
    v119.m128i_i64[0] = v69 - v20;
    sub_774200(a1, v22, v117, v119.m128i_i64[1], v30, v69 - v20);
    v33 = v37[17];
    v34 = v119.m128i_i64[0];
LABEL_38:
    if ( v33 )
      goto LABEL_44;
    v118.m128i_i32[2] += v34;
    v20 = v21 + v34 - 1;
    v35 = v116 + v34;
    v36 = -1;
    if ( v116 != -1 )
      v36 = v35;
    v116 = v36;
LABEL_42:
    v16 = v131;
    v21 = ++v20;
  }
  while ( v20 < (unsigned __int64)v131 );
  ptr = 0;
  v135 = 0;
  if ( v118.m128i_i32[2] <= 0 )
    goto LABEL_135;
  v45 = v116;
  v136 = 0;
  v118.m128i_i64[1] = (__int64)&v136;
  *(_OWORD *)v137 = 0;
  if ( (_QWORD)v131 )
  {
    v136 = (char *)qvector_reserve(&v136, 0, v131, 24);
    v95 = v131;
    if ( v135.m128i_i64[1] < (unsigned __int64)v131 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v131, 16);
      v95 = v131;
    }
    v96 = (const __m128i *)((char *)v130 + 24 * v95);
    if ( v96 != v130 )
    {
      for ( i = (const __m128i *)((char *)v130 + 8); ; i = (const __m128i *)((char *)i + 24) )
      {
        if ( !i->m128i_i8[9] )
        {
          v98 = v137[0];
          v99 = _mm_loadl_epi64((const __m128i *)((char *)i - 8));
          v100 = _mm_loadl_epi64(i);
          v101 = i->m128i_i8[8];
          v102 = i->m128i_i32[3];
          v103 = v136;
          if ( v137[1] < (char *)v137[0] + 1 )
          {
            LODWORD(v122) = i->m128i_i32[3];
            v119.m128i_i8[8] = v101;
            v119.m128i_i64[0] = v100.m128i_i64[0];
            v118.m128i_i64[0] = v99.m128i_i64[0];
            v136 = (char *)qvector_reserve(v118.m128i_i64[1], v136, (char *)v137[0] + 1, 24);
            v103 = v136;
            v102 = v122;
            v98 = v137[0];
            v101 = v119.m128i_i8[8];
            v100 = _mm_loadl_epi64(&v119);
            v99 = _mm_loadl_epi64(&v118);
          }
          v104 = (__m128i *)&v103[24 * (_QWORD)v98];
          v104[1].m128i_i8[0] = v101;
          v104[1].m128i_i8[1] = 0;
          v104[1].m128i_i32[1] = v102;
          *v104 = _mm_unpacklo_epi64(v99, v100);
          v105 = v135.m128i_i64[0];
          v106 = (char *)ptr;
          ++v137[0];
          if ( v135.m128i_i64[1] < (unsigned __int64)(v135.m128i_i64[0] + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v135.m128i_i64[0] + 1, 16);
            v105 = v135.m128i_i64[0];
            v106 = (char *)ptr;
          }
          v107 = &v106[16 * v105];
          *(_OWORD *)v107 = -1;
          ++v135.m128i_i64[0];
          *(_QWORD *)v107 = v117;
          if ( v45 < *(_QWORD *)(v10 + 32)
            && (v108 = *(_QWORD *)(v10 + 24) + 9 * v45, *(_QWORD *)v108 == i->m128i_i64[0])
            && *(_BYTE *)(v108 + 8) == i->m128i_i8[8] )
          {
            *((_QWORD *)v107 + 1) = v45;
          }
          else
          {
            if ( v117 >= a1[7] )
              goto LABEL_163;
            v109 = a1[6] + v120;
            v110 = *(_QWORD *)(v109 + 32);
            v111 = *(_QWORD *)(v109 + 24);
            v112 = v111 + 9 * v110;
            if ( (*(_BYTE *)(v109 + 168) & 4) != 0 )
            {
              if ( i->m128i_i8[8] )
              {
                if ( v110 )
                {
                  v113 = *(_QWORD *)(v109 + 24);
                  do
                  {
                    if ( !*(_BYTE *)(v113 + 8) )
                      break;
                    if ( *(_QWORD *)v113 == i->m128i_i64[0] )
                      goto LABEL_155;
                    v113 += 9;
                  }
                  while ( v113 != v112 );
                }
LABEL_163:
                *((_QWORD *)v107 + 1) = -1;
LABEL_164:
                if ( !under_debugger )
                  interr(3431);
LABEL_183:
                BUG();
              }
              v114 = *(_QWORD *)(v109 + 24);
              v118.m128i_i64[0] = v111 + 9 * v110;
              v113 = sub_771150(v114, v118.m128i_i64[0]);
              if ( v113 == v118.m128i_i64[0] || *(_QWORD *)v113 != i->m128i_i64[0] || *(_BYTE *)(v113 + 8) )
                goto LABEL_163;
            }
            else
            {
              if ( v111 == v112 )
                goto LABEL_163;
              v113 = *(_QWORD *)(v109 + 24);
              while ( i->m128i_i64[0] != *(_QWORD *)v113 || i->m128i_i8[8] != *(_BYTE *)(v113 + 8) )
              {
                v113 += 9;
                if ( v113 == v112 )
                  goto LABEL_163;
              }
LABEL_155:
              if ( v113 == v112 )
                goto LABEL_163;
            }
            v45 = 0x8E38E38E38E38E39LL * (v113 - v111);
            *((_QWORD *)v107 + 1) = v45;
            if ( v45 == -1 )
              goto LABEL_164;
          }
          ++v45;
        }
        if ( v96 == &i[1] )
          break;
      }
    }
  }
  sub_39A760(91, a1[4], v118.m128i_i32[2], (unsigned int)&ptr, v121, v116);
  sub_772370((_DWORD)a1, 91, v118.m128i_i32[2], (unsigned int)&ptr, v121, v116);
  if ( v136 )
  {
    v137[0] = 0;
    qfree(v136);
  }
  v46 = ptr;
  if ( v123 )
  {
LABEL_53:
    v47 = v123;
    v48 = _mm_loadu_si128(&v135);
    v46 = *(void **)v123;
    v49 = *(_QWORD *)(v123 + 16);
    *(_QWORD *)v123 = ptr;
    *(__m128i *)(v47 + 8) = v48;
    ptr = v46;
    v135.m128i_i64[1] = v49;
  }
  if ( v46 )
  {
    v135.m128i_i64[0] = 0;
    qfree(v46);
  }
LABEL_56:
  if ( v132 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v132);
  }
  v9 = 0;
LABEL_59:
  if ( v130 )
  {
    *(_QWORD *)&v131 = 0;
    qfree(v130);
  }
  return v9;
}
