unsigned __int64 __fastcall sub_1AC54C0(__int64 **a1, _BYTE *a2)
{
  void *v2; // rbp
  __m128i *v3; // rax
  bool v4; // zf
  __m128i si128; // xmm0
  __m128i v6; // xmm0
  const void *v7; // r14
  __int64 v8; // rdx
  size_t v9; // r12
  __int64 v10; // r13
  _BYTE *v11; // rbx
  __int64 v12; // rdx
  char v13; // r14
  __int64 *p_dest; // r13
  __int64 v15; // r14
  char *v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  unsigned __int8 *v20; // r15
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  char v23; // r14
  unsigned __int8 *v24; // r14
  _BYTE *v25; // rsi
  __int64 v26; // r15
  void *v27; // rax
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  __int64 v31; // rax
  void **v32; // r14
  unsigned __int8 *v33; // rdi
  __int64 v34; // rax
  void *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rax
  _BYTE *v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rcx
  unsigned __int8 *v46; // r14
  _QWORD *v47; // rax
  _BYTE *v48; // rdx
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  void **v52; // r15
  _BYTE *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r15
  void *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r15
  void *v67; // rax
  _QWORD *v68; // rax
  __int64 v69; // rdx
  unsigned __int8 *v70; // r15
  _BYTE *v71; // rdx
  __int64 v72; // rax
  size_t v73; // rdx
  size_t v74; // rdx
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rbp
  _BYTE *v82; // r12
  __int64 v83; // rbx
  void *v84; // rdi
  __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  _BYTE *v91; // r12
  __int64 v92; // rbx
  void *v93; // r13
  __int64 v94; // rbp
  void *v95; // rdi
  char *v96; // rdi
  __int64 v97; // r9
  const __m128i *v98; // r13
  __int64 v99; // rax
  __int64 v100; // r9
  char *v101; // r15
  const __m128i *v102; // r14
  __int64 v103; // rax
  __m128i v104; // xmm2
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rbp
  _BYTE *v112; // r12
  __int64 v113; // rbx
  __int64 v114; // r13
  void *v115; // rdi
  __int64 v116; // rcx
  int v117; // eax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rsi
  __int64 v121; // rax
  _BYTE *v122; // r12
  __int64 v123; // rbx
  __int64 v124; // r13
  void *v125; // rdi
  const __m128i *j; // r15
  size_t v127; // rdx
  unsigned __int8 *v128; // rdi
  _BYTE *i; // [rsp+0h] [rbp-218h]
  void *src; // [rsp+20h] [rbp-1F8h]
  void *srcb; // [rsp+20h] [rbp-1F8h]
  void *srca; // [rsp+20h] [rbp-1F8h]
  _BYTE *srcc; // [rsp+20h] [rbp-1F8h]
  void *srcd; // [rsp+20h] [rbp-1F8h]
  void *srce; // [rsp+20h] [rbp-1F8h]
  __int64 *v137; // [rsp+28h] [rbp-1F0h]
  void *v138; // [rsp+28h] [rbp-1F0h]
  _BYTE *v139; // [rsp+28h] [rbp-1F0h]
  __int64 *v140; // [rsp+30h] [rbp-1E8h]
  __int64 *v141; // [rsp+38h] [rbp-1E0h]
  __int64 v142; // [rsp+48h] [rbp-1D0h] BYREF
  void *v143; // [rsp+50h] [rbp-1C8h]
  size_t n; // [rsp+58h] [rbp-1C0h]
  _QWORD v145[2]; // [rsp+60h] [rbp-1B8h] BYREF
  void *v146; // [rsp+70h] [rbp-1A8h]
  size_t v147; // [rsp+78h] [rbp-1A0h]
  __int64 dest; // [rsp+80h] [rbp-198h] BYREF
  void *v149; // [rsp+90h] [rbp-188h] BYREF
  size_t v150; // [rsp+98h] [rbp-180h]
  _QWORD v151[2]; // [rsp+A0h] [rbp-178h] BYREF
  void *ptr; // [rsp+B0h] [rbp-168h] BYREF
  __int64 v153; // [rsp+B8h] [rbp-160h]
  _BYTE v154[48]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v155[12]; // [rsp+F0h] [rbp-128h] BYREF
  _QWORD v156[2]; // [rsp+150h] [rbp-C8h] BYREF
  void *v157; // [rsp+160h] [rbp-B8h]
  unsigned __int8 *v158; // [rsp+170h] [rbp-A8h] BYREF
  __int64 v159; // [rsp+178h] [rbp-A0h]
  char v160; // [rsp+1C8h] [rbp-50h]
  unsigned int v161; // [rsp+1D0h] [rbp-48h]
  char v162; // [rsp+1D4h] [rbp-44h]

  v2 = a2;
  if ( *a2 == 16 )
  {
    if ( a2[144] != 6 )
      goto LABEL_179;
    if ( *((_DWORD *)a2 + 6) > 1u )
    {
      sub_168B9F0((__int64)v156, *a1, *(_DWORD *)(*((_QWORD *)a2 + 2) + 16LL), 0xB4Cu, 0);
      v18 = 0;
      sub_15F7200(v156);
      return v18;
    }
  }
  v155[1] = 7;
  v155[0] = "default";
  v155[2] = "nvidia";
  v155[4] = "acc_device_nvidia";
  v155[6] = "radeon";
  v155[8] = "host";
  v155[10] = "multicore";
  v155[3] = 6;
  v155[5] = 17;
  v155[7] = 6;
  v155[9] = 4;
  v155[11] = 9;
  v143 = v145;
  v3 = (__m128i *)operator new(0x48u);
  v4 = a2[144] == 6;
  v143 = v3;
  *v3 = _mm_load_si128((const __m128i *)&xmmword_23AAA80);
  v145[0] = 71;
  v3[1] = _mm_load_si128((const __m128i *)&xmmword_23AAA90);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAAA0);
  v3[4].m128i_i32[0] = 1868786036;
  v3[2] = si128;
  v6 = _mm_load_si128((const __m128i *)&xmmword_23AAAB0);
  v3[4].m128i_i16[2] = 25970;
  v3[3] = v6;
  v3[4].m128i_i8[6] = 39;
  n = 71;
  v3[4].m128i_i8[7] = 0;
  if ( !v4 )
LABEL_179:
    abort();
  v7 = *((const void **)a2 + 2);
  v8 = 16LL * *((unsigned int *)a2 + 6);
  ptr = v154;
  v153 = 0x300000000LL;
  v9 = v8;
  v10 = v8 >> 4;
  if ( (unsigned __int64)v8 > 0x30 )
  {
    sub_2237220(&ptr, v154, v8 >> 4, 16);
    v96 = (char *)ptr + 16 * (unsigned int)v153;
LABEL_105:
    memcpy(v96, v7, v9);
    v11 = ptr;
    LODWORD(v9) = v153;
    goto LABEL_7;
  }
  v11 = v154;
  if ( v8 )
  {
    v96 = v154;
    goto LABEL_105;
  }
LABEL_7:
  LODWORD(v153) = v9 + v10;
  v12 = 16LL * (unsigned int)(v9 + v10);
  for ( i = &v11[v12]; i != v11; v11 += 16 )
  {
    if ( *((_QWORD *)v11 + 1) && sub_1AC1C80(v155, (__int64)v156, (__int64)v11) == v156 )
      break;
  }
  v13 = 0;
  p_dest = &dest;
  while ( v11 != i )
  {
    sub_168B9F0((__int64)v156, *a1, *(_DWORD *)v11, 0xB5Cu, 0);
    v15 = *((_QWORD *)v11 + 1);
    if ( v160 )
    {
      v20 = v158;
      if ( !v158 )
      {
        v85 = v159;
        v86 = *(_DWORD *)(v159 + 14976);
        if ( v86 )
        {
          v87 = (unsigned int)(v86 - 1);
          *(_DWORD *)(v159 + 14976) = v87;
          v20 = *(unsigned __int8 **)(v85 + 8 * v87 + 14848);
          v88 = *((unsigned int *)v20 + 134);
          *v20 = 0;
          v89 = *((_QWORD *)v20 + 66);
          *((_DWORD *)v20 + 106) = 0;
          v90 = v89 + (v88 << 6);
          if ( v89 != v90 )
          {
            v91 = v11;
            v92 = v90;
            v137 = p_dest;
            v93 = v2;
            v94 = v89;
            do
            {
              while ( 1 )
              {
                v92 -= 64;
                v95 = *(void **)(v92 + 24);
                if ( v95 == (void *)(v92 + 40) )
                  break;
                operator delete(v95);
                if ( v94 == v92 )
                  goto LABEL_100;
              }
            }
            while ( v94 != v92 );
LABEL_100:
            v11 = v91;
            v2 = v93;
            p_dest = v137;
          }
          *((_DWORD *)v20 + 134) = 0;
        }
        else
        {
          v20 = (unsigned __int8 *)operator new(0x3A0u);
          *v20 = 0;
          *((_QWORD *)v20 + 12) = v20 + 112;
          *((_QWORD *)v20 + 16) = v20 + 144;
          *((_QWORD *)v20 + 20) = v20 + 176;
          *((_QWORD *)v20 + 24) = v20 + 208;
          *((_QWORD *)v20 + 28) = v20 + 240;
          *((_QWORD *)v20 + 32) = v20 + 272;
          *((_QWORD *)v20 + 36) = v20 + 304;
          *((_QWORD *)v20 + 40) = v20 + 336;
          *((_QWORD *)v20 + 44) = v20 + 368;
          *((_QWORD *)v20 + 48) = v20 + 400;
          *((_QWORD *)v20 + 52) = v20 + 432;
          *((_QWORD *)v20 + 13) = 0;
          v20[112] = 0;
          *((_QWORD *)v20 + 17) = 0;
          v20[144] = 0;
          *((_QWORD *)v20 + 21) = 0;
          v20[176] = 0;
          *((_QWORD *)v20 + 25) = 0;
          v20[208] = 0;
          *((_QWORD *)v20 + 29) = 0;
          v20[240] = 0;
          *((_QWORD *)v20 + 33) = 0;
          v20[272] = 0;
          *((_QWORD *)v20 + 37) = 0;
          v20[304] = 0;
          *((_QWORD *)v20 + 41) = 0;
          v20[336] = 0;
          *((_QWORD *)v20 + 45) = 0;
          v20[368] = 0;
          *((_QWORD *)v20 + 49) = 0;
          v20[400] = 0;
          *((_QWORD *)v20 + 53) = 0x800000000LL;
          *((_QWORD *)v20 + 66) = v20 + 544;
          *((_QWORD *)v20 + 67) = 0x600000000LL;
        }
        v158 = v20;
      }
      v20[*v20 + 1] = 5;
      v21 = v158;
      v22 = *v158;
      *v158 = v22 + 1;
      *(_QWORD *)&v21[8 * v22 + 16] = v15;
    }
    else
    {
      if ( !v162 )
        goto LABEL_15;
      v66 = sub_168B9E0(v156);
      v67 = v157;
      if ( v157 )
        v67 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v157 + 32LL))(v157);
      v149 = v67;
      v68 = sub_1587BC0(v66, (__int64 *)&v149, v62, v63, v64, v65);
      v69 = *v68 + 32LL * v161;
      v70 = *(unsigned __int8 **)(v69 + 8);
      if ( !v70 )
      {
        v116 = *(_QWORD *)(v69 + 16);
        v117 = *(_DWORD *)(v116 + 14976);
        if ( v117 )
        {
          v118 = (unsigned int)(v117 - 1);
          *(_DWORD *)(v116 + 14976) = v118;
          v70 = *(unsigned __int8 **)(v116 + 8 * v118 + 14848);
          v119 = *((unsigned int *)v70 + 134);
          *v70 = 0;
          v120 = *((_QWORD *)v70 + 66);
          *((_DWORD *)v70 + 106) = 0;
          v121 = v120 + (v119 << 6);
          if ( v120 != v121 )
          {
            v122 = v11;
            v123 = v121;
            v140 = p_dest;
            v124 = v69;
            do
            {
              while ( 1 )
              {
                v123 -= 64;
                v125 = *(void **)(v123 + 24);
                if ( v125 == (void *)(v123 + 40) )
                  break;
                operator delete(v125);
                if ( v120 == v123 )
                  goto LABEL_138;
              }
            }
            while ( v120 != v123 );
LABEL_138:
            v11 = v122;
            v69 = v124;
            p_dest = v140;
          }
          *((_DWORD *)v70 + 134) = 0;
        }
        else
        {
          srcd = (void *)v69;
          v70 = (unsigned __int8 *)operator new(0x3A0u);
          *v70 = 0;
          *((_QWORD *)v70 + 12) = v70 + 112;
          *((_QWORD *)v70 + 16) = v70 + 144;
          *((_QWORD *)v70 + 20) = v70 + 176;
          *((_QWORD *)v70 + 24) = v70 + 208;
          *((_QWORD *)v70 + 28) = v70 + 240;
          *((_QWORD *)v70 + 32) = v70 + 272;
          *((_QWORD *)v70 + 36) = v70 + 304;
          *((_QWORD *)v70 + 40) = v70 + 336;
          *((_QWORD *)v70 + 44) = v70 + 368;
          *((_QWORD *)v70 + 48) = v70 + 400;
          *((_QWORD *)v70 + 52) = v70 + 432;
          *((_QWORD *)v70 + 13) = 0;
          v70[112] = 0;
          *((_QWORD *)v70 + 17) = 0;
          v70[144] = 0;
          *((_QWORD *)v70 + 21) = 0;
          v70[176] = 0;
          *((_QWORD *)v70 + 25) = 0;
          v70[208] = 0;
          *((_QWORD *)v70 + 29) = 0;
          v70[240] = 0;
          *((_QWORD *)v70 + 33) = 0;
          v70[272] = 0;
          *((_QWORD *)v70 + 37) = 0;
          v70[304] = 0;
          *((_QWORD *)v70 + 41) = 0;
          v70[336] = 0;
          *((_QWORD *)v70 + 45) = 0;
          v70[368] = 0;
          *((_QWORD *)v70 + 49) = 0;
          v70[400] = 0;
          *((_QWORD *)v70 + 53) = 0x800000000LL;
          v69 = (__int64)srcd;
          *((_QWORD *)v70 + 66) = v70 + 544;
          *((_QWORD *)v70 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v69 + 8) = v70;
      }
      v70[*v70 + 1] = 5;
      v71 = *(_BYTE **)(v69 + 8);
      v72 = (unsigned __int8)*v71;
      *v71 = v72 + 1;
      *(_QWORD *)&v71[8 * v72 + 16] = v15;
    }
    v23 = *((_BYTE *)v2 + 1);
    if ( v160 )
    {
      sub_1573010(&v158, *((_BYTE *)v2 + 1));
    }
    else
    {
      if ( !v162 )
      {
LABEL_15:
        v13 = 0;
        goto LABEL_16;
      }
      v59 = sub_168B9E0(v156);
      v60 = v157;
      if ( v157 )
        v60 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v157 + 32LL))(v157);
      v149 = v60;
      v61 = sub_1587BC0(v59, (__int64 *)&v149, v55, v56, v57, v58);
      sub_1573010((unsigned __int8 **)(*v61 + 32LL * v161 + 8), v23);
    }
    if ( v160 )
    {
      v24 = v158;
      v25 = v143;
      v26 = n;
      if ( !v158 )
      {
        v75 = v159;
        v76 = *(_DWORD *)(v159 + 14976);
        if ( v76 )
        {
          v77 = (unsigned int)(v76 - 1);
          *(_DWORD *)(v159 + 14976) = v77;
          v24 = *(unsigned __int8 **)(v75 + 8 * v77 + 14848);
          v78 = *((unsigned int *)v24 + 134);
          *v24 = 0;
          v79 = *((_QWORD *)v24 + 66);
          *((_DWORD *)v24 + 106) = 0;
          v80 = v79 + (v78 << 6);
          if ( v79 != v80 )
          {
            srca = v2;
            v81 = v79;
            v82 = v11;
            v83 = v80;
            do
            {
              while ( 1 )
              {
                v83 -= 64;
                v84 = *(void **)(v83 + 24);
                if ( v84 == (void *)(v83 + 40) )
                  break;
                operator delete(v84);
                if ( v81 == v83 )
                  goto LABEL_93;
              }
            }
            while ( v81 != v83 );
LABEL_93:
            v11 = v82;
            v2 = srca;
          }
          *((_DWORD *)v24 + 134) = 0;
        }
        else
        {
          srcc = v143;
          v24 = (unsigned __int8 *)operator new(0x3A0u);
          *v24 = 0;
          *((_QWORD *)v24 + 12) = v24 + 112;
          *((_QWORD *)v24 + 16) = v24 + 144;
          *((_QWORD *)v24 + 20) = v24 + 176;
          *((_QWORD *)v24 + 24) = v24 + 208;
          *((_QWORD *)v24 + 28) = v24 + 240;
          *((_QWORD *)v24 + 32) = v24 + 272;
          *((_QWORD *)v24 + 36) = v24 + 304;
          *((_QWORD *)v24 + 40) = v24 + 336;
          *((_QWORD *)v24 + 44) = v24 + 368;
          *((_QWORD *)v24 + 48) = v24 + 400;
          *((_QWORD *)v24 + 52) = v24 + 432;
          *((_QWORD *)v24 + 13) = 0;
          v24[112] = 0;
          *((_QWORD *)v24 + 17) = 0;
          v24[144] = 0;
          *((_QWORD *)v24 + 21) = 0;
          v24[176] = 0;
          *((_QWORD *)v24 + 25) = 0;
          v24[208] = 0;
          *((_QWORD *)v24 + 29) = 0;
          v24[240] = 0;
          *((_QWORD *)v24 + 33) = 0;
          v24[272] = 0;
          *((_QWORD *)v24 + 37) = 0;
          v24[304] = 0;
          *((_QWORD *)v24 + 41) = 0;
          v24[336] = 0;
          *((_QWORD *)v24 + 45) = 0;
          v24[368] = 0;
          *((_QWORD *)v24 + 49) = 0;
          v24[400] = 0;
          *((_QWORD *)v24 + 53) = 0x800000000LL;
          v25 = srcc;
          *((_QWORD *)v24 + 66) = v24 + 544;
          *((_QWORD *)v24 + 67) = 0x600000000LL;
        }
        v158 = v24;
      }
      v24[*v24 + 1] = 0;
      v146 = p_dest;
      if ( &v25[v26] && !v25 )
        goto LABEL_178;
      if ( (unsigned __int64)v26 > 0xF )
      {
        if ( v26 < 0 )
          goto LABEL_177;
        v27 = (void *)operator new(v26 + 1);
        dest = v26;
        v146 = v27;
        goto LABEL_71;
      }
      if ( v26 == 1 )
      {
        LOBYTE(dest) = *v25;
        v27 = p_dest;
        goto LABEL_37;
      }
      v27 = p_dest;
      if ( v26 )
      {
LABEL_71:
        memcpy(v27, v25, v26);
        v27 = v146;
      }
LABEL_37:
      v147 = v26;
      *((_BYTE *)v27 + v26) = 0;
      v28 = v158;
      v29 = *v158;
      *v158 = v29 + 1;
      v30 = (unsigned __int8)v29;
      v31 = 32 * (v29 + 3);
      v32 = (void **)&v28[v31];
      v33 = *(unsigned __int8 **)&v28[v31];
      if ( v146 == p_dest )
      {
        v73 = v147;
        if ( v147 )
        {
          if ( v147 == 1 )
          {
            *v33 = dest;
            v127 = v147;
            v128 = (unsigned __int8 *)*v32;
            v32[1] = (void *)v147;
            v128[v127] = 0;
            v33 = (unsigned __int8 *)v146;
            goto LABEL_41;
          }
          memcpy(v33, p_dest, v147);
          v73 = v147;
          v33 = (unsigned __int8 *)*v32;
        }
        v32[1] = (void *)v73;
        v33[v73] = 0;
        v33 = (unsigned __int8 *)v146;
        goto LABEL_41;
      }
      if ( v33 == &v28[v31 + 16] )
      {
        *v32 = v146;
        v32[1] = (void *)v147;
        v32[2] = (void *)dest;
      }
      else
      {
        v34 = *(_QWORD *)&v28[32 * v30 + 112];
        *v32 = v146;
        v32[1] = (void *)v147;
        v32[2] = (void *)dest;
        if ( v33 )
        {
          v146 = v33;
          dest = v34;
          goto LABEL_41;
        }
      }
      v146 = p_dest;
      v33 = (unsigned __int8 *)p_dest;
LABEL_41:
      v147 = 0;
      *v33 = 0;
      v35 = v146;
      if ( v146 != p_dest )
LABEL_42:
        operator delete(v35);
LABEL_43:
      v13 = v160;
      goto LABEL_16;
    }
    v13 = v162;
    if ( v162 )
    {
      v40 = sub_168B9E0(v156);
      v41 = (__int64)v157;
      if ( v157 )
        v41 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v157 + 32LL))(v157);
      v142 = v41;
      v42 = sub_1587BC0(v40, &v142, v36, v37, v38, v39);
      v43 = v143;
      v44 = n;
      v45 = *v42 + 32LL * v161;
      v46 = *(unsigned __int8 **)(v45 + 8);
      if ( !v46 )
      {
        v105 = *(_QWORD *)(v45 + 16);
        v106 = *(_DWORD *)(v105 + 14976);
        if ( v106 )
        {
          v107 = (unsigned int)(v106 - 1);
          *(_DWORD *)(v105 + 14976) = v107;
          v46 = *(unsigned __int8 **)(v105 + 8 * v107 + 14848);
          v108 = *((unsigned int *)v46 + 134);
          *v46 = 0;
          v109 = *((_QWORD *)v46 + 66);
          *((_DWORD *)v46 + 106) = 0;
          v110 = v109 + (v108 << 6);
          if ( v109 != v110 )
          {
            v138 = v2;
            v111 = v109;
            v112 = v11;
            v113 = v110;
            v141 = p_dest;
            v114 = v45;
            do
            {
              while ( 1 )
              {
                v113 -= 64;
                v115 = *(void **)(v113 + 24);
                if ( v115 == (void *)(v113 + 40) )
                  break;
                operator delete(v115);
                if ( v111 == v113 )
                  goto LABEL_131;
              }
            }
            while ( v111 != v113 );
LABEL_131:
            v11 = v112;
            v45 = v114;
            v2 = v138;
            p_dest = v141;
          }
          *((_DWORD *)v46 + 134) = 0;
        }
        else
        {
          v139 = v143;
          srce = (void *)v45;
          v46 = (unsigned __int8 *)operator new(0x3A0u);
          *v46 = 0;
          *((_QWORD *)v46 + 12) = v46 + 112;
          *((_QWORD *)v46 + 16) = v46 + 144;
          *((_QWORD *)v46 + 20) = v46 + 176;
          *((_QWORD *)v46 + 24) = v46 + 208;
          *((_QWORD *)v46 + 28) = v46 + 240;
          *((_QWORD *)v46 + 32) = v46 + 272;
          *((_QWORD *)v46 + 36) = v46 + 304;
          *((_QWORD *)v46 + 40) = v46 + 336;
          *((_QWORD *)v46 + 44) = v46 + 368;
          *((_QWORD *)v46 + 48) = v46 + 400;
          *((_QWORD *)v46 + 52) = v46 + 432;
          *((_QWORD *)v46 + 13) = 0;
          v46[112] = 0;
          *((_QWORD *)v46 + 17) = 0;
          v46[144] = 0;
          *((_QWORD *)v46 + 21) = 0;
          v46[176] = 0;
          *((_QWORD *)v46 + 25) = 0;
          v46[208] = 0;
          *((_QWORD *)v46 + 29) = 0;
          v46[240] = 0;
          *((_QWORD *)v46 + 33) = 0;
          v46[272] = 0;
          *((_QWORD *)v46 + 37) = 0;
          v46[304] = 0;
          *((_QWORD *)v46 + 41) = 0;
          v46[336] = 0;
          *((_QWORD *)v46 + 45) = 0;
          v46[368] = 0;
          *((_QWORD *)v46 + 49) = 0;
          v46[400] = 0;
          *((_QWORD *)v46 + 53) = 0x800000000LL;
          v45 = (__int64)srce;
          *((_QWORD *)v46 + 66) = v46 + 544;
          v43 = v139;
          *((_QWORD *)v46 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v45 + 8) = v46;
      }
      v46[*v46 + 1] = 0;
      v149 = v151;
      if ( &v43[v44] && !v43 )
LABEL_178:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v44 > 0xF )
      {
        src = (void *)v45;
        if ( v44 < 0 )
LABEL_177:
          std::__throw_length_error("basic_string::_M_create");
        v47 = (_QWORD *)operator new(v44 + 1);
        v45 = (__int64)src;
        v151[0] = v44;
        v149 = v47;
        goto LABEL_80;
      }
      if ( v44 == 1 )
      {
        LOBYTE(v151[0]) = *v43;
        v47 = v151;
        goto LABEL_53;
      }
      v47 = v151;
      if ( v44 )
      {
LABEL_80:
        srcb = (void *)v45;
        memcpy(v47, v43, v44);
        v47 = v149;
        v45 = (__int64)srcb;
      }
LABEL_53:
      v150 = v44;
      *((_BYTE *)v47 + v44) = 0;
      v48 = *(_BYTE **)(v45 + 8);
      v49 = (unsigned __int8)*v48;
      *v48 = v49 + 1;
      v50 = (unsigned __int8)v49;
      v51 = 32 * (v49 + 3);
      v52 = (void **)&v48[v51];
      v53 = *(_BYTE **)&v48[v51];
      if ( v149 == v151 )
      {
        v74 = v150;
        if ( v150 )
        {
          if ( v150 == 1 )
            *v53 = v151[0];
          else
            memcpy(v53, v149, v150);
          v74 = v150;
          v53 = *v52;
        }
        v52[1] = (void *)v74;
        v53[v74] = 0;
        v53 = v149;
      }
      else
      {
        if ( v53 == &v48[v51 + 16] )
        {
          *v52 = v149;
          v52[1] = (void *)v150;
          v52[2] = (void *)v151[0];
        }
        else
        {
          v54 = *(_QWORD *)&v48[32 * v50 + 112];
          *v52 = v149;
          v52[1] = (void *)v150;
          v52[2] = (void *)v151[0];
          if ( v53 )
          {
            v149 = v53;
            v151[0] = v54;
            goto LABEL_57;
          }
        }
        v53 = v151;
        v149 = v151;
      }
LABEL_57:
      v150 = 0;
      *v53 = 0;
      v35 = v149;
      if ( v149 != v151 )
        goto LABEL_42;
      goto LABEL_43;
    }
LABEL_16:
    v11 += 16;
    sub_15F7200(v156);
    if ( v11 == i )
      break;
    while ( !*((_QWORD *)v11 + 1) || sub_1AC1C80(v155, (__int64)v156, (__int64)v11) != v156 )
    {
      v11 += 16;
      if ( i == v11 )
        goto LABEL_20;
    }
  }
LABEL_20:
  v16 = (char *)ptr;
  v17 = (unsigned int)v153;
  if ( !v13 )
    goto LABEL_21;
  v97 = 16LL * (unsigned int)v153;
  v98 = (const __m128i *)((char *)ptr + v97);
  v99 = v97 >> 4;
  v100 = v97 >> 6;
  if ( !v100 )
  {
LABEL_118:
    if ( v99 != 2 )
    {
      if ( v99 != 3 )
      {
        if ( v99 != 1 )
        {
LABEL_121:
          v102 = v98;
          goto LABEL_122;
        }
        goto LABEL_173;
      }
      if ( *((_QWORD *)v16 + 1) && sub_1AC1C80(v155, (__int64)v156, (__int64)v16) == v156 )
        goto LABEL_175;
      v16 += 16;
    }
    if ( *((_QWORD *)v16 + 1) && sub_1AC1C80(v155, (__int64)v156, (__int64)v16) == v156 )
      goto LABEL_175;
    v16 += 16;
LABEL_173:
    if ( !*((_QWORD *)v16 + 1) || sub_1AC1C80(v155, (__int64)v156, (__int64)v16) != v156 )
      goto LABEL_121;
LABEL_175:
    v102 = (const __m128i *)v16;
    goto LABEL_159;
  }
  v101 = (char *)ptr + 64 * v100;
  while ( !*((_QWORD *)v16 + 1) || sub_1AC1C80(v155, (__int64)v156, (__int64)v16) != v156 )
  {
    if ( *((_QWORD *)v16 + 3) )
    {
      v102 = (const __m128i *)(v16 + 16);
      if ( sub_1AC1C80(v155, (__int64)v156, (__int64)(v16 + 16)) == v156 )
        goto LABEL_159;
    }
    if ( *((_QWORD *)v16 + 5) )
    {
      v102 = (const __m128i *)(v16 + 32);
      if ( sub_1AC1C80(v155, (__int64)v156, (__int64)(v16 + 32)) == v156 )
        goto LABEL_159;
    }
    if ( *((_QWORD *)v16 + 7) )
    {
      v102 = (const __m128i *)(v16 + 48);
      if ( sub_1AC1C80(v155, (__int64)v156, (__int64)(v16 + 48)) == v156 )
        goto LABEL_159;
    }
    v16 += 64;
    if ( v16 == v101 )
    {
      v99 = ((char *)v98 - v16) >> 4;
      goto LABEL_118;
    }
  }
  v102 = (const __m128i *)v16;
LABEL_159:
  if ( v98 != v102 )
  {
    for ( j = v102 + 1; v98 != j; ++j )
    {
      if ( !j->m128i_i64[1] || sub_1AC1C80(v155, (__int64)v156, (__int64)j) != v156 )
      {
        ++v102;
        v102[-1] = _mm_loadu_si128(j);
      }
    }
  }
LABEL_122:
  v16 = (char *)ptr;
  v103 = ((_BYTE *)ptr + 16 * (unsigned int)v153 - (_BYTE *)v98) >> 4;
  if ( (_BYTE *)ptr + 16 * (unsigned int)v153 - (_BYTE *)v98 > 0 )
  {
    do
    {
      v104 = _mm_loadu_si128(v98);
      ++v102;
      ++v98;
      v102[-1] = v104;
      --v103;
    }
    while ( v103 );
    v16 = (char *)ptr;
  }
  LODWORD(v153) = ((char *)v102 - v16) >> 4;
  v17 = (unsigned int)v153;
LABEL_21:
  v18 = sub_EB45C0(
          a1[1],
          *((_BYTE *)v2 + 1),
          *((_DWORD *)v2 + 1),
          *((_DWORD *)v2 + 3),
          (__int64)v16,
          v17,
          *((_DWORD *)v2 + 2));
  if ( ptr != v154 )
    free(ptr);
  if ( v143 != v145 )
    operator delete(v143);
  return v18;
}
