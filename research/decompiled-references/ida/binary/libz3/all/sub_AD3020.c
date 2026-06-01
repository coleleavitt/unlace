__int64 __fastcall sub_AD3020(__int64 a1)
{
  __m128i *v1; // rax
  __int64 *v2; // r15
  unsigned int v3; // r12d
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // r14
  __int64 v15; // rbx
  unsigned int v16; // r13d
  __m128i *v17; // rdi
  __int64 v18; // r11
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rax
  __m128i *v22; // rsi
  __m128i *i; // rax
  __int64 v24; // rdx
  __int64 v25; // r15
  int v26; // eax
  int v27; // r8d
  int v28; // r9d
  __int64 v29; // rax
  __m128i *v30; // r15
  unsigned int v31; // edx
  unsigned __int64 v32; // r9
  size_t v33; // r11
  __m128i *v34; // r10
  int v35; // ecx
  __m128i *v36; // rdx
  __m128i *v37; // rsi
  __m128i v38; // xmm0
  __int64 v39; // r13
  __m128i *v40; // rdi
  __m128i *v41; // rax
  __m128i *v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 result; // rax
  __int64 v46; // rdx
  unsigned __int64 *v47; // rax
  unsigned __int64 *v48; // rdx
  unsigned __int64 *v49; // rcx
  int v50; // eax
  __int64 v51; // rcx
  __m128i *v52; // rbx
  __m128i *v53; // rdx
  int v54; // esi
  __m128i v55; // xmm0
  __int64 v56; // rax
  bool v57; // zf
  __m128i *v58; // rdi
  __m128i *v59; // rcx
  __m128i *v60; // rax
  __m128i *v61; // r8
  __int64 v62; // rdx
  __m128i *v63; // rbx
  __int64 v64; // rdx
  __m128i *v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // r8d
  __m128i *v70; // r9
  __m128i *v71; // rsi
  const __m128i *v72; // r10
  const __m128i *v73; // r12
  __int64 v74; // rdx
  __m128i *v75; // rsi
  __m128i *v76; // rdi
  __m128i *v77; // rdx
  __m128i v78; // xmm0
  unsigned int v79; // r14d
  unsigned int v80; // edx
  unsigned int *v81; // rax
  __int64 v82; // rdx
  __m128i *v83; // rax
  __m128i *v84; // r8
  __m128i *v85; // rcx
  __m128i *v86; // rdi
  const __m128i *v87; // rax
  __int64 v88; // rdx
  __m128i *v89; // rsi
  __m128i *v90; // rdx
  __m128i v91; // xmm0
  __m128i *v92; // rdx
  _QWORD *v93; // rax
  unsigned __int64 v94; // r13
  __int64 v95; // rax
  char **exception; // r13
  int v97; // [rsp-8h] [rbp-C8h]
  int v98; // [rsp+0h] [rbp-C0h]
  int v99; // [rsp+0h] [rbp-C0h]
  int v100; // [rsp+8h] [rbp-B8h]
  int v101; // [rsp+8h] [rbp-B8h]
  int v102; // [rsp+10h] [rbp-B0h]
  int v103; // [rsp+10h] [rbp-B0h]
  const __m128i *v104; // [rsp+10h] [rbp-B0h]
  __m128i *v105; // [rsp+10h] [rbp-B0h]
  int v106; // [rsp+18h] [rbp-A8h]
  size_t v107; // [rsp+18h] [rbp-A8h]
  int v108; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v109; // [rsp+18h] [rbp-A8h]
  __m128i *v110; // [rsp+18h] [rbp-A8h]
  int v111; // [rsp+20h] [rbp-A0h]
  int v112; // [rsp+20h] [rbp-A0h]
  int v113[2]; // [rsp+20h] [rbp-A0h]
  int v114[2]; // [rsp+20h] [rbp-A0h]
  unsigned int v115; // [rsp+20h] [rbp-A0h]
  int v116[2]; // [rsp+20h] [rbp-A0h]
  int *v117; // [rsp+28h] [rbp-98h]
  char v118; // [rsp+28h] [rbp-98h]
  int v119; // [rsp+28h] [rbp-98h]
  __int64 *v120; // [rsp+30h] [rbp-90h]
  _QWORD *v121; // [rsp+30h] [rbp-90h]
  int v122; // [rsp+30h] [rbp-90h]
  int v123; // [rsp+38h] [rbp-88h]
  int v124; // [rsp+38h] [rbp-88h]
  int v125; // [rsp+3Ch] [rbp-84h]
  int v126; // [rsp+3Ch] [rbp-84h]
  int v127; // [rsp+40h] [rbp-80h]
  int v128; // [rsp+40h] [rbp-80h]
  size_t v129; // [rsp+40h] [rbp-80h]
  __m128i *v130; // [rsp+40h] [rbp-80h]
  size_t v131; // [rsp+40h] [rbp-80h]
  unsigned __int64 v132; // [rsp+40h] [rbp-80h]
  __int64 v133; // [rsp+48h] [rbp-78h]
  void *v134; // [rsp+48h] [rbp-78h]
  _QWORD *v135; // [rsp+50h] [rbp-70h]
  __m128i *ptr; // [rsp+58h] [rbp-68h]
  __m128i *ptra; // [rsp+58h] [rbp-68h]
  __int64 v138; // [rsp+60h] [rbp-60h] BYREF
  int v139; // [rsp+68h] [rbp-58h] BYREF
  __int64 v140; // [rsp+70h] [rbp-50h] BYREF
  __int64 v141; // [rsp+78h] [rbp-48h] BYREF
  int v142; // [rsp+80h] [rbp-40h]
  int v143; // [rsp+88h] [rbp-38h]
  int v144; // [rsp+90h] [rbp-30h]
  int v145; // [rsp+98h] [rbp-28h]
  int v146; // [rsp+A0h] [rbp-20h]
  void *v147; // [rsp+A8h] [rbp-18h]
  int v148; // [rsp+B0h] [rbp-10h]
  __int64 v149; // [rsp+B8h] [rbp-8h]

  v133 = a1;
  v1 = (__m128i *)sub_186B270(0x80u);
  v2 = *(__int64 **)(a1 + 264);
  ptr = v1;
  *v1 = 0;
  v1[1] = 0;
  v1[2] = 0;
  v1[3] = 0;
  v1[4] = 0;
  v1[5] = 0;
  v1[6] = 0;
  v1[7] = 0;
  if ( v2 )
  {
    v120 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 != v120 )
    {
      v135 = nullptr;
      v3 = 8;
      v127 = 0;
      v125 = 0;
      while ( 1 )
      {
        v4 = *v2;
        v5 = *v2;
        do
        {
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 8);
        }
        while ( v5 );
        v7 = *(_QWORD *)(v6 + 56);
        v8 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v7 + 20) )
          break;
        if ( (unsigned __int8)sub_15D3340(*(_QWORD *)(v133 + 8), v8) )
        {
          v65 = (__m128i *)(*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v133 + 192) + 40LL))(
                             *(_QWORD *)(v133 + 192),
                             v8);
          do
          {
            v66 = v4;
            v4 = *(_QWORD *)(v4 + 8);
          }
          while ( v4 );
          sub_AC8A00(*(_QWORD *)(v66 + 56), v65);
        }
        else
        {
          if ( v135 )
          {
            v9 = *((_DWORD *)v135 - 1);
            if ( v9 == *((_DWORD *)v135 - 2) )
            {
              v79 = (3 * v9 + 1) >> 1;
              v80 = 8 * v79 + 8;
              if ( 8 * v9 + 8 >= v80 || v9 >= v79 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v140, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v140);
                sub_233E40((__int64)&v140);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v81 = (unsigned int *)sub_186B300(v135 - 1, v80);
              v82 = v81[1];
              v11 = v81 + 2;
              *v81 = v79;
              v135 = v11;
              LODWORD(v81) = v82;
              v13 = &v11[v82];
              v12 = (_DWORD)v81 + 1;
            }
            else
            {
              v10 = v9;
              v11 = v135;
              v12 = v9 + 1;
              v13 = &v135[v10];
            }
          }
          else
          {
            v93 = (_QWORD *)sub_186B270(0x18u);
            *v93 = 2;
            v135 = v93 + 1;
            v13 = v93 + 1;
            v11 = v93 + 1;
            v12 = 1;
          }
          *v13 = v4;
          *((_DWORD *)v11 - 1) = v12;
        }
LABEL_12:
        if ( v120 == ++v2 )
        {
          v141 = 0;
          v140 = *(_QWORD *)(v133 + 8);
          if ( !v135 )
          {
            result = sub_2334C0(&v140);
LABEL_45:
            if ( !ptr )
              return result;
            return sub_186B220(ptr);
          }
          v117 = &v139;
          v14 = v135;
          v121 = &v135[*((unsigned int *)v135 - 1)];
          if ( v135 == v121 )
            goto LABEL_44;
          while ( 2 )
          {
            v15 = *v14;
            v16 = v3 - 1;
            v17 = ptr;
            v18 = 16LL * v3;
            v19 = *(_QWORD *)(*v14 + 24LL);
            v20 = *(_DWORD *)(v19 + 12);
            v21 = 16LL * ((v3 - 1) & v20);
            v22 = &ptr[(unsigned __int64)v21 / 0x10];
            if ( v21 != v18 )
            {
              for ( i = &ptr[(unsigned __int64)v21 / 0x10]; &ptr[(unsigned __int64)v18 / 0x10] != i; ++i )
              {
                v24 = i->m128i_i64[0];
                if ( i->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v24 + 12) == v20 && v19 == v24 )
                  {
LABEL_84:
                    v30 = (__m128i *)i->m128i_i64[1];
                    goto LABEL_85;
                  }
                }
                else if ( !v24 )
                {
                  goto LABEL_22;
                }
              }
            }
            if ( v22 != ptr )
            {
              for ( i = ptr; v22 != i; ++i )
              {
                v46 = i->m128i_i64[0];
                if ( i->m128i_i64[0] > 1uLL )
                {
                  if ( *(_DWORD *)(v46 + 12) == v20 && v19 == v46 )
                    goto LABEL_84;
                }
                else if ( !v46 )
                {
                  break;
                }
              }
            }
LABEL_22:
            v102 = (_DWORD)ptr + v18;
            v111 = *(_QWORD *)(*v14 + 24LL);
            v25 = *(_QWORD *)(v133 + 8);
            sub_180C5A0(v117, "elem");
            v26 = sub_15E3D10(
                    v25,
                    (int)v117,
                    (int)&qword_18D6CD0,
                    0,
                    0,
                    v111,
                    1,
                    v97,
                    v98,
                    v100,
                    v102,
                    16 * v3,
                    v111,
                    (int)v117,
                    (char)v121,
                    v123,
                    v127,
                    v133,
                    (int)v135,
                    (int)ptr,
                    v138,
                    v139,
                    v140,
                    v141,
                    v142,
                    v143,
                    v144,
                    v145,
                    v146,
                    v147,
                    v148,
                    v149);
            v29 = sub_15DC610(v25, v26, 0, 0, v27, v28, v99, v101, v103, v106, v112, v118, v122, v124, v128, v134);
            v138 = v29;
            v30 = (__m128i *)v29;
            if ( v29 )
              ++*(_DWORD *)(v29 + 8);
            sub_AC8490(&v141, &v138);
            v31 = 2 * v3;
            v32 = *(_QWORD *)v113;
            v33 = v107;
            v34 = (__m128i *)v104;
            if ( 3 * v3 >= 4 * (v126 + v127) )
              goto LABEL_25;
            v109 = *(_QWORD *)v113;
            v3 *= 2;
            v115 = v31;
            v131 = 16LL * v31;
            v83 = (__m128i *)sub_186B270(v131);
            v33 = v131;
            v84 = v83;
            v32 = v109;
            v85 = &v83[v131 / 0x10];
            if ( v115 )
            {
              if ( (v131 & 0x10) == 0 )
              {
                v86 = ptra;
                goto LABEL_121;
              }
              *v83++ = 0;
              v86 = ptra;
              if ( v85 != v83 )
              {
                do
                {
LABEL_121:
                  *v83 = 0;
                  v83 += 2;
                  v83[-1] = 0;
                }
                while ( v85 != v83 );
                ptra = v86;
              }
            }
            v16 = v115 - 1;
            v87 = ptra;
            if ( v104 == ptra )
            {
LABEL_132:
              if ( ptra )
              {
                v105 = v85;
                v110 = v84;
                *(_QWORD *)v116 = v131;
                v132 = v32;
                sub_186B220(ptra);
                v85 = v105;
                v84 = v110;
                v33 = *(_QWORD *)v116;
                v32 = v132;
              }
              ptra = v84;
              v34 = v85;
              v127 = 0;
LABEL_25:
              v35 = *(_DWORD *)(v32 + 12);
              v36 = ptra;
              v37 = nullptr;
              v38 = _mm_unpacklo_epi64((__m128i)v32, (__m128i)(unsigned __int64)v30);
              v39 = 16LL * (v35 & v16);
              v40 = &ptra[(unsigned __int64)v39 / 0x10];
              if ( v39 == v33 )
                goto LABEL_34;
              v41 = &ptra[(unsigned __int64)v39 / 0x10];
              v42 = ptra;
              while ( 1 )
              {
                while ( 1 )
                {
                  v43 = v41->m128i_i64[0];
                  if ( v41->m128i_i64[0] <= 1uLL )
                    break;
                  if ( *(_DWORD *)(v43 + 12) == v35 && v32 == v43 )
                  {
LABEL_146:
                    *v41 = v38;
                    v17 = v42;
                    goto LABEL_85;
                  }
                  if ( ++v41 == v34 )
                    goto LABEL_33;
                }
                if ( !v43 )
                  break;
                v37 = v41++;
                if ( v41 == v34 )
                {
LABEL_33:
                  v36 = ptra;
LABEL_34:
                  if ( v40 != v36 )
                  {
                    v41 = v36;
                    v42 = v36;
                    do
                    {
                      while ( 1 )
                      {
                        v44 = v41->m128i_i64[0];
                        if ( v41->m128i_i64[0] <= 1uLL )
                          break;
                        if ( *(_DWORD *)(v44 + 12) == v35 && v32 == v44 )
                          goto LABEL_146;
                        if ( v40 == ++v41 )
                          goto LABEL_42;
                      }
                      if ( !v44 )
                        goto LABEL_109;
                      v37 = v41++;
                    }
                    while ( v40 != v41 );
                  }
LABEL_42:
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
              }
LABEL_109:
              if ( v37 )
                --v127;
              else
                v37 = v41;
              *v37 = v38;
              v17 = v42;
              do
              {
LABEL_85:
                v67 = v15;
                v15 = *(_QWORD *)(v15 + 8);
              }
              while ( v15 );
              ptr = v17;
              sub_AC8A00(*(_QWORD *)(v67 + 56), v30);
              if ( v121 != ++v14 )
                continue;
LABEL_44:
              sub_2334C0(&v140);
              result = sub_186B220(v135 - 1);
              goto LABEL_45;
            }
            break;
          }
          while ( 1 )
          {
LABEL_126:
            if ( v87->m128i_i64[0] <= 1uLL )
              goto LABEL_125;
            v88 = 16LL * (*(_DWORD *)(v87->m128i_i64[0] + 12) & v16);
            v89 = &v84[(unsigned __int64)v88 / 0x10];
            if ( v131 == v88 )
              break;
            v90 = &v84[(unsigned __int64)v88 / 0x10];
            while ( v90->m128i_i64[0] )
            {
              if ( v85 == ++v90 )
                goto LABEL_135;
            }
            v91 = _mm_loadu_si128(v87++);
            *v90 = v91;
            if ( v104 == v87 )
              goto LABEL_132;
          }
LABEL_135:
          if ( v84 == v89 )
          {
LABEL_145:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v92 = v84;
          while ( v92->m128i_i64[0] )
          {
            if ( v89 == ++v92 )
              goto LABEL_145;
          }
          *v92 = _mm_loadu_si128(v87);
LABEL_125:
          if ( v104 == ++v87 )
            goto LABEL_132;
          goto LABEL_126;
        }
      }
      v47 = *(unsigned __int64 **)(v7 + 8);
      v48 = &v47[2 * *(unsigned int *)(v7 + 16)];
      if ( v47 == v48 )
      {
        v94 = *v47;
      }
      else
      {
        while ( 1 )
        {
          v94 = *v47;
          v49 = v47;
          if ( *v47 > 1 )
            break;
          v47 += 2;
          if ( v48 == v47 )
          {
            v94 = v49[2];
            break;
          }
        }
      }
      if ( 3 * v3 >= 4 * (v127 + v125) )
      {
        v50 = v3 - 1;
        v51 = 16LL * v3;
        v52 = (__m128i *)((char *)ptr + v51);
        v53 = ptr;
LABEL_62:
        v54 = *(_DWORD *)(v8 + 12);
        v55 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v94);
        v56 = 16LL * (v54 & (unsigned int)v50);
        v57 = v56 == v51;
        v58 = &v53[(unsigned __int64)v56 / 0x10];
        v59 = nullptr;
        if ( v57 )
        {
          v63 = v53;
LABEL_71:
          if ( v63 == v58 )
          {
LABEL_79:
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v60 = v63;
          while ( 1 )
          {
            while ( 1 )
            {
              v64 = v60->m128i_i64[0];
              if ( v60->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v64 + 12) == v54 && v64 == v8 )
              {
                ptr = v63;
                *v60 = v55;
                goto LABEL_12;
              }
              if ( v58 == ++v60 )
                goto LABEL_79;
            }
            if ( !v64 )
              break;
            v59 = v60++;
            if ( v58 == v60 )
              goto LABEL_79;
          }
          ptr = v63;
          if ( v59 )
            goto LABEL_113;
LABEL_142:
          v59 = v60;
        }
        else
        {
          v60 = &v53[(unsigned __int64)v56 / 0x10];
          v61 = v53;
          while ( 1 )
          {
            while ( 1 )
            {
              v62 = v60->m128i_i64[0];
              if ( v60->m128i_i64[0] <= 1uLL )
                break;
              if ( *(_DWORD *)(v62 + 12) == v54 && v62 == v8 )
              {
                ptr = v61;
                *v60 = v55;
                goto LABEL_12;
              }
              if ( ++v60 == v52 )
                goto LABEL_70;
            }
            if ( !v62 )
              break;
            v59 = v60++;
            if ( v60 == v52 )
            {
LABEL_70:
              v63 = v61;
              goto LABEL_71;
            }
          }
          ptr = v61;
          if ( !v59 )
            goto LABEL_142;
LABEL_113:
          --v127;
        }
        *v59 = v55;
        ++v125;
        goto LABEL_12;
      }
      v129 = 32LL * v3;
      v68 = sub_186B270(v129);
      v51 = v129;
      v69 = 2 * v3;
      v70 = (__m128i *)v68;
      v52 = (__m128i *)(v129 + v68);
      if ( 2 * v3 )
      {
        if ( (v129 & 0x10) == 0 || (v68 += 16, v71 = ptr, *(_OWORD *)(v68 - 16) = 0, (__m128i *)v68 != v52) )
        {
          do
          {
            v68 += 32;
            *(_OWORD *)(v68 - 32) = 0;
            *(_OWORD *)(v68 - 16) = 0;
          }
          while ( (__m128i *)v68 != v52 );
          v71 = ptr;
        }
        v50 = v69 - 1;
        v72 = &v71[v3];
      }
      else
      {
        v52 = (__m128i *)v68;
        v50 = -1;
        v72 = &ptr[v3];
        if ( ptr == v72 )
        {
LABEL_101:
          if ( ptr )
          {
            v108 = v69;
            *(_QWORD *)v114 = v129;
            v119 = v50;
            v130 = v70;
            sub_186B220(ptr);
            v69 = v108;
            v51 = *(_QWORD *)v114;
            v50 = v119;
            v70 = v130;
          }
          v3 = v69;
          v53 = v70;
          v127 = 0;
          goto LABEL_62;
        }
      }
      v73 = ptr;
      do
      {
        while ( v73->m128i_i64[0] <= 1uLL )
        {
          if ( ++v73 == v72 )
            goto LABEL_101;
        }
        v74 = 16LL * (*(_DWORD *)(v73->m128i_i64[0] + 12) & (unsigned int)v50);
        v75 = &v70[(unsigned __int64)v74 / 0x10];
        if ( v129 == v74 )
        {
LABEL_104:
          if ( v70 == v75 )
          {
LABEL_140:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v76 = ptr;
          v77 = v70;
          while ( v77->m128i_i64[0] )
          {
            if ( v75 == ++v77 )
              goto LABEL_140;
          }
        }
        else
        {
          v76 = ptr;
          v77 = &v70[(unsigned __int64)v74 / 0x10];
          while ( v77->m128i_i64[0] )
          {
            if ( ++v77 == v52 )
              goto LABEL_104;
          }
        }
        v78 = _mm_loadu_si128(v73++);
        ptr = v76;
        *v77 = v78;
      }
      while ( v73 != v72 );
      goto LABEL_101;
    }
  }
  v95 = *(_QWORD *)(a1 + 8);
  v141 = 0;
  v140 = v95;
  sub_2334C0(&v140);
  return sub_186B220(ptr);
}

