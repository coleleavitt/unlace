__int64 __fastcall sub_A26150(__int64 *a1, const __m128i **a2)
{
  __int64 *v2; // r15
  int v3; // ebx
  __int64 *v4; // r13
  char i; // al
  unsigned __int64 v6; // rax
  const __m128i *v7; // rbp
  __m128i *v8; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  __m128i *v11; // r12
  __int64 m128i_i64; // r14
  char v13; // al
  __int64 v14; // rcx
  unsigned __int64 v16; // r15
  const __m128i *v17; // r12
  __m128i *v18; // r15
  void *v19; // rdi
  _QWORD *v20; // r14
  _QWORD *v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  int v24; // ebx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // r14
  char *v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // rbp
  unsigned __int8 v32; // cl
  char v33; // al
  _BOOL8 v34; // rdx
  char v35; // al
  _BOOL8 v36; // rdx
  int v37; // ebx
  unsigned __int64 v38; // rbp
  char j; // al
  char *v40; // r15
  __int64 v41; // rsi
  char *v42; // rbx
  unsigned __int64 v43; // rax
  __int64 v44; // rbx
  char v45; // al
  _BOOL8 v46; // rcx
  char v47; // al
  __int64 v48; // rcx
  char v49; // al
  __int64 v50; // rcx
  char *v51; // rax
  unsigned __int8 (__fastcall *v52)(__int64 *, char *, _BOOL8); // r14
  char v53; // al
  _BOOL8 v54; // rdx
  unsigned __int8 (__fastcall *v55)(__int64 *, const char *, _BOOL8); // r14
  char v56; // al
  _BOOL8 v57; // rdx
  unsigned __int8 (__fastcall *v58)(__int64 *, char *, _BOOL8); // r14
  char v59; // al
  _BOOL8 v60; // rdx
  unsigned __int8 (__fastcall *v61)(__int64 *, char *, _BOOL8); // r14
  char v62; // al
  _BOOL8 v63; // rdx
  unsigned __int8 (__fastcall *v64)(__int64 *, const char *, _BOOL8); // r14
  char v65; // al
  _BOOL8 v66; // rdx
  char *v67; // r14
  char *v68; // rbx
  void *v69; // rdi
  void *v70; // rdi
  int v71; // r14d
  unsigned __int64 v72; // r15
  __m128i *v73; // rax
  __int64 *v74; // r12
  __m128i *v75; // r13
  _BYTE *v76; // rbp
  char v77; // al
  _BOOL8 v78; // rdx
  char v79; // al
  _BOOL8 v80; // rdx
  char v81; // al
  _BOOL8 v82; // rdx
  char v83; // al
  _BOOL8 v84; // rdx
  char v85; // al
  _BOOL8 v86; // rdx
  char v87; // al
  _BOOL8 v88; // rdx
  char v89; // al
  _BOOL8 v90; // rdx
  char v91; // al
  _BOOL8 v92; // rdx
  char v93; // al
  _BOOL8 v94; // rdx
  unsigned __int64 v95; // r14
  __int64 v96; // rbp
  unsigned __int64 v97; // rax
  __m128i *v98; // rax
  __int64 v99; // rdx
  const void *v100; // rax
  __int64 v101; // rdx
  unsigned __int64 v102; // rsi
  char *v103; // rsi
  void *v104; // rdi
  unsigned __int64 v105; // r14
  char *v106; // rdx
  void *v107; // rdi
  unsigned __int64 v108; // r14
  const __m128i *v109; // rdx
  __m128i *v110; // rdi
  __int64 v111; // rcx
  bool v112; // cf
  unsigned __int64 v113; // rax
  unsigned __int64 v114; // rdi
  __int64 v115; // rax
  char *v116; // r12
  char *v117; // rdx
  void *v118; // rdi
  const __m128i *v119; // rdi
  __m128i *v120; // r12
  const __m128i *v121; // rdx
  __m128i v122; // xmm0
  __int8 v123; // cl
  __m128i v124; // xmm1
  __int16 v125; // cx
  __m128i v126; // xmm3
  __int16 v127; // cx
  __int64 v128; // rsi
  __int64 v129; // rcx
  __int64 v130; // rsi
  __int64 v131; // rcx
  __int64 v132; // rsi
  __int64 v133; // rcx
  __int64 v134; // rsi
  __int64 v135; // rcx
  void *v136; // rdi
  _QWORD *v137; // r14
  _QWORD *v138; // rbp
  void *v139; // rdi
  void *v140; // rdi
  __int64 v141; // rdx
  unsigned __int64 v142; // rax
  unsigned __int64 v143; // r15
  __int64 v144; // rax
  char *v145; // rbx
  char *v146; // rdx
  char *v147; // rdi
  const __m128i *v148; // r14
  __m128i *v149; // rbx
  const __m128i *v150; // rcx
  __int32 v151; // edx
  __m128i v152; // xmm5
  __int64 v153; // rdx
  __int64 v154; // rdi
  __int64 v155; // rdx
  __int64 v156; // rdi
  __int64 v157; // rdx
  __int64 v158; // rdi
  __int64 v159; // rdx
  __int64 v160; // rdi
  __int64 v161; // rdx
  __m128i v162; // xmm6
  __int64 v163; // rdx
  __m128i v164; // xmm7
  __m128i v165; // xmm5
  __m128i v166; // xmm6
  void *v167; // rdi
  void *v168; // rdi
  __int64 v169; // rdx
  unsigned __int64 v170; // rax
  unsigned __int64 v171; // rbp
  __int64 v172; // rax
  char *v173; // rdx
  __int64 v174; // rsi
  char *v175; // rdi
  __int64 v176; // rdx
  const __m128i *v177; // rsi
  __m128i *v178; // rdi
  const __m128i *k; // rax
  __m128i v180; // xmm7
  unsigned __int64 v181; // [rsp+8h] [rbp-110h]
  __int64 v182; // [rsp+10h] [rbp-108h]
  __m128i *v183; // [rsp+10h] [rbp-108h]
  unsigned __int64 v184; // [rsp+18h] [rbp-100h]
  __int64 v185; // [rsp+18h] [rbp-100h]
  __int64 v186; // [rsp+20h] [rbp-F8h]
  unsigned __int8 v187; // [rsp+30h] [rbp-E8h]
  unsigned __int8 (__fastcall *v188)(__int64 *, char *, _BOOL8); // [rsp+30h] [rbp-E8h]
  unsigned __int8 (__fastcall *v189)(__int64 *, const char *, _BOOL8); // [rsp+30h] [rbp-E8h]
  __int64 v190; // [rsp+30h] [rbp-E8h]
  __int64 v191; // [rsp+30h] [rbp-E8h]
  __int64 v192; // [rsp+30h] [rbp-E8h]
  __int64 v193; // [rsp+30h] [rbp-E8h]
  _QWORD *v194; // [rsp+38h] [rbp-E0h]
  __int64 v195; // [rsp+40h] [rbp-D8h]
  unsigned __int8 (__fastcall *n)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *na)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *nb)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *nc)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *nd)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *ne)(__int64 *, const char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *nf)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *ng)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  unsigned __int8 (__fastcall *nh)(__int64 *, char *, _BOOL8); // [rsp+48h] [rbp-D0h]
  size_t ni; // [rsp+48h] [rbp-D0h]
  unsigned int v206; // [rsp+50h] [rbp-C8h]
  _QWORD *v208; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v209; // [rsp+70h] [rbp-A8h]
  char v210; // [rsp+8Eh] [rbp-8Ah] BYREF
  char v211; // [rsp+8Fh] [rbp-89h] BYREF
  __int64 v212; // [rsp+90h] [rbp-88h] BYREF
  __int64 v213; // [rsp+98h] [rbp-80h] BYREF
  __int64 v214; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v215; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v216; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v217; // [rsp+B8h] [rbp-60h] BYREF
  __m128i v218; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v219; // [rsp+D0h] [rbp-48h]

  v2 = a1;
  v3 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v3 = -1171354717 * (a2[1] - *a2);
  if ( v3 )
  {
    v181 = 0;
    v4 = a1;
    v186 = (unsigned int)(v3 - 1);
    for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v4 + 32))(v4, 0, &v212);
          ;
          i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v4 + 32))(v4, (unsigned int)v6, &v212) )
    {
      if ( !i )
      {
        v6 = v181 + 1;
        if ( v186 == v181 )
          goto LABEL_23;
        goto LABEL_6;
      }
      v7 = a2[1];
      v8 = (__m128i *)*a2;
      v9 = (char *)v7 - (char *)*a2;
      v10 = 0x2E8BA2E8BA2E8BA3LL * (v9 >> 4);
      if ( v10 <= v181 )
      {
        v16 = v181 + 1;
        if ( v181 + 1 > v10 )
        {
          v108 = v16 - v10;
          if ( v16 != v10 )
          {
            if ( v108 > 0x2E8BA2E8BA2E8BA3LL * (a2[2] - v7) )
            {
              if ( v108 > 0x1745D1745D1745DLL - v10 )
LABEL_291:
                std::__throw_length_error("vector::_M_default_append");
              v111 = v16 - v10;
              if ( v10 >= v108 )
                v111 = 0x2E8BA2E8BA2E8BA3LL * (a2[1] - *a2);
              v112 = __CFADD__(v111, v10);
              v113 = v111 + v10;
              if ( v112 )
              {
                v185 = 0xFFFFFFFFFFFFFFFLL;
                v114 = -16;
              }
              else
              {
                if ( v113 > 0x1745D1745D1745DLL )
                  v113 = 0x1745D1745D1745DLL;
                v185 = 11 * v113;
                v114 = 176 * v113;
              }
              v115 = operator new(v114);
              v116 = (char *)(v115 + v9);
              v8 = (__m128i *)v115;
              v117 = &v116[176 * v108];
              do
              {
                v118 = v116;
                v116 += 176;
                memset(v118, 0, 0xB0u);
              }
              while ( v116 != v117 );
              v119 = a2[1];
              v120 = (__m128i *)*a2;
              v183 = (__m128i *)v119;
              if ( v119 != *a2 )
              {
                v121 = *a2;
                do
                {
                  v122 = _mm_loadu_si128(v121);
                  v123 = v121[1].m128i_i8[0];
                  v121 += 11;
                  v115 += 176;
                  *(__m128i *)(v115 - 176) = v122;
                  v124 = _mm_loadu_si128((const __m128i *)((char *)v121 - 152));
                  *(_BYTE *)(v115 - 160) = v123;
                  *(__m128i *)(v115 - 152) = v124;
                  *(_QWORD *)(v115 - 136) = v121[-9].m128i_i64[1];
                  v125 = v121[-8].m128i_i16[0];
                  *(__m128i *)(v115 - 120) = _mm_loadu_si128((const __m128i *)((char *)v121 - 120));
                  v126 = _mm_loadu_si128((const __m128i *)((char *)v121 - 104));
                  *(_WORD *)(v115 - 128) = v125;
                  *(__m128i *)(v115 - 104) = v126;
                  *(_QWORD *)(v115 - 88) = v121[-6].m128i_i64[1];
                  *(__m128i *)(v115 - 80) = _mm_loadu_si128(v121 - 5);
                  *(_QWORD *)(v115 - 64) = v121[-4].m128i_i64[0];
                  *(_WORD *)(v115 - 56) = v121[-4].m128i_i16[4];
                  v127 = v121[-4].m128i_i16[5];
                  *(_QWORD *)(v115 - 48) = 0;
                  *(_QWORD *)(v115 - 40) = 0;
                  *(_QWORD *)(v115 - 32) = 0;
                  *(_WORD *)(v115 - 54) = v127;
                  *(_QWORD *)(v115 - 48) = v121[-3].m128i_i64[0];
                  v128 = v121[-3].m128i_i64[1];
                  v121[-3].m128i_i64[0] = 0;
                  v129 = *(_QWORD *)(v115 - 40);
                  *(_QWORD *)(v115 - 40) = v128;
                  v130 = v121[-2].m128i_i64[0];
                  v121[-3].m128i_i64[1] = v129;
                  v131 = *(_QWORD *)(v115 - 32);
                  *(_QWORD *)(v115 - 32) = v130;
                  v121[-2].m128i_i64[0] = v131;
                  *(_QWORD *)(v115 - 16) = 0;
                  *(_QWORD *)(v115 - 8) = 0;
                  *(_QWORD *)(v115 - 24) = 0;
                  *(_QWORD *)(v115 - 24) = v121[-2].m128i_i64[1];
                  v132 = v121[-1].m128i_i64[0];
                  v121[-2].m128i_i64[1] = 0;
                  v133 = *(_QWORD *)(v115 - 16);
                  *(_QWORD *)(v115 - 16) = v132;
                  v134 = v121[-1].m128i_i64[1];
                  v121[-1].m128i_i64[0] = v133;
                  v135 = *(_QWORD *)(v115 - 8);
                  *(_QWORD *)(v115 - 8) = v134;
                  v121[-1].m128i_i64[1] = v135;
                }
                while ( v119 != v121 );
                do
                {
                  while ( 1 )
                  {
                    v136 = (void *)v120[9].m128i_i64[1];
                    if ( v136 )
                      operator delete(v136);
                    v137 = (_QWORD *)v120[8].m128i_i64[1];
                    v138 = (_QWORD *)v120[8].m128i_i64[0];
                    if ( v137 != v138 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v139 = (void *)v138[6];
                          if ( v139 )
                            operator delete(v139);
                          v140 = (void *)v138[3];
                          if ( !v140 )
                            break;
                          operator delete(v140);
                          v138 += 22;
                          if ( v137 == v138 )
                            goto LABEL_243;
                        }
                        v138 += 22;
                      }
                      while ( v137 != v138 );
LABEL_243:
                      v138 = (_QWORD *)v120[8].m128i_i64[0];
                    }
                    if ( !v138 )
                      break;
                    v120 += 11;
                    operator delete(v138);
                    if ( v183 == v120 )
                      goto LABEL_246;
                  }
                  v120 += 11;
                }
                while ( v183 != v120 );
LABEL_246:
                v120 = (__m128i *)*a2;
              }
              if ( v120 )
                operator delete(v120);
              *a2 = v8;
              a2[1] = &v8[11 * v16];
              a2[2] = &v8[v185];
            }
            else
            {
              v109 = &v7[11 * v108];
              do
              {
                v110 = (__m128i *)v7;
                v7 += 11;
                memset(v110, 0, 0xB0u);
              }
              while ( v7 != v109 );
              a2[1] = v7;
            }
          }
        }
        else if ( v181 + 1 < v10 )
        {
          v17 = &v8[11 * v16];
          if ( v7 != v17 )
          {
            v18 = &v8[11 * v16];
            do
            {
              while ( 1 )
              {
                v19 = (void *)v18[9].m128i_i64[1];
                if ( v19 )
                  operator delete(v19);
                v20 = (_QWORD *)v18[8].m128i_i64[1];
                v21 = (_QWORD *)v18[8].m128i_i64[0];
                if ( v20 != v21 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v22 = (void *)v21[6];
                      if ( v22 )
                        operator delete(v22);
                      v23 = (void *)v21[3];
                      if ( !v23 )
                        break;
                      operator delete(v23);
                      v21 += 22;
                      if ( v20 == v21 )
                        goto LABEL_37;
                    }
                    v21 += 22;
                  }
                  while ( v20 != v21 );
LABEL_37:
                  v21 = (_QWORD *)v18[8].m128i_i64[0];
                }
                if ( !v21 )
                  break;
                v18 += 11;
                operator delete(v21);
                if ( v7 == v18 )
                  goto LABEL_40;
              }
              v18 += 11;
            }
            while ( v7 != v18 );
LABEL_40:
            a2[1] = v17;
            v8 = (__m128i *)*a2;
          }
        }
      }
      v11 = &v218;
      m128i_i64 = (__int64)v8[11 * v181].m128i_i64;
      (*(void (__fastcall **)(__int64 *))(*v4 + 104))(v4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, __int64 *, __m128i *))(*v4 + 120))(
             v4,
             "Name",
             1,
             0,
             &v217,
             &v218) )
      {
        sub_A1E350(v4, m128i_i64);
        (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
      }
      v13 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
      v14 = 0;
      if ( v13 )
        v14 = *(_BYTE *)(m128i_i64 + 16) ^ 1u;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, __int64, __int64 *, __m128i *))(*v4 + 120))(
             v4,
             "AuditedForNullability",
             0,
             v14,
             &v217,
             &v218) )
      {
        sub_A1CD30(v4, m128i_i64 + 16);
        (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
      }
      else if ( (_BYTE)v217 )
      {
        *(_BYTE *)(m128i_i64 + 16) = 0;
      }
      v218.m128i_i32[0] = 0;
      sub_A1CEB0((__int64)v4, (_DWORD *)(m128i_i64 + 24), &v218);
      v218.m128i_i64[0] = (__int64)&byte_22CD811;
      v218.m128i_i64[1] = 0;
      sub_A1F410(v4, (__int64)"AvailabilityMsg", m128i_i64 + 32, (__int64)&v218, 0);
      v218.m128i_i8[1] = 0;
      sub_A1F2C0(v4, (__int64)"SwiftPrivate", m128i_i64 + 48, &v218, 0);
      v218.m128i_i64[0] = (__int64)&byte_22CD811;
      v218.m128i_i64[1] = 0;
      sub_A1F410(v4, (__int64)"SwiftName", m128i_i64 + 56, (__int64)&v218, 0);
      v219 = 0;
      sub_A1FA60(v4, (__int64)"SwiftBridge", m128i_i64 + 72, &v218, 0);
      v219 = 0;
      sub_A1FA60(v4, (__int64)"NSErrorDomain", m128i_i64 + 96, &v218, 0);
      v218.m128i_i8[1] = 0;
      sub_A1F2C0(v4, (__int64)"SwiftImportAsNonGeneric", m128i_i64 + 120, &v218, 0);
      v218.m128i_i8[1] = 0;
      sub_A1F2C0(v4, (__int64)"SwiftObjCMembers", m128i_i64 + 122, &v218, 0);
      if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 56))(v4)
         || *(_QWORD *)(m128i_i64 + 136) != *(_QWORD *)(m128i_i64 + 128))
        && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, char *, __int64 *))(*v4 + 120))(
             v4,
             "Methods",
             0,
             0,
             &v210,
             &v213) )
      {
        v37 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 24))(v4);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 16))(v4) )
          v37 = -1171354717 * ((__int64)(*(_QWORD *)(m128i_i64 + 136) - *(_QWORD *)(m128i_i64 + 128)) >> 4);
        if ( v37 )
        {
          v38 = 0;
          v208 = (_QWORD *)m128i_i64;
          v190 = (unsigned int)(v37 - 1);
          for ( j = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v4 + 32))(v4, 0, &v214);
                ;
                j = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v4 + 32))(v4, (unsigned int)v184, &v214) )
          {
            v184 = v38 + 1;
            if ( j )
            {
              v40 = (char *)v208[17];
              v41 = v208[16];
              v42 = &v40[-v41];
              v43 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)&v40[-v41] >> 4);
              if ( v43 <= v38 )
              {
                if ( v43 < v184 )
                {
                  v105 = v38 + 1 - v43;
                  if ( v38 + 1 != v43 )
                  {
                    if ( v105 > 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v208[18] - (_QWORD)v40) >> 4) )
                    {
                      if ( v105 > 0x1745D1745D1745DLL - v43 )
                        goto LABEL_291;
                      v141 = v38 + 1 - v43;
                      if ( v43 >= v105 )
                        v141 = 0x2E8BA2E8BA2E8BA3LL * ((v208[17] - v41) >> 4);
                      v112 = __CFADD__(v141, v43);
                      v142 = v141 + v43;
                      if ( v112 )
                      {
                        v143 = -16;
                      }
                      else
                      {
                        if ( v142 > 0x1745D1745D1745DLL )
                          v142 = 0x1745D1745D1745DLL;
                        v143 = 176 * v142;
                      }
                      v144 = operator new(v143);
                      v145 = &v42[v144];
                      v41 = v144;
                      v146 = &v145[176 * v105];
                      do
                      {
                        v147 = v145;
                        v145 += 176;
                        memset(v147, 0, 0xB0u);
                      }
                      while ( v145 != v146 );
                      v148 = (const __m128i *)v208[17];
                      v149 = (__m128i *)v208[16];
                      if ( v148 != v149 )
                      {
                        v150 = (const __m128i *)v208[16];
                        do
                        {
                          v151 = v150[1].m128i_i32[0];
                          v152 = _mm_loadu_si128(v150);
                          *(_QWORD *)(v144 + 32) = 0;
                          v150 += 11;
                          *(_QWORD *)(v144 + 40) = 0;
                          v144 += 176;
                          *(_QWORD *)(v144 - 152) = 0;
                          *(_DWORD *)(v144 - 160) = v151;
                          v153 = v150[-10].m128i_i64[1];
                          *(__m128i *)(v144 - 176) = v152;
                          *(_QWORD *)(v144 - 152) = v153;
                          v154 = v150[-9].m128i_i64[0];
                          v150[-10].m128i_i64[1] = 0;
                          v155 = *(_QWORD *)(v144 - 144);
                          *(_QWORD *)(v144 - 144) = v154;
                          v156 = v150[-9].m128i_i64[1];
                          v150[-9].m128i_i64[0] = v155;
                          v157 = *(_QWORD *)(v144 - 136);
                          *(_QWORD *)(v144 - 136) = v156;
                          v150[-9].m128i_i64[1] = v157;
                          *(_QWORD *)(v144 - 120) = 0;
                          *(_QWORD *)(v144 - 112) = 0;
                          *(_QWORD *)(v144 - 128) = 0;
                          *(_QWORD *)(v144 - 128) = v150[-8].m128i_i64[0];
                          v158 = v150[-8].m128i_i64[1];
                          v150[-8].m128i_i64[0] = 0;
                          v159 = *(_QWORD *)(v144 - 120);
                          *(_QWORD *)(v144 - 120) = v158;
                          v160 = v150[-7].m128i_i64[0];
                          v150[-8].m128i_i64[1] = v159;
                          v161 = *(_QWORD *)(v144 - 112);
                          *(_QWORD *)(v144 - 112) = v160;
                          v150[-7].m128i_i64[0] = v161;
                          v162 = _mm_loadu_si128((const __m128i *)((char *)v150 - 88));
                          *(_WORD *)(v144 - 104) = v150[-7].m128i_i16[4];
                          v163 = *(__int64 *)((char *)&v150[-7].m128i_i64[1] + 4);
                          *(__m128i *)(v144 - 88) = v162;
                          *(_QWORD *)(v144 - 100) = v163;
                          *(_QWORD *)(v144 - 72) = v150[-5].m128i_i64[1];
                          v164 = _mm_loadu_si128((const __m128i *)((char *)v150 - 56));
                          *(_WORD *)(v144 - 64) = v150[-4].m128i_i16[0];
                          LODWORD(v163) = v150[-3].m128i_i32[2];
                          *(__m128i *)(v144 - 56) = v164;
                          v165 = _mm_loadu_si128(v150 - 2);
                          *(_DWORD *)(v144 - 40) = v163;
                          *(_BYTE *)(v144 - 36) = v150[-3].m128i_i8[12];
                          LOBYTE(v163) = v150[-3].m128i_i8[13];
                          *(__m128i *)(v144 - 32) = v165;
                          v166 = _mm_loadu_si128(v150 - 1);
                          *(_BYTE *)(v144 - 35) = v163;
                          *(__m128i *)(v144 - 16) = v166;
                        }
                        while ( v148 != v150 );
                        do
                        {
                          while ( 1 )
                          {
                            v167 = (void *)v149[3].m128i_i64[0];
                            if ( v167 )
                              operator delete(v167);
                            v168 = (void *)v149[1].m128i_i64[1];
                            if ( !v168 )
                              break;
                            operator delete(v168);
                            v149 += 11;
                            if ( v148 == v149 )
                              goto LABEL_270;
                          }
                          v149 += 11;
                        }
                        while ( v148 != v149 );
LABEL_270:
                        v149 = (__m128i *)v208[16];
                      }
                      if ( v149 )
                        operator delete(v149);
                      v208[16] = v41;
                      v208[18] = v41 + v143;
                      v208[17] = v41 + 176 * v184;
                    }
                    else
                    {
                      v106 = &v40[176 * v105];
                      do
                      {
                        v107 = v40;
                        v40 += 176;
                        memset(v107, 0, 0xB0u);
                      }
                      while ( v40 != v106 );
                      v208[17] = v40;
                    }
                  }
                }
                else if ( v43 > v184 )
                {
                  v67 = (char *)(v41 + 176 * (v38 + 1));
                  if ( v40 != v67 )
                  {
                    v68 = (char *)(v41 + 176 * (v38 + 1));
                    do
                    {
                      while ( 1 )
                      {
                        v69 = *((void **)v68 + 6);
                        if ( v69 )
                          operator delete(v69);
                        v70 = *((void **)v68 + 3);
                        if ( !v70 )
                          break;
                        operator delete(v70);
                        v68 += 176;
                        if ( v68 == v40 )
                          goto LABEL_145;
                      }
                      v68 += 176;
                    }
                    while ( v40 != v68 );
LABEL_145:
                    v208[17] = v67;
                    v41 = v208[16];
                  }
                }
              }
              v44 = v41 + 176 * v38;
              (*(void (__fastcall **)(__int64 *))(*v4 + 104))(v4);
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, __int64, _QWORD, __int64 *, __m128i *))(*v4 + 120))(
                     v4,
                     "Selector",
                     1,
                     0,
                     &v217,
                     v11) )
              {
                sub_A1E350(v4, v44);
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
              }
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, __int64, _QWORD, __int64 *, __m128i *))(*v4 + 120))(
                     v4,
                     "MethodKind",
                     1,
                     0,
                     &v217,
                     v11) )
              {
                (*(void (__fastcall **)(__int64 *))(*v4 + 160))(v4);
                v61 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v4 + 168);
                v62 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
                v63 = 0;
                if ( v62 )
                  v63 = *(_DWORD *)(v44 + 16) == 0;
                if ( v61(v4, "Class", v63) )
                  *(_DWORD *)(v44 + 16) = 0;
                v64 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*v4 + 168);
                v65 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
                v66 = 0;
                if ( v65 )
                  v66 = *(_DWORD *)(v44 + 16) == 1;
                if ( v64(v4, "Instance", v66) )
                  *(_DWORD *)(v44 + 16) = 1;
                (*(void (__fastcall **)(__int64 *))(*v4 + 184))(v4);
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
              }
              if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 56))(v4)
                 || *(_QWORD *)(v44 + 32) != *(_QWORD *)(v44 + 24))
                && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __m128i *))(*v4 + 120))(
                     v4,
                     "Parameters",
                     0,
                     0,
                     &v217,
                     v11) )
              {
                sub_A1F4D0(v4, (__int64 *)(v44 + 24));
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
              }
              if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 56))(v4)
                 || *(_QWORD *)(v44 + 56) != *(_QWORD *)(v44 + 48))
                && (*(unsigned __int8 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, __int64 *, __int64 *))(*v4 + 120))(
                     v4,
                     "Nullability",
                     0,
                     0,
                     &v216,
                     &v217) )
              {
                v71 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 64))(v4);
                if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 16))(v4) )
                  v71 = *(_QWORD *)(v44 + 56) - *(_DWORD *)(v44 + 48);
                if ( v71 )
                {
                  v72 = 0;
                  v209 = v38;
                  v195 = (unsigned int)(v71 - 1);
                  v73 = v11;
                  v74 = v4;
                  v75 = v73;
                  while ( 1 )
                  {
                    v95 = v72 + 1;
                    if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __m128i *))(*v74 + 72))(
                           v74,
                           (unsigned int)v72,
                           v75) )
                    {
                      v96 = *(_QWORD *)(v44 + 48);
                      v97 = *(_QWORD *)(v44 + 56) - v96;
                      if ( v72 >= v97 )
                      {
                        if ( v97 < v95 )
                        {
                          sub_A25630(v44 + 48, v95 - v97);
                          v96 = *(_QWORD *)(v44 + 48);
                        }
                        else if ( v97 > v95 && *(_QWORD *)(v44 + 56) != v96 + v95 )
                        {
                          *(_QWORD *)(v44 + 56) = v96 + v95;
                        }
                      }
                      v76 = (_BYTE *)(v72 + v96);
                      (*(void (__fastcall **)(__int64 *))(*v74 + 160))(v74);
                      n = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v77 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v78 = 0;
                      if ( v77 )
                        v78 = *v76 == 0;
                      if ( n(v74, "Nonnull", v78) )
                        *v76 = 0;
                      na = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v79 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v80 = 0;
                      if ( v79 )
                        v80 = *v76 == 1;
                      if ( na(v74, "Optional", v80) )
                        *v76 = 1;
                      nb = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v81 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v82 = 0;
                      if ( v81 )
                        v82 = *v76 == 2;
                      if ( nb(v74, "Unspecified", v82) )
                        *v76 = 2;
                      nc = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v83 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v84 = 0;
                      if ( v83 )
                        v84 = *v76 == 3;
                      if ( nc(v74, "NullableResult", v84) )
                        *v76 = 3;
                      nd = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v85 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v86 = 0;
                      if ( v85 )
                        v86 = *v76 == 2;
                      if ( nd(v74, "Scalar", v86) )
                        *v76 = 2;
                      ne = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*v74 + 168);
                      v87 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v88 = 0;
                      if ( v87 )
                        v88 = *v76 == 0;
                      if ( ne(v74, "N", v88) )
                        *v76 = 0;
                      nf = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v89 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v90 = 0;
                      if ( v89 )
                        v90 = *v76 == 1;
                      if ( nf(v74, "O", v90) )
                        *v76 = 1;
                      ng = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v91 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v92 = 0;
                      if ( v91 )
                        v92 = *v76 == 2;
                      if ( ng(v74, "U", v92) )
                        *v76 = 2;
                      nh = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v74 + 168);
                      v93 = (*(__int64 (__fastcall **)(__int64 *))(*v74 + 16))(v74);
                      v94 = 0;
                      if ( v93 )
                        v94 = *v76 == 2;
                      if ( nh(v74, "S", v94) )
                        *v76 = 2;
                      (*(void (__fastcall **)(__int64 *))(*v74 + 184))(v74);
                      (*(void (__fastcall **)(__int64 *, __int64))(*v74 + 80))(v74, v218.m128i_i64[0]);
                    }
                    if ( v72 == v195 )
                      break;
                    ++v72;
                  }
                  v98 = v75;
                  v38 = v209;
                  v4 = v74;
                  v11 = v98;
                }
                (*(void (__fastcall **)(__int64 *))(*v4 + 88))(v4);
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v217);
              }
              v218.m128i_i8[1] = 0;
              sub_A1EF30((__int64)v4, (__int64)"NullabilityOfRet", (_BYTE *)(v44 + 72), v11, 0);
              v218.m128i_i32[1] = 0;
              sub_A1F0A0((__int64)v4, (__int64)"RetainCountConvention", v44 + 76, v11->m128i_i64, 0);
              v218.m128i_i32[0] = 0;
              sub_A1CEB0((__int64)v4, (_DWORD *)(v44 + 88), v11);
              v218.m128i_i64[0] = (__int64)&byte_22CD811;
              v218.m128i_i64[1] = 0;
              sub_A1F410(v4, (__int64)"AvailabilityMsg", v44 + 96, (__int64)v11, 0);
              v218.m128i_i8[1] = 0;
              sub_A1F2C0(v4, (__int64)"SwiftPrivate", v44 + 112, v11, 0);
              v218.m128i_i64[0] = (__int64)&byte_22CD811;
              v218.m128i_i64[1] = 0;
              sub_A1F410(v4, (__int64)"SwiftName", v44 + 120, (__int64)v11, 0);
              v45 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
              v46 = 0;
              if ( v45 )
                v46 = *(_DWORD *)(v44 + 136) == 0;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _BOOL8, __int64 *, __m128i *))(*v4 + 120))(
                     v4,
                     "FactoryAsInit",
                     0,
                     v46,
                     &v217,
                     v11) )
              {
                (*(void (__fastcall **)(__int64 *))(*v4 + 160))(v4);
                v52 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v4 + 168);
                v53 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
                v54 = 0;
                if ( v53 )
                  v54 = *(_DWORD *)(v44 + 136) == 0;
                if ( v52(v4, "A", v54) )
                  *(_DWORD *)(v44 + 136) = 0;
                v55 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*v4 + 168);
                v56 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
                v57 = 0;
                if ( v56 )
                  v57 = *(_DWORD *)(v44 + 136) == 1;
                if ( v55(v4, "C", v57) )
                  *(_DWORD *)(v44 + 136) = 1;
                v58 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v4 + 168);
                v59 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
                v60 = 0;
                if ( v59 )
                  v60 = *(_DWORD *)(v44 + 136) == 2;
                if ( v58(v4, "I", v60) )
                  *(_DWORD *)(v44 + 136) = 2;
                (*(void (__fastcall **)(__int64 *))(*v4 + 184))(v4);
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
              }
              else if ( (_BYTE)v217 )
              {
                *(_DWORD *)(v44 + 136) = 0;
              }
              v47 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
              v48 = 0;
              if ( v47 )
                v48 = *(_BYTE *)(v44 + 140) ^ 1u;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, __int64, __int64 *, __m128i *))(*v4 + 120))(
                     v4,
                     "DesignatedInit",
                     0,
                     v48,
                     &v217,
                     v11) )
              {
                sub_A1CD30(v4, v44 + 140);
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
              }
              else if ( (_BYTE)v217 )
              {
                *(_BYTE *)(v44 + 140) = 0;
              }
              v49 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
              v50 = 0;
              if ( v49 )
                v50 = *(_BYTE *)(v44 + 141) ^ 1u;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, _QWORD, __int64, __int64 *, __m128i *))(*v4 + 120))(
                     v4,
                     "Required",
                     0,
                     v50,
                     &v217,
                     v11) )
              {
                sub_A1CD30(v4, v44 + 141);
                (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
              }
              else if ( (_BYTE)v217 )
              {
                *(_BYTE *)(v44 + 141) = 0;
              }
              v218.m128i_i64[1] = 0;
              v218.m128i_i64[0] = (__int64)&byte_22CD811;
              sub_A1F410(v4, (__int64)"ResultType", v44 + 144, (__int64)v11, 0);
              v218.m128i_i64[0] = (__int64)&byte_22CD811;
              v218.m128i_i64[1] = 0;
              sub_A1F410(v4, (__int64)"SwiftReturnOwnership", v44 + 160, (__int64)v11, 0);
              (*(void (__fastcall **)(__int64 *))(*v4 + 112))(v4);
              (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 40))(v4, v214);
              if ( v190 == v38 )
              {
LABEL_107:
                m128i_i64 = (__int64)v208;
                break;
              }
            }
            else if ( v190 == v38 )
            {
              goto LABEL_107;
            }
            v38 = v184;
          }
        }
        (*(void (__fastcall **)(__int64 *))(*v4 + 48))(v4);
        (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v213);
      }
      if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 56))(v4)
         || *(_QWORD *)(m128i_i64 + 160) != *(_QWORD *)(m128i_i64 + 152))
        && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, char *, __int64 *))(*v4 + 120))(
             v4,
             "Properties",
             0,
             0,
             &v211,
             &v215) )
      {
        break;
      }
LABEL_22:
      (*(void (__fastcall **)(__int64 *))(*v4 + 112))(v4);
      (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 40))(v4, v212);
      v6 = v181 + 1;
      if ( v186 == v181 )
      {
LABEL_23:
        v2 = v4;
        return (*(__int64 (__fastcall **)(__int64 *))(*v2 + 48))(v2);
      }
LABEL_6:
      v181 = v6;
    }
    v24 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 24))(v4);
    if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 16))(v4) )
      v24 = -991146299 * ((__int64)(*(_QWORD *)(m128i_i64 + 160) - *(_QWORD *)(m128i_i64 + 152)) >> 3);
    if ( !v24 )
    {
LABEL_60:
      (*(void (__fastcall **)(__int64 *))(*v4 + 48))(v4);
      (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v215);
      goto LABEL_22;
    }
    v25 = (unsigned int)(v24 - 1);
    v194 = (_QWORD *)m128i_i64;
    v26 = 0;
    v182 = v25;
    while ( 1 )
    {
      v27 = v26 + 1;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*v4 + 32))(v4, (unsigned int)v26, &v216) )
      {
        if ( v182 == v26 )
          goto LABEL_60;
        goto LABEL_46;
      }
      v28 = (char *)v194[20];
      v29 = v194[19];
      v30 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)&v28[-v29] >> 3);
      if ( v26 >= v30 )
      {
        if ( v30 < v27 )
        {
          v102 = v27 - v30;
          if ( v27 != v30 )
          {
            if ( v102 > 0x4EC4EC4EC4EC4EC5LL * ((__int64)(v194[21] - (_QWORD)v28) >> 3) )
            {
              if ( v102 > 0x276276276276276LL - v30 )
                goto LABEL_291;
              v169 = v27 - v30;
              if ( v30 >= v102 )
                v169 = 0x4EC4EC4EC4EC4EC5LL * ((v194[20] - v29) >> 3);
              v112 = __CFADD__(v169, v30);
              v170 = v169 + v30;
              if ( v112 )
              {
                v171 = -16;
              }
              else
              {
                if ( v170 > 0x276276276276276LL )
                  v170 = 0x276276276276276LL;
                v171 = 104 * v170;
              }
              v192 = v194[20] - v29;
              v172 = operator new(v171);
              v29 = v172;
              v173 = (char *)(v172 + v192);
              v174 = v172 + v192 + 104 * v102;
              do
              {
                v175 = v173;
                v173 += 104;
                memset(v175, 0, 0x68u);
              }
              while ( (char *)v174 != v173 );
              v176 = v172;
              v177 = (const __m128i *)v194[20];
              v178 = (__m128i *)v194[19];
              for ( k = v178; v177 != k; *(_QWORD *)(v176 - 8) = k[-1].m128i_i64[1] )
              {
                v180 = _mm_loadu_si128(k);
                k = (const __m128i *)((char *)k + 104);
                v176 += 104;
                *(__m128i *)(v176 - 104) = v180;
                *(__m128i *)(v176 - 88) = _mm_loadu_si128((const __m128i *)((char *)k - 88));
                *(__m128i *)(v176 - 72) = _mm_loadu_si128((const __m128i *)((char *)k - 72));
                *(__m128i *)(v176 - 56) = _mm_loadu_si128((const __m128i *)((char *)k - 56));
                *(__m128i *)(v176 - 40) = _mm_loadu_si128((const __m128i *)((char *)k - 40));
                *(__m128i *)(v176 - 24) = _mm_loadu_si128((const __m128i *)((char *)k - 24));
              }
              if ( v178 )
              {
                v193 = v29;
                operator delete(v178);
                v29 = v193;
              }
              v194[19] = v29;
              v194[20] = v29 + 104 * v27;
              v194[21] = v29 + v171;
            }
            else
            {
              v103 = &v28[104 * v102];
              do
              {
                v104 = v28;
                v28 += 104;
                memset(v104, 0, 0x68u);
              }
              while ( v103 != v28 );
              v194[20] = v103;
            }
          }
        }
        else if ( v30 > v27 )
        {
          v51 = (char *)(v29 + 104 * v27);
          if ( v28 != v51 )
            v194[20] = v51;
        }
      }
      v31 = v29 + 104 * v26;
      (*(void (__fastcall **)(__int64 *))(*v4 + 104))(v4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, __int64 *, __m128i *))(*v4 + 120))(
             v4,
             "Name",
             1,
             0,
             &v217,
             v11) )
      {
        sub_A1E350(v4, v31);
        (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v218.m128i_i64[0]);
      }
      LOBYTE(v214) = 1;
      v32 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
      if ( v32 )
        v32 = *(_BYTE *)(v31 + 20) ^ 1;
      v187 = v32;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 16))(v4) )
      {
        if ( *(_BYTE *)(v31 + 20) )
          goto LABEL_61;
        *(_DWORD *)(v31 + 16) = 0;
        *(_BYTE *)(v31 + 20) = 1;
      }
      if ( !*(_BYTE *)(v31 + 20) )
        goto LABEL_57;
LABEL_61:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __int64 *))(*v4 + 120))(
              v4,
              "PropertyKind",
              0,
              v187,
              &v214,
              &v217) )
      {
LABEL_57:
        if ( (_BYTE)v214 )
          *(_QWORD *)(v31 + 16) = v206;
        goto LABEL_59;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*v4 + 16))(v4)
        && (v191 = sub_2254E80(v4), *(_DWORD *)(v191 + 32) == 1)
        && (ni = j__strlen("<none>"),
            v99 = *(_QWORD *)(v191 + 72),
            v218.m128i_i64[1] = *(_QWORD *)(v191 + 80),
            v218.m128i_i64[0] = v99,
            v100 = (const void *)sub_A1D7F0((__int64)v11, 32),
            ni == v101)
        && (!ni || !memcmp(v100, "<none>", ni)) )
      {
        *(_QWORD *)(v31 + 16) = v206;
      }
      else
      {
        (*(void (__fastcall **)(__int64 *))(*v4 + 160))(v4);
        v188 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*v4 + 168);
        v33 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
        v34 = 0;
        if ( v33 )
          v34 = *(_DWORD *)(v31 + 16) == 0;
        if ( v188(v4, "Class", v34) )
          *(_DWORD *)(v31 + 16) = 0;
        v189 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*v4 + 168);
        v35 = (*(__int64 (__fastcall **)(__int64 *))(*v4 + 16))(v4);
        v36 = 0;
        if ( v35 )
          v36 = *(_DWORD *)(v31 + 16) == 1;
        if ( v189(v4, "Instance", v36) )
          *(_DWORD *)(v31 + 16) = 1;
        (*(void (__fastcall **)(__int64 *))(*v4 + 184))(v4);
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 128))(v4, v217);
LABEL_59:
      v218.m128i_i8[1] = 0;
      sub_A1EF30((__int64)v4, (__int64)"Nullability", (_BYTE *)(v31 + 24), v11, 0);
      v218.m128i_i32[0] = 0;
      sub_A1CEB0((__int64)v4, (_DWORD *)(v31 + 32), v11);
      v218.m128i_i64[0] = (__int64)&byte_22CD811;
      v218.m128i_i64[1] = 0;
      sub_A1F410(v4, (__int64)"AvailabilityMsg", v31 + 40, (__int64)v11, 0);
      v218.m128i_i8[1] = 0;
      sub_A1F2C0(v4, (__int64)"SwiftPrivate", v31 + 56, v11, 0);
      v218.m128i_i64[0] = (__int64)&byte_22CD811;
      v218.m128i_i64[1] = 0;
      sub_A1F410(v4, (__int64)"SwiftName", v31 + 64, (__int64)v11, 0);
      v218.m128i_i8[1] = 0;
      sub_A1F2C0(v4, (__int64)"SwiftImportAsAccessors", v31 + 80, v11, 0);
      v218.m128i_i64[0] = (__int64)&byte_22CD811;
      v218.m128i_i64[1] = 0;
      sub_A1F410(v4, (__int64)"Type", v31 + 88, (__int64)v11, 0);
      (*(void (__fastcall **)(__int64 *))(*v4 + 112))(v4);
      (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 40))(v4, v216);
      if ( v182 == v26 )
        goto LABEL_60;
LABEL_46:
      ++v26;
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*v2 + 48))(v2);
}

