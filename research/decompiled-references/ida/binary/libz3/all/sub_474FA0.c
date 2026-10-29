__int64 __fastcall sub_474FA0(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rax
  char **v4; // r12
  __int64 v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 result; // rax
  char v10; // r14
  _DWORD *v11; // rbp
  unsigned __int32 v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int32 v16; // edx
  __int64 v17; // r13
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r12
  void *v22; // rbp
  __int64 v23; // rsi
  unsigned int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rax
  char *v27; // r14
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // rbp
  int v34; // eax
  __int64 v35; // rax
  void *v36; // r14
  __int64 v37; // rdi
  __int64 v38; // rbx
  unsigned int v39; // ebp
  unsigned int v40; // edx
  unsigned int *v41; // r13
  char *v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 *v44; // r12
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // edi
  __int64 *v48; // r10
  unsigned __int64 v49; // rsi
  __int64 v50; // rax
  unsigned __int64 v51; // rsi
  __m128i v52; // xmm0
  unsigned __int64 v53; // rax
  __int64 v54; // r9
  unsigned __int64 v55; // r8
  __int64 *v56; // r14
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // r13
  void *v60; // r15
  __int64 v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // r13
  _DWORD *v64; // rdx
  void *v65; // rbx
  int v66; // eax
  void *v67; // rbx
  int v68; // eax
  __int64 v69; // xmm0_8
  __m128i v70; // xmm0
  __int64 v71; // r10
  __m128i v72; // xmm1
  char v73; // r8
  char v74; // dl
  int v75; // r11d
  int v76; // edi
  char v77; // cl
  bool v78; // al
  __int64 v79; // rsi
  void *v80; // rbx
  __int64 v81; // rsi
  char v82; // r11
  char v83; // r11
  char v84; // dl
  void *v85; // rbx
  void *v86; // rbx
  _QWORD *v87; // rax
  __int64 *v88; // rax
  _DWORD *v89; // rsi
  __int64 v90; // rcx
  unsigned int v91; // ebx
  unsigned int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  const __m128i *v96; // rdi
  const __m128i *i; // rax
  __int32 v98; // esi
  char v99; // r8
  __int64 v100; // rsi
  char v101; // r8
  __m128i v102; // xmm0
  __int64 v103; // rax
  __int64 v104; // rbp
  __int64 v105; // rbx
  void *v106; // r12
  __int64 v107; // rsi
  _DWORD *v108; // rcx
  char v109; // al
  unsigned __int8 v110; // r8
  char v111; // dl
  _QWORD *v112; // rax
  char v113; // dl
  __m128i v115; // [rsp+8h] [rbp-120h] BYREF
  __int64 *v116; // [rsp+18h] [rbp-110h]
  void *v117; // [rsp+20h] [rbp-108h]
  void *v118; // [rsp+28h] [rbp-100h]
  _DWORD *v119; // [rsp+30h] [rbp-F8h]
  unsigned int v120; // [rsp+3Ch] [rbp-ECh]
  __int64 v121; // [rsp+40h] [rbp-E8h]
  __int64 v122; // [rsp+48h] [rbp-E0h]
  _QWORD v123[2]; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD v124[2]; // [rsp+70h] [rbp-B8h] BYREF
  int v125; // [rsp+80h] [rbp-A8h] BYREF
  char v126; // [rsp+84h] [rbp-A4h]
  __int64 v127; // [rsp+88h] [rbp-A0h]
  int v128; // [rsp+90h] [rbp-98h] BYREF
  char v129; // [rsp+94h] [rbp-94h]
  __m128i v130[2]; // [rsp+98h] [rbp-90h] BYREF
  __int64 v131; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v132; // [rsp+C8h] [rbp-60h]
  int v133; // [rsp+D0h] [rbp-58h] BYREF
  char v134; // [rsp+D4h] [rbp-54h]
  __m128i v135; // [rsp+D8h] [rbp-50h]

  v7 = a2;
  v8 = *(_QWORD *)(a2 + 16);
  result = sub_4478E0(a1[2], a2);
  if ( !(_BYTE)result )
  {
    result = sub_45AE60(a1[1], a2);
    v10 = result;
    if ( (_BYTE)result )
    {
      v11 = *(_DWORD **)(v8 + 24);
      if ( v11 )
        v11 = *((_DWORD **)v11 + 1);
      v12 = *(_DWORD *)(a2 + 24);
      if ( !v12 )
        return sub_4478F0(a1[2], a2, 1u);
      v13 = a1[1];
      v115.m128i_i32[2] = 0;
      v14 = 0;
      v116 = &v131;
      while ( 1 )
      {
        LODWORD(v117) = v12 - 1;
        v15 = *(_QWORD *)(v7 + 8LL * (v12 - 1) + 32);
        v115.m128i_i64[0] = (__int64)v116;
        result = sub_15D1F10(v15);
        v16 = (unsigned int)v117;
        if ( *(_QWORD *)(v13 + 848) == result )
          v16 = v12;
        if ( v115.m128i_i32[2] >= v16 )
          break;
        v17 = v115.m128i_u32[2];
        v18 = *(_QWORD *)(a1[2] + 16LL);
        v117 = *(void **)(v7 + 8LL * v115.m128i_u32[2] + 32);
        v115.m128i_i64[0] = (__int64)v116;
        result = sub_15D37A0(v18 + 80, v117);
        if ( (_BYTE)result )
        {
          v37 = a1[2];
          v115.m128i_i64[0] = (__int64)&v131;
          result = sub_4478E0(v37, (__int64)v117);
          if ( !(_BYTE)result )
          {
            v38 = *(_QWORD *)(a1[2] + 16LL);
            v115.m128i_i64[0] = (__int64)&v131;
            result = sub_15D37A0(v38 + 136, v117);
            if ( (_BYTE)result
              || (v115.m128i_i64[0] = (__int64)&v131, result = sub_15D37A0(v38 + 24, v117), (_BYTE)result)
              || (v62 = *((_QWORD *)v117 + (unsigned int)(*((_DWORD *)v117 + 6) - 1) + 4),
                  v115.m128i_i64[0] = (__int64)&v131,
                  result = sub_4A7E40(v38, v62),
                  !(_BYTE)result) )
            {
              v10 = 0;
            }
            else
            {
              v63 = 4 * v17;
              if ( LOBYTE(v11[v63 + 10]) != 4 )
              {
                v115.m128i_i64[0] = (__int64)&v131;
                sub_DBF6E(0);
              }
              v64 = *(_DWORD **)&v11[v63 + 8];
              v123[0] = 0;
              v123[1] = 0;
              v124[0] = 1;
              v65 = qword_1C7F2C0;
              v124[1] = 0;
              if ( (v64[1] & 1) != 0 )
              {
                v118 = v64;
                v115.m128i_i64[0] = (__int64)&v131;
                sub_182C690(qword_1C7F2C0, v123, v64);
                v64 = v118;
              }
              else
              {
                LODWORD(v123[0]) = *v64;
              }
              if ( (v64[5] & 1) != 0 )
              {
                v115.m128i_i64[0] = (__int64)&v131;
                sub_182C690(v65, v124, v64 + 4);
              }
              else
              {
                v66 = v64[4];
                BYTE4(v124[0]) &= ~1u;
                LODWORD(v124[0]) = v66;
              }
              v67 = qword_1C7F2C0;
              v125 = 0;
              v126 &= 0xFCu;
              v68 = *((_DWORD *)v117 + 6);
              v129 &= 0xFCu;
              v127 = 0;
              v128 = 1;
              v130[0].m128i_i64[0] = 0;
              v69 = *((_QWORD *)v117 + (unsigned int)(v68 - 1) + 4);
              if ( (v123[0] & 0x100000000LL) != 0 )
              {
                v115.m128i_i64[0] = *((_QWORD *)v117 + (unsigned int)(v68 - 1) + 4);
                v118 = v123;
                sub_182C690(qword_1C7F2C0, &v125, v123);
                v69 = v115.m128i_i64[0];
              }
              else
              {
                v125 = v123[0];
                v118 = v123;
              }
              if ( (v124[0] & 0x100000000LL) != 0 )
              {
                v115.m128i_i64[0] = v69;
                sub_182C690(v67, &v128, v124);
                v69 = v115.m128i_i64[0];
              }
              else
              {
                v129 &= ~1u;
                v128 = v124[0];
              }
              v115.m128i_i64[0] = v69;
              v117 = &v125;
              sub_1831690(qword_1C7F2C0, &v125);
              v70 = _mm_loadl_epi64(&v115);
              v71 = v127;
              v127 = 0;
              v72 = _mm_loadl_epi64(v130);
              v73 = v126 & 1;
              v74 = (v126 & 2) != 0;
              v75 = v125;
              v76 = v128;
              v132 = v71;
              LODWORD(v131) = v125;
              BYTE4(v131) = (2 * v74) | v126 & 1 | BYTE4(v131) & 0xFC;
              v133 = v128;
              v130[0].m128i_i64[0] = 0;
              v77 = v129 & 1;
              v78 = (v129 & 2) != 0;
              v135 = _mm_unpacklo_epi64(v72, v70);
              v134 = (2 * v78) | v129 & 1 | v134 & 0xFC;
              if ( v14 )
              {
                v79 = *(unsigned int *)(v14 - 4);
                if ( (_DWORD)v79 == *(_DWORD *)(v14 - 8) )
                {
                  v91 = (unsigned int)(3 * v79 + 1) >> 1;
                  v92 = 40 * v91 + 8;
                  if ( 40 * (int)v79 + 8 >= v92 || (unsigned int)v79 >= v91 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v130[0].m128i_i64[1], "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, &v130[0].m128i_i64[1]);
                    sub_233E40((__int64)&v130[0].m128i_i64[1]);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v93 = sub_186B270(v92);
                  v94 = *(unsigned int *)(v14 - 4);
                  v95 = v93 + 8;
                  *(_DWORD *)(v93 + 4) = v94;
                  v96 = (const __m128i *)(v14 + 40 * v94);
                  v115.m128i_i64[0] = v93 + 8;
                  for ( i = (const __m128i *)v14; v96 != i; *(_BYTE *)(v95 - 20) = v101 & 0xFC | v100 & 3 )
                  {
                    v98 = i->m128i_i32[0];
                    v99 = *(_BYTE *)(v95 + 4);
                    i = (const __m128i *)((char *)i + 40);
                    v95 += 40;
                    *(_DWORD *)(v95 - 40) = v98;
                    *(_BYTE *)(v95 - 36) = v99 & 0xFC | i[-3].m128i_i8[12] & 3;
                    v100 = i[-2].m128i_i64[0];
                    i[-2].m128i_i64[0] = 0;
                    v101 = *(_BYTE *)(v95 - 20);
                    *(_QWORD *)(v95 - 32) = v100;
                    LODWORD(v100) = i[-2].m128i_i32[2];
                    v102 = _mm_loadu_si128(i - 1);
                    i[-1].m128i_i64[0] = 0;
                    *(_DWORD *)(v95 - 24) = v100;
                    LOBYTE(v100) = i[-2].m128i_i8[12];
                    *(__m128i *)(v95 - 16) = v102;
                  }
                  v103 = *(unsigned int *)(v14 - 4);
                  if ( (_DWORD)v103 )
                  {
                    v121 = v93;
                    v122 = v7;
                    v119 = v11;
                    v104 = v14;
                    v120 = v91;
                    v105 = v14 + 40 * v103;
                    do
                    {
                      v106 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v104);
                      v107 = v104 + 16;
                      v104 += 40;
                      sub_182CBA0(v106, v107);
                    }
                    while ( v105 != v104 );
                    v11 = v119;
                    v91 = v120;
                    v93 = v121;
                    v7 = v122;
                  }
                  v119 = (_DWORD *)v93;
                  sub_186B220((void *)(v14 - 8));
                  v108 = v119;
                  v109 = v134;
                  v75 = v131;
                  v110 = BYTE4(v131);
                  *v119 = v91;
                  v79 = (unsigned int)v108[1];
                  v111 = v110 >> 1;
                  v71 = v132;
                  v73 = v110 & 1;
                  v76 = v133;
                  v74 = v111 & 1;
                  v77 = v109 & 1;
                  v78 = (v109 & 2) != 0;
                  v72.m128i_i64[0] = v135.m128i_i64[0];
                  v14 = v115.m128i_i64[0];
                  v70.m128i_i64[0] = v135.m128i_i64[1];
                }
              }
              else
              {
                v112 = (_QWORD *)sub_186B270(0x58u);
                v113 = BYTE4(v131);
                v14 = (__int64)(v112 + 1);
                *v112 = 2;
                v79 = 0;
                v75 = v131;
                v71 = v132;
                v76 = v133;
                v73 = v113 & 1;
                v74 = (v113 & 2) != 0;
                v72.m128i_i64[0] = v135.m128i_i64[0];
                v77 = v134 & 1;
                v78 = (v134 & 2) != 0;
                v70.m128i_i64[0] = v135.m128i_i64[1];
              }
              v80 = qword_1C7F2C0;
              v81 = v14 + 40 * v79;
              v132 = 0;
              *(_DWORD *)v81 = v75;
              v82 = *(_BYTE *)(v81 + 4);
              *(_QWORD *)(v81 + 8) = v71;
              *(_QWORD *)(v81 + 24) = v72.m128i_i64[0];
              v83 = (v73 | (2 * v74)) & 3 | v82 & 0xFC;
              v84 = *(_BYTE *)(v81 + 20);
              *(_QWORD *)(v81 + 32) = v70.m128i_i64[0];
              *(_BYTE *)(v81 + 4) = v83;
              *(_DWORD *)(v81 + 16) = v76;
              v135.m128i_i64[0] = 0;
              *(_BYTE *)(v81 + 20) = v84 & 0xFC | (v77 | (2 * v78)) & 3;
              ++*(_DWORD *)(v14 - 4);
              sub_182CBA0(v80, &v131);
              sub_182CBA0(v80, &v133);
              v85 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v117);
              sub_182CBA0(v85, &v128);
              v86 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v118);
              result = sub_182CBA0(v86, v124);
            }
          }
        }
        v12 = *(_DWORD *)(v7 + 24);
        if ( !v12 )
          break;
        ++v115.m128i_i32[2];
        v13 = a1[1];
      }
      if ( v10 )
      {
        v115.m128i_i64[0] = (__int64)&v131;
        result = sub_4478F0(a1[2], v7, 1u);
        if ( v14 )
        {
          v24 = *(_DWORD *)(v14 - 4);
          if ( !v24 )
            return sub_186B220((void *)(v14 - 8));
          v25 = a1[3];
          if ( v25 )
          {
            v26 = *(unsigned int *)(v25 - 4);
            v27 = (char *)(v25 + 8 * v26);
            if ( (_DWORD)v26 == *(_DWORD *)(v25 - 8) )
            {
              v39 = (unsigned int)(3 * v26 + 1) >> 1;
              v40 = 8 * v39 + 8;
              if ( 8 * (int)v26 + 8 >= v40 || (unsigned int)v26 >= v39 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                v115.m128i_i64[0] = (__int64)&v131;
                v4 = v3;
                sub_24ABB0(&v131, "Overflow encountered when expanding vector");
                v5 = v115.m128i_i64[0];
                v6 = (_QWORD *)v115.m128i_i64[0];
                *v4 = (char *)off_1C63128;
                sub_2333C0(v4 + 1, v6);
                sub_233E40(v5);
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v115.m128i_i64[0] = (__int64)&v131;
              v41 = (unsigned int *)sub_186B270(v40);
              v42 = (char *)(v41 + 2);
              v43 = a1[3];
              v44 = (__int64 *)v43;
              if ( v43 )
              {
                v45 = *(unsigned int *)(v43 - 4);
                v46 = 8 * v45;
                v41[1] = v45;
                v47 = v45;
                v48 = (__int64 *)(v43 + 8 * v45);
                if ( v48 != (__int64 *)v43 )
                {
                  v49 = v46 - 8;
                  if ( (unsigned __int64)(v46 - 8) <= 8
                    || (unsigned __int64)v42 < v43 + 16 && v43 < (unsigned __int64)(v41 + 6) )
                  {
                    v88 = (__int64 *)v43;
                    v89 = v41 + 2;
                    do
                    {
                      v90 = *v88;
                      *v88++ = 0;
                      v89 += 2;
                      *((_QWORD *)v89 - 1) = v90;
                    }
                    while ( v48 != v88 );
                  }
                  else
                  {
                    v50 = 0;
                    v51 = (v49 >> 3) + 1;
                    do
                    {
                      v52 = _mm_loadu_si128((const __m128i *)(v43 + v50 * 4));
                      *(_OWORD *)(v43 + v50 * 4) = 0;
                      *(__m128i *)&v41[v50 + 2] = v52;
                      v50 += 4;
                    }
                    while ( 4 * (v51 >> 1) != v50 );
                    if ( (v51 & 1) != 0 )
                    {
                      v53 = 8 * (v51 & 0xFFFFFFFFFFFFFFFELL);
                      v54 = *(_QWORD *)(v43 + v53);
                      *(_QWORD *)(v43 + v53) = 0;
                      *(_QWORD *)&v41[v53 / 4 + 2] = v54;
                    }
                  }
                }
                v55 = v43 + 8 * v45;
                if ( v47 )
                {
                  v115.m128i_i32[0] = v39;
                  v56 = (__int64 *)v55;
                  v115.m128i_i64[1] = (__int64)v41;
                  v116 = (__int64 *)v14;
                  v117 = v41 + 2;
                  do
                  {
                    v57 = *v44;
                    if ( *v44 )
                    {
                      v58 = *(unsigned int *)(v57 - 4);
                      if ( (_DWORD)v58 )
                      {
                        v59 = v57 + 40 * v58;
                        do
                        {
                          v60 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, v57);
                          v61 = v57 + 16;
                          v57 += 40;
                          sub_182CBA0(v60, v61);
                        }
                        while ( v59 != v57 );
                        v57 = *v44;
                      }
                      sub_186B220((void *)(v57 - 8));
                    }
                    ++v44;
                  }
                  while ( v56 != v44 );
                  v39 = v115.m128i_i32[0];
                  v41 = (unsigned int *)v115.m128i_i64[1];
                  v14 = (__int64)v116;
                  v42 = (char *)v117;
                  v43 = a1[3];
                }
                v115.m128i_i64[0] = (__int64)&v131;
                sub_186B220((void *)(v43 - 8));
                v27 = &v42[8 * v41[1]];
              }
              else
              {
                v41[1] = 0;
                v27 = (char *)(v41 + 2);
              }
              v24 = *(_DWORD *)(v14 - 4);
              *v41 = v39;
              a1[3] = v42;
            }
          }
          else
          {
            v115.m128i_i64[0] = (__int64)&v131;
            v87 = (_QWORD *)sub_186B270(0x18u);
            v27 = (char *)(v87 + 1);
            *v87 = 2;
            v24 = *(_DWORD *)(v14 - 4);
            a1[3] = v87 + 1;
          }
          v28 = *(unsigned int *)(v14 - 8);
          *(_QWORD *)v27 = 0;
          v115.m128i_i32[2] = v28;
          v115.m128i_i64[0] = (__int64)&v131;
          v29 = (_QWORD *)sub_186B270(40 * v28 + 8);
          v30 = v29 + 1;
          *v29 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v115.m128i_u32[2]), _mm_cvtsi32_si128(v24)).m128i_u64[0];
          v31 = *(unsigned int *)(v14 - 4);
          *(_QWORD *)v27 = v30;
          v115.m128i_i64[0] = v14 + 40 * v31;
          if ( v115.m128i_i64[0] != v14 )
          {
            v32 = v14;
            v33 = v30;
            do
            {
              *((_BYTE *)v33 + 4) &= 0xFCu;
              v36 = qword_1C7F2C0;
              *((_BYTE *)v33 + 20) &= 0xFCu;
              *(_DWORD *)v33 = 0;
              v33[1] = 0;
              *((_DWORD *)v33 + 4) = 1;
              v33[3] = 0;
              if ( (*(_BYTE *)(v32 + 4) & 1) != 0 )
                sub_182C690(v36, v33, v32);
              else
                *(_DWORD *)v33 = *(_DWORD *)v32;
              if ( (*(_BYTE *)(v32 + 20) & 1) != 0 )
              {
                sub_182C690(v36, v33 + 2, v32 + 16);
              }
              else
              {
                v34 = *(_DWORD *)(v32 + 16);
                *((_BYTE *)v33 + 20) &= ~1u;
                *((_DWORD *)v33 + 4) = v34;
              }
              v35 = *(_QWORD *)(v32 + 32);
              v33 += 5;
              v32 += 40;
              *(v33 - 1) = v35;
            }
            while ( v115.m128i_i64[0] != v32 );
          }
          ++*(_DWORD *)(a1[3] - 4LL);
LABEL_16:
          v19 = *(unsigned int *)(v14 - 4);
          if ( (_DWORD)v19 )
          {
            v20 = v14;
            v21 = v14 + 40 * v19;
            do
            {
              v22 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v20);
              v23 = v20 + 16;
              v20 += 40;
              sub_182CBA0(v22, v23);
            }
            while ( v20 != v21 );
          }
          return sub_186B220((void *)(v14 - 8));
        }
      }
      else if ( v14 )
      {
        goto LABEL_16;
      }
    }
  }
  return result;
}

