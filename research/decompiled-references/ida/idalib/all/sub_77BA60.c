__int64 __fastcall sub_77BA60(__int64 *a1, _QWORD *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  _BYTE *v14; // rax
  _BYTE *v15; // rdx
  int v16; // ebx
  unsigned __int64 v17; // r10
  char *v18; // r14
  char *v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  int v23; // r9d
  unsigned __int64 v24; // rsi
  _QWORD *v25; // rax
  void *v26; // rcx
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdx
  unsigned __int64 v30; // r8
  char *v31; // rax
  char v32; // al
  __int8 v33; // r15
  __int64 v34; // r9
  __int64 v35; // r9
  char *v36; // rbx
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm1
  __int8 v40; // r14
  __int64 v41; // rsi
  __int32 v42; // ebx
  __m128i *v43; // rax
  unsigned __int64 v44; // rbx
  void *v45; // rdi
  __int64 v46; // rcx
  __m128i v47; // xmm0
  __int64 v48; // rax
  unsigned __int64 v50; // rcx
  signed __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // r11
  __int64 v56; // rax
  __int64 v57; // r11
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  unsigned __int64 v65; // r11
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  __int64 v69; // rsi
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  _BYTE *v73; // rdx
  _BYTE *v74; // rax
  char v75; // al
  void *v76; // rax
  bool v77; // zf
  __int64 v78; // r14
  __int32 v79; // r15d
  __int64 v80; // rax
  __m128i *v81; // rax
  char *v82; // rax
  __int8 v83; // dl
  char *v84; // rbx
  __int8 v85; // r12
  void **v86; // r11
  unsigned __int64 v87; // rdx
  __m128i *v88; // rax
  char *v89; // r9
  __int8 v90; // r10
  char *v91; // r11
  __int64 v92; // rdx
  const __m128i *v93; // r15
  const __m128i *i; // r13
  void *v95; // rax
  __m128i v96; // xmm0
  __m128i v97; // xmm1
  __int8 v98; // r9
  __int32 v99; // r8d
  char *v100; // rsi
  __m128i *v101; // rax
  __int64 v102; // rdx
  char *v103; // rsi
  char *v104; // r10
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // r11
  __int64 v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rdi
  unsigned __int64 v113; // [rsp+8h] [rbp-148h]
  __m128i v114; // [rsp+10h] [rbp-140h] BYREF
  __m128i v115; // [rsp+20h] [rbp-130h] BYREF
  __int64 v116; // [rsp+30h] [rbp-120h]
  const char *v117; // [rsp+38h] [rbp-118h]
  void *v118; // [rsp+40h] [rbp-110h]
  __int64 v119; // [rsp+48h] [rbp-108h]
  char *v120; // [rsp+50h] [rbp-100h]
  __int64 v121; // [rsp+58h] [rbp-F8h]
  unsigned __int64 v122; // [rsp+60h] [rbp-F0h]
  unsigned __int64 v123; // [rsp+68h] [rbp-E8h]
  unsigned __int64 v124; // [rsp+70h] [rbp-E0h]
  unsigned __int64 v125; // [rsp+78h] [rbp-D8h]
  int v126; // [rsp+84h] [rbp-CCh]
  __int64 v127; // [rsp+90h] [rbp-C0h] BYREF
  void *v128; // [rsp+98h] [rbp-B8h] BYREF
  __int128 v129; // [rsp+A0h] [rbp-B0h]
  void *v130; // [rsp+B8h] [rbp-98h] BYREF
  __int128 v131; // [rsp+C0h] [rbp-90h]
  void *ptr; // [rsp+D8h] [rbp-78h] BYREF
  __m128i v133; // [rsp+E0h] [rbp-70h] BYREF
  char *v134; // [rsp+F8h] [rbp-58h] BYREF
  void *v135[2]; // [rsp+100h] [rbp-50h]
  unsigned __int64 v136; // [rsp+110h] [rbp-40h]

  v117 = a3;
  v7 = a2[1];
  v119 = a5;
  v114.m128i_i64[0] = a6;
  v136 = __readfsqword(0x28u);
  v129 = 0;
  v128 = nullptr;
  if ( v7 )
  {
    v76 = (void *)qvector_reserve(&v128, 0, v7, 24);
    v77 = a2[1] == 0;
    v128 = v76;
    if ( !v77 )
    {
      v78 = v129;
      v79 = 0;
      v80 = 0;
      v114.m128i_i64[1] = (__int64)&v134;
      do
      {
        v82 = (char *)sub_7787B0((__int64)a1, (unsigned __int64 *)(*a2 + 16 * v80));
        v133.m128i_i8[0] = v83;
        v84 = v82;
        v85 = v83;
        ptr = v82;
        v91 = (char *)*v86;
        v90 = 2 * (v82 + 1 == nullptr);
        v135[0] = v82;
        LOBYTE(v135[1]) = v83;
        v87 = v78 + 1;
        v134 = v91;
        BYTE1(v135[1]) = v90;
        HIDWORD(v135[1]) = v79;
        if ( v114.m128i_i64[1] < (unsigned __int64)v89
          || v114.m128i_i64[1] >= (unsigned __int64)&v89[24 * *((_QWORD *)&v129 + 1)] )
        {
          if ( *((_QWORD *)&v129 + 1) < v87 )
          {
            v128 = (void *)qvector_reserve(&v128, v89, v87, 24);
            v78 = v129;
            v89 = (char *)v128;
          }
          v88 = (__m128i *)&v89[24 * v78];
          *v88 = _mm_load_si128((const __m128i *)&v134);
          v88[1].m128i_i64[0] = (__int64)v135[1];
        }
        else
        {
          if ( *((_QWORD *)&v129 + 1) < v87 )
          {
            v115.m128i_i8[8] = 2 * (v82 + 1 == nullptr);
            v115.m128i_i64[0] = (__int64)v91;
            v128 = (void *)qvector_reserve(&v128, v89, v87, 24);
            v78 = v129;
            v89 = (char *)v128;
            v90 = v115.m128i_i8[8];
            v91 = (char *)v115.m128i_i64[0];
          }
          v81 = (__m128i *)&v89[24 * v78];
          v81[1].m128i_i8[0] = v85;
          v81[1].m128i_i8[1] = v90;
          v81[1].m128i_i32[1] = v79;
          *v81 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v91, (__m128i)(unsigned __int64)v84);
        }
        ++v79;
        v78 = v129 + 1;
        v80 = v79;
        *(_QWORD *)&v129 = v129 + 1;
      }
      while ( (unsigned __int64)v79 < a2[1] );
    }
  }
  v127 = -1;
  v8 = sub_77B570(a1, v117, (char **)&v127);
  v9 = v8;
  if ( (_BYTE)v8 == 1 )
  {
    v113 = v127;
    if ( v127 == -1 )
    {
      v9 = 3;
      goto LABEL_57;
    }
  }
  else
  {
    if ( (_BYTE)v8 )
      goto LABEL_57;
    v113 = v127;
  }
  v10 = a1[6];
  v116 = 176 * v113;
  v11 = 176 * v113 + v10;
  v12 = *(_QWORD *)(v11 + 24);
  v13 = v12 + 9LL * *(_QWORD *)(v11 + 32);
  if ( v12 == v13 )
  {
    v16 = 0;
  }
  else
  {
    v14 = (_BYTE *)(v12 + 8);
    v15 = (_BYTE *)(v13 + 8);
    v16 = 0;
    do
    {
      if ( !*v14 )
        break;
      v14 += 9;
      ++v16;
    }
    while ( v14 != v15 );
  }
  v17 = v129;
  v18 = (char *)v128;
  v19 = (char *)v128 + 24 * v129;
  if ( v128 != v19 )
  {
    while ( 1 )
    {
      if ( v18[17] )
        goto LABEL_14;
      if ( v18[16] )
      {
        if ( (unsigned __int8)sub_7763C0((__int64)a1, *((_QWORD *)v18 + 1), v113) )
        {
          v18[17] = 7;
          goto LABEL_14;
        }
        if ( (*(_BYTE *)(v11 + 168) & 4) == 0 || a4 == -1 )
          goto LABEL_14;
        if ( v16 < a4 )
          goto LABEL_13;
        v18 += 24;
        if ( v19 == v18 )
        {
LABEL_22:
          v17 = v129;
          break;
        }
      }
      else
      {
        if ( (*(_BYTE *)(v11 + 168) & 4) != 0 && a4 != -1 )
        {
LABEL_13:
          if ( (unsigned __int8)sub_779C30(a1, v113, 0, 0) )
          {
            if ( !under_debugger )
              interr(3429);
            goto LABEL_181;
          }
        }
LABEL_14:
        v18 += 24;
        if ( v19 == v18 )
          goto LABEL_22;
      }
    }
  }
  if ( (*(_BYTE *)(v11 + 168) & 4) != 0 || a4 == -1 )
  {
    a4 = -1;
  }
  else if ( (unsigned __int64)a4 > *(_QWORD *)(v11 + 32) )
  {
    a4 = *(_QWORD *)(v11 + 32);
  }
  v130 = nullptr;
  v131 = 0;
  if ( !v17 )
  {
    ptr = nullptr;
    v133 = 0;
LABEL_133:
    if ( v119 )
      goto LABEL_51;
    goto LABEL_54;
  }
  v114.m128i_i32[2] = 0;
  v20 = 0;
  v21 = 0;
  do
  {
    v26 = v128;
    v36 = (char *)v128 + 24 * v21;
    v33 = v36[17];
    if ( v33 )
    {
LABEL_42:
      if ( v114.m128i_i64[0] )
      {
        v37 = *(_QWORD *)(v114.m128i_i64[0] + 8);
        v38 = _mm_loadl_epi64((const __m128i *)v36);
        v39 = _mm_loadl_epi64((const __m128i *)(v36 + 8));
        v40 = v36[16];
        v41 = *(_QWORD *)v114.m128i_i64[0];
        v42 = *((_DWORD *)v36 + 5);
        if ( *(_QWORD *)(v114.m128i_i64[0] + 16) < (unsigned __int64)(v37 + 1) )
        {
          v115.m128i_i64[1] = v39.m128i_i64[0];
          v115.m128i_i64[0] = v38.m128i_i64[0];
          v41 = qvector_reserve(v114.m128i_i64[0], v41, v37 + 1, 24);
          v60 = v114.m128i_i64[0];
          v39 = _mm_loadl_epi64((const __m128i *)&v115.m128i_u64[1]);
          v38 = _mm_loadl_epi64(&v115);
          *(_QWORD *)v114.m128i_i64[0] = v41;
          v37 = *(_QWORD *)(v60 + 8);
        }
        v43 = (__m128i *)(v41 + 24 * v37);
        *v43 = _mm_unpacklo_epi64(v38, v39);
        v43[1].m128i_i8[0] = v40;
        v43[1].m128i_i8[1] = v33;
        v43[1].m128i_i32[1] = v42;
        ++*(_QWORD *)(v114.m128i_i64[0] + 8);
      }
      goto LABEL_40;
    }
    v22 = *(_QWORD *)v36;
    v23 = *(_DWORD *)(a1[5] + 8) & 0xB;
    if ( *(_QWORD *)v36 == v113 )
    {
      if ( v23 )
        goto LABEL_67;
      goto LABEL_62;
    }
    if ( v36[16] )
    {
      if ( v23 )
      {
        v30 = a4;
        v31 = nullptr;
        v29 = (__int64)(v36 + 8);
LABEL_36:
        v32 = sub_7776F0(a1, v22, v113, v29, v31, v30);
        v36[17] = v32;
        v33 = v32;
        v34 = 1;
        goto LABEL_37;
      }
LABEL_62:
      v27 = (__int64)(v36 + 8);
LABEL_34:
      v115.m128i_i64[0] = v27;
      v28 = sub_778A20((__int64)a1, (__int64 *)&v130, v27, 0);
      v22 = *(_QWORD *)v36;
      v29 = v115.m128i_i64[0];
      if ( v28 )
      {
        if ( (_QWORD)v131 )
        {
          if ( v113 != v22 )
          {
            v31 = (char *)v130;
            v30 = a4;
            goto LABEL_36;
          }
        }
        else
        {
          v30 = a4;
          v31 = (char *)haystack;
          if ( v113 != v22 )
            goto LABEL_36;
        }
      }
      else
      {
        v30 = a4;
        v31 = nullptr;
        if ( v113 != v22 )
          goto LABEL_36;
      }
LABEL_67:
      if ( (*(_BYTE *)(v11 + 168) & 4) != 0 && !v36[16] )
        goto LABEL_40;
      v50 = a4;
      if ( a4 == -1 )
      {
        if ( v36[16] )
        {
          v71 = *(_QWORD *)(v11 + 24);
          v72 = v71 + 9LL * *(_QWORD *)(v11 + 32);
          if ( v71 == v72 )
          {
            v50 = 0;
          }
          else
          {
            v73 = (_BYTE *)(v71 + 8);
            v74 = (_BYTE *)(v72 + 8);
            v50 = 0;
            do
            {
              if ( !*v73 )
                break;
              v73 += 9;
              ++v50;
            }
            while ( v73 != v74 );
          }
        }
        else
        {
          v50 = sub_774D60(v11, *((_QWORD *)v36 + 1));
        }
      }
      v51 = sub_779620(a1, v113, (__int64)(v36 + 8), v50, 0);
      v33 = v36[17];
      v34 = 1;
      a4 -= v51 < a4;
      goto LABEL_37;
    }
    if ( !v23 )
    {
      if ( (*(_BYTE *)(v11 + 168) & 4) != 0 )
      {
        v52 = *(_QWORD *)(v11 + 32);
        v53 = *(_QWORD *)(v11 + 24);
        v115.m128i_i32[2] = *(_DWORD *)(a1[5] + 8) & 0xB;
        v115.m128i_i64[0] = (__int64)v128;
        v54 = sub_773990(v53, v53 + 9 * v52, (__int64)(v36 + 8));
        v26 = (void *)v115.m128i_i64[0];
        v23 = v115.m128i_i32[2];
        if ( v55 != v54 && *(_QWORD *)v54 == *((_QWORD *)v36 + 1) && !*(_BYTE *)(v54 + 8) )
          goto LABEL_34;
      }
      else
      {
        v24 = *((_QWORD *)v36 + 1);
        v120 = v36 + 8;
        LODWORD(v118) = 0;
        v115.m128i_i64[1] = v17;
        v115.m128i_i64[0] = (__int64)v128;
        v25 = sub_773E60((_QWORD *)(v11 + 48), v24);
        v17 = v115.m128i_u64[1];
        v26 = (void *)v115.m128i_i64[0];
        v23 = (int)v118;
        v27 = (__int64)v120;
        if ( v25 )
          goto LABEL_34;
      }
    }
    v56 = a1[6] + 176 * v22;
    v57 = *(_QWORD *)(v56 + 24);
    v115.m128i_i64[0] = *(_QWORD *)(v56 + 32);
    v58 = v57 + 9 * v115.m128i_i64[0];
    if ( (*(_BYTE *)(v56 + 168) & 4) != 0 )
    {
      v115.m128i_i64[1] = v57 + 9 * v115.m128i_i64[0];
      LODWORD(v120) = v23;
      v118 = v26;
      v59 = sub_773990(v57, v58, (__int64)(v36 + 8));
      if ( v59 == v115.m128i_i64[1] )
        goto LABEL_77;
      v26 = v118;
      v23 = (int)v120;
      if ( *(_QWORD *)v59 != *((_QWORD *)v36 + 1) || *(_BYTE *)(v59 + 8) )
        goto LABEL_77;
    }
    else
    {
      if ( v57 == v58 )
        goto LABEL_77;
      v59 = v57;
      while ( *((_QWORD *)v36 + 1) != *(_QWORD *)v59 || *(_BYTE *)(v59 + 8) )
      {
        v59 += 9;
        if ( v59 == v58 )
          goto LABEL_77;
      }
      if ( v59 == v58 )
      {
LABEL_77:
        if ( !under_debugger )
          interr(3430);
        goto LABEL_181;
      }
    }
    v115.m128i_i64[1] = 0x8E38E38E38E38E39LL * (v59 - v57);
    if ( v115.m128i_i64[1] == -1 )
      goto LABEL_77;
    if ( a4 == -1 )
    {
      v61 = *((_QWORD *)v36 + 1);
      LODWORD(v122) = v23;
      v121 = v57;
      v120 = (char *)v17;
      v118 = v26;
      v62 = sub_774D60(v11, v61);
      v29 = (__int64)(v36 + 8);
      v30 = v62;
      v31 = nullptr;
      if ( v30 == -1 )
        goto LABEL_36;
      v26 = v118;
      v17 = (unsigned __int64)v120;
      v57 = v121;
      v23 = v122;
    }
    else
    {
      v30 = a4;
    }
    v63 = -1;
    if ( v30 < *(_QWORD *)(v11 + 32) )
      v63 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 9 * v30);
    if ( v20 + 1 >= v17 )
      goto LABEL_177;
    v64 = (__int64)v26 + 24 * v20 + 32;
    v118 = (void *)(v115.m128i_i64[1] - v21);
    v65 = 9 * (v115.m128i_i64[1] + v20 - v21) + v57;
    v66 = v20 + 1;
    v67 = v64;
    v68 = v63;
    v69 = v67;
    do
    {
      if ( *(_BYTE *)(v69 + 8) )
        break;
      if ( v22 != *(_QWORD *)(v69 - 8) )
        break;
      if ( *(_BYTE *)(v69 + 9) )
        break;
      if ( (unsigned __int64)v118 + v66 >= v115.m128i_i64[0] )
        break;
      v70 = *(_QWORD *)v69;
      if ( *(_QWORD *)v69 != *(_QWORD *)(v65 + 9)
        || *(_BYTE *)(v65 + 17)
        || (*(_BYTE *)(v11 + 168) & 4) != 0 && (*(_QWORD *)(v69 - 24) >= v70 || v70 >= v68) )
      {
        break;
      }
      if ( !v23 )
      {
        v126 = 0;
        v125 = v30;
        v124 = v17;
        v123 = v66;
        v122 = v65;
        v121 = v68;
        v120 = (char *)v69;
        v75 = sub_774C70(v11, v69);
        v69 = (__int64)v120;
        v68 = v121;
        v65 = v122;
        v66 = v123;
        v17 = v124;
        v30 = v125;
        v23 = v126;
        if ( v75 )
          break;
      }
      ++v66;
      v69 += 24;
      v65 += 9LL;
    }
    while ( v66 < v17 );
    if ( v66 - v20 == 1 )
    {
LABEL_177:
      v31 = nullptr;
      v29 = (__int64)(v36 + 8);
      goto LABEL_36;
    }
    v115.m128i_i64[0] = v66 - v20;
    sub_776A40(a1, v22, v113, v115.m128i_i64[1], v30, v66 - v20);
    v33 = v36[17];
    v34 = v115.m128i_i64[0];
LABEL_37:
    if ( v33 )
      goto LABEL_42;
    v114.m128i_i32[2] += v34;
    v20 = v21 + v34 - 1;
    v35 = a4 + v34;
    if ( a4 != -1 )
      a4 = v35;
LABEL_40:
    v17 = v129;
    v21 = ++v20;
  }
  while ( v20 < (unsigned __int64)v129 );
  ptr = nullptr;
  v133 = 0;
  if ( v114.m128i_i32[2] <= 0 )
    goto LABEL_133;
  v44 = a4;
  v134 = nullptr;
  v114.m128i_i64[1] = (__int64)&v134;
  *(_OWORD *)v135 = 0;
  if ( (_QWORD)v129 )
  {
    v134 = (char *)qvector_reserve(&v134, 0, v129, 24);
    v92 = v129;
    if ( v133.m128i_i64[1] < (unsigned __int64)v129 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v129, 16);
      v92 = v129;
    }
    v93 = (const __m128i *)((char *)v128 + 24 * v92);
    if ( v93 != v128 )
    {
      for ( i = (const __m128i *)((char *)v128 + 8); ; i = (const __m128i *)((char *)i + 24) )
      {
        if ( !i->m128i_i8[9] )
        {
          v95 = v135[0];
          v96 = _mm_loadl_epi64((const __m128i *)((char *)i - 8));
          v97 = _mm_loadl_epi64(i);
          v98 = i->m128i_i8[8];
          v99 = i->m128i_i32[3];
          v100 = v134;
          if ( v135[1] < (char *)v135[0] + 1 )
          {
            LODWORD(v118) = i->m128i_i32[3];
            v115.m128i_i8[8] = v98;
            v115.m128i_i64[0] = v97.m128i_i64[0];
            v114.m128i_i64[0] = v96.m128i_i64[0];
            v134 = (char *)qvector_reserve(v114.m128i_i64[1], v134, (char *)v135[0] + 1, 24);
            v100 = v134;
            v99 = (int)v118;
            v95 = v135[0];
            v98 = v115.m128i_i8[8];
            v97 = _mm_loadl_epi64(&v115);
            v96 = _mm_loadl_epi64(&v114);
          }
          v101 = (__m128i *)&v100[24 * (_QWORD)v95];
          v101[1].m128i_i8[0] = v98;
          v101[1].m128i_i8[1] = 0;
          v101[1].m128i_i32[1] = v99;
          *v101 = _mm_unpacklo_epi64(v96, v97);
          v102 = v133.m128i_i64[0];
          v103 = (char *)ptr;
          ++v135[0];
          if ( v133.m128i_i64[1] < (unsigned __int64)(v133.m128i_i64[0] + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v133.m128i_i64[0] + 1, 16);
            v102 = v133.m128i_i64[0];
            v103 = (char *)ptr;
          }
          v104 = &v103[16 * v102];
          *(_OWORD *)v104 = -1;
          ++v133.m128i_i64[0];
          *(_QWORD *)v104 = v113;
          if ( v44 < *(_QWORD *)(v11 + 32)
            && (v105 = *(_QWORD *)(v11 + 24) + 9 * v44, *(_QWORD *)v105 == i->m128i_i64[0])
            && *(_BYTE *)(v105 + 8) == i->m128i_i8[8] )
          {
            *((_QWORD *)v104 + 1) = v44;
          }
          else
          {
            if ( v113 >= a1[7] )
              goto LABEL_161;
            v106 = a1[6] + v116;
            v107 = *(_QWORD *)(v106 + 32);
            v108 = *(_QWORD *)(v106 + 24);
            v109 = v108 + 9 * v107;
            if ( (*(_BYTE *)(v106 + 168) & 4) != 0 )
            {
              if ( i->m128i_i8[8] )
              {
                if ( v107 )
                {
                  v110 = *(_QWORD *)(v106 + 24);
                  do
                  {
                    if ( !*(_BYTE *)(v110 + 8) )
                      break;
                    if ( *(_QWORD *)v110 == i->m128i_i64[0] )
                      goto LABEL_153;
                    v110 += 9;
                  }
                  while ( v110 != v109 );
                }
LABEL_161:
                *((_QWORD *)v104 + 1) = -1;
LABEL_162:
                if ( !under_debugger )
                  interr(3431);
LABEL_181:
                BUG();
              }
              v111 = *(_QWORD *)(v106 + 24);
              v114.m128i_i64[0] = v108 + 9 * v107;
              v110 = sub_773990(v111, v114.m128i_i64[0], (__int64)i);
              if ( v110 == v114.m128i_i64[0] || *(_QWORD *)v110 != i->m128i_i64[0] || *(_BYTE *)(v110 + 8) )
                goto LABEL_161;
            }
            else
            {
              if ( v108 == v109 )
                goto LABEL_161;
              v110 = *(_QWORD *)(v106 + 24);
              while ( i->m128i_i64[0] != *(_QWORD *)v110 || i->m128i_i8[8] != *(_BYTE *)(v110 + 8) )
              {
                v110 += 9;
                if ( v110 == v109 )
                  goto LABEL_161;
              }
LABEL_153:
              if ( v110 == v109 )
                goto LABEL_161;
            }
            v44 = 0x8E38E38E38E38E39LL * (v110 - v108);
            *((_QWORD *)v104 + 1) = v44;
            if ( v44 == -1 )
              goto LABEL_162;
          }
          ++v44;
        }
        if ( v93 == &i[1] )
          break;
      }
    }
  }
  sub_39ADA0(0x5Bu, a1[4], v114.m128i_i64[1], &ptr, v117, a4);
  sub_774BB0((__int64)a1, 91, v114.m128i_i64[1], &ptr, v117, a4);
  if ( v134 )
  {
    v135[0] = nullptr;
    qfree(v134);
  }
  v45 = ptr;
  if ( v119 )
  {
LABEL_51:
    v46 = v119;
    v47 = _mm_loadu_si128(&v133);
    v45 = *(void **)v119;
    v48 = *(_QWORD *)(v119 + 16);
    *(_QWORD *)v119 = ptr;
    *(__m128i *)(v46 + 8) = v47;
    ptr = v45;
    v133.m128i_i64[1] = v48;
  }
  if ( v45 )
  {
    v133.m128i_i64[0] = 0;
    qfree(v45);
  }
LABEL_54:
  if ( v130 )
  {
    *(_QWORD *)&v131 = 0;
    qfree(v130);
  }
  v9 = 0;
LABEL_57:
  if ( v128 )
  {
    *(_QWORD *)&v129 = 0;
    qfree(v128);
  }
  return v9;
}
