__int64 __fastcall sub_365D00(
        __int64 a1,
        double a2,
        __m128 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __m128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  const char *v13; // rsi
  const char *v14; // rdx
  __int64 v15; // rcx
  __m128 v16; // xmm2
  const char *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rax
  char *v23; // rdx
  const char *v24; // rdx
  __int64 *v25; // rdi
  const char *v26; // rax
  const char *v27; // r9
  const char *v28; // r8
  const char *v29; // rcx
  const char *v30; // rdx
  int v31; // eax
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 *v34; // rdx
  __int64 v35; // rax
  __int64 *v36; // r14
  char *v37; // r13
  size_t v38; // rax
  size_t v39; // r15
  void *v40; // rdi
  size_t v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  __int64 *v50; // r14
  __int64 v51; // rax
  __int64 v52; // r15
  __int64 v53; // r13
  unsigned __int64 v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 *v57; // rdx
  __int64 v58; // rax
  __int64 *v60; // r15
  unsigned __int64 v61; // r8
  __int64 v62; // r13
  __int64 v63; // r10
  unsigned __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 *v66; // r14
  char *v67; // rdx
  int v68; // eax
  unsigned __int64 v69; // rsi
  size_t v70; // rax
  __int64 v71; // r8
  size_t v72; // r10
  size_t v73; // r11
  __int64 v74; // rsi
  __int64 v75; // rdx
  __int64 *v76; // r14
  __int64 v77; // r13
  __int64 *v78; // r15
  __int64 v79; // r9
  unsigned __int64 v80; // rdx
  __int64 v81; // rsi
  __int64 v82; // r13
  unsigned __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  const char *v87; // rsi
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __m128i v92; // xmm0
  __int64 v93; // r15
  __int64 v94; // rax
  size_t v95; // [rsp+0h] [rbp-580h]
  __int64 v96; // [rsp+8h] [rbp-578h]
  __int64 v97; // [rsp+8h] [rbp-578h]
  unsigned __int64 v98; // [rsp+10h] [rbp-570h]
  __int64 v99; // [rsp+10h] [rbp-570h]
  size_t v100; // [rsp+10h] [rbp-570h]
  unsigned __int64 v101; // [rsp+18h] [rbp-568h]
  unsigned __int64 v102; // [rsp+18h] [rbp-568h]
  size_t v103; // [rsp+18h] [rbp-568h]
  __int64 v104; // [rsp+18h] [rbp-568h]
  unsigned __int64 v105; // [rsp+18h] [rbp-568h]
  unsigned __int64 v106; // [rsp+18h] [rbp-568h]
  unsigned __int64 v107; // [rsp+20h] [rbp-560h] BYREF
  unsigned __int64 *v108; // [rsp+28h] [rbp-558h] BYREF
  const char *v109; // [rsp+30h] [rbp-550h] BYREF
  __int128 v110; // [rsp+38h] [rbp-548h]
  __int64 *v111; // [rsp+50h] [rbp-530h] BYREF
  __int128 v112; // [rsp+58h] [rbp-528h]
  char *s; // [rsp+70h] [rbp-510h] BYREF
  __int128 v114; // [rsp+78h] [rbp-508h]
  const char *v115; // [rsp+90h] [rbp-4F0h] BYREF
  __int128 v116; // [rsp+98h] [rbp-4E8h]
  int v117; // [rsp+B0h] [rbp-4D0h] BYREF
  __int128 v118; // [rsp+B8h] [rbp-4C8h]
  __int64 v119; // [rsp+C8h] [rbp-4B8h]
  __int64 v120; // [rsp+D0h] [rbp-4B0h]
  __int128 v121; // [rsp+D8h] [rbp-4A8h]
  __m128i si128; // [rsp+E8h] [rbp-498h] BYREF
  int v123; // [rsp+F8h] [rbp-488h]
  char v124; // [rsp+100h] [rbp-480h]
  __int64 v125; // [rsp+108h] [rbp-478h]
  int v126; // [rsp+110h] [rbp-470h]
  __int64 v127; // [rsp+118h] [rbp-468h]
  __int128 v128; // [rsp+120h] [rbp-460h]
  __int64 v129; // [rsp+130h] [rbp-450h]
  char v130; // [rsp+138h] [rbp-448h]
  char src[1032]; // [rsp+140h] [rbp-440h] BYREF
  unsigned __int64 v132; // [rsp+548h] [rbp-38h]

  v9 = 0;
  v132 = __readfsqword(0x28u);
  v110 = 0;
  v109 = nullptr;
  v12 = sub_17D870(a1);
  if ( v12 )
  {
    sub_1F3900(v12, (const char *)&v109, v10, v11, 0.0);
    v13 = &s1;
    if ( (_QWORD)v110 )
      v13 = v109;
    if ( (unsigned __int8)atob64(&v115, v13) )
    {
      sub_169A50((__int64 *)&v109, (__int64)"0x%llX", v115);
      goto LABEL_8;
    }
    v14 = &s1;
    if ( (_QWORD)v110 )
      v14 = v109;
    if ( !(unsigned __int8)eval_expr(0, xmmword_8CC810, v14, 0) )
    {
      v121 = 0;
      v87 = (const char *)&v117;
      v117 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC360);
      v9 = 0;
      *(_QWORD *)&v118 = 0;
      *((_QWORD *)&v118 + 1) = -1;
      LODWORD(v119) = -1;
      v120 = 0;
      v123 = -1;
      v124 = 0;
      v125 = -1;
      v126 = -2;
      v127 = -1;
      v129 = 0xFFFFFFFFLL;
      v130 = 0;
      v128 = 0;
      if ( (unsigned int)sub_1ED900(v12, (__int128 *)&v117, 2, v15, 0.0) == 4 )
      {
        v88 = v126;
        if ( !v130 || v126 != -2 )
        {
LABEL_105:
          if ( v88 >= -1 && v127 )
          {
            *(_QWORD *)&v128 = 0;
            *(double *)v9.m128_u64 = qfree(v127, v87);
          }
          goto LABEL_108;
        }
        if ( v127 == -1 )
        {
LABEL_108:
          clear_tinfo_t(&si128.m128i_u64[1]);
          if ( v120 )
          {
            *(_QWORD *)&v121 = 0;
            *(double *)v9.m128_u64 = qfree(v120, v87, *(double *)v9.m128_u64);
          }
          goto LABEL_8;
        }
      }
      else if ( si128.m128i_i64[0] == -1 && v125 == -1 )
      {
        goto LABEL_104;
      }
      v87 = "0x%08a";
      sub_169A50((__int64 *)&v109, (__int64)"0x%08a", 0.0);
LABEL_104:
      v88 = v126;
      goto LABEL_105;
    }
  }
  while ( 1 )
  {
LABEL_8:
    v16 = 0;
    v17 = nullptr;
    v112 = 0;
    v111 = nullptr;
    v18 = (__int64 *)qvector_reserve(&v111, 0, 5, 24);
    v19 = v112;
    v111 = v18;
    if ( (unsigned __int64)v112 <= 4 )
    {
      v16 = 0;
      v20 = 24 * v112;
      v21 = &v18[3 * v112];
      *v21 = 0;
      *(_OWORD *)(v21 + 1) = 0;
      if ( v19 != 4 )
      {
        v22 = v20 + 24;
        do
        {
          a3 = 0;
          v23 = (char *)v111 + v22;
          v22 += 24;
          *(_QWORD *)v23 = 0;
          *(_OWORD *)(v23 + 8) = 0;
        }
        while ( v22 != 120 );
      }
    }
    *(_QWORD *)&v112 = 5;
    if ( (_QWORD)v110 )
    {
      v24 = v109;
      if ( !*v109 )
        goto LABEL_14;
      LOBYTE(v117) = 2;
      v119 = 0;
      v118 = 0;
    }
    else
    {
      if ( !byte_8CBC80 )
        goto LABEL_14;
      LOBYTE(v117) = 2;
      v24 = &s1;
      v119 = 0;
      v118 = 0;
    }
    v114 = 0;
    s = nullptr;
    v17 = (const char *)xmmword_8CC810;
    if ( (unsigned __int8)eval_expr(&v117, xmmword_8CC810, v24, &s) )
    {
      v116 = 0;
      v115 = nullptr;
      print_idcv(&v115, &v117, 0, 0);
      v17 = &s1;
      if ( (_QWORD)v116 )
        v17 = v115;
      sub_169700(
        (int)"%s\n",
        (__int64)v17,
        v42,
        v43,
        v44,
        v45,
        v9,
        a3,
        v16,
        (__m128)0LL,
        v46,
        v47,
        (__m128)0LL,
        a9,
        v95);
      if ( (_BYTE)v117 == 7 )
        goto LABEL_93;
      if ( (char)v117 > 7 )
      {
        v49 = v118;
        if ( (_BYTE)v117 != 9 )
        {
LABEL_92:
          if ( (unsigned int)idcv_string(&v117, v17, v48, v49) )
          {
LABEL_89:
            if ( v115 )
            {
              *(_QWORD *)&v116 = 0;
              *(double *)v9.m128_u64 = qfree(v115, v17);
            }
            goto LABEL_43;
          }
LABEL_93:
          v84 = 0;
          v17 = &s1;
          if ( *((_QWORD *)&v118 + 1) )
          {
            v17 = (const char *)v118;
            v84 = (unsigned int)(DWORD2(v118) - 1);
          }
          qstr2user(v111, v17, v84);
          goto LABEL_89;
        }
      }
      else
      {
        if ( (_BYTE)v117 != 2 )
        {
          if ( (_BYTE)v117 == 5 )
          {
            v50 = v111;
            v17 = (const char *)&v117;
            print_idcv(v111, &v117, 0, 0);
            if ( (unsigned __int64)v50[1] > 0xC9 )
            {
              v51 = *v50;
              v50[1] = 201;
              *(_BYTE *)(v51 + 200) = 0;
              v52 = v50[1];
              if ( v52 )
              {
                v53 = v52 + 34;
                v54 = v52 + 35;
                --v52;
              }
              else
              {
                v54 = 36;
                v53 = 35;
              }
              v17 = (const char *)*v50;
              if ( v50[2] < v54 )
              {
                v106 = v54;
                v94 = qvector_reserve(v50, v17, v54, 1);
                *v50 = v94;
                v54 = v106;
                v17 = (const char *)v94;
              }
              v92 = _mm_load_si128((const __m128i *)&xmmword_5DD160);
              v50[1] = v54;
              v17[v53] = 0;
              v93 = *v50 + v52;
              *(__m128i *)v93 = v92;
              v9 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD170);
              *(__m128 *)(v93 + 16) = v9;
              *(_DWORD *)(v93 + 31) = 695693156;
            }
            goto LABEL_89;
          }
          goto LABEL_92;
        }
        v49 = v118;
      }
      v107 = v49;
      sub_34BDE0(v111, "Hex: ", 0x10u, v49);
      sub_34BDE0(v111 + 3, "Decimal: ", 0xAu, v107);
      sub_34BDE0(v111 + 6, "Octal: ", 8u, v107);
      v60 = v111;
      v61 = v107;
      v62 = v111[10];
      if ( v62 )
      {
        v63 = v62 + 7;
        v64 = v62 + 8;
        v65 = v111[9];
        --v62;
        v66 = v111 + 9;
        if ( v111[11] >= v64 )
        {
LABEL_69:
          v60[10] = v64;
          *(_BYTE *)(v65 + v63) = 0;
          *(_QWORD *)(v62 + v60[9]) = 0x203A7972616E6942LL;
          v67 = src;
          v68 = 0;
          v69 = 0x8000000000000000LL;
          do
          {
            *v67 = 48 - (((v69 & v61) == 0) - 1);
            if ( (~(_BYTE)v68 & 3) != 0 )
            {
              ++v67;
            }
            else
            {
              v67[1] = 32;
              v67 += 2;
            }
            if ( (~(_BYTE)v68 & 7) == 0 )
              *v67++ = 32;
            if ( (~(_BYTE)v68 & 0xF) == 0 )
              *v67++ = 32;
            ++v68;
            v69 >>= 1;
          }
          while ( v68 != 64 );
          *(v67 - 1) = 0;
          v70 = strlen(src);
          v71 = v60[10];
          v72 = v70;
          v73 = v70;
          if ( v71 )
          {
            --v71;
            v73 = v70 + v71;
          }
          v74 = v60[9];
          v75 = v73 + 1;
          if ( v60[11] < v73 + 1 )
          {
            v95 = v70;
            v97 = v71;
            v100 = v73;
            v104 = v73 + 1;
            v90 = qvector_reserve(v66, v74, v75, 1);
            v60[9] = v90;
            v72 = v95;
            v74 = v90;
            v71 = v97;
            v73 = v100;
            v75 = v104;
          }
          v60[10] = v75;
          *(_BYTE *)(v74 + v73) = 0;
          memmove((void *)(v71 + v60[9]), src, v72);
          v76 = v111;
          v77 = v111[13];
          v78 = v111 + 12;
          if ( v77 )
          {
            v79 = v77 + 11;
            v80 = v77 + 12;
            v81 = v111[12];
            --v77;
            if ( v111[14] >= v80 )
            {
LABEL_84:
              v76[13] = v80;
              *(_BYTE *)(v81 + v79) = 0;
              qmemcpy((void *)(v77 + v76[12]), "Character: '", 12);
              v108 = &v107;
              format_charlit(v78, &v108, 8, 7, 0);
              v82 = v76[13];
              v83 = 2;
              if ( v82 )
                v83 = v82-- + 1;
              v17 = (const char *)v76[12];
              if ( v76[14] < v83 )
              {
                v105 = v83;
                v91 = qvector_reserve(v78, v17, v83, 1);
                v76[12] = v91;
                v83 = v105;
                v17 = (const char *)v91;
              }
              v76[13] = v83;
              v17[v82] = 39;
              *(_BYTE *)(v76[12] + v82 + 1) = 0;
              goto LABEL_89;
            }
          }
          else
          {
            v81 = v111[12];
            v80 = 13;
            v79 = 12;
            if ( (unsigned __int64)v111[14] >= 0xD )
              goto LABEL_84;
          }
          v99 = v79;
          v102 = v80;
          v86 = qvector_reserve(v111 + 12, v81, v80, 1);
          v76[12] = v86;
          v79 = v99;
          v81 = v86;
          v80 = v102;
          goto LABEL_84;
        }
      }
      else
      {
        v65 = v111[9];
        v64 = 9;
        v63 = 8;
        v66 = v111 + 9;
        if ( (unsigned __int64)v111[11] >= 9 )
          goto LABEL_69;
      }
      v96 = v63;
      v98 = v107;
      v101 = v64;
      v85 = qvector_reserve(v66, v65, v64, 1);
      v60[9] = v85;
      v63 = v96;
      v65 = v85;
      v61 = v98;
      v64 = v101;
      goto LABEL_69;
    }
    v36 = v111;
    if ( (_QWORD)v114 && (v37 = s) != nullptr && (v38 = strlen(s), (v39 = v38) != 0) )
    {
      v40 = (void *)*v36;
      v41 = v38 + 1;
      if ( v36[2] < v38 + 1 )
      {
        v103 = v38 + 1;
        v89 = qvector_reserve(v36, *v36, v41, 1);
        *v36 = v89;
        v41 = v103;
        v40 = (void *)v89;
      }
      v36[1] = v41;
      v17 = v37;
      memmove(v40, v37, v39);
      *(_BYTE *)(*v36 + v39) = 0;
    }
    else
    {
      v36[1] = 0;
    }
LABEL_43:
    sub_1F9CB0();
    nullsub_70();
    if ( s )
    {
      *(_QWORD *)&v114 = 0;
      *(double *)v9.m128_u64 = qfree(s, v17);
    }
    free_idcv(&v117);
LABEL_14:
    v25 = v111;
    if ( batch )
      break;
    v26 = &s1;
    if ( v111[13] )
      v26 = (const char *)v111[12];
    v27 = &s1;
    if ( v111[10] )
      v27 = (const char *)v111[9];
    v28 = &s1;
    if ( v111[7] )
      v28 = (const char *)v111[6];
    v29 = &s1;
    if ( v111[4] )
      v29 = (const char *)v111[3];
    v30 = &s1;
    if ( v111[1] )
      v30 = (const char *)*v111;
    v17 = (const char *)&v109;
    v31 = sub_507F10(1063, (unsigned int)&v109, (_DWORD)v30, (_DWORD)v29, (_DWORD)v28, (_DWORD)v27, v26);
    v25 = v111;
    if ( !v31 )
      break;
    if ( v111 )
    {
      v32 = v112;
      if ( (_QWORD)v112 )
      {
        v33 = 0;
        do
        {
          v34 = &v25[3 * v33];
          v35 = *v34;
          if ( *v34 )
          {
            v34[1] = 0;
            qfree(v35, (const char *)&v109);
            v25 = v111;
          }
          ++v33;
        }
        while ( v32 != v33 );
      }
      *(_QWORD *)&v112 = 0;
      *(double *)v9.m128_u64 = qfree(v25, (const char *)&v109);
    }
  }
  if ( v25 )
  {
    v55 = v112;
    if ( (_QWORD)v112 )
    {
      v56 = 0;
      do
      {
        v57 = &v25[3 * v56];
        v58 = *v57;
        if ( *v57 )
        {
          v57[1] = 0;
          qfree(v58, v17);
          v25 = v111;
        }
        ++v56;
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v112 = 0;
    qfree(v25, v17);
  }
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree(v109, v17);
  }
  return 1;
}
