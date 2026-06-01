_QWORD *__fastcall sub_123E070(_QWORD *a1, __int64 a2, __int64 a3)
{
  void **v4; // rbp
  void **v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  const char **v14; // rbx
  signed __int64 v15; // rbp
  const char *v16; // r13
  size_t v17; // rax
  size_t v18; // r12
  char *v19; // rdi
  __int64 v20; // r12
  _BYTE *v21; // r13
  unsigned __int8 *v22; // rbx
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  void **v28; // rbx
  _BYTE *v29; // rdi
  __int64 v30; // rax
  void **v31; // rbx
  unsigned __int64 v32; // rax
  void **v33; // r12
  void **v34; // rbp
  void **v35; // rdi
  void **v36; // rdi
  void **v37; // r12
  void **v38; // rbp
  int v39; // eax
  __int64 v40; // rcx
  void **v41; // rbp
  void **v42; // rbx
  unsigned __int8 *v43; // rbx
  _QWORD *v44; // rdx
  __int64 v45; // rax
  void **v46; // rbp
  __int64 v47; // rax
  __int64 v48; // r12
  __int64 v49; // rbx
  void *v50; // rdi
  void **v51; // rdi
  void **v52; // rdi
  void **v53; // rbx
  void **v54; // r12
  char *v55; // rbx
  size_t v56; // rdx
  __int64 v57; // rdx
  unsigned __int64 v58; // rdx
  int v59; // eax
  _BYTE *v60; // rax
  __int64 v61; // rdx
  void **v62; // rbp
  void **v63; // r14
  char *v64; // r13
  void **v65; // r12
  _BYTE *v66; // rax
  signed __int64 v67; // rdx
  _BYTE *v68; // rbx
  signed __int64 v69; // r13
  int v70; // esi
  __m128i *v71; // rbx
  int v72; // ebp
  __int64 v73; // rax
  __int64 v74; // r13
  __int64 v75; // rdx
  __int64 v76; // r13
  __int64 v77; // r12
  void *v78; // rdi
  __m128i *v79; // r13
  int v80; // eax
  char *v81; // rbp
  char *v82; // r12
  _BYTE *v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  unsigned __int8 *v86; // r12
  _QWORD *v87; // rax
  _QWORD *v88; // r8
  __int64 v89; // rcx
  __int64 v90; // rax
  char *v91; // rbx
  _BYTE *v92; // rdi
  _BYTE *v93; // rdx
  __int64 v94; // rax
  void **v95; // rbx
  __int64 v96; // rax
  __int64 v97; // r12
  __int64 v98; // rbp
  void *v99; // rdi
  void **v100; // rdi
  void **v101; // rdi
  void **v102; // rbp
  void **v103; // r12
  __int64 v104; // rdx
  int v105; // eax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rbp
  __int64 v109; // r12
  __int64 v110; // rbp
  void *v111; // rdi
  size_t v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rax
  __int64 v117; // rdx
  __m128i *v118; // r12
  __int64 v119; // r13
  int v120; // ebx
  __int64 v121; // rax
  __int64 v122; // r15
  __int64 v123; // rax
  __int64 v124; // r14
  __int64 v125; // r15
  void *v126; // rdi
  __int64 v127; // [rsp+0h] [rbp-608h]
  _BYTE *src; // [rsp+10h] [rbp-5F8h]
  __int8 *srca; // [rsp+10h] [rbp-5F8h]
  __int8 *v130; // [rsp+18h] [rbp-5F0h]
  int v131; // [rsp+18h] [rbp-5F0h]
  const char **v132; // [rsp+28h] [rbp-5E0h]
  _QWORD *v133; // [rsp+30h] [rbp-5D8h]
  _QWORD *v135; // [rsp+50h] [rbp-5B8h]
  void *v136; // [rsp+60h] [rbp-5A8h] BYREF
  _QWORD *v137; // [rsp+68h] [rbp-5A0h]
  _QWORD v138[4]; // [rsp+80h] [rbp-588h] BYREF
  __int16 v139; // [rsp+A0h] [rbp-568h]
  void *v140; // [rsp+B0h] [rbp-558h] BYREF
  size_t n; // [rsp+B8h] [rbp-550h]
  _QWORD v142[2]; // [rsp+C0h] [rbp-548h] BYREF
  __int16 v143; // [rsp+D0h] [rbp-538h]
  void *v144; // [rsp+E0h] [rbp-528h] BYREF
  size_t v145; // [rsp+E8h] [rbp-520h]
  _QWORD v146[2]; // [rsp+F0h] [rbp-518h] BYREF
  __int16 v147; // [rsp+100h] [rbp-508h]
  void *v148; // [rsp+110h] [rbp-4F8h] BYREF
  unsigned __int64 v149; // [rsp+118h] [rbp-4F0h]
  __int64 v150[2]; // [rsp+120h] [rbp-4E8h] BYREF
  void *v151; // [rsp+130h] [rbp-4D8h]
  __int64 v152; // [rsp+140h] [rbp-4C8h] BYREF
  __int16 v153; // [rsp+150h] [rbp-4B8h]
  void *v154; // [rsp+160h] [rbp-4A8h] BYREF
  __int64 v155; // [rsp+168h] [rbp-4A0h]
  _BYTE v156[128]; // [rsp+170h] [rbp-498h] BYREF
  void *v157; // [rsp+1F0h] [rbp-418h] BYREF
  __int64 v158; // [rsp+1F8h] [rbp-410h]
  _BYTE v159[480]; // [rsp+200h] [rbp-408h] BYREF
  void *ptr; // [rsp+3E0h] [rbp-228h] BYREF
  __m128i si128; // [rsp+3E8h] [rbp-220h] BYREF
  char v162[8]; // [rsp+3F8h] [rbp-210h] BYREF
  void *v163; // [rsp+400h] [rbp-208h]
  _BYTE v164[16]; // [rsp+410h] [rbp-1F8h] BYREF
  __int16 v165; // [rsp+420h] [rbp-1E8h]

  v157 = v159;
  v158 = 0xC00000000LL;
  if ( !(unsigned __int8)sub_21B7850(a3, 3091, 3018, 1)
    || (v7 = sub_116CB20(a2, a3), v8 == 11)
    && *(_QWORD *)v7 == 0x70736E6367646D61LL
    && *(_WORD *)(v7 + 8) == 29289
    && *(_BYTE *)(v7 + 10) == 118 )
  {
    *a1 = a1 + 2;
    a1[1] = 0xC00000000LL;
    goto LABEL_3;
  }
  v154 = v156;
  v155 = 0x1000000000LL;
  if ( !*(_BYTE *)(a2 + 4880) )
  {
    sub_1173DC0(a2 + 3808, *(__int64 **)(a2 + 3736), a2 + 3744, *(_QWORD *)(a2 + 3800), 1, 0);
    *(_BYTE *)(a2 + 4880) = 1;
  }
  v9 = *(_QWORD **)(a2 + 3944);
  for ( i = *(_QWORD **)(a2 + 3936); v9 != i; LODWORD(v155) = v155 + 1 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 16LL))(a3, *i, i[1]);
    v12 = (unsigned int)v155;
    v13 = (unsigned int)v155 + 1LL;
    if ( v13 > HIDWORD(v155) )
    {
      v127 = v11;
      sub_2237220(&v154, v156, v13, 8);
      v12 = (unsigned int)v155;
      v11 = v127;
    }
    i += 4;
    *((_QWORD *)v154 + v12) = v11;
  }
  sub_11C1900(a3, (__int64)&v154, (char *)&byte_22F0C30, "HIP_DEVICE_LIB_PATH");
  sub_21B7150(&v136, a3, 2111);
  v135 = v137;
  if ( v137 != v136 )
  {
    v133 = v136;
    while ( 1 )
    {
      v14 = (const char **)v154;
      v15 = v133[1];
      src = (_BYTE *)*v133;
      v132 = (const char **)((char *)v154 + 8 * (unsigned int)v155);
      if ( v154 != v132 )
      {
        while ( 1 )
        {
          v16 = *v14;
          if ( *v14 )
          {
            v17 = strlen(*v14);
            ptr = v162;
            v18 = v17;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
            if ( v17 > 0x80 )
            {
              sub_2236E10(&ptr, v162, v17, 1);
              v19 = (char *)ptr + si128.m128i_i64[0];
LABEL_25:
              memcpy(v19, v16, v18);
              v17 = v18 + si128.m128i_i64[0];
              goto LABEL_26;
            }
            if ( v17 )
            {
              v19 = v162;
              goto LABEL_25;
            }
          }
          else
          {
            ptr = v162;
            v17 = 0;
            si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          }
LABEL_26:
          si128.m128i_i64[0] = v17;
          LOWORD(v151) = 257;
          v139 = 261;
          v138[0] = src;
          v147 = 257;
          v143 = 257;
          v138[1] = v15;
          sub_228A3B0(&ptr, v138, &v140, &v144, &v148);
          v20 = si128.m128i_i64[0];
          v21 = ptr;
          LOWORD(v151) = 261;
          v148 = ptr;
          v149 = si128.m128i_i64[0];
          if ( !(unsigned int)sub_228C1E0(&v148, 0) )
          {
            if ( HIDWORD(v158) <= (unsigned int)v158 )
            {
              v71 = (__m128i *)sub_2237400(&v157, v159, 0, 40, &v148);
              srca = &v71->m128i_i8[40 * (unsigned int)v158];
              *(_QWORD *)srca = srca + 16;
              sub_123B150(srca, v21, (__int64)&v21[v20]);
              srca[32] = 1;
              sub_1171470((__int64)&v157, v71);
              v72 = (int)v148;
              if ( v157 != v159 )
                free(v157);
              v157 = v71;
              HIDWORD(v158) = v72;
              LODWORD(v158) = v158 + 1;
            }
            else
            {
              v55 = (char *)v157 + 40 * (unsigned int)v158;
              *(_QWORD *)v55 = v55 + 16;
              sub_123B150(v55, v21, (__int64)&v21[v20]);
              LODWORD(v158) = v158 + 1;
              v55[32] = 1;
            }
            if ( ptr != v162 )
              free(ptr);
            goto LABEL_60;
          }
          if ( ptr == v162 )
          {
            if ( v132 == ++v14 )
              break;
          }
          else
          {
            free(ptr);
            if ( v132 == ++v14 )
              break;
          }
        }
      }
      sub_FC70B0((__int64)&v148, **(_QWORD **)(a2 + 8), 0, 443);
      v22 = (unsigned __int8 *)v148;
      if ( !v148 )
      {
        v58 = v149;
        v59 = *(_DWORD *)(v149 + 14976);
        if ( v59 )
        {
          v73 = (unsigned int)(v59 - 1);
          *(_DWORD *)(v149 + 14976) = v73;
          v22 = *(unsigned __int8 **)(v58 + 8 * v73 + 14848);
          v74 = *((unsigned int *)v22 + 134);
          *v22 = 0;
          v75 = *((_QWORD *)v22 + 66);
          *((_DWORD *)v22 + 106) = 0;
          v76 = v75 + (v74 << 6);
          v77 = v75;
          while ( v77 != v76 )
          {
            while ( 1 )
            {
              v76 -= 64;
              v78 = *(void **)(v76 + 24);
              if ( v78 == (void *)(v76 + 40) )
                break;
              operator delete(v78);
              if ( v77 == v76 )
                goto LABEL_156;
            }
          }
LABEL_156:
          *((_DWORD *)v22 + 134) = 0;
        }
        else
        {
          v22 = (unsigned __int8 *)operator new(0x3A0u);
          *v22 = 0;
          *((_QWORD *)v22 + 12) = v22 + 112;
          *((_QWORD *)v22 + 16) = v22 + 144;
          *((_QWORD *)v22 + 20) = v22 + 176;
          *((_QWORD *)v22 + 24) = v22 + 208;
          *((_QWORD *)v22 + 28) = v22 + 240;
          *((_QWORD *)v22 + 32) = v22 + 272;
          *((_QWORD *)v22 + 36) = v22 + 304;
          *((_QWORD *)v22 + 40) = v22 + 336;
          *((_QWORD *)v22 + 44) = v22 + 368;
          *((_QWORD *)v22 + 48) = v22 + 400;
          *((_QWORD *)v22 + 52) = v22 + 432;
          *((_QWORD *)v22 + 13) = 0;
          v22[112] = 0;
          *((_QWORD *)v22 + 17) = 0;
          v22[144] = 0;
          *((_QWORD *)v22 + 21) = 0;
          v22[176] = 0;
          *((_QWORD *)v22 + 25) = 0;
          v22[208] = 0;
          *((_QWORD *)v22 + 29) = 0;
          v22[240] = 0;
          *((_QWORD *)v22 + 33) = 0;
          v22[272] = 0;
          *((_QWORD *)v22 + 37) = 0;
          v22[304] = 0;
          *((_QWORD *)v22 + 41) = 0;
          v22[336] = 0;
          *((_QWORD *)v22 + 45) = 0;
          v22[368] = 0;
          *((_QWORD *)v22 + 49) = 0;
          v22[400] = 0;
          *((_QWORD *)v22 + 53) = 0x800000000LL;
          *((_QWORD *)v22 + 66) = v22 + 544;
          *((_QWORD *)v22 + 67) = 0x600000000LL;
        }
        v148 = v22;
      }
      v22[*v22 + 1] = 0;
      v140 = v142;
      if ( &src[v15] && !src )
        goto LABEL_240;
      if ( (unsigned __int64)v15 > 0xF )
        break;
      if ( v15 == 1 )
      {
        LOBYTE(v142[0]) = *src;
        v23 = v142;
        goto LABEL_35;
      }
      v23 = v142;
      if ( v15 )
        goto LABEL_118;
LABEL_35:
      n = v15;
      *((_BYTE *)v23 + v15) = 0;
      v24 = v148;
      v25 = *(unsigned __int8 *)v148;
      *(_BYTE *)v148 = v25 + 1;
      v26 = (unsigned __int8)v25;
      v27 = 4 * (v25 + 3);
      v28 = (void **)&v24[v27];
      v29 = (_BYTE *)v24[v27];
      if ( v140 == v142 )
      {
        v56 = n;
        if ( n )
        {
          if ( n == 1 )
            *v29 = v142[0];
          else
            memcpy(v29, v140, n);
          v56 = n;
          v29 = *v28;
        }
        v28[1] = (void *)v56;
        v29[v56] = 0;
        v29 = v140;
        goto LABEL_39;
      }
      if ( v29 == (_BYTE *)&v24[v27 + 2] )
      {
        *v28 = v140;
        v28[1] = (void *)n;
        v28[2] = (void *)v142[0];
LABEL_127:
        v29 = v142;
        v140 = v142;
        goto LABEL_39;
      }
      v30 = v24[4 * v26 + 14];
      *v28 = v140;
      v28[1] = (void *)n;
      v28[2] = (void *)v142[0];
      if ( !v29 )
        goto LABEL_127;
      v140 = v29;
      v142[0] = v30;
LABEL_39:
      n = 0;
      *v29 = 0;
      if ( v140 != v142 )
        operator delete(v140);
      if ( (_BYTE)v153 )
      {
        sub_FC7790(v150[0], (__int64 *)&v148, SHIBYTE(v153));
        v150[0] = 0;
        v153 = 0;
      }
      if ( v151 != &v152 )
        operator delete(v151);
      v31 = (void **)v148;
      if ( v148 )
      {
        v32 = v149;
        if ( v149 )
        {
          if ( (unsigned __int64)v148 < v149 || (unsigned __int64)v148 > v149 + 14848 )
          {
            v33 = *((void ***)v148 + 66);
            v34 = &v33[8 * (unsigned __int64)*((unsigned int *)v148 + 134)];
            if ( v33 != v34 )
            {
              do
              {
                while ( 1 )
                {
                  v34 -= 8;
                  v35 = (void **)v34[3];
                  if ( v35 == v34 + 5 )
                    break;
                  operator delete(v35);
                  if ( v33 == v34 )
                    goto LABEL_51;
                }
              }
              while ( v33 != v34 );
LABEL_51:
              v34 = (void **)v31[66];
            }
            if ( v34 != v31 + 68 )
              free(v34);
            v36 = (void **)v31[52];
            if ( v36 != v31 + 54 )
              free(v36);
            v37 = v31 + 48;
            v38 = v31 + 8;
            do
            {
              while ( *v37 != v37 + 2 )
              {
                operator delete(*v37);
                v37 -= 4;
                if ( v38 == v37 )
                  goto LABEL_59;
              }
              v37 -= 4;
            }
            while ( v37 != v38 );
LABEL_59:
            operator delete(v31, 0x3A0u);
          }
          else
          {
            v57 = *(unsigned int *)(v149 + 14976);
            *(_DWORD *)(v149 + 14976) = v57 + 1;
            *(_QWORD *)(v32 + 8 * v57 + 14848) = v31;
          }
        }
      }
LABEL_60:
      v133 += 4;
      if ( v135 == v133 )
        goto LABEL_61;
    }
    if ( v15 < 0 )
      goto LABEL_241;
    v23 = (_QWORD *)operator new(v15 + 1);
    v142[0] = v15;
    v140 = v23;
LABEL_118:
    memcpy(v23, src, v15);
    v23 = v140;
    goto LABEL_35;
  }
  if ( !*(_BYTE *)(a2 + 4880) )
  {
    sub_1173DC0(a2 + 3808, *(__int64 **)(a2 + 3736), a2 + 3744, *(_QWORD *)(a2 + 3800), 1, 0);
    *(_BYTE *)(a2 + 4880) = 1;
  }
  if ( !*(_BYTE *)(a2 + 3817) )
  {
    sub_FC70B0((__int64)&ptr, **(_QWORD **)(a2 + 8), 0, 442);
    v43 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v104 = si128.m128i_i64[0];
      v105 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
      if ( v105 )
      {
        v107 = (unsigned int)(v105 - 1);
        *(_DWORD *)(si128.m128i_i64[0] + 14976) = v107;
        v43 = *(unsigned __int8 **)(v104 + 8 * v107 + 14848);
        v108 = *((unsigned int *)v43 + 134);
        *v43 = 0;
        v109 = *((_QWORD *)v43 + 66);
        *((_DWORD *)v43 + 106) = 0;
        v110 = v109 + (v108 << 6);
        while ( v109 != v110 )
        {
          while ( 1 )
          {
            v110 -= 64;
            v111 = *(void **)(v110 + 24);
            if ( v111 == (void *)(v110 + 40) )
              break;
            operator delete(v111);
            if ( v109 == v110 )
              goto LABEL_222;
          }
        }
LABEL_222:
        *((_DWORD *)v43 + 134) = 0;
      }
      else
      {
        v43 = (unsigned __int8 *)operator new(0x3A0u);
        *v43 = 0;
        *((_QWORD *)v43 + 12) = v43 + 112;
        *((_QWORD *)v43 + 16) = v43 + 144;
        *((_QWORD *)v43 + 20) = v43 + 176;
        *((_QWORD *)v43 + 24) = v43 + 208;
        *((_QWORD *)v43 + 28) = v43 + 240;
        *((_QWORD *)v43 + 32) = v43 + 272;
        *((_QWORD *)v43 + 36) = v43 + 304;
        *((_QWORD *)v43 + 40) = v43 + 336;
        *((_QWORD *)v43 + 44) = v43 + 368;
        *((_QWORD *)v43 + 48) = v43 + 400;
        *((_QWORD *)v43 + 52) = v43 + 432;
        *((_QWORD *)v43 + 13) = 0;
        v43[112] = 0;
        *((_QWORD *)v43 + 17) = 0;
        v43[144] = 0;
        *((_QWORD *)v43 + 21) = 0;
        v43[176] = 0;
        *((_QWORD *)v43 + 25) = 0;
        v43[208] = 0;
        *((_QWORD *)v43 + 29) = 0;
        v43[240] = 0;
        *((_QWORD *)v43 + 33) = 0;
        v43[272] = 0;
        *((_QWORD *)v43 + 37) = 0;
        v43[304] = 0;
        *((_QWORD *)v43 + 41) = 0;
        v43[336] = 0;
        *((_QWORD *)v43 + 45) = 0;
        v43[368] = 0;
        *((_QWORD *)v43 + 49) = 0;
        v43[400] = 0;
        *((_QWORD *)v43 + 53) = 0x800000000LL;
        *((_QWORD *)v43 + 66) = v43 + 544;
        *((_QWORD *)v43 + 67) = 0x600000000LL;
      }
      ptr = v43;
    }
    v43[*v43 + 1] = 2;
    v44 = ptr;
    v45 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v45 + 1;
    v44[v45 + 2] = 0;
    if ( (_BYTE)v165 )
    {
      sub_FC7790(si128.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v165));
      si128.m128i_i64[1] = 0;
      v165 = 0;
    }
    if ( v163 != v164 )
      operator delete(v163);
    v46 = (void **)ptr;
    if ( ptr )
    {
      v47 = si128.m128i_i64[0];
      if ( si128.m128i_i64[0] )
      {
        if ( (unsigned __int64)ptr < si128.m128i_i64[0] || (unsigned __int64)ptr > si128.m128i_i64[0] + 14848 )
        {
          v48 = *((_QWORD *)ptr + 66);
          v49 = v48 + ((unsigned __int64)*((unsigned int *)ptr + 134) << 6);
          while ( v48 != v49 )
          {
            while ( 1 )
            {
              v49 -= 64;
              v50 = *(void **)(v49 + 24);
              if ( v50 == (void *)(v49 + 40) )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_90;
            }
          }
LABEL_90:
          v51 = (void **)v46[66];
          if ( v51 != v46 + 68 )
            free(v51);
          v52 = (void **)v46[52];
          if ( v52 != v46 + 54 )
            free(v52);
          v53 = v46 + 48;
          v54 = v46 + 8;
          do
          {
            while ( *v53 != v53 + 2 )
            {
              operator delete(*v53);
              v53 -= 4;
              if ( v53 == v54 )
                goto LABEL_97;
            }
            v53 -= 4;
          }
          while ( v53 != v54 );
LABEL_97:
          operator delete(v46, 0x3A0u);
        }
        else
        {
          v85 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
          *(_DWORD *)(si128.m128i_i64[0] + 14976) = v85 + 1;
          *(_QWORD *)(v47 + 8 * v85 + 14848) = v46;
        }
      }
    }
    *a1 = a1 + 2;
    a1[1] = 0xC00000000LL;
    goto LABEL_63;
  }
  v60 = (_BYTE *)sub_116CB20(a2, a3);
  if ( v60 )
  {
    v148 = v150;
    sub_123B150(&v148, v60, (__int64)&v60[v61]);
  }
  else
  {
    LOBYTE(v150[0]) = 0;
    v148 = v150;
    v149 = 0;
  }
  sub_11767F0(&ptr, a2, a3, (__int64)&v148, 0);
  if ( v148 != v150 )
    operator delete(v148);
  v62 = (void **)((char *)ptr + 40 * si128.m128i_u32[0]);
  if ( ptr != v62 )
  {
    v63 = (void **)ptr;
    do
    {
      while ( 1 )
      {
        v148 = v150;
        sub_123B090(&v148, *v63, (__int64)v63[1] + (_QWORD)*v63);
        LOBYTE(v151) = *((_BYTE *)v63 + 32);
        if ( HIDWORD(v158) <= (unsigned int)v158 )
        {
          v79 = (__m128i *)sub_2237400(&v157, v159, 0, 40, &v144);
          v130 = &v79->m128i_i8[40 * (unsigned int)v158];
          *(_QWORD *)v130 = v130 + 16;
          sub_123B090(v130, v148, (__int64)v148 + v149);
          v130[32] = (char)v151;
          sub_1171470((__int64)&v157, v79);
          v80 = (int)v144;
          if ( v157 != v159 )
          {
            v131 = (int)v144;
            free(v157);
            v80 = v131;
          }
          v157 = v79;
          HIDWORD(v158) = v80;
          LODWORD(v158) = v158 + 1;
        }
        else
        {
          v64 = (char *)v157 + 40 * (unsigned int)v158;
          *(_QWORD *)v64 = v64 + 16;
          sub_123B090(v64, v148, (__int64)v148 + v149);
          LODWORD(v158) = v158 + 1;
          v64[32] = (char)v151;
        }
        if ( v148 == v150 )
          break;
        operator delete(v148);
        v63 += 5;
        if ( v62 == v63 )
          goto LABEL_141;
      }
      v63 += 5;
    }
    while ( v62 != v63 );
LABEL_141:
    v65 = (void **)ptr;
    v62 = (void **)((char *)ptr + 40 * si128.m128i_u32[0]);
    if ( ptr != v62 )
    {
      do
      {
        while ( 1 )
        {
          v62 -= 5;
          if ( *v62 == v62 + 2 )
            break;
          operator delete(*v62);
          if ( v65 == v62 )
            goto LABEL_144;
        }
      }
      while ( v65 != v62 );
LABEL_144:
      v62 = (void **)ptr;
    }
  }
  if ( v62 != (void **)&si128.m128i_u64[1] )
    free(v62);
  v66 = (_BYTE *)sub_21B7BC0(a3, 2054, &byte_22F0C30, 0);
  v68 = v66;
  v69 = v67;
  if ( !v67 )
  {
    v40 = (__int64)a1;
    v70 = v158;
    *a1 = a1 + 2;
    a1[1] = 0xC00000000LL;
    if ( v70 )
      goto LABEL_149;
    goto LABEL_63;
  }
  v81 = &v66[v67];
  LOWORD(v163) = 261;
  ptr = v66;
  si128.m128i_i64[0] = v67;
  if ( (unsigned int)sub_228C1E0(&ptr, 0) )
  {
    sub_FC70B0((__int64)&ptr, **(_QWORD **)(a2 + 8), 0, 443);
    v86 = (unsigned __int8 *)ptr;
    if ( !ptr )
    {
      v114 = si128.m128i_i64[0];
      v115 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
      if ( v115 )
      {
        v121 = (unsigned int)(v115 - 1);
        *(_DWORD *)(si128.m128i_i64[0] + 14976) = v121;
        v86 = *(unsigned __int8 **)(v114 + 8 * v121 + 14848);
        v122 = *((unsigned int *)v86 + 134);
        v123 = *((_QWORD *)v86 + 66);
        *v86 = 0;
        *((_DWORD *)v86 + 106) = 0;
        v124 = v123;
        v125 = v123 + (v122 << 6);
        if ( v123 != v125 )
        {
          do
          {
            while ( 1 )
            {
              v125 -= 64;
              v126 = *(void **)(v125 + 24);
              if ( v126 == (void *)(v125 + 40) )
                break;
              operator delete(v126);
              if ( v124 == v125 )
                goto LABEL_251;
            }
          }
          while ( v124 != v125 );
        }
LABEL_251:
        *((_DWORD *)v86 + 134) = 0;
      }
      else
      {
        v86 = (unsigned __int8 *)operator new(0x3A0u);
        *v86 = 0;
        *((_QWORD *)v86 + 12) = v86 + 112;
        *((_QWORD *)v86 + 16) = v86 + 144;
        *((_QWORD *)v86 + 20) = v86 + 176;
        *((_QWORD *)v86 + 24) = v86 + 208;
        *((_QWORD *)v86 + 28) = v86 + 240;
        *((_QWORD *)v86 + 32) = v86 + 272;
        *((_QWORD *)v86 + 36) = v86 + 304;
        *((_QWORD *)v86 + 40) = v86 + 336;
        *((_QWORD *)v86 + 44) = v86 + 368;
        *((_QWORD *)v86 + 48) = v86 + 400;
        *((_QWORD *)v86 + 52) = v86 + 432;
        *((_QWORD *)v86 + 13) = 0;
        v86[112] = 0;
        *((_QWORD *)v86 + 17) = 0;
        v86[144] = 0;
        *((_QWORD *)v86 + 21) = 0;
        v86[176] = 0;
        *((_QWORD *)v86 + 25) = 0;
        v86[208] = 0;
        *((_QWORD *)v86 + 29) = 0;
        v86[240] = 0;
        *((_QWORD *)v86 + 33) = 0;
        v86[272] = 0;
        *((_QWORD *)v86 + 37) = 0;
        v86[304] = 0;
        *((_QWORD *)v86 + 41) = 0;
        v86[336] = 0;
        *((_QWORD *)v86 + 45) = 0;
        v86[368] = 0;
        *((_QWORD *)v86 + 49) = 0;
        v86[400] = 0;
        *((_QWORD *)v86 + 53) = 0x800000000LL;
        *((_QWORD *)v86 + 66) = v86 + 544;
        *((_QWORD *)v86 + 67) = 0x600000000LL;
      }
      ptr = v86;
    }
    v86[*v86 + 1] = 0;
    v144 = v146;
    if ( !v68 && v81 )
      goto LABEL_240;
    if ( (unsigned __int64)v69 > 0xF )
    {
      if ( v69 < 0 )
        goto LABEL_241;
      v106 = (_QWORD *)operator new(v69 + 1);
      v146[0] = v69;
      v144 = v106;
    }
    else
    {
      if ( v69 == 1 )
      {
        LOBYTE(v146[0]) = *v68;
        v87 = v146;
        goto LABEL_186;
      }
      v106 = v146;
    }
    memcpy(v106, v68, v69);
    v87 = v144;
LABEL_186:
    v145 = v69;
    *((_BYTE *)v87 + v69) = 0;
    v88 = ptr;
    v89 = *(unsigned __int8 *)ptr;
    *(_BYTE *)ptr = v89 + 1;
    v90 = 4 * (v89 + 3);
    v91 = (char *)&v88[v90];
    v92 = (_BYTE *)v88[v90];
    v93 = v92;
    if ( v144 == v146 )
    {
      v112 = v145;
      if ( v145 )
      {
        if ( v145 == 1 )
          *v92 = v146[0];
        else
          memcpy(v92, v144, v145);
        v92 = *(_BYTE **)v91;
        v112 = v145;
      }
      *((_QWORD *)v91 + 1) = v112;
      v92[v112] = 0;
      v93 = v144;
      goto LABEL_190;
    }
    if ( v92 == (_BYTE *)&v88[v90 + 2] )
    {
      *(_QWORD *)v91 = v144;
      *((_QWORD *)v91 + 1) = v145;
      *((_QWORD *)v91 + 2) = v146[0];
    }
    else
    {
      v94 = v88[4 * (int)v89 + 14];
      *(_QWORD *)v91 = v144;
      *((_QWORD *)v91 + 1) = v145;
      *((_QWORD *)v91 + 2) = v146[0];
      if ( v92 )
      {
        v144 = v92;
        v146[0] = v94;
LABEL_190:
        v145 = 0;
        *v93 = 0;
        if ( v144 != v146 )
          operator delete(v144);
        if ( (_BYTE)v165 )
        {
          sub_FC7790(si128.m128i_i64[1], (__int64 *)&ptr, SHIBYTE(v165));
          si128.m128i_i64[1] = 0;
          v165 = 0;
        }
        if ( v163 != v164 )
          operator delete(v163);
        v95 = (void **)ptr;
        if ( ptr )
        {
          v96 = si128.m128i_i64[0];
          if ( si128.m128i_i64[0] )
          {
            if ( (unsigned __int64)ptr < si128.m128i_i64[0] || (unsigned __int64)ptr > si128.m128i_i64[0] + 14848 )
            {
              v97 = *((_QWORD *)ptr + 66);
              v98 = v97 + ((unsigned __int64)*((unsigned int *)ptr + 134) << 6);
              while ( v97 != v98 )
              {
                while ( 1 )
                {
                  v98 -= 64;
                  v99 = *(void **)(v98 + 24);
                  if ( v99 == (void *)(v98 + 40) )
                    break;
                  operator delete(v99);
                  if ( v97 == v98 )
                    goto LABEL_203;
                }
              }
LABEL_203:
              v100 = (void **)v95[66];
              if ( v100 != v95 + 68 )
                free(v100);
              v101 = (void **)v95[52];
              v102 = v95 + 52;
              if ( v101 != v95 + 54 )
                free(v101);
              v103 = v95 + 12;
              do
              {
                while ( 1 )
                {
                  v102 -= 4;
                  if ( *v102 == v102 + 2 )
                    break;
                  operator delete(*v102);
                  if ( v102 == v103 )
                    goto LABEL_210;
                }
              }
              while ( v102 != v103 );
LABEL_210:
              operator delete(v95, 0x3A0u);
            }
            else
            {
              v113 = *(unsigned int *)(si128.m128i_i64[0] + 14976);
              *(_DWORD *)(si128.m128i_i64[0] + 14976) = v113 + 1;
              *(_QWORD *)(v96 + 8 * v113 + 14848) = v95;
            }
          }
        }
LABEL_61:
        v39 = v158;
        goto LABEL_62;
      }
    }
    v93 = v146;
    v144 = v146;
    goto LABEL_190;
  }
  if ( HIDWORD(v158) > (unsigned int)v158 )
  {
    v82 = (char *)v157 + 40 * (unsigned int)v158;
    v83 = v82 + 16;
    *(_QWORD *)v82 = v82 + 16;
    if ( v68 || !v81 )
    {
      if ( (unsigned __int64)v69 <= 0xF )
      {
        if ( v69 == 1 )
        {
          v82[16] = *v68;
LABEL_177:
          *((_QWORD *)v82 + 1) = v69;
          v83[v69] = 0;
          v84 = v158;
          v82[32] = 1;
          v39 = v84 + 1;
          LODWORD(v158) = v39;
          goto LABEL_62;
        }
LABEL_236:
        memcpy(v83, v68, v69);
        v83 = *(_BYTE **)v82;
        goto LABEL_177;
      }
      if ( v69 >= 0 )
      {
        v83 = (_BYTE *)operator new(v69 + 1);
        *((_QWORD *)v82 + 2) = v69;
        *(_QWORD *)v82 = v83;
        goto LABEL_236;
      }
LABEL_241:
      std::__throw_length_error("basic_string::_M_create");
    }
LABEL_240:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  v116 = sub_2237400(&v157, v159, 0, 40, &ptr);
  v117 = (__int64)&v68[v69];
  v118 = (__m128i *)v116;
  v119 = v116 + 40LL * (unsigned int)v158;
  *(_QWORD *)v119 = v119 + 16;
  sub_123B150((_QWORD *)v119, v68, v117);
  *(_BYTE *)(v119 + 32) = 1;
  sub_1171470((__int64)&v157, v118);
  v120 = (int)ptr;
  if ( v157 != v159 )
    free(v157);
  v157 = v118;
  HIDWORD(v158) = v120;
  v39 = v158 + 1;
  LODWORD(v158) = v158 + 1;
LABEL_62:
  v40 = (__int64)a1;
  a1[1] = 0xC00000000LL;
  *a1 = a1 + 2;
  if ( v39 )
LABEL_149:
    sub_1178510(v40, (__int64)&v157);
LABEL_63:
  v41 = (void **)v137;
  v42 = (void **)v136;
  if ( v137 != v136 )
  {
    do
    {
      while ( *v42 != v42 + 2 )
      {
        operator delete(*v42);
        v42 += 4;
        if ( v42 == v41 )
          goto LABEL_66;
      }
      v42 += 4;
    }
    while ( v41 != v42 );
LABEL_66:
    v42 = (void **)v136;
  }
  if ( v42 )
    operator delete(v42);
  if ( v154 != v156 )
    free(v154);
LABEL_3:
  v4 = (void **)v157;
  v5 = (void **)((char *)v157 + 40 * (unsigned int)v158);
  if ( v157 != v5 )
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
    v5 = (void **)v157;
  }
  if ( v5 != (void **)v159 )
    free(v5);
  return a1;
}
