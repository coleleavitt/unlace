_QWORD *__fastcall sub_1240C40(_QWORD *a1, __int64 a2, __int64 a3)
{
  void **v4; // rbp
  void **v5; // rbx
  _BYTE **v7; // r13
  _BYTE **v8; // r14
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  const void *v12; // rax
  unsigned __int64 v13; // rdx
  size_t v14; // r12
  char **v15; // rbx
  char *v16; // r13
  __int64 v17; // rdx
  size_t v18; // r13
  void *v19; // r14
  __int64 v20; // r14
  _BYTE *v21; // r13
  __int64 v22; // rcx
  int v23; // r9d
  void **v24; // rbp
  void **v25; // rbx
  void **v26; // rbp
  void **v27; // rbx
  unsigned __int8 *v28; // rbx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  void **v33; // r13
  _BYTE *v34; // rdi
  __int64 v35; // rax
  void **v36; // rbx
  __int64 v37; // rax
  void **v38; // r12
  void **v39; // rbp
  void **v40; // rdi
  void **v41; // rdi
  void **v42; // r12
  void **v43; // rbp
  char *v44; // rdi
  _BYTE *v45; // rsi
  char *v46; // rbx
  char *v47; // rdx
  size_t v48; // rdx
  char *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  void *v53; // r14
  __int64 v54; // rax
  _BYTE *v55; // rsi
  __m128i *v56; // rbx
  char *v57; // rdx
  __int64 v58; // r13
  int v59; // r13d
  __int64 v60; // rdx
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 v65; // r13
  __int64 v66; // r12
  void *v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rdx
  __m128i *v70; // rax
  const char **v71; // rbp
  __int64 *p_ptr; // rbx
  const char *v73; // r15
  size_t v74; // rax
  __m128i v75; // xmm1
  size_t v76; // r14
  char *v77; // rdi
  unsigned __int8 *v78; // rbp
  _QWORD *v79; // rdx
  __int64 v80; // rax
  __m128i *v81; // rax
  unsigned __int8 *v82; // r13
  _BYTE *v83; // r14
  __int64 v84; // rbp
  _QWORD *v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // rax
  int v88; // ecx
  __int64 v89; // rax
  void **v90; // rbp
  _BYTE *v91; // rdi
  __int64 v92; // rax
  void **v93; // rbp
  __int64 v94; // rax
  __int64 v95; // r12
  __int64 v96; // rbx
  void *v97; // rdi
  void **v98; // rdi
  void **v99; // rdi
  void **v100; // rbx
  void **v101; // r12
  _QWORD *v102; // rcx
  __m128i v103; // xmm2
  _BYTE *v104; // rsi
  char *v105; // rbp
  char *v106; // rdx
  int v107; // eax
  int v108; // eax
  __int64 v109; // rcx
  __int64 v110; // rdx
  size_t v111; // rdx
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // rdx
  int v115; // eax
  void **v116; // r14
  void *v117; // r15
  __int64 v118; // rax
  _BYTE *v119; // rsi
  __m128i *v120; // rbp
  char *v121; // rdx
  __int64 v122; // r13
  int v123; // r13d
  __int64 v124; // rax
  __int64 v125; // r13
  __int64 v126; // r14
  __int64 v127; // r13
  void *v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // r15
  __int64 v134; // rbx
  void *v135; // rdi
  _BYTE *v136; // [rsp+8h] [rbp-510h]
  __int64 v137; // [rsp+8h] [rbp-510h]
  const void *v138; // [rsp+8h] [rbp-510h]
  __int64 v139; // [rsp+8h] [rbp-510h]
  __int64 v140; // [rsp+10h] [rbp-508h]
  __m128i v141; // [rsp+20h] [rbp-4F8h] BYREF
  void **v142; // [rsp+30h] [rbp-4E8h]
  char **v143; // [rsp+38h] [rbp-4E0h]
  void **p_src; // [rsp+40h] [rbp-4D8h]
  _QWORD *v145; // [rsp+48h] [rbp-4D0h]
  _QWORD *v146; // [rsp+50h] [rbp-4C8h]
  void **v147; // [rsp+58h] [rbp-4C0h]
  _QWORD *v148; // [rsp+60h] [rbp-4B8h]
  char v149; // [rsp+6Eh] [rbp-4AAh]
  char v150; // [rsp+6Fh] [rbp-4A9h]
  __int64 v151; // [rsp+70h] [rbp-4A8h]
  void **v152; // [rsp+78h] [rbp-4A0h]
  void *v153; // [rsp+80h] [rbp-498h] BYREF
  _BYTE **v154; // [rsp+88h] [rbp-490h]
  void *v155; // [rsp+A0h] [rbp-478h] BYREF
  _QWORD *v156; // [rsp+A8h] [rbp-470h]
  void *v157[4]; // [rsp+C0h] [rbp-458h] BYREF
  void *src; // [rsp+E0h] [rbp-438h] BYREF
  size_t n; // [rsp+E8h] [rbp-430h]
  __m128i v160; // [rsp+F0h] [rbp-428h] BYREF
  _QWORD v161[4]; // [rsp+100h] [rbp-418h] BYREF
  __int16 v162; // [rsp+120h] [rbp-3F8h]
  void *v163[2]; // [rsp+130h] [rbp-3E8h] BYREF
  __int64 v164; // [rsp+140h] [rbp-3D8h] BYREF
  __int16 v165; // [rsp+150h] [rbp-3C8h]
  void *v166; // [rsp+160h] [rbp-3B8h] BYREF
  size_t v167; // [rsp+168h] [rbp-3B0h]
  __m128i v168; // [rsp+170h] [rbp-3A8h] BYREF
  __int16 v169; // [rsp+180h] [rbp-398h]
  void *v170; // [rsp+190h] [rbp-388h] BYREF
  size_t v171; // [rsp+198h] [rbp-380h]
  _QWORD v172[2]; // [rsp+1A0h] [rbp-378h] BYREF
  __int16 v173; // [rsp+1B0h] [rbp-368h]
  void *v174; // [rsp+1C0h] [rbp-358h] BYREF
  __int64 v175; // [rsp+1C8h] [rbp-350h]
  char v176; // [rsp+1D0h] [rbp-348h] BYREF
  void *ptr; // [rsp+250h] [rbp-2C8h] BYREF
  __m128i si128; // [rsp+258h] [rbp-2C0h] BYREF
  __int64 v179; // [rsp+268h] [rbp-2B0h] BYREF
  void *v180; // [rsp+270h] [rbp-2A8h]
  __int64 v181; // [rsp+280h] [rbp-298h] BYREF
  __int16 v182; // [rsp+290h] [rbp-288h]
  void *v183; // [rsp+2F0h] [rbp-228h] BYREF
  __int64 v184; // [rsp+2F8h] [rbp-220h]
  char v185; // [rsp+300h] [rbp-218h] BYREF

  v148 = a1;
  v151 = a2;
  v147 = &v183;
  v183 = &v185;
  v184 = 0xC00000000LL;
  v150 = sub_21B7850(a3, 3091, 3018, 1);
  if ( !v150 )
  {
    a1[1] = 0xC00000000LL;
    *a1 = a1 + 2;
    goto LABEL_3;
  }
  v152 = &v174;
  v174 = &v176;
  v175 = 0x1000000000LL;
  sub_21B7150(&v153, a3, 3224);
  v7 = v154;
  v8 = (_BYTE **)v153;
  if ( v153 != v154 )
  {
    do
    {
      while ( 1 )
      {
        ptr = &si128.m128i_u64[1];
        sub_12406B0(&ptr, *v8, (__int64)&v8[1][(_QWORD)*v8]);
        v9 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a3 + 16LL))(a3, ptr, si128.m128i_i64[0]);
        v10 = (unsigned int)v175;
        v11 = (unsigned int)v175 + 1LL;
        if ( v11 > HIDWORD(v175) )
        {
          v137 = v9;
          sub_2237220(v152, v152 + 2, v11, 8);
          v10 = (unsigned int)v175;
          v9 = v137;
        }
        *((_QWORD *)v174 + v10) = v9;
        LODWORD(v175) = v175 + 1;
        if ( ptr == &si128.m128i_u64[1] )
          break;
        operator delete(ptr);
        v8 += 4;
        if ( v7 == v8 )
          goto LABEL_17;
      }
      v8 += 4;
    }
    while ( v7 != v8 );
  }
LABEL_17:
  v12 = (const void *)sub_21B7BC0(a3, 2113, &byte_22F0C30, 0);
  v14 = v13;
  if ( v13 )
  {
    v49 = (char *)&v179;
    ptr = &v179;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( v13 > 0x80 )
    {
      v138 = v12;
      sub_2236E10(&ptr, &v179, v13, 1);
      v12 = v138;
      v49 = (char *)ptr + si128.m128i_i64[0];
    }
    memcpy(v49, v12, v14);
    v173 = 257;
    v169 = 257;
    v163[0] = "hip-device-lib";
    v165 = 259;
    v161[0] = "lib";
    v162 = 259;
    si128.m128i_i64[0] += v14;
    sub_228A3B0(&ptr, v161, v163, &v166, &v170);
    v50 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)a3 + 16LL))(a3, ptr, si128.m128i_i64[0]);
    v51 = (unsigned int)v175;
    v52 = (unsigned int)v175 + 1LL;
    if ( v52 > HIDWORD(v175) )
    {
      v139 = v50;
      sub_2237220(v152, v152 + 2, v52, 8);
      v51 = (unsigned int)v175;
      v50 = v139;
    }
    *((_QWORD *)v174 + v51) = v50;
    LODWORD(v175) = v175 + 1;
    if ( ptr != &v179 )
      free(ptr);
  }
  sub_11C1900(a3, (__int64)v152, (char *)&byte_22F0C30, "HIP_DEVICE_LIB_PATH");
  sub_21B7150(&v155, a3, 2111);
  v146 = v156;
  if ( v156 != v155 )
  {
    v145 = v155;
    v149 = 0;
    p_src = &src;
    while ( 1 )
    {
      v15 = (char **)v174;
      v140 = v145[1];
      v136 = (_BYTE *)*v145;
      v143 = (char **)((char *)v174 + 8 * (unsigned int)v175);
      if ( v174 == v143 )
      {
LABEL_31:
        if ( !v149 )
          goto LABEL_51;
        goto LABEL_32;
      }
      v142 = v163;
      v141.m128i_i64[0] = (__int64)v161;
      do
      {
        while ( 1 )
        {
          v16 = *v15;
          v17 = -1;
          src = &v160;
          if ( v16 )
            v17 = (__int64)&v16[strlen(v16)];
          sub_12405F0(p_src, v16, v17);
          v18 = n;
          v19 = src;
          ptr = &v179;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          if ( n > 0x80 )
          {
            sub_2236E10(&ptr, &v179, n, 1);
            v44 = (char *)ptr + si128.m128i_i64[0];
          }
          else
          {
            if ( !n )
              goto LABEL_26;
            v44 = (char *)&v179;
          }
          memcpy(v44, v19, v18);
          v18 += si128.m128i_i64[0];
LABEL_26:
          si128.m128i_i64[0] = v18;
          v162 = 261;
          v169 = 257;
          v161[0] = v136;
          v165 = 257;
          v161[1] = v140;
          v173 = 257;
          sub_228A3B0(&ptr, v141.m128i_i64[0], v142, &v166, &v170);
          v20 = si128.m128i_i64[0];
          v21 = ptr;
          v173 = 261;
          v170 = ptr;
          v171 = si128.m128i_i64[0];
          if ( !(unsigned int)sub_228C1E0(&v170, 0) )
          {
            v170 = v172;
            if ( v21 )
            {
              sub_12405F0(&v170, v21, (__int64)&v21[v20]);
            }
            else
            {
              v171 = 0;
              LOBYTE(v172[0]) = 0;
            }
            if ( HIDWORD(v184) <= (unsigned int)v184 )
            {
              v53 = v147 + 2;
              v54 = sub_2237400(v147, v147 + 2, 0, 40, &v166);
              v55 = v170;
              v56 = (__m128i *)v54;
              v57 = (char *)v170 + v171;
              v58 = v54 + 40LL * (unsigned int)v184;
              *(_QWORD *)v58 = v58 + 16;
              sub_12405F0((_QWORD *)v58, v55, (__int64)v57);
              *(_BYTE *)(v58 + 32) = 1;
              sub_1171470((__int64)v147, v56);
              v59 = (int)v166;
              if ( v183 != v53 )
                free(v183);
              v183 = v56;
              HIDWORD(v184) = v59;
              LODWORD(v184) = v184 + 1;
            }
            else
            {
              v45 = v170;
              v46 = (char *)v183 + 40 * (unsigned int)v184;
              v47 = (char *)v170 + v171;
              *(_QWORD *)v46 = v46 + 16;
              sub_12405F0(v46, v45, (__int64)v47);
              LODWORD(v184) = v184 + 1;
              v46[32] = 1;
            }
            if ( v170 != v172 )
              operator delete(v170);
            if ( ptr != &v179 )
              free(ptr);
            if ( src != &v160 )
              operator delete(src);
            v149 = v150;
            goto LABEL_32;
          }
          if ( ptr != &v179 )
            free(ptr);
          if ( src == &v160 )
            break;
          operator delete(src);
          if ( v143 == ++v15 )
            goto LABEL_31;
        }
        ++v15;
      }
      while ( v143 != v15 );
      if ( v149 )
        goto LABEL_32;
LABEL_51:
      sub_FC70B0((__int64)&ptr, **(_QWORD **)(v151 + 8), 0, 443);
      v28 = (unsigned __int8 *)ptr;
      if ( !ptr )
      {
        v61 = si128.m128i_i64[0];
        v62 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
        if ( v62 )
        {
          v63 = (unsigned int)(v62 - 1);
          *(_DWORD *)(si128.m128i_i64[0] + 14976) = v63;
          v28 = *(unsigned __int8 **)(v61 + 8 * v63 + 14848);
          v64 = *((unsigned int *)v28 + 134);
          *v28 = 0;
          v65 = *((_QWORD *)v28 + 66);
          *((_DWORD *)v28 + 106) = 0;
          v66 = v65 + (v64 << 6);
          while ( v65 != v66 )
          {
            while ( 1 )
            {
              v66 -= 64;
              v67 = *(void **)(v66 + 24);
              if ( v67 == (void *)(v66 + 40) )
                break;
              operator delete(v67);
              if ( v65 == v66 )
                goto LABEL_125;
            }
          }
LABEL_125:
          *((_DWORD *)v28 + 134) = 0;
        }
        else
        {
          v28 = (unsigned __int8 *)operator new(0x3A0u);
          *v28 = 0;
          *((_QWORD *)v28 + 12) = v28 + 112;
          *((_QWORD *)v28 + 16) = v28 + 144;
          *((_QWORD *)v28 + 20) = v28 + 176;
          *((_QWORD *)v28 + 24) = v28 + 208;
          *((_QWORD *)v28 + 28) = v28 + 240;
          *((_QWORD *)v28 + 32) = v28 + 272;
          *((_QWORD *)v28 + 36) = v28 + 304;
          *((_QWORD *)v28 + 40) = v28 + 336;
          *((_QWORD *)v28 + 44) = v28 + 368;
          *((_QWORD *)v28 + 48) = v28 + 400;
          *((_QWORD *)v28 + 52) = v28 + 432;
          *((_QWORD *)v28 + 13) = 0;
          v28[112] = 0;
          *((_QWORD *)v28 + 17) = 0;
          v28[144] = 0;
          *((_QWORD *)v28 + 21) = 0;
          v28[176] = 0;
          *((_QWORD *)v28 + 25) = 0;
          v28[208] = 0;
          *((_QWORD *)v28 + 29) = 0;
          v28[240] = 0;
          *((_QWORD *)v28 + 33) = 0;
          v28[272] = 0;
          *((_QWORD *)v28 + 37) = 0;
          v28[304] = 0;
          *((_QWORD *)v28 + 41) = 0;
          v28[336] = 0;
          *((_QWORD *)v28 + 45) = 0;
          v28[368] = 0;
          *((_QWORD *)v28 + 49) = 0;
          v28[400] = 0;
          *((_QWORD *)v28 + 53) = 0x800000000LL;
          *((_QWORD *)v28 + 66) = v28 + 544;
          *((_QWORD *)v28 + 67) = 0x600000000LL;
        }
        ptr = v28;
      }
      v28[*v28 + 1] = 0;
      v170 = v172;
      sub_12405F0(&v170, v136, (__int64)&v136[v140]);
      v29 = ptr;
      v30 = *(unsigned __int8 *)ptr;
      *(_BYTE *)ptr = v30 + 1;
      v31 = (unsigned __int8)v30;
      v32 = 4 * (v30 + 3);
      v33 = (void **)&v29[v32];
      v34 = (_BYTE *)v29[v32];
      if ( v170 == v172 )
      {
        v48 = v171;
        if ( v171 )
        {
          if ( v171 == 1 )
            *v34 = v172[0];
          else
            memcpy(v34, v170, v171);
          v48 = v171;
          v34 = *v33;
        }
        v33[1] = (void *)v48;
        v34[v48] = 0;
        v34 = v170;
        goto LABEL_56;
      }
      if ( v34 == (_BYTE *)&v29[v32 + 2] )
      {
        *v33 = v170;
        v33[1] = (void *)v171;
        v33[2] = (void *)v172[0];
LABEL_99:
        v34 = v172;
        v170 = v172;
        goto LABEL_56;
      }
      v35 = v29[4 * v31 + 14];
      *v33 = v170;
      v33[1] = (void *)v171;
      v33[2] = (void *)v172[0];
      if ( !v34 )
        goto LABEL_99;
      v170 = v34;
      v172[0] = v35;
LABEL_56:
      v171 = 0;
      *v34 = 0;
      if ( v170 != v172 )
        operator delete(v170);
      if ( (_BYTE)v182 )
      {
        sub_FC7790(si128.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v182));
        si128.m128i_i64[1] = 0;
        v182 = 0;
      }
      if ( v180 != &v181 )
        operator delete(v180);
      v36 = (void **)ptr;
      if ( ptr )
      {
        v37 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] )
        {
          if ( (unsigned __int64)ptr < si128.m128i_i64[0] || (unsigned __int64)ptr > si128.m128i_i64[0] + 14848 )
          {
            v38 = *((void ***)ptr + 66);
            v39 = &v38[8 * (unsigned __int64)*((unsigned int *)ptr + 134)];
            if ( v38 != v39 )
            {
              do
              {
                while ( 1 )
                {
                  v39 -= 8;
                  v40 = (void **)v39[3];
                  if ( v40 == v39 + 5 )
                    break;
                  operator delete(v40);
                  if ( v38 == v39 )
                    goto LABEL_68;
                }
              }
              while ( v38 != v39 );
LABEL_68:
              v39 = (void **)v36[66];
            }
            if ( v39 != v36 + 68 )
              free(v39);
            v41 = (void **)v36[52];
            if ( v41 != v36 + 54 )
              free(v41);
            v42 = v36 + 48;
            v43 = v36 + 8;
            do
            {
              while ( *v42 != v42 + 2 )
              {
                operator delete(*v42);
                v42 -= 4;
                if ( v42 == v43 )
                  goto LABEL_76;
              }
              v42 -= 4;
            }
            while ( v42 != v43 );
LABEL_76:
            operator delete(v36, 0x3A0u);
          }
          else
          {
            v60 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
            *(_DWORD *)(si128.m128i_i64[0] + 14976) = v60 + 1;
            *(_QWORD *)(v37 + 8 * v60 + 14848) = v36;
          }
        }
      }
LABEL_32:
      v145 += 4;
      if ( v146 == v145 )
      {
        v22 = (__int64)v148;
        v23 = v184;
        *v148 = v148 + 2;
        *(_QWORD *)(v22 + 8) = 0xC00000000LL;
        if ( v23 )
          sub_1178510(v22, (__int64)v147);
        goto LABEL_35;
      }
    }
  }
  v68 = *(_QWORD *)(v151 + 16);
  v69 = *(_QWORD *)(v151 + 24);
  p_src = v157;
  sub_22BC1E0(v157, v68, v69, 0);
  sub_C05100((__int64)&v170, "hipspv-", (__int64)v157);
  if ( 0x7FFFFFFFFFFFFFFFLL - v171 <= 2 )
    goto LABEL_246;
  v70 = (__m128i *)sub_9EE560(&v170, ".bc", 3u);
  src = &v160;
  if ( (__m128i *)v70->m128i_i64[0] == &v70[1] )
  {
    v160 = _mm_loadu_si128(v70 + 1);
  }
  else
  {
    src = (void *)v70->m128i_i64[0];
    v160.m128i_i64[0] = v70[1].m128i_i64[0];
  }
  n = v70->m128i_u64[1];
  v70->m128i_i64[0] = (__int64)v70[1].m128i_i64;
  v70->m128i_i64[1] = 0;
  v70[1].m128i_i8[0] = 0;
  if ( v170 != v172 )
    operator delete(v170);
  v71 = (const char **)v174;
  p_ptr = (__int64 *)&ptr;
  v143 = (char **)((char *)v174 + 8 * (unsigned int)v175);
  if ( v174 != v143 )
  {
    v142 = (void **)v161;
    v141 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    while ( 1 )
    {
      v73 = *v71;
      if ( *v71 )
      {
        v74 = strlen(*v71);
        v75 = _mm_load_si128(&v141);
        ptr = &v179;
        v76 = v74;
        si128 = v75;
        if ( v74 > 0x80 )
        {
          sub_2236E10(&ptr, &v179, v74, 1);
          v77 = (char *)ptr + si128.m128i_i64[0];
LABEL_136:
          memcpy(v77, v73, v76);
          v74 = v76 + si128.m128i_i64[0];
          goto LABEL_137;
        }
        if ( v74 )
        {
          v77 = (char *)&v179;
          goto LABEL_136;
        }
      }
      else
      {
        v103 = _mm_load_si128(&v141);
        ptr = &v179;
        v74 = 0;
        si128 = v103;
      }
LABEL_137:
      si128.m128i_i64[0] = v74;
      v173 = 257;
      v169 = 257;
      v165 = 257;
      v162 = 260;
      v161[0] = &src;
      sub_228A3B0(&ptr, v142, v163, &v166, &v170);
      v173 = 261;
      v170 = ptr;
      v171 = si128.m128i_i64[0];
      if ( !(unsigned int)sub_228C1E0(&v170, 0) )
      {
        v170 = v172;
        if ( ptr )
        {
          sub_12405F0(&v170, ptr, (__int64)ptr + si128.m128i_i64[0]);
        }
        else
        {
          v171 = 0;
          LOBYTE(v172[0]) = 0;
        }
        if ( HIDWORD(v184) <= (unsigned int)v184 )
        {
          v116 = v147;
          v117 = v147 + 2;
          v118 = sub_2237400(v147, v147 + 2, 0, 40, &v166);
          v119 = v170;
          v120 = (__m128i *)v118;
          v121 = (char *)v170 + v171;
          v122 = v118 + 40LL * (unsigned int)v184;
          *(_QWORD *)v122 = v122 + 16;
          sub_12405F0((_QWORD *)v122, v119, (__int64)v121);
          *(_BYTE *)(v122 + 32) = 1;
          sub_1171470((__int64)v116, v120);
          v123 = (int)v166;
          if ( v183 != v117 )
            free(v183);
          v183 = v120;
          HIDWORD(v184) = v123;
          v108 = v184 + 1;
          LODWORD(v184) = v184 + 1;
        }
        else
        {
          v104 = v170;
          v105 = (char *)v183 + 40 * (unsigned int)v184;
          v106 = (char *)v170 + v171;
          *(_QWORD *)v105 = v105 + 16;
          sub_12405F0(v105, v104, (__int64)v106);
          v107 = v184;
          v105[32] = 1;
          v108 = v107 + 1;
          LODWORD(v184) = v108;
        }
        if ( v170 != v172 )
        {
          operator delete(v170);
          v108 = v184;
        }
        v109 = (__int64)v148;
        *v148 = v148 + 2;
        *(_QWORD *)(v109 + 8) = 0xC00000000LL;
        if ( v108 )
          sub_1178510(v109, (__int64)v147);
        if ( ptr != &v179 )
          free(ptr);
        goto LABEL_180;
      }
      if ( ptr == &v179 )
      {
        if ( v143 == (char **)++v71 )
          break;
      }
      else
      {
        free(ptr);
        if ( v143 == (char **)++v71 )
          break;
      }
    }
  }
  sub_FC70B0((__int64)&ptr, **(_QWORD **)(v151 + 8), 0, 434);
  v78 = (unsigned __int8 *)ptr;
  if ( !ptr )
  {
    v114 = si128.m128i_i64[0];
    v115 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
    if ( v115 )
    {
      v124 = (unsigned int)(v115 - 1);
      *(_DWORD *)(si128.m128i_i64[0] + 14976) = v124;
      v78 = *(unsigned __int8 **)(v114 + 8 * v124 + 14848);
      v125 = *((unsigned int *)v78 + 134);
      *v78 = 0;
      v126 = *((_QWORD *)v78 + 66);
      *((_DWORD *)v78 + 106) = 0;
      v127 = v126 + (v125 << 6);
      while ( v126 != v127 )
      {
        while ( 1 )
        {
          v127 -= 64;
          v128 = *(void **)(v127 + 24);
          if ( v128 == (void *)(v127 + 40) )
            break;
          operator delete(v128);
          if ( v126 == v127 )
            goto LABEL_234;
        }
      }
LABEL_234:
      *((_DWORD *)v78 + 134) = 0;
    }
    else
    {
      v78 = (unsigned __int8 *)operator new(0x3A0u);
      *v78 = 0;
      *((_QWORD *)v78 + 12) = v78 + 112;
      *((_QWORD *)v78 + 16) = v78 + 144;
      *((_QWORD *)v78 + 20) = v78 + 176;
      *((_QWORD *)v78 + 24) = v78 + 208;
      *((_QWORD *)v78 + 28) = v78 + 240;
      *((_QWORD *)v78 + 32) = v78 + 272;
      *((_QWORD *)v78 + 36) = v78 + 304;
      *((_QWORD *)v78 + 40) = v78 + 336;
      *((_QWORD *)v78 + 44) = v78 + 368;
      *((_QWORD *)v78 + 48) = v78 + 400;
      *((_QWORD *)v78 + 52) = v78 + 432;
      *((_QWORD *)v78 + 13) = 0;
      v78[112] = 0;
      *((_QWORD *)v78 + 17) = 0;
      v78[144] = 0;
      *((_QWORD *)v78 + 21) = 0;
      v78[176] = 0;
      *((_QWORD *)v78 + 25) = 0;
      v78[208] = 0;
      *((_QWORD *)v78 + 29) = 0;
      v78[240] = 0;
      *((_QWORD *)v78 + 33) = 0;
      v78[272] = 0;
      *((_QWORD *)v78 + 37) = 0;
      v78[304] = 0;
      *((_QWORD *)v78 + 41) = 0;
      v78[336] = 0;
      *((_QWORD *)v78 + 45) = 0;
      v78[368] = 0;
      *((_QWORD *)v78 + 49) = 0;
      v78[400] = 0;
      *((_QWORD *)v78 + 53) = 0x800000000LL;
      *((_QWORD *)v78 + 66) = v78 + 544;
      *((_QWORD *)v78 + 67) = 0x600000000LL;
    }
    ptr = v78;
  }
  v78[*v78 + 1] = 2;
  v79 = ptr;
  v80 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v80 + 1;
  v79[v80 + 2] = 1;
  sub_C05100((__int64)v163, "'", (__int64)p_src);
  if ( 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v163[1] <= 7 )
LABEL_246:
    std::__throw_length_error("basic_string::append");
  v81 = (__m128i *)sub_9EE560(v163, "' target", 8u);
  v166 = &v168;
  if ( (__m128i *)v81->m128i_i64[0] == &v81[1] )
  {
    v168 = _mm_loadu_si128(v81 + 1);
  }
  else
  {
    v166 = (void *)v81->m128i_i64[0];
    v168.m128i_i64[0] = v81[1].m128i_i64[0];
  }
  v167 = v81->m128i_u64[1];
  v81[1].m128i_i8[0] = 0;
  v82 = (unsigned __int8 *)ptr;
  v81->m128i_i64[0] = (__int64)v81[1].m128i_i64;
  v81->m128i_i64[1] = 0;
  v83 = v166;
  v84 = v167;
  if ( !v82 )
  {
    v112 = si128.m128i_i64[0];
    v113 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
    if ( v113 )
    {
      v129 = (unsigned int)(v113 - 1);
      *(_DWORD *)(si128.m128i_i64[0] + 14976) = v129;
      v82 = *(unsigned __int8 **)(v112 + 8 * v129 + 14848);
      v130 = *((unsigned int *)v82 + 134);
      *v82 = 0;
      v131 = *((_QWORD *)v82 + 66);
      *((_DWORD *)v82 + 106) = 0;
      v132 = v131 + (v130 << 6);
      if ( v131 != v132 )
      {
        v141.m128i_i64[0] = (__int64)&ptr;
        v133 = v132;
        v134 = v131;
        do
        {
          while ( 1 )
          {
            v133 -= 64;
            v135 = *(void **)(v133 + 24);
            if ( v135 == (void *)(v133 + 40) )
              break;
            operator delete(v135);
            if ( v134 == v133 )
              goto LABEL_240;
          }
        }
        while ( v134 != v133 );
LABEL_240:
        p_ptr = (__int64 *)v141.m128i_i64[0];
      }
      *((_DWORD *)v82 + 134) = 0;
    }
    else
    {
      v82 = (unsigned __int8 *)operator new(0x3A0u);
      *v82 = 0;
      *((_QWORD *)v82 + 12) = v82 + 112;
      *((_QWORD *)v82 + 16) = v82 + 144;
      *((_QWORD *)v82 + 20) = v82 + 176;
      *((_QWORD *)v82 + 24) = v82 + 208;
      *((_QWORD *)v82 + 28) = v82 + 240;
      *((_QWORD *)v82 + 32) = v82 + 272;
      *((_QWORD *)v82 + 36) = v82 + 304;
      *((_QWORD *)v82 + 40) = v82 + 336;
      *((_QWORD *)v82 + 44) = v82 + 368;
      *((_QWORD *)v82 + 48) = v82 + 400;
      *((_QWORD *)v82 + 52) = v82 + 432;
      *((_QWORD *)v82 + 13) = 0;
      v82[112] = 0;
      *((_QWORD *)v82 + 17) = 0;
      v82[144] = 0;
      *((_QWORD *)v82 + 21) = 0;
      v82[176] = 0;
      *((_QWORD *)v82 + 25) = 0;
      v82[208] = 0;
      *((_QWORD *)v82 + 29) = 0;
      v82[240] = 0;
      *((_QWORD *)v82 + 33) = 0;
      v82[272] = 0;
      *((_QWORD *)v82 + 37) = 0;
      v82[304] = 0;
      *((_QWORD *)v82 + 41) = 0;
      v82[336] = 0;
      *((_QWORD *)v82 + 45) = 0;
      v82[368] = 0;
      *((_QWORD *)v82 + 49) = 0;
      v82[400] = 0;
      *((_QWORD *)v82 + 53) = 0x800000000LL;
      *((_QWORD *)v82 + 66) = v82 + 544;
      *((_QWORD *)v82 + 67) = 0x600000000LL;
    }
    ptr = v82;
  }
  v82[*v82 + 1] = 0;
  v170 = v172;
  if ( &v83[v84] && !v83 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v84 > 0xF )
  {
    if ( v84 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v85 = (_QWORD *)operator new(v84 + 1);
    v172[0] = v84;
    v170 = v85;
LABEL_207:
    memcpy(v85, v83, v84);
    v85 = v170;
    goto LABEL_150;
  }
  if ( v84 == 1 )
  {
    LOBYTE(v172[0]) = *v83;
    v85 = v172;
    goto LABEL_150;
  }
  v85 = v172;
  if ( v84 )
    goto LABEL_207;
LABEL_150:
  v171 = v84;
  *((_BYTE *)v85 + v84) = 0;
  v86 = ptr;
  v87 = *(unsigned __int8 *)ptr;
  *(_BYTE *)ptr = v87 + 1;
  v88 = (unsigned __int8)v87;
  v89 = 4 * (v87 + 3);
  v90 = (void **)&v86[v89];
  v91 = (_BYTE *)v86[v89];
  if ( v170 == v172 )
  {
    v111 = v171;
    if ( v171 )
    {
      if ( v171 == 1 )
        *v91 = v172[0];
      else
        memcpy(v91, v170, v171);
      v111 = v171;
      v91 = *v90;
    }
    v90[1] = (void *)v111;
    v91[v111] = 0;
    v91 = v170;
  }
  else
  {
    if ( v91 == (_BYTE *)&v86[v89 + 2] )
    {
      *v90 = v170;
      v90[1] = (void *)v171;
      v90[2] = (void *)v172[0];
    }
    else
    {
      v92 = v86[4 * v88 + 14];
      *v90 = v170;
      v90[1] = (void *)v171;
      v90[2] = (void *)v172[0];
      if ( v91 )
      {
        v170 = v91;
        v172[0] = v92;
        goto LABEL_154;
      }
    }
    v91 = v172;
    v170 = v172;
  }
LABEL_154:
  v171 = 0;
  *v91 = 0;
  if ( v170 != v172 )
    operator delete(v170);
  if ( v166 != &v168 )
    operator delete(v166);
  if ( v163[0] != &v164 )
    operator delete(v163[0]);
  if ( (_BYTE)v182 )
  {
    sub_FC7790(si128.m128i_i64[1], p_ptr, SHIBYTE(v182));
    si128.m128i_i64[1] = 0;
    v182 = 0;
  }
  if ( v180 != p_ptr + 6 )
    operator delete(v180);
  v93 = (void **)ptr;
  if ( ptr )
  {
    v94 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] )
    {
      if ( (unsigned __int64)ptr < si128.m128i_i64[0] || (unsigned __int64)ptr > si128.m128i_i64[0] + 14848 )
      {
        v95 = *((_QWORD *)ptr + 66);
        v96 = v95 + ((unsigned __int64)*((unsigned int *)ptr + 134) << 6);
        while ( v95 != v96 )
        {
          while ( 1 )
          {
            v96 -= 64;
            v97 = *(void **)(v96 + 24);
            if ( v97 == (void *)(v96 + 40) )
              break;
            operator delete(v97);
            if ( v95 == v96 )
              goto LABEL_171;
          }
        }
LABEL_171:
        v98 = (void **)v93[66];
        if ( v98 != v93 + 68 )
          free(v98);
        v99 = (void **)v93[52];
        v100 = v93 + 52;
        if ( v99 != v93 + 54 )
          free(v99);
        v101 = v93 + 12;
        do
        {
          while ( 1 )
          {
            v100 -= 4;
            if ( *v100 == v100 + 2 )
              break;
            operator delete(*v100);
            if ( v100 == v101 )
              goto LABEL_178;
          }
        }
        while ( v100 != v101 );
LABEL_178:
        operator delete(v93, 0x3A0u);
      }
      else
      {
        v110 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
        *(_DWORD *)(si128.m128i_i64[0] + 14976) = v110 + 1;
        *(_QWORD *)(v94 + 8 * v110 + 14848) = v93;
      }
    }
  }
  v102 = v148;
  *v148 = v148 + 2;
  v102[1] = 0xC00000000LL;
LABEL_180:
  if ( src != &v160 )
    operator delete(src);
  if ( v157[0] != p_src + 2 )
    operator delete(v157[0]);
LABEL_35:
  v24 = (void **)v156;
  v25 = (void **)v155;
  if ( v156 != v155 )
  {
    do
    {
      while ( *v25 != v25 + 2 )
      {
        operator delete(*v25);
        v25 += 4;
        if ( v24 == v25 )
          goto LABEL_38;
      }
      v25 += 4;
    }
    while ( v24 != v25 );
LABEL_38:
    v25 = (void **)v155;
  }
  if ( v25 )
    operator delete(v25);
  v26 = (void **)v154;
  v27 = (void **)v153;
  if ( v154 != v153 )
  {
    do
    {
      while ( *v27 != v27 + 2 )
      {
        operator delete(*v27);
        v27 += 4;
        if ( v26 == v27 )
          goto LABEL_44;
      }
      v27 += 4;
    }
    while ( v26 != v27 );
LABEL_44:
    v27 = (void **)v153;
  }
  if ( v27 )
    operator delete(v27);
  if ( v174 != v152 + 2 )
    free(v174);
LABEL_3:
  v4 = (void **)v183;
  v5 = (void **)((char *)v183 + 40 * (unsigned int)v184);
  if ( v183 != v5 )
  {
    do
    {
      while ( 1 )
      {
        v5 -= 5;
        if ( *v5 == v5 + 2 )
          break;
        operator delete(*v5);
        if ( v4 == v5 )
          goto LABEL_6;
      }
    }
    while ( v4 != v5 );
LABEL_6:
    v5 = (void **)v183;
  }
  if ( v5 != v147 + 2 )
    free(v5);
  return v148;
}
