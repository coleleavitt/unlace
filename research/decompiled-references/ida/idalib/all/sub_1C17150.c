__int64 __fastcall sub_1C17150(__int64 a1, double a2, __m128 a3)
{
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __m128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rbp
  __int64 v14; // r12
  unsigned __int64 v15; // rdi
  int v16; // r13d
  unsigned int v17; // eax
  unsigned __int64 v18; // rdi
  unsigned __int64 *v19; // r14
  unsigned __int64 v20; // r15
  char v21; // al
  __m128 v22; // xmm2
  unsigned __int64 v23; // rdx
  char v24; // si
  unsigned int v25; // ecx
  __int64 result; // rax
  unsigned __int64 v27; // rdx
  unsigned __int8 *v28; // r12
  unsigned __int8 *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int8 *v32; // rbx
  unsigned __int8 *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // r13
  unsigned __int8 *v43; // r12
  _BYTE *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r12
  unsigned __int8 *v47; // rbx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rax
  unsigned __int8 *v50; // r12
  unsigned __int8 *v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // r13
  unsigned __int8 *v61; // rbx
  _BYTE *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r12
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // r13
  unsigned __int8 *v72; // r12
  _BYTE *v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // r13
  unsigned __int8 *v83; // rbx
  _BYTE *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rdx
  int v89; // eax
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
  __int64 v102; // rax
  __int64 v103; // r13
  __int64 v104; // r14
  __int64 v105; // r13
  void *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // r13
  __int64 v109; // r14
  __int64 v110; // r13
  void *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // r13
  __int64 v114; // r14
  __int64 v115; // r13
  void *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // r13
  __int64 v119; // r14
  __int64 v120; // r13
  void *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // r14
  __int64 v124; // r15
  __int64 v125; // r14
  void *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // r14
  __int64 v129; // r15
  __int64 v130; // r14
  void *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // r14
  __int64 v134; // r15
  __int64 v135; // r14
  void *v136; // rdi
  __int64 v137; // rax
  __int64 v138; // r14
  __int64 v139; // r15
  __int64 v140; // r14
  void *v141; // rdi
  __int64 v142; // [rsp+0h] [rbp-138h]
  __int64 v143; // [rsp+0h] [rbp-138h]
  double v144[2]; // [rsp+8h] [rbp-130h] BYREF
  __int64 v145; // [rsp+18h] [rbp-120h] BYREF
  int v146; // [rsp+20h] [rbp-118h] BYREF
  __int64 v147; // [rsp+28h] [rbp-110h]
  __int64 v148; // [rsp+38h] [rbp-100h]
  __m128i v149; // [rsp+40h] [rbp-F8h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-E8h]
  __int128 v151; // [rsp+60h] [rbp-D8h]
  __m128 v152; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v153; // [rsp+80h] [rbp-B8h]
  unsigned __int8 *v154; // [rsp+90h] [rbp-A8h]
  __int64 v155; // [rsp+98h] [rbp-A0h]
  char v156; // [rsp+E8h] [rbp-50h]
  unsigned int v157; // [rsp+F0h] [rbp-48h]
  char v158; // [rsp+F4h] [rbp-44h]

  v4 = *(_QWORD *)(a1 + 80);
  v5 = *(_DWORD *)(v4 + 32);
  if ( !*(_QWORD *)(*(_QWORD *)(v4 + 24) + 72LL) )
  {
    sub_168B9F0((__int64)&v152, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), v5, 0x10ABu, 0);
    if ( v156 )
    {
      v50 = v154;
      if ( !v154 )
      {
        v90 = v155;
        v91 = *(_DWORD *)(v155 + 14976);
        if ( v91 )
        {
          v107 = (unsigned int)(v91 - 1);
          *(_DWORD *)(v155 + 14976) = v107;
          v50 = *(unsigned __int8 **)(v90 + 8 * v107 + 14848);
          v108 = *((unsigned int *)v50 + 134);
          v109 = *((_QWORD *)v50 + 66);
          *v50 = 0;
          *((_DWORD *)v50 + 106) = 0;
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
                goto LABEL_100;
            }
          }
LABEL_100:
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
        v154 = v50;
      }
      v50[*v50 + 1] = 2;
      v51 = v154;
      v52 = *v154;
      *v154 = v52 + 1;
      *(_QWORD *)&v51[8 * v52 + 16] = 0;
    }
    else
    {
      if ( !v158 )
      {
LABEL_27:
        sub_15F7200(&v152);
        return 1;
      }
      v39 = sub_168B9E0(&v152);
      v40 = v153;
      if ( v153 )
        v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v153 + 32LL))(v153);
      v149.m128i_i64[0] = v40;
      v41 = sub_1587BC0(v39, v149.m128i_i64, v35, v36, v37, v38);
      v42 = *v41 + 32LL * v157;
      v43 = *(unsigned __int8 **)(v42 + 8);
      if ( !v43 )
      {
        v98 = *(_QWORD *)(v42 + 16);
        v99 = *(_DWORD *)(v98 + 14976);
        if ( v99 )
        {
          v127 = (unsigned int)(v99 - 1);
          *(_DWORD *)(v98 + 14976) = v127;
          v43 = *(unsigned __int8 **)(v98 + 8 * v127 + 14848);
          v128 = *((unsigned int *)v43 + 134);
          v129 = *((_QWORD *)v43 + 66);
          *v43 = 0;
          *((_DWORD *)v43 + 106) = 0;
          v130 = v129 + (v128 << 6);
          while ( v129 != v130 )
          {
            while ( 1 )
            {
              v130 -= 64;
              v131 = *(void **)(v130 + 24);
              if ( v131 == (void *)(v130 + 40) )
                break;
              operator delete(v131);
              if ( v129 == v130 )
                goto LABEL_120;
            }
          }
LABEL_120:
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
        *(_QWORD *)(v42 + 8) = v43;
      }
      v43[*v43 + 1] = 2;
      v44 = *(_BYTE **)(v42 + 8);
      v45 = (unsigned __int8)*v44;
      *v44 = v45 + 1;
      *(_QWORD *)&v44[8 * v45 + 16] = 0;
    }
    v46 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
    if ( v156 )
    {
      v47 = v154;
      if ( !v154 )
      {
        v92 = v155;
        v93 = *(_DWORD *)(v155 + 14976);
        if ( v93 )
        {
          v102 = (unsigned int)(v93 - 1);
          *(_DWORD *)(v155 + 14976) = v102;
          v47 = *(unsigned __int8 **)(v92 + 8 * v102 + 14848);
          v103 = *((unsigned int *)v47 + 134);
          *v47 = 0;
          v104 = *((_QWORD *)v47 + 66);
          *((_DWORD *)v47 + 106) = 0;
          v105 = v104 + (v103 << 6);
          while ( v104 != v105 )
          {
            while ( 1 )
            {
              v105 -= 64;
              v106 = *(void **)(v105 + 24);
              if ( v106 == (void *)(v105 + 40) )
                break;
              operator delete(v106);
              if ( v104 == v105 )
                goto LABEL_95;
            }
          }
LABEL_95:
          *((_DWORD *)v47 + 134) = 0;
        }
        else
        {
          v47 = (unsigned __int8 *)operator new(0x3A0u);
          *v47 = 0;
          *((_QWORD *)v47 + 12) = v47 + 112;
          *((_QWORD *)v47 + 16) = v47 + 144;
          *((_QWORD *)v47 + 20) = v47 + 176;
          *((_QWORD *)v47 + 24) = v47 + 208;
          *((_QWORD *)v47 + 28) = v47 + 240;
          *((_QWORD *)v47 + 32) = v47 + 272;
          *((_QWORD *)v47 + 36) = v47 + 304;
          *((_QWORD *)v47 + 40) = v47 + 336;
          *((_QWORD *)v47 + 44) = v47 + 368;
          *((_QWORD *)v47 + 48) = v47 + 400;
          *((_QWORD *)v47 + 52) = v47 + 432;
          *((_QWORD *)v47 + 13) = 0;
          v47[112] = 0;
          *((_QWORD *)v47 + 17) = 0;
          v47[144] = 0;
          *((_QWORD *)v47 + 21) = 0;
          v47[176] = 0;
          *((_QWORD *)v47 + 25) = 0;
          v47[208] = 0;
          *((_QWORD *)v47 + 29) = 0;
          v47[240] = 0;
          *((_QWORD *)v47 + 33) = 0;
          v47[272] = 0;
          *((_QWORD *)v47 + 37) = 0;
          v47[304] = 0;
          *((_QWORD *)v47 + 41) = 0;
          v47[336] = 0;
          *((_QWORD *)v47 + 45) = 0;
          v47[368] = 0;
          *((_QWORD *)v47 + 49) = 0;
          v47[400] = 0;
          *((_QWORD *)v47 + 53) = 0x800000000LL;
          *((_QWORD *)v47 + 66) = v47 + 544;
          *((_QWORD *)v47 + 67) = 0x600000000LL;
        }
        v154 = v47;
      }
      v47[*v47 + 1] = 10;
      v48 = v154;
      v49 = *v154;
      *v154 = v49 + 1;
      *(_QWORD *)&v48[8 * v49 + 16] = v46;
    }
    else if ( v158 )
    {
      v55 = sub_168B9E0(&v152);
      v58 = v153;
      if ( v153 )
        v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v153 + 32LL))(v153);
      v149.m128i_i64[0] = v58;
      v59 = sub_1587BC0(v55, v149.m128i_i64, v53, v54, v56, v57);
      v60 = *v59 + 32LL * v157;
      v61 = *(unsigned __int8 **)(v60 + 8);
      if ( !v61 )
      {
        v100 = *(_QWORD *)(v60 + 16);
        v101 = *(_DWORD *)(v100 + 14976);
        if ( v101 )
        {
          v122 = (unsigned int)(v101 - 1);
          *(_DWORD *)(v100 + 14976) = v122;
          v61 = *(unsigned __int8 **)(v100 + 8 * v122 + 14848);
          v123 = *((unsigned int *)v61 + 134);
          *v61 = 0;
          v124 = *((_QWORD *)v61 + 66);
          *((_DWORD *)v61 + 106) = 0;
          v125 = v124 + (v123 << 6);
          while ( v124 != v125 )
          {
            while ( 1 )
            {
              v125 -= 64;
              v126 = *(void **)(v125 + 24);
              if ( v126 == (void *)(v125 + 40) )
                break;
              operator delete(v126);
              if ( v124 == v125 )
                goto LABEL_115;
            }
          }
LABEL_115:
          *((_DWORD *)v61 + 134) = 0;
        }
        else
        {
          v61 = (unsigned __int8 *)operator new(0x3A0u);
          *v61 = 0;
          *((_QWORD *)v61 + 12) = v61 + 112;
          *((_QWORD *)v61 + 16) = v61 + 144;
          *((_QWORD *)v61 + 20) = v61 + 176;
          *((_QWORD *)v61 + 24) = v61 + 208;
          *((_QWORD *)v61 + 28) = v61 + 240;
          *((_QWORD *)v61 + 32) = v61 + 272;
          *((_QWORD *)v61 + 36) = v61 + 304;
          *((_QWORD *)v61 + 40) = v61 + 336;
          *((_QWORD *)v61 + 44) = v61 + 368;
          *((_QWORD *)v61 + 48) = v61 + 400;
          *((_QWORD *)v61 + 52) = v61 + 432;
          *((_QWORD *)v61 + 13) = 0;
          v61[112] = 0;
          *((_QWORD *)v61 + 17) = 0;
          v61[144] = 0;
          *((_QWORD *)v61 + 21) = 0;
          v61[176] = 0;
          *((_QWORD *)v61 + 25) = 0;
          v61[208] = 0;
          *((_QWORD *)v61 + 29) = 0;
          v61[240] = 0;
          *((_QWORD *)v61 + 33) = 0;
          v61[272] = 0;
          *((_QWORD *)v61 + 37) = 0;
          v61[304] = 0;
          *((_QWORD *)v61 + 41) = 0;
          v61[336] = 0;
          *((_QWORD *)v61 + 45) = 0;
          v61[368] = 0;
          *((_QWORD *)v61 + 49) = 0;
          v61[400] = 0;
          *((_QWORD *)v61 + 53) = 0x800000000LL;
          *((_QWORD *)v61 + 66) = v61 + 544;
          *((_QWORD *)v61 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v60 + 8) = v61;
      }
      v61[*v61 + 1] = 10;
      v62 = *(_BYTE **)(v60 + 8);
      v63 = (unsigned __int8)*v62;
      *v62 = v63 + 1;
      *(_QWORD *)&v62[8 * v63 + 16] = v46;
    }
    goto LABEL_27;
  }
  v148 = 0;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = 0;
  HIDWORD(v148) = v5;
  LODWORD(v148) = v5;
  v8 = *(_QWORD *)(v6 + 72);
  v149 = 0;
  *(_OWORD *)ptr = 0;
  v151 = 0;
  v9 = *(_QWORD *)(v4 + 48);
  v10 = *(_QWORD *)(v4 + 40);
  v146 = 0;
  v147 = v8;
  sub_15AB8B0((__int64)&v149, v10, v9);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(_QWORD *)(v11 + 608);
  v13 = sub_19CC5E0(
          v11,
          v12,
          *(_QWORD *)(a1 + 88),
          0,
          *(_BYTE *)(*(_QWORD *)(a1 + 80) + 36LL) == 0 ? 26 : 37,
          &v149,
          (__m128)0LL,
          a3,
          0,
          &v146,
          0);
  if ( v13 == 1 )
  {
    sub_168B9F0(
      (__int64)&v152,
      (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 80) + 32LL),
      0xD3Eu,
      0);
    if ( v156 )
    {
      v28 = v154;
      if ( !v154 )
      {
        v96 = v155;
        v97 = *(_DWORD *)(v155 + 14976);
        if ( v97 )
        {
          v112 = (unsigned int)(v97 - 1);
          *(_DWORD *)(v155 + 14976) = v112;
          v28 = *(unsigned __int8 **)(v96 + 8 * v112 + 14848);
          v113 = *((unsigned int *)v28 + 134);
          v114 = *((_QWORD *)v28 + 66);
          *v28 = 0;
          *((_DWORD *)v28 + 106) = 0;
          v115 = v114 + (v113 << 6);
          while ( v114 != v115 )
          {
            while ( 1 )
            {
              v115 -= 64;
              v116 = *(void **)(v115 + 24);
              if ( v116 == (void *)(v115 + 40) )
                break;
              operator delete(v116);
              if ( v114 == v115 )
                goto LABEL_105;
            }
          }
LABEL_105:
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
        v154 = v28;
      }
      v28[*v28 + 1] = 2;
      v29 = v154;
      v30 = *v154;
      *v154 = v30 + 1;
      *(_QWORD *)&v29[8 * v30 + 16] = 0;
    }
    else
    {
      if ( !v158 )
        goto LABEL_19;
      v68 = sub_168B9E0(&v152);
      v69 = v153;
      if ( v153 )
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v153 + 32LL))(v153);
      v145 = v69;
      v70 = sub_1587BC0(v68, &v145, v64, v65, v66, v67);
      v71 = *v70 + 32LL * v157;
      v72 = *(unsigned __int8 **)(v71 + 8);
      if ( !v72 )
      {
        v86 = *(_QWORD *)(v71 + 16);
        v87 = *(_DWORD *)(v86 + 14976);
        if ( v87 )
        {
          v132 = (unsigned int)(v87 - 1);
          *(_DWORD *)(v86 + 14976) = v132;
          v72 = *(unsigned __int8 **)(v86 + 8 * v132 + 14848);
          v133 = *((unsigned int *)v72 + 134);
          v134 = *((_QWORD *)v72 + 66);
          *v72 = 0;
          *((_DWORD *)v72 + 106) = 0;
          v135 = v134 + (v133 << 6);
          while ( v134 != v135 )
          {
            while ( 1 )
            {
              v135 -= 64;
              v136 = *(void **)(v135 + 24);
              if ( v136 == (void *)(v135 + 40) )
                break;
              operator delete(v136);
              if ( v134 == v135 )
                goto LABEL_125;
            }
          }
LABEL_125:
          *((_DWORD *)v72 + 134) = 0;
        }
        else
        {
          v72 = (unsigned __int8 *)operator new(0x3A0u);
          *v72 = 0;
          *((_QWORD *)v72 + 12) = v72 + 112;
          *((_QWORD *)v72 + 16) = v72 + 144;
          *((_QWORD *)v72 + 20) = v72 + 176;
          *((_QWORD *)v72 + 24) = v72 + 208;
          *((_QWORD *)v72 + 28) = v72 + 240;
          *((_QWORD *)v72 + 32) = v72 + 272;
          *((_QWORD *)v72 + 36) = v72 + 304;
          *((_QWORD *)v72 + 40) = v72 + 336;
          *((_QWORD *)v72 + 44) = v72 + 368;
          *((_QWORD *)v72 + 48) = v72 + 400;
          *((_QWORD *)v72 + 52) = v72 + 432;
          *((_QWORD *)v72 + 13) = 0;
          v72[112] = 0;
          *((_QWORD *)v72 + 17) = 0;
          v72[144] = 0;
          *((_QWORD *)v72 + 21) = 0;
          v72[176] = 0;
          *((_QWORD *)v72 + 25) = 0;
          v72[208] = 0;
          *((_QWORD *)v72 + 29) = 0;
          v72[240] = 0;
          *((_QWORD *)v72 + 33) = 0;
          v72[272] = 0;
          *((_QWORD *)v72 + 37) = 0;
          v72[304] = 0;
          *((_QWORD *)v72 + 41) = 0;
          v72[336] = 0;
          *((_QWORD *)v72 + 45) = 0;
          v72[368] = 0;
          *((_QWORD *)v72 + 49) = 0;
          v72[400] = 0;
          *((_QWORD *)v72 + 53) = 0x800000000LL;
          *((_QWORD *)v72 + 66) = v72 + 544;
          *((_QWORD *)v72 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v71 + 8) = v72;
      }
      v72[*v72 + 1] = 2;
      v73 = *(_BYTE **)(v71 + 8);
      v74 = (unsigned __int8)*v73;
      *v73 = v74 + 1;
      *(_QWORD *)&v73[8 * v74 + 16] = 0;
    }
    v31 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
    if ( v156 )
    {
      v32 = v154;
      if ( !v154 )
      {
        v94 = v155;
        v95 = *(_DWORD *)(v155 + 14976);
        if ( v95 )
        {
          v117 = (unsigned int)(v95 - 1);
          *(_DWORD *)(v155 + 14976) = v117;
          v32 = *(unsigned __int8 **)(v94 + 8 * v117 + 14848);
          v118 = *((unsigned int *)v32 + 134);
          *v32 = 0;
          v119 = *((_QWORD *)v32 + 66);
          *((_DWORD *)v32 + 106) = 0;
          v120 = v119 + (v118 << 6);
          while ( v119 != v120 )
          {
            while ( 1 )
            {
              v120 -= 64;
              v121 = *(void **)(v120 + 24);
              if ( v121 == (void *)(v120 + 40) )
                break;
              operator delete(v121);
              if ( v119 == v120 )
                goto LABEL_110;
            }
          }
LABEL_110:
          *((_DWORD *)v32 + 134) = 0;
        }
        else
        {
          v32 = (unsigned __int8 *)operator new(0x3A0u);
          *v32 = 0;
          *((_QWORD *)v32 + 12) = v32 + 112;
          *((_QWORD *)v32 + 16) = v32 + 144;
          *((_QWORD *)v32 + 20) = v32 + 176;
          *((_QWORD *)v32 + 24) = v32 + 208;
          *((_QWORD *)v32 + 28) = v32 + 240;
          *((_QWORD *)v32 + 32) = v32 + 272;
          *((_QWORD *)v32 + 36) = v32 + 304;
          *((_QWORD *)v32 + 40) = v32 + 336;
          *((_QWORD *)v32 + 44) = v32 + 368;
          *((_QWORD *)v32 + 48) = v32 + 400;
          *((_QWORD *)v32 + 52) = v32 + 432;
          *((_QWORD *)v32 + 13) = 0;
          v32[112] = 0;
          *((_QWORD *)v32 + 17) = 0;
          v32[144] = 0;
          *((_QWORD *)v32 + 21) = 0;
          v32[176] = 0;
          *((_QWORD *)v32 + 25) = 0;
          v32[208] = 0;
          *((_QWORD *)v32 + 29) = 0;
          v32[240] = 0;
          *((_QWORD *)v32 + 33) = 0;
          v32[272] = 0;
          *((_QWORD *)v32 + 37) = 0;
          v32[304] = 0;
          *((_QWORD *)v32 + 41) = 0;
          v32[336] = 0;
          *((_QWORD *)v32 + 45) = 0;
          v32[368] = 0;
          *((_QWORD *)v32 + 49) = 0;
          v32[400] = 0;
          *((_QWORD *)v32 + 53) = 0x800000000LL;
          *((_QWORD *)v32 + 66) = v32 + 544;
          *((_QWORD *)v32 + 67) = 0x600000000LL;
        }
        v154 = v32;
      }
      v32[*v32 + 1] = 10;
      v33 = v154;
      v34 = *v154;
      *v154 = v34 + 1;
      *(_QWORD *)&v33[8 * v34 + 16] = v31;
    }
    else if ( v158 )
    {
      v77 = sub_168B9E0(&v152);
      v80 = v153;
      if ( v153 )
        v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v153 + 32LL))(v153);
      v145 = v80;
      v81 = sub_1587BC0(v77, &v145, v75, v76, v78, v79);
      v82 = *v81 + 32LL * v157;
      v83 = *(unsigned __int8 **)(v82 + 8);
      if ( !v83 )
      {
        v88 = *(_QWORD *)(v82 + 16);
        v89 = *(_DWORD *)(v88 + 14976);
        if ( v89 )
        {
          v137 = (unsigned int)(v89 - 1);
          *(_DWORD *)(v88 + 14976) = v137;
          v83 = *(unsigned __int8 **)(v88 + 8 * v137 + 14848);
          v138 = *((unsigned int *)v83 + 134);
          *v83 = 0;
          v139 = *((_QWORD *)v83 + 66);
          *((_DWORD *)v83 + 106) = 0;
          v140 = v139 + (v138 << 6);
          while ( v139 != v140 )
          {
            while ( 1 )
            {
              v140 -= 64;
              v141 = *(void **)(v140 + 24);
              if ( v141 == (void *)(v140 + 40) )
                break;
              operator delete(v141);
              if ( v139 == v140 )
                goto LABEL_130;
            }
          }
LABEL_130:
          *((_DWORD *)v83 + 134) = 0;
        }
        else
        {
          v83 = (unsigned __int8 *)operator new(0x3A0u);
          *v83 = 0;
          *((_QWORD *)v83 + 12) = v83 + 112;
          *((_QWORD *)v83 + 16) = v83 + 144;
          *((_QWORD *)v83 + 20) = v83 + 176;
          *((_QWORD *)v83 + 24) = v83 + 208;
          *((_QWORD *)v83 + 28) = v83 + 240;
          *((_QWORD *)v83 + 32) = v83 + 272;
          *((_QWORD *)v83 + 36) = v83 + 304;
          *((_QWORD *)v83 + 40) = v83 + 336;
          *((_QWORD *)v83 + 44) = v83 + 368;
          *((_QWORD *)v83 + 48) = v83 + 400;
          *((_QWORD *)v83 + 52) = v83 + 432;
          *((_QWORD *)v83 + 13) = 0;
          v83[112] = 0;
          *((_QWORD *)v83 + 17) = 0;
          v83[144] = 0;
          *((_QWORD *)v83 + 21) = 0;
          v83[176] = 0;
          *((_QWORD *)v83 + 25) = 0;
          v83[208] = 0;
          *((_QWORD *)v83 + 29) = 0;
          v83[240] = 0;
          *((_QWORD *)v83 + 33) = 0;
          v83[272] = 0;
          *((_QWORD *)v83 + 37) = 0;
          v83[304] = 0;
          *((_QWORD *)v83 + 41) = 0;
          v83[336] = 0;
          *((_QWORD *)v83 + 45) = 0;
          v83[368] = 0;
          *((_QWORD *)v83 + 49) = 0;
          v83[400] = 0;
          *((_QWORD *)v83 + 53) = 0x800000000LL;
          *((_QWORD *)v83 + 66) = v83 + 544;
          *((_QWORD *)v83 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v82 + 8) = v83;
      }
      v83[*v83 + 1] = 10;
      v84 = *(_BYTE **)(v82 + 8);
      v85 = (unsigned __int8)*v84;
      *v84 = v85 + 1;
      *(_QWORD *)&v84[8 * v85 + 16] = v31;
    }
LABEL_19:
    sub_15F7200(&v152);
    result = 1;
    if ( !HIDWORD(ptr[1]) )
      return result;
LABEL_20:
    v143 = result;
    free(ptr[0]);
    return v143;
  }
  v14 = *(_QWORD *)(a1 + 80);
  v142 = *(_QWORD *)(a1 + 8);
  v15 = *(_QWORD *)(v14 + 16);
  v16 = *(_DWORD *)(v14 + 32);
  if ( v15 )
  {
    v17 = sub_BFE300(v15);
    if ( (_BYTE)v17 && *(_QWORD *)(v14 + 40) )
    {
      a3 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 40));
      v152 = a3;
      if ( a3.m128_u64[0] )
      {
        v27 = *(_QWORD *)(a3.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v27 )
        {
          v12 = 0;
          v144[0] = *(double *)&v152.m128_u64[1];
          v7 = _mm_loadh_ps(v144);
          v152 = v7;
          while ( (*(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v12 = v17;
            v27 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( (_BYTE)v12 )
            v152.m128_u64[0] = v27;
        }
      }
      sub_E90530((__int64 *)&v152);
    }
    v14 = *(_QWORD *)(a1 + 80);
    v18 = *(_QWORD *)(v14 + 16);
  }
  else
  {
    v18 = 0;
  }
  v19 = *(unsigned __int64 **)(a1 + 96);
  v20 = *(unsigned int *)(a1 + 104);
  if ( !v18 )
    goto LABEL_22;
  v21 = sub_BFE300(v18);
  if ( !v21 )
  {
    v18 = *(_QWORD *)(v14 + 16);
LABEL_22:
    v25 = sub_EEB7E0(v18, v12, *(double *)v7.m128_u64);
    goto LABEL_23;
  }
  if ( *(_QWORD *)(v14 + 40) )
  {
    v22 = (__m128)_mm_loadu_si128((const __m128i *)(v14 + 40));
    v152 = v22;
    if ( v22.m128_u64[0] )
    {
      v23 = *(_QWORD *)(v22.m128_u64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v23 )
      {
        v24 = 0;
        v144[0] = *(double *)&v152.m128_u64[1];
        v7 = _mm_loadh_ps(v144);
        v152 = v7;
        while ( (*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v24 = v21;
          v23 = *(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v24 )
          v152.m128_u64[0] = v23;
      }
    }
    v25 = sub_E90530((__int64 *)&v152);
  }
  else
  {
    v25 = *(_DWORD *)(v14 + 32);
  }
LABEL_23:
  result = sub_192A5E0(
             v142,
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 608LL),
             (unsigned __int16 *)(v13 & 0xFFFFFFFFFFFFFFFELL),
             v25,
             v19,
             v20,
             v7,
             a3,
             v16,
             0,
             0,
             0);
  if ( HIDWORD(ptr[1]) )
    goto LABEL_20;
  return result;
}
