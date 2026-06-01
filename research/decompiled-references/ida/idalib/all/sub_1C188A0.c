__int64 __fastcall sub_1C188A0(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rcx
  __m128 v8; // xmm0
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r12
  void *v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rsi
  size_t v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdi
  char v24; // al
  unsigned __int64 v25; // rdx
  char v26; // si
  unsigned int v27; // ecx
  __int64 v28; // r15
  __int64 v29; // rbp
  unsigned __int8 *v31; // rbp
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r12
  unsigned __int8 *v35; // rbp
  unsigned __int8 *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbp
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r12
  unsigned __int8 *v46; // rbp
  _BYTE *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int8 *v50; // rbp
  unsigned __int8 *v51; // rdx
  __int64 v52; // rax
  char *v53; // rdi
  unsigned __int8 *v54; // rbp
  unsigned __int8 *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rbp
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // r13
  unsigned __int8 *v65; // rbp
  _BYTE *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rbp
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // r13
  unsigned __int8 *v76; // rbp
  _BYTE *v77; // rdx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rbp
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // r12
  unsigned __int8 *v87; // rbp
  _BYTE *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // rdx
  int v95; // eax
  __int64 v96; // rdx
  int v97; // eax
  __int64 v98; // rdx
  int v99; // eax
  __int64 v100; // rdx
  int v101; // eax
  __int64 v102; // rdx
  int v103; // eax
  __int64 v104; // rdx
  int v105; // eax
  __int64 v106; // rax
  __int64 v107; // r13
  __int64 v108; // r14
  __int64 v109; // r13
  void *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // r12
  __int64 v113; // r13
  __int64 v114; // r12
  void *v115; // rdi
  __int64 v116; // rax
  __int64 v117; // r12
  __int64 v118; // r13
  __int64 v119; // r12
  void *v120; // rdi
  __int64 v121; // rax
  __int64 v122; // r13
  __int64 v123; // r14
  __int64 v124; // r13
  void *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // r14
  __int64 v128; // r15
  __int64 v129; // r14
  void *v130; // rdi
  __int64 v131; // rax
  __int64 v132; // r13
  __int64 v133; // r14
  __int64 v134; // r13
  void *v135; // rdi
  __int64 v136; // rax
  __int64 v137; // r14
  __int64 v138; // r15
  __int64 v139; // r14
  void *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // r13
  __int64 v143; // r14
  __int64 v144; // r13
  void *v145; // rdi
  unsigned __int64 *src; // [rsp+0h] [rbp-138h]
  void *srca; // [rsp+0h] [rbp-138h]
  unsigned __int64 v148; // [rsp+8h] [rbp-130h] BYREF
  __m128 v149; // [rsp+10h] [rbp-128h] BYREF
  int v150; // [rsp+20h] [rbp-118h] BYREF
  __int64 v151; // [rsp+28h] [rbp-110h]
  __int64 v152; // [rsp+38h] [rbp-100h]
  __m128i v153; // [rsp+40h] [rbp-F8h] BYREF
  void *v154[2]; // [rsp+50h] [rbp-E8h]
  __int128 v155; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v157; // [rsp+78h] [rbp-C0h]
  _QWORD v158[2]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int8 *v159; // [rsp+90h] [rbp-A8h]
  __int64 v160; // [rsp+98h] [rbp-A0h]
  char v161; // [rsp+E8h] [rbp-50h]
  unsigned int v162; // [rsp+F0h] [rbp-48h]
  char v163; // [rsp+F4h] [rbp-44h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = *(_DWORD *)(v5 + 32);
  if ( !*(_QWORD *)(*(_QWORD *)(v5 + 24) + 80LL) )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), v6, 0x10ABu, 0);
    if ( v161 )
    {
      v54 = v159;
      if ( !v159 )
      {
        v94 = v160;
        v95 = *(_DWORD *)(v160 + 14976);
        if ( v95 )
        {
          v111 = (unsigned int)(v95 - 1);
          *(_DWORD *)(v160 + 14976) = v111;
          v54 = *(unsigned __int8 **)(v94 + 8 * v111 + 14848);
          v112 = *((unsigned int *)v54 + 134);
          *v54 = 0;
          v113 = *((_QWORD *)v54 + 66);
          *((_DWORD *)v54 + 106) = 0;
          v114 = v113 + (v112 << 6);
          while ( v113 != v114 )
          {
            while ( 1 )
            {
              v114 -= 64;
              v115 = *(void **)(v114 + 24);
              if ( v115 == (void *)(v114 + 40) )
                break;
              operator delete(v115);
              if ( v113 == v114 )
                goto LABEL_98;
            }
          }
LABEL_98:
          *((_DWORD *)v54 + 134) = 0;
        }
        else
        {
          v54 = (unsigned __int8 *)operator new(0x3A0u);
          *v54 = 0;
          *((_QWORD *)v54 + 12) = v54 + 112;
          *((_QWORD *)v54 + 16) = v54 + 144;
          *((_QWORD *)v54 + 20) = v54 + 176;
          *((_QWORD *)v54 + 24) = v54 + 208;
          *((_QWORD *)v54 + 28) = v54 + 240;
          *((_QWORD *)v54 + 32) = v54 + 272;
          *((_QWORD *)v54 + 36) = v54 + 304;
          *((_QWORD *)v54 + 40) = v54 + 336;
          *((_QWORD *)v54 + 44) = v54 + 368;
          *((_QWORD *)v54 + 48) = v54 + 400;
          *((_QWORD *)v54 + 52) = v54 + 432;
          *((_QWORD *)v54 + 13) = 0;
          v54[112] = 0;
          *((_QWORD *)v54 + 17) = 0;
          v54[144] = 0;
          *((_QWORD *)v54 + 21) = 0;
          v54[176] = 0;
          *((_QWORD *)v54 + 25) = 0;
          v54[208] = 0;
          *((_QWORD *)v54 + 29) = 0;
          v54[240] = 0;
          *((_QWORD *)v54 + 33) = 0;
          v54[272] = 0;
          *((_QWORD *)v54 + 37) = 0;
          v54[304] = 0;
          *((_QWORD *)v54 + 41) = 0;
          v54[336] = 0;
          *((_QWORD *)v54 + 45) = 0;
          v54[368] = 0;
          *((_QWORD *)v54 + 49) = 0;
          v54[400] = 0;
          *((_QWORD *)v54 + 53) = 0x800000000LL;
          *((_QWORD *)v54 + 66) = v54 + 544;
          *((_QWORD *)v54 + 67) = 0x600000000LL;
        }
        v159 = v54;
      }
      v54[*v54 + 1] = 2;
      v55 = v159;
      v56 = *v159;
      *v159 = v56 + 1;
      *(_QWORD *)&v55[8 * v56 + 16] = 1;
    }
    else
    {
      if ( !v163 )
      {
LABEL_24:
        v29 = 1;
        sub_15F7200(&ptr);
        return v29;
      }
      v40 = sub_168B9E0(&ptr);
      v43 = v158[0];
      if ( v158[0] )
        v43 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v158[0] + 32LL))(v158[0]);
      v153.m128i_i64[0] = v43;
      v44 = sub_1587BC0(v40, v153.m128i_i64, v38, v39, v41, v42);
      v45 = *v44 + 32LL * v162;
      v46 = *(unsigned __int8 **)(v45 + 8);
      if ( !v46 )
      {
        v102 = *(_QWORD *)(v45 + 16);
        v103 = *(_DWORD *)(v102 + 14976);
        if ( v103 )
        {
          v131 = (unsigned int)(v103 - 1);
          *(_DWORD *)(v102 + 14976) = v131;
          v46 = *(unsigned __int8 **)(v102 + 8 * v131 + 14848);
          v132 = *((unsigned int *)v46 + 134);
          *v46 = 0;
          v133 = *((_QWORD *)v46 + 66);
          *((_DWORD *)v46 + 106) = 0;
          v134 = v133 + (v132 << 6);
          while ( v133 != v134 )
          {
            while ( 1 )
            {
              v134 -= 64;
              v135 = *(void **)(v134 + 24);
              if ( v135 == (void *)(v134 + 40) )
                break;
              operator delete(v135);
              if ( v133 == v134 )
                goto LABEL_118;
            }
          }
LABEL_118:
          *((_DWORD *)v46 + 134) = 0;
        }
        else
        {
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
          *((_QWORD *)v46 + 66) = v46 + 544;
          *((_QWORD *)v46 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v45 + 8) = v46;
      }
      v46[*v46 + 1] = 2;
      v47 = *(_BYTE **)(v45 + 8);
      v48 = (unsigned __int8)*v47;
      *v47 = v48 + 1;
      *(_QWORD *)&v47[8 * v48 + 16] = 1;
    }
    v49 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
    if ( v161 )
    {
      v50 = v159;
      if ( !v159 )
      {
        v96 = v160;
        v97 = *(_DWORD *)(v160 + 14976);
        if ( v97 )
        {
          v106 = (unsigned int)(v97 - 1);
          *(_DWORD *)(v160 + 14976) = v106;
          v50 = *(unsigned __int8 **)(v96 + 8 * v106 + 14848);
          v107 = *((unsigned int *)v50 + 134);
          *v50 = 0;
          v108 = *((_QWORD *)v50 + 66);
          *((_DWORD *)v50 + 106) = 0;
          v109 = v108 + (v107 << 6);
          while ( v108 != v109 )
          {
            while ( 1 )
            {
              v109 -= 64;
              v110 = *(void **)(v109 + 24);
              if ( v110 == (void *)(v109 + 40) )
                break;
              operator delete(v110);
              if ( v108 == v109 )
                goto LABEL_93;
            }
          }
LABEL_93:
          *((_DWORD *)v50 + 134) = 0;
        }
        else
        {
          v50 = (unsigned __int8 *)operator new(0x3A0u);
          *v50 = 0;
          *((_QWORD *)v50 + 12) = v50 + 112;
          *((_QWORD *)v50 + 16) = v50 + 144;
          *((_QWORD *)v50 + 20) = v50 + 176;
          *((_QWORD *)v50 + 24) = v50 + 208;
          *((_QWORD *)v50 + 28) = v50 + 240;
          *((_QWORD *)v50 + 32) = v50 + 272;
          *((_QWORD *)v50 + 36) = v50 + 304;
          *((_QWORD *)v50 + 40) = v50 + 336;
          *((_QWORD *)v50 + 44) = v50 + 368;
          *((_QWORD *)v50 + 48) = v50 + 400;
          *((_QWORD *)v50 + 52) = v50 + 432;
          *((_QWORD *)v50 + 13) = 0;
          v50[112] = 0;
          *((_QWORD *)v50 + 17) = 0;
          v50[144] = 0;
          *((_QWORD *)v50 + 21) = 0;
          v50[176] = 0;
          *((_QWORD *)v50 + 25) = 0;
          v50[208] = 0;
          *((_QWORD *)v50 + 29) = 0;
          v50[240] = 0;
          *((_QWORD *)v50 + 33) = 0;
          v50[272] = 0;
          *((_QWORD *)v50 + 37) = 0;
          v50[304] = 0;
          *((_QWORD *)v50 + 41) = 0;
          v50[336] = 0;
          *((_QWORD *)v50 + 45) = 0;
          v50[368] = 0;
          *((_QWORD *)v50 + 49) = 0;
          v50[400] = 0;
          *((_QWORD *)v50 + 53) = 0x800000000LL;
          *((_QWORD *)v50 + 66) = v50 + 544;
          *((_QWORD *)v50 + 67) = 0x600000000LL;
        }
        v159 = v50;
      }
      v50[*v50 + 1] = 10;
      v51 = v159;
      v52 = *v159;
      *v159 = v52 + 1;
      *(_QWORD *)&v51[8 * v52 + 16] = v49;
    }
    else if ( v163 )
    {
      v59 = sub_168B9E0(&ptr);
      v62 = v158[0];
      if ( v158[0] )
        v62 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v158[0] + 32LL))(v158[0]);
      v153.m128i_i64[0] = v62;
      v63 = sub_1587BC0(v59, v153.m128i_i64, v57, v58, v60, v61);
      v64 = *v63 + 32LL * v162;
      v65 = *(unsigned __int8 **)(v64 + 8);
      if ( !v65 )
      {
        v104 = *(_QWORD *)(v64 + 16);
        v105 = *(_DWORD *)(v104 + 14976);
        if ( v105 )
        {
          v126 = (unsigned int)(v105 - 1);
          *(_DWORD *)(v104 + 14976) = v126;
          v65 = *(unsigned __int8 **)(v104 + 8 * v126 + 14848);
          v127 = *((unsigned int *)v65 + 134);
          *v65 = 0;
          v128 = *((_QWORD *)v65 + 66);
          *((_DWORD *)v65 + 106) = 0;
          v129 = v128 + (v127 << 6);
          while ( v128 != v129 )
          {
            while ( 1 )
            {
              v129 -= 64;
              v130 = *(void **)(v129 + 24);
              if ( v130 == (void *)(v129 + 40) )
                break;
              operator delete(v130);
              if ( v128 == v129 )
                goto LABEL_113;
            }
          }
LABEL_113:
          *((_DWORD *)v65 + 134) = 0;
        }
        else
        {
          v65 = (unsigned __int8 *)operator new(0x3A0u);
          *v65 = 0;
          *((_QWORD *)v65 + 12) = v65 + 112;
          *((_QWORD *)v65 + 16) = v65 + 144;
          *((_QWORD *)v65 + 20) = v65 + 176;
          *((_QWORD *)v65 + 24) = v65 + 208;
          *((_QWORD *)v65 + 28) = v65 + 240;
          *((_QWORD *)v65 + 32) = v65 + 272;
          *((_QWORD *)v65 + 36) = v65 + 304;
          *((_QWORD *)v65 + 40) = v65 + 336;
          *((_QWORD *)v65 + 44) = v65 + 368;
          *((_QWORD *)v65 + 48) = v65 + 400;
          *((_QWORD *)v65 + 52) = v65 + 432;
          *((_QWORD *)v65 + 13) = 0;
          v65[112] = 0;
          *((_QWORD *)v65 + 17) = 0;
          v65[144] = 0;
          *((_QWORD *)v65 + 21) = 0;
          v65[176] = 0;
          *((_QWORD *)v65 + 25) = 0;
          v65[208] = 0;
          *((_QWORD *)v65 + 29) = 0;
          v65[240] = 0;
          *((_QWORD *)v65 + 33) = 0;
          v65[272] = 0;
          *((_QWORD *)v65 + 37) = 0;
          v65[304] = 0;
          *((_QWORD *)v65 + 41) = 0;
          v65[336] = 0;
          *((_QWORD *)v65 + 45) = 0;
          v65[368] = 0;
          *((_QWORD *)v65 + 49) = 0;
          v65[400] = 0;
          *((_QWORD *)v65 + 53) = 0x800000000LL;
          *((_QWORD *)v65 + 66) = v65 + 544;
          *((_QWORD *)v65 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v64 + 8) = v65;
      }
      v65[*v65 + 1] = 10;
      v66 = *(_BYTE **)(v64 + 8);
      v67 = (unsigned __int8)*v66;
      *v66 = v67 + 1;
      *(_QWORD *)&v66[8 * v67 + 16] = v49;
    }
    goto LABEL_24;
  }
  v152 = 0;
  v7 = *(_QWORD *)(v5 + 24);
  v8 = 0;
  HIDWORD(v152) = v6;
  LODWORD(v152) = v6;
  v10 = *(_QWORD *)(v7 + 80);
  v153 = 0;
  *(_OWORD *)v154 = 0;
  v155 = 0;
  v11 = *(_QWORD *)(v5 + 48);
  v12 = *(_QWORD *)(v5 + 40);
  v150 = 0;
  v151 = v10;
  sub_15AB8B0((__int64)&v153, v12, v11);
  v13 = sub_19CC5E0(
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL),
          *(_QWORD *)(a1 + 88),
          0,
          *(_BYTE *)(*(_QWORD *)(a1 + 80) + 36LL) == 0 ? 26 : 37,
          &v153,
          (__m128)0LL,
          a4,
          0,
          &v150,
          0);
  if ( v13 != 1 )
  {
    v14 = *(void **)(a1 + 96);
    v157 = 0x400000000LL;
    v15 = *(unsigned int *)(a1 + 104);
    v16 = v158;
    ptr = v158;
    v17 = 8 * v15;
    v18 = (8 * v15) >> 3;
    if ( (unsigned __int64)(8 * v15) > 0x20 )
    {
      srca = v14;
      sub_2237220(&ptr, v158, (8 * v15) >> 3, 8);
      v14 = srca;
      v53 = (char *)ptr + 8 * (unsigned int)v157;
    }
    else
    {
      if ( !v17 )
        goto LABEL_5;
      v53 = (char *)v158;
    }
    v16 = v14;
    memcpy(v53, v14, v17);
    LODWORD(v17) = v157;
LABEL_5:
    LODWORD(v157) = v18 + v17;
    v19 = (unsigned int)(v18 + v17);
    if ( v19 + 1 > (unsigned __int64)HIDWORD(v157) )
    {
      v16 = v158;
      sub_2237220(&ptr, v158, v19 + 1, 8);
      v19 = (unsigned int)v157;
    }
    *((_QWORD *)ptr + v19) = a2;
    v20 = *(_QWORD *)(a1 + 8);
    v21 = (unsigned int)(v157 + 1);
    LODWORD(v157) = v157 + 1;
    v22 = (unsigned __int64)sub_EEC8C0(a2, (__int64)v16, 0.0) >> 32;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL);
    v148 = *(_QWORD *)(a1 + 80);
    src = (unsigned __int64 *)ptr;
    if ( v23 )
    {
      v24 = sub_BFE300(v23);
      if ( v24 )
      {
        if ( *(_QWORD *)(v148 + 40) )
        {
          a4 = (__m128)_mm_loadu_si128((const __m128i *)(v148 + 40));
          v149 = a4;
          if ( a4.m128_u64[0] )
          {
            v25 = *(_QWORD *)(a4.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v25 )
            {
              v26 = 0;
              v148 = v149.m128_u64[1];
              v8 = _mm_loadh_ps((const double *)&v148);
              v149 = v8;
              while ( (*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v26 = v24;
                v25 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v26 )
                v149.m128_u64[0] = v25;
            }
          }
          v27 = sub_E90530((__int64 *)&v149);
        }
        else
        {
          v27 = *(_DWORD *)(v148 + 32);
        }
        v28 = *(_QWORD *)(a1 + 8);
        goto LABEL_28;
      }
      v23 = *(_QWORD *)(v148 + 16);
      v28 = *(_QWORD *)(a1 + 8);
    }
    else
    {
      v28 = v20;
    }
    v27 = sub_EEB7E0(v23, (__int64)v16, 0.0);
LABEL_28:
    v29 = sub_192A5E0(
            v20,
            *(_QWORD *)(v28 + 608),
            (unsigned __int16 *)(v13 & 0xFFFFFFFFFFFFFFFELL),
            v27,
            src,
            v21,
            v8,
            a4,
            v22,
            0,
            0,
            0);
    if ( ptr != v158 )
      free(ptr);
    goto LABEL_30;
  }
  sub_168B9F0(
    (__int64)&ptr,
    (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 80) + 32LL),
    0xD3Eu,
    0);
  if ( v161 )
  {
    v31 = v159;
    if ( !v159 )
    {
      v100 = v160;
      v101 = *(_DWORD *)(v160 + 14976);
      if ( v101 )
      {
        v116 = (unsigned int)(v101 - 1);
        *(_DWORD *)(v160 + 14976) = v116;
        v31 = *(unsigned __int8 **)(v100 + 8 * v116 + 14848);
        v117 = *((unsigned int *)v31 + 134);
        *v31 = 0;
        v118 = *((_QWORD *)v31 + 66);
        *((_DWORD *)v31 + 106) = 0;
        v119 = v118 + (v117 << 6);
        while ( v118 != v119 )
        {
          while ( 1 )
          {
            v119 -= 64;
            v120 = *(void **)(v119 + 24);
            if ( v120 == (void *)(v119 + 40) )
              break;
            operator delete(v120);
            if ( v118 == v119 )
              goto LABEL_103;
          }
        }
LABEL_103:
        *((_DWORD *)v31 + 134) = 0;
      }
      else
      {
        v31 = (unsigned __int8 *)operator new(0x3A0u);
        *v31 = 0;
        *((_QWORD *)v31 + 12) = v31 + 112;
        *((_QWORD *)v31 + 16) = v31 + 144;
        *((_QWORD *)v31 + 20) = v31 + 176;
        *((_QWORD *)v31 + 24) = v31 + 208;
        *((_QWORD *)v31 + 28) = v31 + 240;
        *((_QWORD *)v31 + 32) = v31 + 272;
        *((_QWORD *)v31 + 36) = v31 + 304;
        *((_QWORD *)v31 + 40) = v31 + 336;
        *((_QWORD *)v31 + 44) = v31 + 368;
        *((_QWORD *)v31 + 48) = v31 + 400;
        *((_QWORD *)v31 + 52) = v31 + 432;
        *((_QWORD *)v31 + 13) = 0;
        v31[112] = 0;
        *((_QWORD *)v31 + 17) = 0;
        v31[144] = 0;
        *((_QWORD *)v31 + 21) = 0;
        v31[176] = 0;
        *((_QWORD *)v31 + 25) = 0;
        v31[208] = 0;
        *((_QWORD *)v31 + 29) = 0;
        v31[240] = 0;
        *((_QWORD *)v31 + 33) = 0;
        v31[272] = 0;
        *((_QWORD *)v31 + 37) = 0;
        v31[304] = 0;
        *((_QWORD *)v31 + 41) = 0;
        v31[336] = 0;
        *((_QWORD *)v31 + 45) = 0;
        v31[368] = 0;
        *((_QWORD *)v31 + 49) = 0;
        v31[400] = 0;
        *((_QWORD *)v31 + 53) = 0x800000000LL;
        *((_QWORD *)v31 + 66) = v31 + 544;
        *((_QWORD *)v31 + 67) = 0x600000000LL;
      }
      v159 = v31;
    }
    v31[*v31 + 1] = 2;
    v32 = v159;
    v33 = *v159;
    *v159 = v33 + 1;
    *(_QWORD *)&v32[8 * v33 + 16] = 1;
    goto LABEL_35;
  }
  if ( v163 )
  {
    v81 = sub_168B9E0(&ptr);
    v84 = v158[0];
    if ( v158[0] )
      v84 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v158[0] + 32LL))(v158[0]);
    v149.m128_u64[0] = v84;
    v85 = sub_1587BC0(v81, (__int64 *)&v149, v79, v80, v82, v83);
    v86 = *v85 + 32LL * v162;
    v87 = *(unsigned __int8 **)(v86 + 8);
    if ( !v87 )
    {
      v92 = *(_QWORD *)(v86 + 16);
      v93 = *(_DWORD *)(v92 + 14976);
      if ( v93 )
      {
        v141 = (unsigned int)(v93 - 1);
        *(_DWORD *)(v92 + 14976) = v141;
        v87 = *(unsigned __int8 **)(v92 + 8 * v141 + 14848);
        v142 = *((unsigned int *)v87 + 134);
        *v87 = 0;
        v143 = *((_QWORD *)v87 + 66);
        *((_DWORD *)v87 + 106) = 0;
        v144 = v143 + (v142 << 6);
        while ( v143 != v144 )
        {
          while ( 1 )
          {
            v144 -= 64;
            v145 = *(void **)(v144 + 24);
            if ( v145 == (void *)(v144 + 40) )
              break;
            operator delete(v145);
            if ( v143 == v144 )
              goto LABEL_128;
          }
        }
LABEL_128:
        *((_DWORD *)v87 + 134) = 0;
      }
      else
      {
        v87 = (unsigned __int8 *)operator new(0x3A0u);
        *v87 = 0;
        *((_QWORD *)v87 + 12) = v87 + 112;
        *((_QWORD *)v87 + 16) = v87 + 144;
        *((_QWORD *)v87 + 20) = v87 + 176;
        *((_QWORD *)v87 + 24) = v87 + 208;
        *((_QWORD *)v87 + 28) = v87 + 240;
        *((_QWORD *)v87 + 32) = v87 + 272;
        *((_QWORD *)v87 + 36) = v87 + 304;
        *((_QWORD *)v87 + 40) = v87 + 336;
        *((_QWORD *)v87 + 44) = v87 + 368;
        *((_QWORD *)v87 + 48) = v87 + 400;
        *((_QWORD *)v87 + 52) = v87 + 432;
        *((_QWORD *)v87 + 13) = 0;
        v87[112] = 0;
        *((_QWORD *)v87 + 17) = 0;
        v87[144] = 0;
        *((_QWORD *)v87 + 21) = 0;
        v87[176] = 0;
        *((_QWORD *)v87 + 25) = 0;
        v87[208] = 0;
        *((_QWORD *)v87 + 29) = 0;
        v87[240] = 0;
        *((_QWORD *)v87 + 33) = 0;
        v87[272] = 0;
        *((_QWORD *)v87 + 37) = 0;
        v87[304] = 0;
        *((_QWORD *)v87 + 41) = 0;
        v87[336] = 0;
        *((_QWORD *)v87 + 45) = 0;
        v87[368] = 0;
        *((_QWORD *)v87 + 49) = 0;
        v87[400] = 0;
        *((_QWORD *)v87 + 53) = 0x800000000LL;
        *((_QWORD *)v87 + 66) = v87 + 544;
        *((_QWORD *)v87 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v86 + 8) = v87;
    }
    v87[*v87 + 1] = 2;
    v88 = *(_BYTE **)(v86 + 8);
    v89 = (unsigned __int8)*v88;
    *v88 = v89 + 1;
    *(_QWORD *)&v88[8 * v89 + 16] = 1;
LABEL_35:
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
    if ( v161 )
    {
      v35 = v159;
      if ( !v159 )
      {
        v98 = v160;
        v99 = *(_DWORD *)(v160 + 14976);
        if ( v99 )
        {
          v121 = (unsigned int)(v99 - 1);
          *(_DWORD *)(v160 + 14976) = v121;
          v35 = *(unsigned __int8 **)(v98 + 8 * v121 + 14848);
          v122 = *((unsigned int *)v35 + 134);
          *v35 = 0;
          v123 = *((_QWORD *)v35 + 66);
          *((_DWORD *)v35 + 106) = 0;
          v124 = v123 + (v122 << 6);
          while ( v123 != v124 )
          {
            while ( 1 )
            {
              v124 -= 64;
              v125 = *(void **)(v124 + 24);
              if ( v125 == (void *)(v124 + 40) )
                break;
              operator delete(v125);
              if ( v123 == v124 )
                goto LABEL_108;
            }
          }
LABEL_108:
          *((_DWORD *)v35 + 134) = 0;
        }
        else
        {
          v35 = (unsigned __int8 *)operator new(0x3A0u);
          *v35 = 0;
          *((_QWORD *)v35 + 12) = v35 + 112;
          *((_QWORD *)v35 + 16) = v35 + 144;
          *((_QWORD *)v35 + 20) = v35 + 176;
          *((_QWORD *)v35 + 24) = v35 + 208;
          *((_QWORD *)v35 + 28) = v35 + 240;
          *((_QWORD *)v35 + 32) = v35 + 272;
          *((_QWORD *)v35 + 36) = v35 + 304;
          *((_QWORD *)v35 + 40) = v35 + 336;
          *((_QWORD *)v35 + 44) = v35 + 368;
          *((_QWORD *)v35 + 48) = v35 + 400;
          *((_QWORD *)v35 + 52) = v35 + 432;
          *((_QWORD *)v35 + 13) = 0;
          v35[112] = 0;
          *((_QWORD *)v35 + 17) = 0;
          v35[144] = 0;
          *((_QWORD *)v35 + 21) = 0;
          v35[176] = 0;
          *((_QWORD *)v35 + 25) = 0;
          v35[208] = 0;
          *((_QWORD *)v35 + 29) = 0;
          v35[240] = 0;
          *((_QWORD *)v35 + 33) = 0;
          v35[272] = 0;
          *((_QWORD *)v35 + 37) = 0;
          v35[304] = 0;
          *((_QWORD *)v35 + 41) = 0;
          v35[336] = 0;
          *((_QWORD *)v35 + 45) = 0;
          v35[368] = 0;
          *((_QWORD *)v35 + 49) = 0;
          v35[400] = 0;
          *((_QWORD *)v35 + 53) = 0x800000000LL;
          *((_QWORD *)v35 + 66) = v35 + 544;
          *((_QWORD *)v35 + 67) = 0x600000000LL;
        }
        v159 = v35;
      }
      v35[*v35 + 1] = 10;
      v36 = v159;
      v37 = *v159;
      *v159 = v37 + 1;
      *(_QWORD *)&v36[8 * v37 + 16] = v34;
    }
    else if ( v163 )
    {
      v70 = sub_168B9E0(&ptr);
      v73 = v158[0];
      if ( v158[0] )
        v73 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v158[0] + 32LL))(v158[0]);
      v149.m128_u64[0] = v73;
      v74 = sub_1587BC0(v70, (__int64 *)&v149, v68, v69, v71, v72);
      v75 = *v74 + 32LL * v162;
      v76 = *(unsigned __int8 **)(v75 + 8);
      if ( !v76 )
      {
        v90 = *(_QWORD *)(v75 + 16);
        v91 = *(_DWORD *)(v90 + 14976);
        if ( v91 )
        {
          v136 = (unsigned int)(v91 - 1);
          *(_DWORD *)(v90 + 14976) = v136;
          v76 = *(unsigned __int8 **)(v90 + 8 * v136 + 14848);
          v137 = *((unsigned int *)v76 + 134);
          *v76 = 0;
          v138 = *((_QWORD *)v76 + 66);
          *((_DWORD *)v76 + 106) = 0;
          v139 = v138 + (v137 << 6);
          while ( v138 != v139 )
          {
            while ( 1 )
            {
              v139 -= 64;
              v140 = *(void **)(v139 + 24);
              if ( v140 == (void *)(v139 + 40) )
                break;
              operator delete(v140);
              if ( v138 == v139 )
                goto LABEL_123;
            }
          }
LABEL_123:
          *((_DWORD *)v76 + 134) = 0;
        }
        else
        {
          v76 = (unsigned __int8 *)operator new(0x3A0u);
          *v76 = 0;
          *((_QWORD *)v76 + 12) = v76 + 112;
          *((_QWORD *)v76 + 16) = v76 + 144;
          *((_QWORD *)v76 + 20) = v76 + 176;
          *((_QWORD *)v76 + 24) = v76 + 208;
          *((_QWORD *)v76 + 28) = v76 + 240;
          *((_QWORD *)v76 + 32) = v76 + 272;
          *((_QWORD *)v76 + 36) = v76 + 304;
          *((_QWORD *)v76 + 40) = v76 + 336;
          *((_QWORD *)v76 + 44) = v76 + 368;
          *((_QWORD *)v76 + 48) = v76 + 400;
          *((_QWORD *)v76 + 52) = v76 + 432;
          *((_QWORD *)v76 + 13) = 0;
          v76[112] = 0;
          *((_QWORD *)v76 + 17) = 0;
          v76[144] = 0;
          *((_QWORD *)v76 + 21) = 0;
          v76[176] = 0;
          *((_QWORD *)v76 + 25) = 0;
          v76[208] = 0;
          *((_QWORD *)v76 + 29) = 0;
          v76[240] = 0;
          *((_QWORD *)v76 + 33) = 0;
          v76[272] = 0;
          *((_QWORD *)v76 + 37) = 0;
          v76[304] = 0;
          *((_QWORD *)v76 + 41) = 0;
          v76[336] = 0;
          *((_QWORD *)v76 + 45) = 0;
          v76[368] = 0;
          *((_QWORD *)v76 + 49) = 0;
          v76[400] = 0;
          *((_QWORD *)v76 + 53) = 0x800000000LL;
          *((_QWORD *)v76 + 66) = v76 + 544;
          *((_QWORD *)v76 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v75 + 8) = v76;
      }
      v76[*v76 + 1] = 10;
      v77 = *(_BYTE **)(v75 + 8);
      v78 = (unsigned __int8)*v77;
      *v77 = v78 + 1;
      *(_QWORD *)&v77[8 * v78 + 16] = v34;
    }
  }
  v29 = 1;
  sub_15F7200(&ptr);
LABEL_30:
  if ( HIDWORD(v154[1]) )
    free(v154[0]);
  return v29;
}
