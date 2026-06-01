void __fastcall sub_1199610(
        __int64 a1,
        size_t a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128i a8)
{
  void **v10; // r15
  void *v11; // rcx
  __int64 v12; // rbp
  void *v13; // r12
  _QWORD *v14; // rbx
  unsigned __int32 v15; // r13d
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  unsigned __int64 v18; // r14
  const char *v19; // rax
  char *v20; // r13
  const char *v21; // rdi
  __int64 v22; // rdx
  const char **v23; // r14
  const char **v24; // rbp
  size_t v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  const char **v28; // rcx
  const char *v29; // r12
  __m128i *v30; // rax
  _BYTE *v31; // rsi
  __int64 v32; // rdx
  __m128i *v33; // rax
  __m128i *v34; // rax
  __m128i *v35; // rax
  __int64 v36; // rbp
  void **v37; // r12
  const __m128i *v38; // rax
  unsigned __int64 v39; // rsi
  __m128i *v40; // rdx
  const __m128i *v41; // rcx
  void **v42; // r13
  int v43; // r13d
  _QWORD *v44; // r13
  void **v45; // r12
  _QWORD *v46; // rax
  _QWORD *v47; // rdi
  void **v48; // r13
  __int64 v49; // rsi
  void **v50; // rbx
  void **v51; // rax
  unsigned __int64 v52; // rsi
  size_t v53; // r8
  _BYTE *v54; // rdi
  _BYTE *v55; // rcx
  size_t v56; // rbp
  unsigned __int64 v57; // rax
  _BYTE *v58; // rdi
  void **v59; // r13
  size_t v60; // rsi
  void *v61; // rbp
  size_t v62; // r8
  _BYTE *v63; // rdi
  _BYTE *v64; // rcx
  size_t v65; // r14
  unsigned __int64 v66; // rax
  _BYTE *v67; // rdi
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // rdx
  __m128i *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  void **v74; // rbp
  void **v75; // rbx
  __int64 v76; // rbx
  const __m128i *v77; // r13
  __int64 v78; // r14
  __int64 v79; // rbp
  __int64 v80; // rsi
  int v81; // ecx
  void ***v82; // rdx
  unsigned __int64 v83; // r13
  void **v84; // rax
  void **v85; // rdi
  size_t v86; // rdx
  char *v87; // rbx
  char *v88; // r12
  __m128i *v89; // r13
  __m128i *v90; // rbp
  _BYTE *v91; // rsi
  __int64 v92; // rdx
  __m128i *v93; // rax
  unsigned int v94; // esi
  __m128i *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __m128i *v98; // r14
  __m128i *v99; // rax
  void **v100; // rdx
  const __m128i *v101; // rax
  unsigned __int64 v102; // rsi
  __m128i *v103; // rdx
  const __m128i *v104; // rcx
  __m128i *v105; // r15
  char *v106; // r13
  void **v107; // rbx
  void **v108; // rbp
  int v109; // eax
  __int64 v110; // rbp
  char v111; // r15
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int64 v115; // rsi
  _QWORD *v116; // r14
  _QWORD **v117; // rax
  unsigned __int64 v118; // rdi
  __int64 v119; // rax
  unsigned __int64 v120; // rcx
  __int64 *v121; // rdx
  _QWORD *v122; // rcx
  __int64 v123; // rax
  _QWORD *v124; // rbx
  int v125; // ebx
  const __m128i *v126; // [rsp+18h] [rbp-390h]
  char *v127; // [rsp+38h] [rbp-370h]
  __int64 v128; // [rsp+38h] [rbp-370h]
  size_t v129; // [rsp+48h] [rbp-360h]
  void **v130; // [rsp+48h] [rbp-360h]
  int v131; // [rsp+48h] [rbp-360h]
  char *v132; // [rsp+58h] [rbp-350h]
  __m128i *v133; // [rsp+58h] [rbp-350h]
  size_t v134; // [rsp+68h] [rbp-340h]
  __int64 v135; // [rsp+78h] [rbp-330h]
  __int64 v138; // [rsp+90h] [rbp-318h]
  size_t v139; // [rsp+A0h] [rbp-308h]
  __int64 v144; // [rsp+D8h] [rbp-2D0h] BYREF
  void *v145[2]; // [rsp+E0h] [rbp-2C8h] BYREF
  _BYTE v146[16]; // [rsp+F0h] [rbp-2B8h] BYREF
  void *v147[2]; // [rsp+100h] [rbp-2A8h] BYREF
  _BYTE v148[16]; // [rsp+110h] [rbp-298h] BYREF
  void *v149; // [rsp+120h] [rbp-288h] BYREF
  size_t v150; // [rsp+128h] [rbp-280h]
  __int64 v151; // [rsp+130h] [rbp-278h]
  void *v152; // [rsp+140h] [rbp-268h] BYREF
  __int64 v153; // [rsp+148h] [rbp-260h]
  __m128i v154; // [rsp+150h] [rbp-258h] BYREF
  void **v155; // [rsp+160h] [rbp-248h] BYREF
  __int64 v156; // [rsp+168h] [rbp-240h]
  _BYTE v157[32]; // [rsp+170h] [rbp-238h] BYREF
  void *ptr; // [rsp+190h] [rbp-218h] BYREF
  __int64 v159; // [rsp+198h] [rbp-210h]
  _BYTE v160[48]; // [rsp+1A0h] [rbp-208h] BYREF
  void *v161; // [rsp+1D0h] [rbp-1D8h] BYREF
  __int64 v162; // [rsp+1D8h] [rbp-1D0h]
  __m128i v163; // [rsp+1E0h] [rbp-1C8h] BYREF
  __m128i *v164; // [rsp+1F0h] [rbp-1B8h]
  __int64 v165; // [rsp+1F8h] [rbp-1B0h]
  __m128i v166; // [rsp+200h] [rbp-1A8h] BYREF
  __m128 *v167; // [rsp+210h] [rbp-198h]
  __int64 v168; // [rsp+218h] [rbp-190h]
  __m128 v169; // [rsp+220h] [rbp-188h] BYREF
  __m128 *v170; // [rsp+230h] [rbp-178h]
  __int64 v171; // [rsp+238h] [rbp-170h]
  __m128 v172; // [rsp+240h] [rbp-168h] BYREF
  void *v173; // [rsp+250h] [rbp-158h] BYREF
  __int64 v174; // [rsp+258h] [rbp-150h]
  _BYTE v175[128]; // [rsp+260h] [rbp-148h] BYREF
  void *v176; // [rsp+2E0h] [rbp-C8h] BYREF
  __int64 v177; // [rsp+2E8h] [rbp-C0h]
  _BYTE v178[16]; // [rsp+2F0h] [rbp-B8h] BYREF
  __int16 v179; // [rsp+300h] [rbp-A8h]

  v173 = v175;
  v174 = 0x1000000000LL;
  sub_10DC5D0((__int64)&v173, (__int64)"-o");
  sub_10DC5D0((__int64)&v173, *a4);
  v126 = *(const __m128i **)a5;
  v138 = *(_QWORD *)a5 + 40LL * *(unsigned int *)(a5 + 8);
  if ( v138 != *(_QWORD *)a5 )
  {
    v10 = &v149;
    while ( 1 )
    {
      v11 = nullptr;
      v12 = v126[1].m128i_i64[0];
      v13 = *(void **)(v12 + 72);
      v14 = *(_QWORD **)(v12 + 80);
      v15 = *(_DWORD *)(v12 + 64);
      if ( v13 )
        v11 = (void *)strlen(*(const char **)(v12 + 72));
      v16 = sub_10D5E20(a2, v14, v13, v11, v15);
      v17 = *(_QWORD *)(a2 + 80);
      v18 = v16;
      (*(void (__fastcall **)(void **, _QWORD *, const __m128i *))(*v14 + 64LL))(&v161, v14, v126);
      v176 = &v161;
      v179 = 260;
      v19 = (const char *)sub_10DA6C0(v17, (__int64)&v176);
      v134 = 0;
      v20 = (char *)v19;
      if ( v19 )
        v134 = strlen(v19);
      if ( v161 != &v163 )
        operator delete(v161);
      v21 = *(const char **)(v12 + 72);
      v132 = (char *)v21;
      if ( v21 )
      {
        v129 = strlen(v21);
      }
      else
      {
        v132 = (char *)sub_21B7BC0(v18, 2260, &byte_22F0C30, 0);
        v129 = v86;
      }
      v127 = sub_10D1F80(*(_DWORD *)(v12 + 64));
      v135 = v22;
      v176 = v178;
      v177 = 0x1000000000LL;
      ptr = v160;
      v159 = 0x300000000LL;
      sub_11CCDF0(v14[1], v14 + 2, v18, &v176, 0, 0);
      v23 = (const char **)v176;
      v24 = (const char **)((char *)v176 + 8 * (unsigned int)v177);
      if ( v176 != v24 )
        break;
LABEL_21:
      if ( v20 )
      {
        v145[0] = v146;
        sub_11892E0(v145, v20, (__int64)&v20[v134]);
      }
      else
      {
        v146[0] = 0;
        v145[1] = nullptr;
        v145[0] = v146;
      }
      v30 = (__m128i *)sub_99BDC0(v145, 0, 0, "file=", 5u);
      v161 = &v163;
      if ( (__m128i *)v30->m128i_i64[0] == &v30[1] )
      {
        v163 = _mm_loadu_si128(v30 + 1);
      }
      else
      {
        v161 = (void *)v30->m128i_i64[0];
        v163.m128i_i64[0] = v30[1].m128i_i64[0];
      }
      v162 = v30->m128i_i64[1];
      v30->m128i_i64[0] = (__int64)v30[1].m128i_i64;
      v30->m128i_i64[1] = 0;
      v30[1].m128i_i8[0] = 0;
      v31 = (_BYTE *)v14[2];
      v32 = v14[3];
      v147[0] = v148;
      sub_1189220(v147, v31, (__int64)&v31[v32]);
      v33 = (__m128i *)sub_99BDC0(v147, 0, 0, "triple=", 7u);
      v164 = &v166;
      if ( (__m128i *)v33->m128i_i64[0] == &v33[1] )
      {
        v166 = _mm_loadu_si128(v33 + 1);
      }
      else
      {
        v164 = (__m128i *)v33->m128i_i64[0];
        v166.m128i_i64[0] = v33[1].m128i_i64[0];
      }
      v165 = v33->m128i_i64[1];
      v33->m128i_i64[0] = (__int64)v33[1].m128i_i64;
      v33->m128i_i64[1] = 0;
      v33[1].m128i_i8[0] = 0;
      if ( v129 )
      {
        v149 = v10 + 2;
        if ( v132 )
        {
          sub_11892E0(v10, v132, (__int64)&v132[v129]);
        }
        else
        {
          v150 = 0;
          LOBYTE(v151) = 0;
        }
      }
      else
      {
        v149 = v10 + 2;
        sub_11892E0(v10, "generic", (__int64)"");
      }
      v34 = (__m128i *)sub_99BDC0(v10, 0, 0, "arch=", 5u);
      v167 = &v169;
      if ( (__m128i *)v34->m128i_i64[0] == &v34[1] )
      {
        a8 = _mm_loadu_si128(v34 + 1);
        v169 = (__m128)a8;
      }
      else
      {
        v167 = (__m128 *)v34->m128i_i64[0];
        v169.m128_u64[0] = v34[1].m128i_u64[0];
      }
      v168 = v34->m128i_i64[1];
      v34->m128i_i64[0] = (__int64)v34[1].m128i_i64;
      v34->m128i_i64[1] = 0;
      v34[1].m128i_i8[0] = 0;
      if ( v127 )
      {
        v152 = &v154;
        sub_11892E0(&v152, v127, (__int64)&v127[v135]);
      }
      else
      {
        v154.m128i_i8[0] = 0;
        v153 = 0;
        v152 = &v154;
      }
      v35 = (__m128i *)sub_99BDC0(&v152, 0, 0, "kind=", 5u);
      v170 = &v172;
      if ( (__m128i *)v35->m128i_i64[0] == &v35[1] )
      {
        a7 = (__m128)_mm_loadu_si128(v35 + 1);
        v172 = a7;
      }
      else
      {
        v170 = (__m128 *)v35->m128i_i64[0];
        v172.m128_u64[0] = v35[1].m128i_u64[0];
      }
      v171 = v35->m128i_i64[1];
      v35->m128i_i64[0] = (__int64)v35[1].m128i_i64;
      v35->m128i_i64[1] = 0;
      v35[1].m128i_i8[0] = 0;
      v155 = (void **)v157;
      v156 = 0x100000000LL;
      v36 = sub_2237400(&v155, v157, 4, 32, &v144);
      v37 = &v155[4 * (unsigned int)v156];
      if ( v155 != v37 )
      {
        v38 = (const __m128i *)(v155 + 2);
        v39 = v36 + ((32LL * (unsigned int)v156 - 32) & 0xFFFFFFFFFFFFFFE0LL) + 32;
        v40 = (__m128i *)v36;
        do
        {
          while ( 1 )
          {
            v40->m128i_i64[0] = (__int64)v40[1].m128i_i64;
            v41 = (const __m128i *)v38[-1].m128i_i64[0];
            if ( v41 == v38 )
              break;
            v40->m128i_i64[0] = (__int64)v41;
            v40 += 2;
            v40[-1].m128i_i64[0] = v38->m128i_i64[0];
            v40[-2].m128i_i64[1] = v38[-1].m128i_i64[1];
            v38[-1].m128i_i64[0] = (__int64)v38;
            v38 += 2;
            v38[-3].m128i_i64[1] = 0;
            v38[-2].m128i_i8[0] = 0;
            if ( (__m128i *)v39 == v40 )
              goto LABEL_40;
          }
          v40 += 2;
          v40[-1] = _mm_loadu_si128(v38);
          v40[-2].m128i_i64[1] = v38[-1].m128i_i64[1];
          v38[-1].m128i_i64[0] = (__int64)v38;
          v38 += 2;
          v38[-3].m128i_i64[1] = 0;
          v38[-2].m128i_i8[0] = 0;
        }
        while ( v40 != (__m128i *)v39 );
LABEL_40:
        v42 = v155;
        v37 = &v155[4 * (unsigned int)v156];
        if ( v155 != v37 )
        {
          do
          {
            while ( 1 )
            {
              v37 -= 4;
              if ( *v37 == v37 + 2 )
                break;
              operator delete(*v37);
              if ( v42 == v37 )
                goto LABEL_43;
            }
          }
          while ( v42 != v37 );
LABEL_43:
          v37 = v155;
        }
      }
      v43 = v144;
      if ( v37 != (void **)v157 )
        free(v37);
      HIDWORD(v156) = v43;
      v155 = (void **)v36;
      v44 = (_QWORD *)(v36 + 32LL * (unsigned int)v156);
      v45 = &v161;
      do
      {
        v46 = v44 + 2;
        v47 = v44;
        v45 += 4;
        v44 += 4;
        *(v44 - 4) = v46;
        sub_1189220(v47, *(v45 - 4), (__int64)*(v45 - 3) + (_QWORD)*(v45 - 4));
      }
      while ( v45 != &v173 );
      LODWORD(v156) = v156 + 4;
      do
      {
        while ( 1 )
        {
          v45 -= 4;
          if ( *v45 == v45 + 2 )
            break;
          operator delete(*v45);
          if ( v45 == &v161 )
            goto LABEL_51;
        }
      }
      while ( v45 != &v161 );
LABEL_51:
      if ( v152 != &v154 )
        operator delete(v152);
      if ( v149 != v10 + 2 )
        operator delete(v149);
      if ( v147[0] != v148 )
        operator delete(v147[0]);
      if ( v145[0] != v146 )
        operator delete(v145[0]);
      if ( *(_DWORD *)(v14[1] + 44LL) )
      {
        v87 = (char *)ptr;
        v88 = (char *)ptr + 16 * (unsigned int)v159;
        if ( ptr != v88 )
        {
          v89 = &v163;
          v90 = &v154;
          do
          {
            v91 = *(_BYTE **)v87;
            if ( *(_QWORD *)v87 )
            {
LABEL_144:
              v92 = *((_QWORD *)v87 + 1);
              v152 = v90;
              sub_11892E0(&v152, v91, (__int64)&v91[v92]);
              goto LABEL_145;
            }
            while ( 1 )
            {
              v152 = v90;
              v153 = 0;
              v154.m128i_i8[0] = 0;
LABEL_145:
              v93 = (__m128i *)sub_99BDC0(&v152, 0, 0, "feature=", 8u);
              v161 = v89;
              if ( (__m128i *)v93->m128i_i64[0] == &v93[1] )
              {
                v163 = _mm_loadu_si128(v93 + 1);
              }
              else
              {
                v161 = (void *)v93->m128i_i64[0];
                v163.m128i_i64[0] = v93[1].m128i_i64[0];
              }
              v162 = v93->m128i_i64[1];
              v93[1].m128i_i8[0] = 0;
              v94 = v156;
              v93->m128i_i64[0] = (__int64)v93[1].m128i_i64;
              v93->m128i_i64[1] = 0;
              if ( HIDWORD(v156) <= v94 )
              {
                v96 = sub_2237400(&v155, v157, 0, 32, v10);
                v97 = (unsigned int)v156;
                v98 = (__m128i *)v96;
                v99 = (__m128i *)(v96 + 32LL * (unsigned int)v156);
                v99->m128i_i64[0] = (__int64)v99[1].m128i_i64;
                if ( v161 == v89 )
                {
                  v99[1] = _mm_load_si128(&v163);
                  v97 = (unsigned int)v156;
                }
                else
                {
                  v99->m128i_i64[0] = (__int64)v161;
                  v99[1].m128i_i64[0] = v163.m128i_i64[0];
                }
                v99->m128i_i64[1] = v162;
                v161 = v89;
                v100 = &v155[4 * v97];
                v163.m128i_i8[0] = 0;
                v162 = 0;
                if ( v155 != v100 )
                {
                  v101 = (const __m128i *)(v155 + 2);
                  v102 = (unsigned __int64)v98[2].m128i_u64
                       + (((unsigned __int64)v100 - 32 - (_QWORD)v155) & 0xFFFFFFFFFFFFFFE0LL);
                  v103 = v98;
                  do
                  {
                    while ( 1 )
                    {
                      v103->m128i_i64[0] = (__int64)v103[1].m128i_i64;
                      v104 = (const __m128i *)v101[-1].m128i_i64[0];
                      if ( v104 == v101 )
                        break;
                      v103->m128i_i64[0] = (__int64)v104;
                      v103 += 2;
                      v103[-1].m128i_i64[0] = v101->m128i_i64[0];
                      v103[-2].m128i_i64[1] = v101[-1].m128i_i64[1];
                      v101[-1].m128i_i64[0] = (__int64)v101;
                      v101 += 2;
                      v101[-3].m128i_i64[1] = 0;
                      v101[-2].m128i_i8[0] = 0;
                      if ( v103 == (__m128i *)v102 )
                        goto LABEL_166;
                    }
                    v103 += 2;
                    v103[-1] = _mm_loadu_si128(v101);
                    v103[-2].m128i_i64[1] = v101[-1].m128i_i64[1];
                    v101[-1].m128i_i64[0] = (__int64)v101;
                    v101 += 2;
                    v101[-3].m128i_i64[1] = 0;
                    v101[-2].m128i_i8[0] = 0;
                  }
                  while ( (__m128i *)v102 != v103 );
LABEL_166:
                  v100 = &v155[4 * (unsigned int)v156];
                  if ( v155 != v100 )
                  {
                    v130 = v10;
                    v105 = v89;
                    v106 = v87;
                    v107 = &v155[4 * (unsigned int)v156];
                    v133 = v90;
                    v108 = v155;
                    do
                    {
                      while ( 1 )
                      {
                        v107 -= 4;
                        if ( *v107 == v107 + 2 )
                          break;
                        operator delete(*v107);
                        if ( v108 == v107 )
                          goto LABEL_170;
                      }
                    }
                    while ( v108 != v107 );
LABEL_170:
                    v87 = v106;
                    v90 = v133;
                    v89 = v105;
                    v100 = v155;
                    v10 = v130;
                  }
                }
                v109 = (int)v149;
                if ( v100 != (void **)v157 )
                {
                  v131 = (int)v149;
                  free(v100);
                  v109 = v131;
                }
                v155 = (void **)v98;
                HIDWORD(v156) = v109;
                LODWORD(v156) = v156 + 1;
                if ( v161 != v89 )
                  operator delete(v161);
              }
              else
              {
                v95 = (__m128i *)&v155[4 * (unsigned int)v156];
                v95->m128i_i64[0] = (__int64)v95[1].m128i_i64;
                if ( v161 == v89 )
                {
                  v95[1] = _mm_load_si128(&v163);
                }
                else
                {
                  v95->m128i_i64[0] = (__int64)v161;
                  v95[1].m128i_i64[0] = v163.m128i_i64[0];
                }
                v95->m128i_i64[1] = v162;
                LODWORD(v156) = v156 + 1;
              }
              if ( v152 == v90 )
                break;
              operator delete(v152);
              v87 += 16;
              if ( v88 == v87 )
                goto LABEL_60;
              v91 = *(_BYTE **)v87;
              if ( *(_QWORD *)v87 )
                goto LABEL_144;
            }
            v87 += 16;
          }
          while ( v88 != v87 );
        }
      }
LABEL_60:
      v48 = v155;
      v150 = 0;
      v149 = v10 + 2;
      v49 = 4LL * (unsigned int)v156;
      LOBYTE(v151) = 0;
      v50 = &v155[v49];
      if ( v155 != &v155[v49] )
      {
        v51 = v155;
        v52 = ((v49 * 8) >> 5) - 1;
        do
        {
          v52 += (unsigned __int64)v51[1];
          v51 += 4;
        }
        while ( v50 != v51 );
        sub_995C30((__int64)v10, v52);
        v53 = (size_t)v48[1];
        v54 = v149;
        v55 = *v48;
        v56 = v53 + v150;
        v57 = v149 == v10 + 2 ? 15LL : v151;
        if ( v56 > v57 )
        {
          sub_998B30((__int64)v10, v150, 0, v55, v53);
          v54 = v149;
        }
        else if ( v53 )
        {
          v58 = (char *)v149 + v150;
          if ( v53 == 1 )
            *v58 = *v55;
          else
            memcpy(v58, *v48, (size_t)v48[1]);
          v54 = v149;
        }
        v59 = v48 + 4;
        v150 = v56;
        v54[v56] = 0;
        if ( v50 != v59 )
        {
          v60 = v150;
          if ( v150 == 0x7FFFFFFFFFFFFFFFLL )
LABEL_204:
            std::__throw_length_error("basic_string::append");
          v61 = v10 + 2;
          while ( 1 )
          {
            v68 = v60 + 1;
            v69 = v149 == v61 ? 15LL : v151;
            if ( v68 <= v69 )
              *((_BYTE *)v149 + v60) = 44;
            else
              sub_998B30((__int64)v10, v60, 0, ",", 1u);
            v150 = v60 + 1;
            *((_BYTE *)v149 + v68) = 0;
            v62 = (size_t)v59[1];
            v63 = v149;
            v64 = *v59;
            v65 = v62 + v150;
            v66 = v149 == v61 ? 15LL : v151;
            if ( v65 > v66 )
            {
              sub_998B30((__int64)v10, v150, 0, v64, v62);
              v63 = v149;
            }
            else if ( v62 )
            {
              v67 = (char *)v149 + v150;
              if ( v62 == 1 )
                *v67 = *v64;
              else
                memcpy(v67, *v59, (size_t)v59[1]);
              v63 = v149;
            }
            v59 += 4;
            v150 = v65;
            v63[v65] = 0;
            if ( v50 == v59 )
              break;
            v60 = v150;
            if ( v150 == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_204;
          }
        }
      }
      v70 = (__m128i *)sub_99BDC0(v10, 0, 0, "--image=", 8u);
      v152 = &v154;
      if ( (__m128i *)v70->m128i_i64[0] == &v70[1] )
      {
        v154 = _mm_loadu_si128(v70 + 1);
      }
      else
      {
        v152 = (void *)v70->m128i_i64[0];
        v154.m128i_i64[0] = v70[1].m128i_i64[0];
      }
      v153 = v70->m128i_i64[1];
      v70->m128i_i64[0] = (__int64)v70[1].m128i_i64;
      v70->m128i_i64[1] = 0;
      v70[1].m128i_i8[0] = 0;
      LOWORD(v164) = 260;
      v161 = &v152;
      v71 = sub_10DA6C0(a6, (__int64)&v161);
      v72 = (unsigned int)v174;
      v73 = (unsigned int)v174 + 1LL;
      if ( v73 > HIDWORD(v174) )
      {
        v128 = v71;
        sub_2237220(&v173, v175, v73, 8);
        v72 = (unsigned int)v174;
        v71 = v128;
      }
      *((_QWORD *)v173 + v72) = v71;
      LODWORD(v174) = v174 + 1;
      if ( v152 != &v154 )
        operator delete(v152);
      if ( v149 != v10 + 2 )
        operator delete(v149);
      v74 = v155;
      v75 = &v155[4 * (unsigned int)v156];
      if ( v155 != v75 )
      {
        do
        {
          while ( 1 )
          {
            v75 -= 4;
            if ( *v75 == v75 + 2 )
              break;
            operator delete(*v75);
            if ( v74 == v75 )
              goto LABEL_105;
          }
        }
        while ( v74 != v75 );
LABEL_105:
        v75 = v155;
      }
      if ( v75 != (void **)v157 )
        free(v75);
      if ( ptr != v160 )
        free(ptr);
      if ( v176 == v178 )
      {
        v126 = (const __m128i *)((char *)v126 + 40);
        if ( (const __m128i *)v138 == v126 )
          goto LABEL_112;
      }
      else
      {
        free(v176);
        v126 = (const __m128i *)((char *)v126 + 40);
        if ( (const __m128i *)v138 == v126 )
          goto LABEL_112;
      }
    }
    while ( 1 )
    {
      v29 = *v23;
      if ( !*v23 )
        break;
      v25 = strlen(*v23);
      if ( v25 <= 6 || *(_DWORD *)v29 != 1918989357 || *((_WORD *)v29 + 2) != 25959 || v29[6] != 116 )
        goto LABEL_15;
LABEL_18:
      if ( v24 == ++v23 )
        goto LABEL_21;
    }
    v25 = 0;
LABEL_15:
    v26 = (unsigned int)v159;
    v27 = (unsigned int)v159 + 1LL;
    if ( v27 > HIDWORD(v159) )
    {
      v139 = v25;
      sub_2237220(&ptr, v160, v27, 16);
      v26 = (unsigned int)v159;
      v25 = v139;
    }
    v28 = (const char **)((char *)ptr + 16 * v26);
    *v28 = v29;
    v28[1] = (const char *)v25;
    LODWORD(v159) = v159 + 1;
    goto LABEL_18;
  }
LABEL_112:
  sub_112D530(&v161, *(_QWORD *)(a1 + 24), *(char **)(a1 + 16));
  v176 = &v161;
  v179 = 260;
  v76 = sub_10DA6C0(a6, (__int64)&v176);
  v77 = *(const __m128i **)a5;
  v78 = *(unsigned int *)(a5 + 8);
  v79 = operator new(0x208u);
  sub_1106AE0(v79, a3, a1, 2, 0, v76, (__int64)&v173, v77, v78, (__int64)a4, 1, 0);
  v155 = (void **)v79;
  v80 = *(unsigned int *)(a2 + 160);
  v81 = *(_DWORD *)(a2 + 160);
  if ( v80 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
  {
    v110 = -1;
    v111 = 0;
    v112 = *(_QWORD *)(a2 + 152);
    if ( v112 <= (unsigned __int64)&v155 && (unsigned __int64)&v155 < v112 + 8 * v80 )
    {
      v111 = 1;
      v110 = (__int64)((__int64)&v155 - v112) >> 3;
    }
    v113 = sub_2237400(a2 + 152, a2 + 168, v80 + 1, 8, &ptr);
    v114 = *(_QWORD *)(a2 + 152);
    v83 = v113;
    v115 = 8LL * *(unsigned int *)(a2 + 160);
    v116 = (_QWORD *)(v114 + v115);
    if ( v114 != v114 + v115 )
    {
      v117 = *(_QWORD ***)(a2 + 152);
      if ( (v114 >= v83 + 16 || v83 >= v114 + 16) && (unsigned __int64)(v115 - 8) > 0x10 )
      {
        v118 = ((unsigned __int64)(v115 - 8) >> 3) + 1;
        v119 = 0;
        a8.m128i_i64[0] = 0;
        do
        {
          a7 = (__m128)_mm_loadu_si128((const __m128i *)(v114 + v119));
          *(_OWORD *)(v114 + v119) = 0;
          *(__m128 *)(v83 + v119) = a7;
          v119 += 16;
        }
        while ( 16 * (v118 >> 1) != v119 );
        v120 = 8 * (v118 & 0xFFFFFFFFFFFFFFFELL);
        v121 = (__int64 *)(v120 + v114);
        v122 = (_QWORD *)(v83 + v120);
        if ( (v118 & 0xFFFFFFFFFFFFFFFELL) != v118 )
        {
          v123 = *v121;
          *v121 = 0;
          *v122 = v123;
        }
      }
      else
      {
        v121 = (__int64 *)v83;
        do
        {
          v122 = *v117;
          *v117++ = nullptr;
          *v121++ = (__int64)v122;
        }
        while ( v116 != v117 );
      }
      v124 = *(_QWORD **)(a2 + 152);
      v116 = &v124[(unsigned __int64)v115 / 8];
      if ( v124 != &v124[(unsigned __int64)v115 / 8] )
      {
        do
        {
          while ( *--v116 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, __int64 *, _QWORD *, double, double))(*(_QWORD *)*v116 + 8LL))(
              *v116,
              v115,
              v121,
              v122,
              *(double *)a7.m128_u64,
              *(double *)a8.m128i_i64);
            if ( v124 == v116 )
              goto LABEL_194;
          }
        }
        while ( v124 != v116 );
LABEL_194:
        v116 = *(_QWORD **)(a2 + 152);
      }
    }
    v125 = (int)ptr;
    if ( v116 != (_QWORD *)(a2 + 168) )
      free(v116);
    v82 = (void ***)(v83 + 8 * v110);
    if ( !v111 )
      v82 = &v155;
    v80 = *(unsigned int *)(a2 + 160);
    *(_QWORD *)(a2 + 152) = v83;
    *(_DWORD *)(a2 + 164) = v125;
    v81 = v80;
  }
  else
  {
    v82 = &v155;
    v83 = *(_QWORD *)(a2 + 152);
  }
  v84 = *v82;
  *v82 = nullptr;
  *(_QWORD *)(v83 + 8 * v80) = v84;
  v85 = v155;
  *(_DWORD *)(a2 + 160) = v81 + 1;
  if ( v85 )
    (*((void (__fastcall **)(void **))*v85 + 1))(v85);
  if ( v161 != &v163 )
    operator delete(v161);
  if ( v173 != v175 )
    free(v173);
}
