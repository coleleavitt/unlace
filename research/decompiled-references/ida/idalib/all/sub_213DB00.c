__int64 __fastcall sub_213DB00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128 *p_s2; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned int v13; // ebp
  unsigned __int64 v14; // rax
  char *v15; // rdi
  char *v16; // rax
  __int64 v17; // rax
  _DWORD *v18; // rax
  char v19; // dl
  bool v20; // zf
  _BYTE *v21; // r13
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  size_t v26; // r15
  unsigned int v27; // r12d
  __int64 *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // r15
  _QWORD *v32; // rdx
  char *v33; // rdi
  char *v34; // rax
  _QWORD *v35; // r14
  _QWORD *v36; // r13
  void *v37; // rdi
  unsigned int v38; // r13d
  unsigned __int64 *v40; // r14
  unsigned __int64 v41; // r15
  unsigned __int64 v42; // r13
  void *v43; // rdi
  __int64 v44; // rdx
  unsigned int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // r9
  const void *v48; // r13
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rbp
  _QWORD *v59; // rbx
  void *v60; // rdi
  unsigned __int64 v61; // rsi
  __int64 *v62; // rbx
  __int64 v63; // r15
  __int64 v64; // r14
  void *v65; // rdi
  __int64 v66; // rdi
  __int64 v67; // r14
  _BYTE *v68; // rdx
  __int64 (*v69)(); // rax
  char *v70; // rax
  __m128i v71; // xmm1
  unsigned int v72; // edx
  char v73; // al
  _BYTE *v74; // rcx
  _BYTE *v75; // rsi
  _BYTE *v76; // rax
  int v77; // eax
  __int64 v78; // r14
  _QWORD *v79; // rdi
  __int64 v80; // rax
  __m128 *v81; // rsi
  __m128i v82; // xmm2
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rbp
  __int64 v86; // r13
  __int64 v87; // r12
  __int64 v88; // rax
  unsigned __int8 v89; // bl
  __int64 v90; // rdx
  __int64 v91; // rdx
  const void *v92; // rdx
  size_t v93; // rax
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rsi
  unsigned __int64 *v99; // [rsp+8h] [rbp-250h]
  unsigned int v100; // [rsp+8h] [rbp-250h]
  unsigned __int8 v101; // [rsp+8h] [rbp-250h]
  unsigned __int64 *v102; // [rsp+10h] [rbp-248h]
  char v103; // [rsp+18h] [rbp-240h]
  __int64 v104; // [rsp+18h] [rbp-240h]
  __int64 v105; // [rsp+20h] [rbp-238h]
  __int64 *v106; // [rsp+20h] [rbp-238h]
  char v108; // [rsp+36h] [rbp-222h]
  bool v109; // [rsp+37h] [rbp-221h]
  __int64 *v111; // [rsp+50h] [rbp-208h]
  __int64 v112; // [rsp+58h] [rbp-200h]
  _BYTE *v113; // [rsp+68h] [rbp-1F0h] BYREF
  __m128i v114; // [rsp+70h] [rbp-1E8h] BYREF
  const void *v115; // [rsp+80h] [rbp-1D8h]
  size_t v116; // [rsp+88h] [rbp-1D0h]
  __int16 v117; // [rsp+90h] [rbp-1C8h]
  __m128i v118[2]; // [rsp+A0h] [rbp-1B8h] BYREF
  __int16 v119; // [rsp+C0h] [rbp-198h]
  __m128i v120[3]; // [rsp+D0h] [rbp-188h] BYREF
  __m128i v121[2]; // [rsp+100h] [rbp-158h] BYREF
  __int16 v122; // [rsp+120h] [rbp-138h]
  __m128i v123[3]; // [rsp+130h] [rbp-128h] BYREF
  __m128i v124[2]; // [rsp+160h] [rbp-F8h] BYREF
  __int16 v125; // [rsp+180h] [rbp-D8h]
  __m128i v126; // [rsp+190h] [rbp-C8h] BYREF
  __int128 v127; // [rsp+1A0h] [rbp-B8h]
  unsigned int v128; // [rsp+1B0h] [rbp-A8h]
  void *ptr; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 v130; // [rsp+1C8h] [rbp-90h]
  _BYTE v131[32]; // [rsp+1D0h] [rbp-88h] BYREF
  __m128 s2; // [rsp+1F0h] [rbp-68h] BYREF
  void *v133[2]; // [rsp+200h] [rbp-58h] BYREF
  void *v134; // [rsp+210h] [rbp-48h]
  __int16 v135; // [rsp+218h] [rbp-40h]

  p_s2 = *(__m128 **)a3;
  v99 = *(unsigned __int64 **)(a3 + 8);
  v10 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v99 - *(_QWORD *)a3) >> 3);
  if ( a2 )
  {
    a6 = (__int64)a2;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((a2[5] - a2[4]) >> 4);
    ptr = v131;
    v12 = (unsigned int)v11;
    v13 = v11;
    v130 = 0x400000000LL;
    v109 = (_DWORD)v11 != 0;
    if ( (unsigned int)v11 > v10 )
    {
      p_s2 = (__m128 *)((unsigned int)v11 - v10);
      sub_212EF10((__int64 **)a3, (unsigned __int64)p_s2);
      v14 = (unsigned int)v130;
      goto LABEL_58;
    }
    if ( (unsigned int)v11 >= v10 )
      goto LABEL_4;
  }
  else
  {
    v12 = 0;
    v109 = 0;
    v13 = 0;
    ptr = v131;
    v130 = 0x400000000LL;
    if ( !v10 )
      goto LABEL_4;
  }
  v102 = (unsigned __int64 *)p_s2 + 3 * v12;
  if ( v102 != v99 )
  {
    v40 = (unsigned __int64 *)p_s2 + 3 * v12;
    do
    {
      while ( 1 )
      {
        v41 = v40[1];
        v42 = *v40;
        if ( v41 != *v40 )
        {
          do
          {
            if ( *(_DWORD *)(v42 + 32) > 0x40u )
            {
              v43 = *(void **)(v42 + 24);
              if ( v43 )
                operator delete[](v43);
            }
            v42 += 40LL;
          }
          while ( v41 != v42 );
          v42 = *v40;
        }
        if ( !v42 )
          break;
        v40 += 3;
        operator delete((void *)v42);
        if ( v99 == v40 )
          goto LABEL_56;
      }
      v40 += 3;
    }
    while ( v40 != v99 );
LABEL_56:
    *(_QWORD *)(a3 + 8) = v102;
    v14 = (unsigned int)v130;
LABEL_58:
    if ( v12 == v14 )
      goto LABEL_9;
    if ( v12 < v14 )
      goto LABEL_8;
    if ( HIDWORD(v130) >= v12 )
    {
LABEL_6:
      v15 = (char *)ptr + 8 * v14;
      v16 = (char *)ptr + 8 * v12;
      if ( v15 != v16 )
      {
        p_s2 = nullptr;
        memset(v15, 0, 8 * ((unsigned __int64)(v16 - 8 - v15) >> 3) + 8);
      }
LABEL_8:
      LODWORD(v130) = v13;
      goto LABEL_9;
    }
LABEL_61:
    p_s2 = (__m128 *)v131;
    sub_2237220(&ptr, v131, v12, 8);
    v14 = (unsigned int)v130;
    goto LABEL_6;
  }
LABEL_4:
  v14 = 0;
  if ( v12 )
  {
    if ( HIDWORD(v130) >= v12 )
      goto LABEL_6;
    goto LABEL_61;
  }
LABEL_9:
  v108 = 0;
  if ( v13 )
    v108 = *(_BYTE *)(a2[5] - 7);
  v100 = 0;
  v103 = 0;
  while ( 1 )
  {
    v17 = *(_QWORD *)(a1 + 184);
    s2 = 0u;
    v105 = v17;
    v135 = 0;
    v18 = *(_DWORD **)(a1 + 48);
    *(_OWORD *)v133 = 0;
    v134 = nullptr;
    if ( *v18 != 2 )
      goto LABEL_13;
    p_s2 = (__m128 *)&v126;
    v126.m128i_i32[0] = 0;
    v126.m128i_i64[1] = 0;
    v128 = 1;
    v127 = 0;
    sub_2128A20(a1 + 48, (__int64)&v126, (char *)&dword_0 + 1, 1u, a5, a6);
    if ( v126.m128i_i32[0] != 28 )
    {
      if ( v128 > 0x40 && *((_QWORD *)&v127 + 1) )
        operator delete[](*((void **)&v127 + 1));
LABEL_13:
      v19 = 0;
      if ( v108 )
        v19 = v13 - 1 == v100;
      if ( !v103 )
        goto LABEL_16;
      goto LABEL_69;
    }
    if ( v128 > 0x40 && *((_QWORD *)&v127 + 1) )
      operator delete[](*((void **)&v127 + 1));
    p_s2 = &s2;
    if ( (unsigned __int8)sub_213B1B0(a1, &s2, v44, v45, v46, v47) )
    {
      v126.m128i_i64[0] = (__int64)"invalid argument identifier for formal argument";
      LOWORD(v128) = 259;
      v38 = sub_2153E90(a1, v105, &v126, 0, 0);
      goto LABEL_82;
    }
    if ( **(_DWORD **)(a1 + 48) != 28 )
    {
      v126.m128i_i64[0] = (__int64)"expected '=' after formal parameter identifier";
      LOWORD(v128) = 259;
      v38 = sub_21543E0(a1, &v126, 0, 0);
      goto LABEL_82;
    }
    sub_2132C70(a1, &s2);
    v19 = 0;
    if ( v108 )
      v19 = v13 - 1 == v100;
LABEL_69:
    if ( !s2.m128_u64[1] )
    {
      LOWORD(v128) = 259;
      v126.m128i_i64[0] = (__int64)"cannot mix positional and keyword arguments";
      v38 = sub_2153E90(a1, v105, &v126, 0, 0);
      goto LABEL_82;
    }
    v103 = 1;
LABEL_16:
    v20 = *(_BYTE *)(a1 + 863) == 0;
    v21 = *(_BYTE **)(a1 + 184);
    v113 = nullptr;
    if ( v20 )
      goto LABEL_19;
    v22 = **(_DWORD **)(a1 + 48);
    if ( v22 == 37 )
    {
      sub_2132C70(a1, p_s2);
      if ( sub_2133530(a1, (unsigned __int64 *)v123, (__int64)&v113) )
        goto LABEL_156;
      v66 = *(_QWORD *)(a1 + 24);
      v67 = v123[0].m128i_i64[0];
      v68 = nullptr;
      v69 = *(__int64 (**)())(*(_QWORD *)v66 + 80LL);
      if ( v69 != sub_210EC60 )
        v68 = (_BYTE *)((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v69)(v66, v123, 0);
      if ( !sub_210E270(v67, v124, v68) )
      {
        v126.m128i_i64[0] = (__int64)"expected absolute expression";
        LOWORD(v128) = 259;
        v38 = sub_2153E90(a1, v21, &v126, 0, 0);
        goto LABEL_82;
      }
      v126.m128i_i32[0] = 4;
      v126.m128i_i64[1] = (__int64)v21;
      v128 = 64;
      *(_QWORD *)&v127 = v113 - v21;
      *((_QWORD *)&v127 + 1) = v124[0].m128i_i64[0];
      v70 = (char *)v133[1];
      if ( v133[1] != v134 )
      {
        v71 = _mm_loadu_si128((const __m128i *)&v126.m128i_u64[1]);
        v72 = v128;
        *(_DWORD *)v133[1] = 4;
        *(__m128i *)(v70 + 8) = v71;
        *((_DWORD *)v70 + 8) = v72;
        goto LABEL_115;
      }
LABEL_135:
      sub_212ECB0((__int64)v133, v70, (__int64)&v126);
LABEL_116:
      if ( v128 > 0x40 && *((_QWORD *)&v127 + 1) )
        operator delete[](*((void **)&v127 + 1));
      goto LABEL_20;
    }
    if ( v22 == 39 )
    {
      v73 = *v21;
      if ( *v21 == 10 || v73 == 62 )
      {
        v75 = v21;
      }
      else
      {
        if ( !v73 || v73 == 13 )
          goto LABEL_19;
        v74 = v21;
        while ( 1 )
        {
          v75 = v74 + 1;
          if ( v73 == 33 )
          {
            v76 = v74 + 2;
            ++v74;
            v75 = v76;
          }
          v73 = v74[1];
          if ( v73 == 62 || v73 == 10 )
            break;
          v74 = v75;
          if ( !v73 || v73 == 13 )
            goto LABEL_19;
        }
      }
      if ( v73 == 62 )
      {
        v77 = *(_DWORD *)(a1 + 296);
        v78 = (__int64)(v75 + 1);
        v79 = *(_QWORD **)(a1 + 32);
        v113 = v75 + 1;
        if ( !v77 )
        {
          v77 = sub_2239B50(v79, v75 + 1);
          v79 = *(_QWORD **)(a1 + 32);
        }
        *(_DWORD *)(a1 + 296) = v77;
        v80 = *(_QWORD *)(*v79 + 24LL * (unsigned int)(v77 - 1));
        v81 = *(__m128 **)(v80 + 8);
        sub_2124C60(a1 + 48, (__int64)v81, *(_QWORD *)(v80 + 16) - (_QWORD)v81, v78, 1);
        sub_2132C70(a1, v81);
        v126.m128i_i32[0] = 3;
        v70 = (char *)v133[1];
        v126.m128i_i64[1] = (__int64)v21;
        v127 = (unsigned __int64)(v78 - (_QWORD)v21);
        v128 = 64;
        if ( v133[1] == v134 )
          goto LABEL_135;
        v82 = _mm_loadu_si128((const __m128i *)&v126.m128i_u64[1]);
        v83 = v128;
        *(_DWORD *)v133[1] = 3;
        *(__m128i *)(v70 + 8) = v82;
        *((_DWORD *)v70 + 8) = v83;
LABEL_115:
        *((_QWORD *)v70 + 3) = *((_QWORD *)&v127 + 1);
        v133[1] = v70 + 40;
        goto LABEL_116;
      }
    }
LABEL_19:
    v23 = sub_21321E0(a1, (__int64)v133, v19);
    if ( (_BYTE)v23 )
      goto LABEL_81;
LABEL_20:
    v26 = s2.m128_u64[1];
    v27 = v100;
    if ( s2.m128_u64[1] )
    {
      v48 = (const void *)s2.m128_u64[0];
      if ( !v13 )
      {
LABEL_80:
        v124[0].m128i_i64[0] = (__int64)"'";
        v125 = 259;
        v50 = *a2;
        v122 = 261;
        v121[0].m128i_i64[0] = v50;
        v51 = a2[1];
        v117 = 1283;
        v121[0].m128i_i64[1] = v51;
        v118[0].m128i_i64[0] = (__int64)"' does not exist for macro '";
        v119 = 259;
        v114.m128i_i64[0] = (__int64)"parameter named '";
        v115 = v48;
        v116 = v26;
        sub_A41580(v120, &v114, v118, 259, v24, v25);
        sub_A41580(v123, v120, v121, v52, v53, v54);
        sub_A41580(&v126, v123, v124, v55, v56, v57);
        v23 = sub_2153E90(a1, v105, &v126, 0, 0);
LABEL_81:
        v38 = v23;
        goto LABEL_82;
      }
      v27 = 0;
      v49 = a2[4];
      while ( *(_QWORD *)(v49 + 8) != v26 || memcmp(*(const void **)v49, v48, v26) )
      {
        ++v27;
        v49 += 48;
        if ( v27 == v13 )
          goto LABEL_80;
      }
    }
    if ( v133[1] != v133[0] )
    {
      v28 = *(__int64 **)a3;
      v106 = *(__int64 **)(a3 + 8);
      v29 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v106 - *(_QWORD *)a3) >> 3);
      if ( v27 >= v29 )
      {
        v61 = v27 + 1;
        if ( v61 > v29 )
        {
          sub_212EF10((__int64 **)a3, v61 - v29);
          v28 = *(__int64 **)a3;
        }
        else if ( v61 < v29 )
        {
          v111 = &v28[3 * v61];
          if ( v106 != v111 )
          {
            v112 = a1;
            v62 = &v28[3 * v61];
            do
            {
              while ( 1 )
              {
                v63 = v62[1];
                v64 = *v62;
                if ( v63 != *v62 )
                {
                  do
                  {
                    if ( *(_DWORD *)(v64 + 32) > 0x40u )
                    {
                      v65 = *(void **)(v64 + 24);
                      if ( v65 )
                        operator delete[](v65);
                    }
                    v64 += 40;
                  }
                  while ( v63 != v64 );
                  v64 = *v62;
                }
                if ( !v64 )
                  break;
                v62 += 3;
                operator delete((void *)v64);
                if ( v62 == v106 )
                  goto LABEL_102;
              }
              v62 += 3;
            }
            while ( v106 != v62 );
LABEL_102:
            a1 = v112;
            *(_QWORD *)(a3 + 8) = v111;
            v28 = *(__int64 **)a3;
          }
        }
      }
      sub_212DC80(&v28[3 * v27], (__int64 *)v133);
      v30 = (unsigned int)v130;
      if ( v27 >= (unsigned int)v130 )
      {
        v31 = v27 + 1;
        if ( v31 != (unsigned int)v130 )
        {
          if ( v31 >= (unsigned int)v130 )
          {
            if ( v31 > HIDWORD(v130) )
            {
              sub_2237220(&ptr, v131, v27 + 1, 8);
              v30 = (unsigned int)v130;
            }
            v32 = ptr;
            v33 = (char *)ptr + 8 * v30;
            v34 = (char *)ptr + 8 * v31;
            if ( v33 != v34 )
            {
              memset(v33, 0, 8 * ((unsigned __int64)(v34 - 8 - v33) >> 3) + 8);
              v32 = ptr;
            }
            LODWORD(v130) = v27 + 1;
            goto LABEL_31;
          }
          LODWORD(v130) = v27 + 1;
        }
      }
      v32 = ptr;
LABEL_31:
      v32[v27] = *(_QWORD *)(a1 + 184);
    }
    if ( **(_DWORD **)(a1 + 48) == 9 )
      break;
    p_s2 = (__m128 *)(&qword_18 + 2);
    sub_2154640(a1, 26);
    v35 = v133[1];
    v36 = v133[0];
    if ( v133[1] != v133[0] )
    {
      do
      {
        if ( *((_DWORD *)v36 + 8) > 0x40u )
        {
          v37 = (void *)v36[3];
          if ( v37 )
            operator delete[](v37);
        }
        v36 += 5;
      }
      while ( v35 != v36 );
      v36 = v133[0];
    }
    if ( v36 )
    {
      operator delete(v36);
      if ( ++v100 >= v13 )
      {
LABEL_41:
        if ( v109 )
        {
          LOWORD(v134) = 259;
          s2.m128_u64[0] = (unsigned __int64)"too many positional arguments";
          v38 = sub_21543E0(a1, &s2, 0, 0);
          goto LABEL_43;
        }
      }
    }
    else if ( ++v100 >= v13 )
    {
      goto LABEL_41;
    }
  }
  if ( !v13 )
  {
LABEL_156:
    v38 = 0;
    goto LABEL_82;
  }
  v84 = v13 - 1;
  v85 = 0;
  v104 = a1;
  v101 = 0;
  v86 = 8 * v84 + 8;
  do
  {
    while ( 1 )
    {
      v87 = 3 * v85;
      if ( *(_QWORD *)(3 * v85 + *(_QWORD *)a3 + 8) == *(_QWORD *)(3 * v85 + *(_QWORD *)a3) )
      {
        v88 = 6 * v85 + a2[4];
        v89 = *(_BYTE *)(v88 + 40);
        if ( v89 )
        {
          v90 = *a2;
          v124[0].m128i_i64[0] = (__int64)"'";
          v121[0].m128i_i64[0] = v90;
          v91 = a2[1];
          v118[0].m128i_i64[0] = (__int64)"' in macro '";
          v114.m128i_i64[0] = (__int64)"missing value for required parameter '";
          v121[0].m128i_i64[1] = v91;
          v92 = *(const void **)v88;
          v119 = 259;
          v115 = v92;
          v93 = *(_QWORD *)(v88 + 8);
          v125 = 259;
          v122 = 261;
          v117 = 1283;
          v116 = v93;
          sub_A41580(v120, &v114, v118, (__int64)"missing value for required parameter '", 259, 261);
          sub_A41580(v123, v120, v121, (__int64)v123, v94, v95);
          sub_A41580(&v126, v123, v124, (__int64)v123, v96, v97);
          if ( *(_QWORD *)((char *)ptr + v85) )
            v98 = *(_QWORD *)((char *)ptr + v85);
          else
            v98 = *(_QWORD *)(v104 + 184);
          sub_2153E90(v104, v98, &v126, 0, 0);
          v101 = v89;
          v88 = 6 * v85 + a2[4];
        }
        if ( *(_QWORD *)(v88 + 24) != *(_QWORD *)(v88 + 16) )
          break;
      }
      v85 += 8;
      if ( v86 == v85 )
        goto LABEL_148;
    }
    v85 += 8;
    sub_212DC80((__int64 *)(v87 + *(_QWORD *)a3), (__int64 *)(v88 + 16));
  }
  while ( v86 != v85 );
LABEL_148:
  v38 = v101;
LABEL_82:
  v58 = v133[1];
  v59 = v133[0];
  if ( v133[1] != v133[0] )
  {
    do
    {
      if ( *((_DWORD *)v59 + 8) > 0x40u )
      {
        v60 = (void *)v59[3];
        if ( v60 )
          operator delete[](v60);
      }
      v59 += 5;
    }
    while ( v58 != v59 );
    v59 = v133[0];
  }
  if ( v59 )
    operator delete(v59);
LABEL_43:
  if ( ptr != v131 )
    free(ptr);
  return v38;
}
