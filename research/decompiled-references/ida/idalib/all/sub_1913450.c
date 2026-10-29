unsigned __int64 __fastcall sub_1913450(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r14
  _QWORD *v10; // rdx
  __int16 v11; // ax
  unsigned __int16 v12; // ax
  unsigned __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 *v17; // rbx
  unsigned __int64 v18; // r12
  char *v19; // r15
  char *v20; // rax
  __int64 *v21; // rdi
  int v22; // edx
  size_t v23; // r8
  unsigned __int64 v24; // r13
  __int64 *v25; // rdi
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbp
  __int64 v29; // rax
  char v30; // dl
  bool v31; // cl
  __int64 *v32; // r12
  __int64 *v33; // r13
  __int64 v34; // r15
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r12
  char v46; // al
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rdi
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  char v58; // r13
  __int64 v59; // r12
  unsigned __int8 v60; // dl
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  __int64 v67; // r8
  unsigned int v68; // eax
  int v69; // ecx
  _QWORD *v70; // rdi
  char v71; // dl
  unsigned __int64 v72; // rsi
  char v73; // dl
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  char v78; // r12
  bool v79; // al
  void **v80; // r13
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdx
  unsigned __int8 v85; // r11
  __int64 v86; // r10
  unsigned int v87; // ecx
  char v88; // r11
  __int64 v89; // rsi
  __int64 v90; // rdx
  unsigned __int64 v91; // r15
  char v92; // r13
  char v93; // r12
  __int64 v94; // rax
  bool v95; // al
  void **p_ptr; // r12
  int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // r8
  __int64 v103; // r11
  __int64 v104; // rax
  __int64 *v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rsi
  _QWORD *v109; // rdx
  _QWORD *v110; // rax
  _QWORD *v111; // r9
  __int64 v112; // rbx
  __int64 *v113; // rdx
  int v114; // eax
  _QWORD *v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r9
  int v118; // r10d
  __int64 v119; // rbx
  __int64 v120; // rsi
  __int64 *v121; // rcx
  __int64 v122; // r8
  __int64 *v123; // rdx
  __int64 *v124; // rax
  __int64 *v125; // rdx
  int v126; // edi
  __int64 *v127; // rsi
  __int64 v128; // r10
  _QWORD *v129; // rdi
  __int64 v130; // rax
  _QWORD *v131; // rax
  int v132; // r9d
  char *v133; // r10
  __int64 v134; // rax
  char v135; // di
  char v136; // di
  int v137; // eax
  char v138; // di
  int v139; // esi
  int v140; // r11d
  __int64 v141; // r10
  __int64 v142; // [rsp-58h] [rbp-260h]
  __int64 v143; // [rsp-50h] [rbp-258h]
  char v144; // [rsp-48h] [rbp-250h]
  int v145; // [rsp-40h] [rbp-248h]
  int v146; // [rsp-38h] [rbp-240h]
  __int64 v147; // [rsp-30h] [rbp-238h]
  __int64 v148; // [rsp-28h] [rbp-230h]
  char v149; // [rsp-20h] [rbp-228h]
  char v150; // [rsp-18h] [rbp-220h]
  char v151; // [rsp-10h] [rbp-218h]
  __m128 v152; // [rsp+0h] [rbp-208h] BYREF
  void **v153; // [rsp+10h] [rbp-1F8h]
  __int64 v154; // [rsp+18h] [rbp-1F0h]
  int v155; // [rsp+20h] [rbp-1E8h]
  unsigned int v156; // [rsp+24h] [rbp-1E4h] BYREF
  __int64 v157; // [rsp+28h] [rbp-1E0h] BYREF
  unsigned int *v158; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v159; // [rsp+38h] [rbp-1D0h] BYREF
  _QWORD v160[2]; // [rsp+40h] [rbp-1C8h] BYREF
  __int64 *v161; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 v162; // [rsp+58h] [rbp-1B0h]
  __int64 *v163; // [rsp+60h] [rbp-1A8h]
  __int64 v164; // [rsp+70h] [rbp-198h]
  __int64 v165; // [rsp+78h] [rbp-190h]
  __int64 v166; // [rsp+80h] [rbp-188h]
  __int64 v167; // [rsp+90h] [rbp-178h] BYREF
  __int64 v168; // [rsp+98h] [rbp-170h]
  __int64 v169; // [rsp+A0h] [rbp-168h]
  __int64 *v170; // [rsp+B0h] [rbp-158h] BYREF
  void *ptr; // [rsp+B8h] [rbp-150h] BYREF
  __int64 v172; // [rsp+C0h] [rbp-148h] BYREF
  _BYTE v173[256]; // [rsp+C8h] [rbp-140h] BYREF
  __int64 v174; // [rsp+1C8h] [rbp-40h]

  v8 = a1;
  v156 = a3;
  v10 = v160;
  v158 = &v156;
  v160[1] = &v157;
  v163 = &v157;
  v11 = *(_WORD *)a2;
  v157 = a2;
  v12 = v11 & 0x1FF;
  v159 = a1;
  v160[0] = a1;
  v161 = v160;
  v162 = a1;
  if ( v12 == 61 )
  {
    result = sub_1913450(a1, *(_QWORD *)(a2 + 16), v156);
    if ( result > 1 )
      return sub_C09AC0(*(_QWORD **)(a1 + 248), result & 0xFFFFFFFFFFFFFFFELL, 0, 0, v26, v27);
    return result;
  }
  if ( v12 <= 0x3Du )
  {
    if ( v12 != 46 )
    {
      if ( v12 <= 0x2Eu )
      {
        if ( v12 == 4 )
        {
          if ( *(_BYTE *)(a2 + 2) >> 3 != 12 )
            return 0;
          result = sub_1913450(a1, *(_QWORD *)(a2 + 16), v156);
          if ( result > 1 )
            return sub_1925670(a1, 0, *(unsigned int *)(a2 + 4), 12, result & 0xFFFFFFFFFFFFFFFELL, 0);
        }
        else
        {
          if ( v12 != 20 )
            return 0;
          result = sub_1913450(a1, *(_QWORD *)(a2 + 24), v156);
          if ( result > 1 )
            return sub_190C990(
                     a1,
                     *(_DWORD *)(a2 + 16),
                     *(_DWORD *)(a2 + 20),
                     result & 0xFFFFFFFFFFFFFFFELL,
                     *(double *)a7.m128_u64,
                     a8);
        }
        return result;
      }
      if ( v12 == 57 )
      {
        v152.m128_i8[0] = 0;
        v25 = &v172;
        ptr = (void *)0x400000000LL;
        v170 = &v172;
        v30 = *(_BYTE *)(a2 + 19) & 0x40;
        v31 = v30 != 0;
        v32 = (__int64 *)(a2 + 8LL * v31 + 32);
        v33 = &v32[*(_WORD *)(a2 + 16) & 0x7FFF];
        if ( v33 == v32 )
        {
LABEL_124:
          if ( v30 )
            v111 = *(_QWORD **)(a2 + 32);
          else
            v111 = *(_QWORD **)(a2 + 8LL * (*(_WORD *)(a2 + 16) & 0x7FFF) + 32);
          result = 0;
          if ( v152.m128_i8[0] )
          {
            result = sub_1912620(
                       v8,
                       (_BYTE *)*(unsigned int *)(a2 + 4),
                       *(_DWORD *)(a2 + 20),
                       *(_DWORD *)(a2 + 24),
                       v31,
                       v111,
                       a7,
                       (char *)(a2
                              + 8LL * (unsigned __int16)((*(_WORD *)(a2 + 16) & 0x7FFF) + v31)
                              + 8LL * (v30 == 0)
                              + 32),
                       (_BYTE *)(*(_WORD *)(a2 + 16) & 0x7FFF),
                       v25,
                       (unsigned int)ptr);
            v25 = v170;
          }
        }
        else
        {
          while ( 1 )
          {
            v34 = *v32;
            result = sub_1913450(v8, *v32, v156);
            if ( result == 1 )
              break;
            if ( result )
            {
              sub_14B7B40((__int64)&v170, result & 0xFFFFFFFFFFFFFFFELL);
              v152.m128_i8[0] = 1;
            }
            else
            {
              sub_14B7B40((__int64)&v170, v34);
            }
            if ( v33 == ++v32 )
            {
              v25 = v170;
              v30 = *(_BYTE *)(a2 + 19) & 0x40;
              v31 = v30 != 0;
              goto LABEL_124;
            }
          }
          v25 = v170;
        }
        if ( v25 == &v172 )
          return result;
        goto LABEL_80;
      }
      if ( v12 != 59 )
        return 0;
      v15 = *(unsigned int *)(a2 + 28);
      v16 = a2 + 8 * v15 + 32;
      if ( a2 + 32 == v16 )
      {
        v105 = v160;
      }
      else
      {
        v17 = (__int64 *)(a2 + 32);
        do
        {
          if ( sub_18C6890((int **)&v158, (__int64)&v159, *v17, v15, a5, a6) )
            return 0;
          ++v17;
        }
        while ( (__int64 *)v16 != v17 );
        v105 = v161;
        v8 = *v161;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v8 + 232) + 60LL) & 0x10) != 0 )
      {
        v106 = sub_15F2610(v8, 0, (__int64)v10, v15, a5, a6);
        if ( v106 )
        {
          v107 = *(_QWORD *)v105[1];
          if ( (*(_WORD *)v107 & 0x1FF) == 0x47 )
          {
            v108 = *(_QWORD *)(v107 + 16);
            if ( (*(_BYTE *)(v108 + 28) & 0x7Fu) - 40 <= 6 )
            {
              if ( *(_BYTE *)(v106 + 1932) )
              {
                v109 = *(_QWORD **)(v106 + 1912);
                v110 = &v109[*(unsigned int *)(v106 + 1924)];
                if ( v109 != v110 )
                {
                  while ( v108 != *v109 )
                  {
                    if ( v110 == ++v109 )
                      goto LABEL_132;
                  }
                  return 0;
                }
              }
              else if ( sub_2236570(v106 + 1912, v108) )
              {
                return 0;
              }
            }
          }
        }
      }
LABEL_132:
      v112 = v162;
      v113 = v163;
      v114 = *(_DWORD *)(v162 + 4424);
      if ( !v114 )
      {
        v115 = sub_18BC1F0(
                 *(_QWORD **)(v162 + 4440),
                 *(_QWORD *)(v162 + 4440) + 8LL * *(unsigned int *)(v162 + 4448),
                 v163);
        if ( (_QWORD *)v117 != v115 )
        {
          v113 = (__int64 *)v112;
          if ( (_QWORD *)v117 != v115 + 1 )
          {
            memmove(v115, v115 + 1, v117 - (_QWORD)(v115 + 1));
            v118 = *(_DWORD *)(v112 + 4448);
            v113 = (__int64 *)v162;
          }
          *(_DWORD *)(v112 + 4448) = v118 - 1;
          v112 = (__int64)v113;
        }
        goto LABEL_137;
      }
      v116 = *(unsigned int *)(v162 + 4432);
      v117 = *(_QWORD *)(v162 + 4416);
      if ( (_DWORD)v116 )
      {
        a5 = *v163;
        v126 = v116 - 1;
        v116 = ((_DWORD)v116 - 1) & (((unsigned int)*v163 >> 9) ^ ((unsigned int)*v163 >> 4));
        v127 = (__int64 *)(v117 + 8 * v116);
        v128 = *v127;
        if ( *v163 == *v127 )
        {
LABEL_164:
          *v127 = -8192;
          v129 = *(_QWORD **)(v112 + 4440);
          *(_DWORD *)(v112 + 4424) = v114 - 1;
          v130 = *(unsigned int *)(v112 + 4448);
          ++*(_DWORD *)(v112 + 4428);
          v131 = sub_18BC1F0(v129, (__int64)&v129[v130], v113);
          if ( v133 == (char *)(v131 + 1) )
          {
            v134 = v112;
          }
          else
          {
            memmove(v131, v131 + 1, v133 - (char *)(v131 + 1));
            v132 = *(_DWORD *)(v112 + 4448);
            v134 = v162;
          }
          v117 = (unsigned int)(v132 - 1);
          *(_DWORD *)(v112 + 4448) = v117;
          v112 = v134;
          goto LABEL_137;
        }
        v139 = 1;
        if ( v128 != -4096 )
        {
          do
          {
            v140 = v139 + 1;
            v116 = v126 & (unsigned int)(v139 + v116);
            v127 = (__int64 *)(v117 + 8LL * (unsigned int)v116);
            v141 = *v127;
            if ( a5 == *v127 )
              goto LABEL_164;
            v139 = v140;
          }
          while ( v141 != -4096 );
        }
      }
LABEL_137:
      v119 = sub_15F2610(v112, 0, (__int64)v113, v116, a5, v117);
      if ( !v119 )
        return 0;
      v120 = *v163;
      if ( !*(_BYTE *)(v119 + 1732) )
        goto LABEL_172;
      v121 = *(__int64 **)(v119 + 1712);
      v122 = *(unsigned int *)(v119 + 1724);
      v123 = &v121[v122];
      if ( v121 != v123 )
      {
        v124 = *(__int64 **)(v119 + 1712);
        if ( v120 == *v121 )
          goto LABEL_146;
        while ( v123 != ++v124 )
        {
          if ( v120 == *v124 )
            goto LABEL_146;
        }
      }
      if ( (unsigned int)v122 < *(_DWORD *)(v119 + 1720) )
      {
        *(_DWORD *)(v119 + 1724) = v122 + 1;
        *v123 = v120;
        v121 = *(__int64 **)(v119 + 1712);
        v124 = &v121[v122];
      }
      else
      {
LABEL_172:
        v124 = (__int64 *)sub_2236760(v119 + 1712, v120);
        v121 = *(__int64 **)(v119 + 1712);
        if ( !*(_BYTE *)(v119 + 1732) )
        {
          v125 = &v121[*(unsigned int *)(v119 + 1720)];
LABEL_147:
          if ( v124 == v125 || *v124 != -2 && *v124 != -1 )
            return 0;
          while ( v125 != ++v124 )
          {
            if ( (unsigned __int64)*v124 < 0xFFFFFFFFFFFFFFFELL )
              return 0;
          }
          return 0;
        }
      }
LABEL_146:
      v125 = &v121[*(unsigned int *)(v119 + 1724)];
      goto LABEL_147;
    }
    v50 = *(_QWORD *)(a2 + 24);
    if ( (*(_BYTE *)(v50 + 28) & 0x7Fu) - 49 <= 2 )
    {
      result = sub_1913450(v8, *(_QWORD *)(a2 + 16), v156);
      v91 = result;
      if ( result <= 1 )
        return result;
      v92 = *(_BYTE *)(a2 + 3) & 3;
      v93 = *(_BYTE *)(a2 + 1) >> 3;
      v155 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
      v94 = *(_QWORD *)(a2 + 8);
      LODWORD(v153) = v93 & 7;
      v154 = v94;
      v95 = sub_18C0370((_QWORD *)a2);
      v174 = 0;
      LOBYTE(v170) = v95;
      ptr = v173;
      v172 = 0x800000000LL;
      if ( v95
        && (!sub_18C0370((_QWORD *)a2)
         || (v135 = BYTE2(*(_QWORD *)a2),
             sub_F1EA70(
               (_DWORD *)(a2 + 8LL * ((v135 & 0x20) != 0) + 16LL * ((v135 & 0x10) != 0) + 48),
               a2
             + 8LL * ((v135 & 0x20) != 0)
             + 16 * (((v135 & 0x10) != 0) + (unsigned __int64)((v135 & 0x40) != 0))
             + 48,
               (__int64)&ptr),
             (_BYTE)v170)) )
      {
        p_ptr = &ptr;
      }
      else
      {
        p_ptr = nullptr;
      }
      v97 = *(_DWORD *)(a2 + 40);
      v98 = *(_QWORD *)(a2 + 32);
      v99 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 40LL);
      v152.m128_u64[0] = *(_QWORD *)(a2 + 24);
      LODWORD(v165) = v97;
      v164 = v99;
      v166 = v98;
      v100 = sub_18C0340((_QWORD *)a2);
      v101 = *(_QWORD *)a2;
      v102 = v152.m128_u64[0];
      v103 = v100;
      v68 = 0;
      if ( (*(_QWORD *)a2 & 0x400000) != 0 )
      {
        v68 = sub_18BBB00((_QWORD *)a2);
        v102 = v152.m128_u64[0];
      }
      if ( (v101 & 0x100000) != 0 )
        v152.m128_u64[0] = *(_QWORD *)(a2 + 56);
      else
        v152.m128_u64[0] = 0;
      v69 = *(_DWORD *)(a2 + 4);
      v70 = *(_QWORD **)(v8 + 248);
      v152 = _mm_loadh_ps((const double *)v152.m128_u64);
      v73 = (v101 & 0x80000) != 0;
      v72 = v91 & 0xFFFFFFFFFFFFFFFELL;
      v151 = v92;
      v150 = (char)v153;
      v149 = v155;
      v148 = v154;
      v147 = (__int64)p_ptr;
      v146 = v166;
      v145 = v165;
      v144 = v164;
      v143 = v103;
      v142 = v102;
      goto LABEL_79;
    }
    if ( (unsigned __int8)sub_B72F20(v50)
      || (*(_BYTE *)(a2 + 3) & 3) != 0
      || sub_18C6890((int **)&v158, (__int64)&v159, *(_QWORD *)(a2 + 24), v51, v52, v53) )
    {
      return 0;
    }
    sub_18BD730((__int64)&v161, (__int64)&v159, v54, v55, v56, v57);
    v58 = v156;
    v59 = *(_QWORD *)(a2 + 8);
    v60 = *(_BYTE *)(a2 + 1);
    v155 = (v60 >> 1) & 3;
    v61 = *(_QWORD *)a2 >> 16;
    LODWORD(v154) = (v60 >> 3) & 7;
    if ( (v61 & 0x40) != 0 )
    {
      v137 = *(_DWORD *)(a2 + 16LL * ((v61 & 0x10) != 0) + 8LL * ((v61 & 0x20) != 0) + 48);
      ptr = v173;
      v172 = 0x800000000LL;
      v174 = 0;
      LOBYTE(v170) = v137 != 0;
      if ( v137 )
      {
        if ( !sub_18C0370((_QWORD *)a2)
          || (v138 = BYTE2(*(_QWORD *)a2),
              sub_F1EA70(
                (_DWORD *)(a2 + 8LL * ((v138 & 0x20) != 0) + 16LL * ((v138 & 0x10) != 0) + 48),
                a2
              + 16 * (((v138 & 0x10) != 0) + (unsigned __int64)((v138 & 0x40) != 0))
              + 8LL * ((v138 & 0x20) != 0)
              + 48,
                (__int64)&ptr),
              (_BYTE)v170) )
        {
          v153 = &ptr;
          goto LABEL_74;
        }
      }
    }
    else
    {
      LOBYTE(v170) = 0;
      v174 = 0;
      ptr = v173;
      v172 = 0x800000000LL;
    }
    v153 = nullptr;
LABEL_74:
    v62 = *(_QWORD *)(a2 + 24);
    v63 = *(_QWORD *)(a2 + 32);
    v64 = *(_QWORD *)(v62 + 40);
    LODWORD(v168) = *(_DWORD *)(a2 + 40);
    v169 = v63;
    v167 = v64;
    v65 = sub_18C0340((_QWORD *)a2);
    v66 = *(_QWORD *)a2;
    v67 = v65;
    v68 = 0;
    if ( (*(_QWORD *)a2 & 0x400000) != 0 )
      v68 = sub_18BBB00((_QWORD *)a2);
    if ( (v66 & 0x100000) != 0 )
      v152.m128_u64[0] = *(_QWORD *)(a2 + 56);
    else
      v152.m128_u64[0] = 0;
    v69 = *(_DWORD *)(a2 + 4);
    v70 = *(_QWORD **)(v8 + 248);
    v71 = v66 >> 19;
    v72 = *(_QWORD *)(a2 + 16);
    v152 = _mm_loadh_ps((const double *)v152.m128_u64);
    v73 = v71 & 1;
    v151 = v58;
    v150 = v154;
    v149 = v155;
    v148 = v59;
    v147 = (__int64)v153;
    v146 = v169;
    v145 = v168;
    v144 = v167;
    v143 = v67;
    v142 = v62;
LABEL_79:
    result = (unsigned __int64)sub_C0C460(
                                 v70,
                                 v72,
                                 v73,
                                 v69,
                                 v152.m128_i64[0],
                                 v152.m128_i64[1],
                                 v68,
                                 v142,
                                 v143,
                                 v144,
                                 v145,
                                 v146,
                                 v147,
                                 v148,
                                 v149,
                                 v150,
                                 v151);
    v25 = (__int64 *)ptr;
    if ( ptr == v173 )
      return result;
    goto LABEL_80;
  }
  if ( v12 == 79 )
  {
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x7Fu) > 8 || ((1LL << ((*(_WORD *)(a2 + 2) >> 3) & 0x7F)) & 0x1A0) == 0 )
      return 0;
    result = sub_1913450(a1, *(_QWORD *)(a2 + 16), v156);
    v18 = result;
    if ( result <= 1 )
      return result;
    v19 = (char *)&sub_BFA620((_WORD *)a2)[4 * *(unsigned int *)(a2 + 4)];
    v20 = (char *)sub_BFA620((_WORD *)a2);
    v21 = &v172;
    v22 = 0;
    v23 = v19 - v20;
    v170 = &v172;
    ptr = (void *)0x400000000LL;
    v24 = (v19 - v20) >> 3;
    if ( v24 > 4 )
    {
      v153 = (void **)v20;
      v152.m128_u64[0] = v19 - v20;
      sub_2237220(&v170, &v172, (v19 - v20) >> 3, 8);
      v22 = (int)ptr;
      v20 = (char *)v153;
      v23 = v152.m128_u64[0];
      v21 = &v170[(unsigned int)ptr];
    }
    if ( v19 != v20 )
    {
      memcpy(v21, v20, v23);
      v22 = (int)ptr;
    }
    LODWORD(ptr) = v24 + v22;
    result = sub_160A600(
               v8,
               v18 & 0xFFFFFFFFFFFFFFFELL,
               *(_QWORD *)(a2 + 8),
               (*(_WORD *)(a2 + 2) >> 3) & 0x7F,
               (*(_BYTE *)(a2 + 1) >> 1) & 3,
               (__int64)&v170,
               *(double *)a7.m128_u64,
               *(double *)a8.m128_u64,
               0);
    v25 = v170;
    if ( v170 == &v172 )
      return result;
    goto LABEL_80;
  }
  if ( v12 <= 0x4Fu )
  {
    if ( v12 != 71 )
    {
      if ( v12 != 77 )
        return 0;
      v14 = sub_1913450(a1, *(_QWORD *)(a2 + 24), v156);
      if ( v14 != 1 )
      {
        v104 = sub_1913450(a1, *(_QWORD *)(a2 + 24), v156);
        if ( v104 != 1 )
        {
          if ( ((v104 | v14) & 0xFFFFFFFFFFFFFFFELL) == 0 )
            return 0;
          if ( !v14 )
            v14 = *(_QWORD *)(a2 + 24);
          if ( !v104 )
            v104 = *(_QWORD *)(a2 + 32);
          return sub_1915C80(
                   a1,
                   *(unsigned int *)(a2 + 40),
                   *(_QWORD *)(a2 + 16),
                   v14 & 0xFFFFFFFFFFFFFFFELL,
                   v104 & 0xFFFFFFFFFFFFFFFELL,
                   *(unsigned int *)(a2 + 44));
        }
      }
      return 1;
    }
    if ( (*(_BYTE *)(a2 + 3) & 6) != 0 || sub_18C6890((int **)&v158, (__int64)&v159, *(_QWORD *)(a2 + 16), a4, a5, a6) )
      return 0;
    sub_18BD730((__int64)&v161, (__int64)&v159, v74, v75, v76, v77);
    v78 = v156;
    v79 = sub_18C0310((_QWORD *)a2);
    v174 = 0;
    LOBYTE(v170) = v79;
    ptr = v173;
    v172 = 0x800000000LL;
    if ( v79
      && (!sub_18C0310((_QWORD *)a2)
       || (v136 = BYTE2(*(_QWORD *)a2),
           sub_F1EA70(
             (_DWORD *)(a2 + 8LL * ((v136 & 0x20) != 0) + 16LL * ((v136 & 8) != 0) + 32),
             a2 + 8LL * ((v136 & 0x20) != 0) + 16 * (((v136 & 8) != 0) + (unsigned __int64)((v136 & 0x10) != 0)) + 32,
             (__int64)&ptr),
           (_BYTE)v170)) )
    {
      v80 = &ptr;
    }
    else
    {
      v80 = nullptr;
    }
    v81 = *(_QWORD *)(a2 + 16);
    v82 = v81;
    if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
      v82 = sub_18BBAF0((_QWORD *)a2);
    v83 = *(_QWORD *)(v81 + 40);
    v84 = *(_QWORD *)(a2 + 24);
    v85 = *(_BYTE *)(a2 + 1);
    v86 = *(_QWORD *)(a2 + 8);
    LODWORD(v168) = *(_DWORD *)(a2 + 4);
    v87 = 0;
    v169 = v84;
    v167 = v83;
    v88 = (v85 >> 1) & 3;
    if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
      v87 = *(_DWORD *)(a2 + 16LL * ((*(_QWORD *)a2 & 0x80000LL) != 0) + 8LL * ((*(_QWORD *)a2 & 0x200000LL) != 0) + 40);
    if ( (*(_QWORD *)a2 & 0x80000) != 0 )
    {
      v89 = *(_QWORD *)(a2 + 32);
      v90 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v90 = 0;
      v89 = 0;
    }
    result = sub_C0C310(
               *(_QWORD **)(v8 + 248),
               v89,
               v90,
               v87,
               *(_QWORD *)(a2 + 16),
               (unsigned __int8)BYTE2(*(_QWORD *)a2) >> 7,
               (__int64)&v167,
               v86,
               v88,
               v82,
               (__int64)v80,
               v78);
    v25 = (__int64 *)ptr;
    if ( ptr == v173 )
      return result;
LABEL_80:
    v152.m128_u64[0] = result;
    free(v25);
    return v152.m128_u64[0];
  }
  if ( v12 == 123 )
  {
    if ( sub_9ECBA0(a2, a2, (__int64)v160, a4, a5) )
      v35 = *(_QWORD *)(a2 + 16);
    else
      v35 = *(_QWORD *)(a2 + 24);
    v36 = sub_BFB900(v35);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u )
      return 0;
    v37 = v36;
    result = sub_1913450(v8, v36, v156);
    v41 = result;
    if ( result > 1 )
    {
      if ( sub_9ECBA0(a2, v37, v38, v39, v40) || (v45 = *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24) == v45) )
        LODWORD(v45) = v41 & 0xFFFFFFFE;
      v46 = sub_9ECBA0(a2, v37, v42, v43, v44);
      v47 = *(_QWORD *)(a2 + 16);
      if ( !v46 || (v48 = *(_QWORD *)(a2 + 24), v47 == v48) )
        v48 = v41 & 0xFFFFFFFFFFFFFFFELL;
      v170 = (__int64 *)v48;
      v49 = sub_EEB7E0(v47, v37, *(double *)a7.m128_u64);
      return sub_1930830(v8, 0, v45, v49, (unsigned int)&v170, 1, *(_DWORD *)(a2 + 4));
    }
    return result;
  }
  if ( v12 == 128 )
  {
    v28 = sub_1913450(a1, *(_QWORD *)(a2 + 32), v156);
    if ( v28 != 1 )
    {
      v29 = sub_1913450(a1, *(_QWORD *)(a2 + 40), v156);
      if ( v29 != 1 )
      {
        if ( !(v28 | v29) )
          return 0;
        if ( !v28 )
          v28 = *(_QWORD *)(a2 + 32);
        if ( !v29 )
          v29 = *(_QWORD *)(a2 + 40);
        return sub_1923BC0(
                 a1,
                 *(unsigned int *)(a2 + 16),
                 *(unsigned int *)(a2 + 20),
                 *(_QWORD *)(a2 + 24),
                 v28 & 0xFFFFFFFFFFFFFFFELL,
                 v29 & 0xFFFFFFFFFFFFFFFELL);
      }
    }
    return 1;
  }
  if ( v12 != 118 )
    return 0;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 0 )
  {
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 0x20 )
      return 0;
    result = sub_1913450(a1, *(_QWORD *)(a2 + 24), v156);
    if ( result > 1 )
    {
      *(_QWORD *)(a2 + 24) = result & 0xFFFFFFFFFFFFFFFELL;
      return a2;
    }
  }
  else
  {
    result = sub_1913450(a1, *(_QWORD *)(a2 + 16), v156);
    if ( result > 1 )
    {
      *(_QWORD *)(a2 + 16) = result & 0xFFFFFFFFFFFFFFFELL;
      return a2;
    }
  }
  return result;
}
