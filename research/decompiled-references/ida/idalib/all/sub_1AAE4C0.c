__int64 __fastcall sub_1AAE4C0(__int64 *a1, int a2, __int64 a3, int a4, unsigned __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v15; // r8
  unsigned __int8 *v16; // r13
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int8 *v20; // r13
  _QWORD *v21; // rdx
  __int64 v22; // rax
  unsigned __int8 *v23; // r12
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned __int8 *v26; // r12
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // rbx
  int v31; // eax
  __m128i *v32; // rbx
  const __m128i *v33; // r14
  __int64 *m128i_i64; // r13
  const __m128i *v35; // rbx
  const __m128i *v36; // rbp
  _BYTE *v37; // rsi
  __int64 *v38; // rax
  size_t v39; // r14
  unsigned __int64 v40; // r12
  __int64 v41; // r12
  unsigned __int64 v42; // rdi
  __int64 *v43; // rdi
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int *v46; // r12
  unsigned __int64 v47; // rax
  unsigned int *v48; // rdx
  unsigned int *v49; // r15
  unsigned int *v50; // r14
  unsigned int *v51; // rdi
  unsigned int *v52; // rdi
  void **v53; // r15
  void **v54; // r14
  unsigned __int64 v55; // rax
  __m128i *v56; // r14
  __m128i *v57; // r12
  unsigned __int64 *v58; // rdi
  __m128i *v59; // rdi
  void **v60; // r12
  void **v61; // r14
  __int64 v62; // rax
  __int64 v63; // r12
  __int64 v64; // r13
  __int64 v65; // r12
  void *v66; // rdi
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int32 v69; // r12d
  _BYTE *v70; // rdi
  char *v71; // rcx
  char *v72; // rsi
  __int64 v73; // r9
  __int64 v74; // rdx
  void **v75; // r12
  unsigned __int64 v76; // rax
  void **v77; // r14
  void **v78; // r13
  void **v79; // rdi
  void **v80; // rdi
  void **v81; // r14
  void **v82; // r13
  int v83; // eax
  __int64 v84; // r15
  __int64 v85; // rcx
  __int64 *v86; // r14
  __int64 *v87; // rbp
  _BYTE *v88; // rsi
  __int64 *v89; // rax
  size_t v90; // r13
  unsigned __int64 v91; // r12
  __int64 v92; // r12
  unsigned __int64 v93; // rdi
  __int64 *v94; // rdi
  unsigned __int64 v95; // rdx
  unsigned __int64 v96; // rax
  __int32 v97; // r12d
  _BYTE *v98; // rdi
  char *v99; // rcx
  char *v100; // rsi
  __int64 v101; // r10
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  unsigned int v106; // eax
  unsigned int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // r12
  __int64 v112; // r13
  __int64 v113; // r12
  void *v114; // rdi
  unsigned __int64 v115; // rdx
  int v116; // eax
  __int64 v117; // rax
  __int64 v118; // r13
  __int64 v119; // r14
  __int64 v120; // r13
  void *v121; // rdi
  unsigned __int64 v122; // rcx
  int v123; // eax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // r15
  __int64 v128; // rbx
  void *v129; // rdi
  unsigned __int64 v130; // rdx
  int v131; // eax
  __int64 v132; // rax
  __int64 v133; // r13
  __int64 v134; // r15
  __int64 v135; // r13
  void *v136; // rdi
  unsigned __int64 v137; // rdx
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // r15
  __int64 v141; // rbx
  __int64 v142; // r15
  void *v143; // rdi
  __int64 v144; // rsi
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rsi
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rsi
  __int64 v151; // rax
  __int64 v152; // rsi
  __int64 v153; // rsi
  __int64 v154; // rax
  __int64 v155; // rsi
  __int64 v156; // rdx
  unsigned __int64 v158; // [rsp+10h] [rbp-1E8h]
  __int64 *v159; // [rsp+20h] [rbp-1D8h]
  __m128i *v160; // [rsp+28h] [rbp-1D0h]
  __int64 *v161; // [rsp+28h] [rbp-1D0h]
  int v162; // [rsp+30h] [rbp-1C8h]
  __int64 *v163; // [rsp+38h] [rbp-1C0h]
  __m128i *v164; // [rsp+38h] [rbp-1C0h]
  __m128i *v165; // [rsp+40h] [rbp-1B8h]
  __int64 *v166; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v167; // [rsp+48h] [rbp-1B0h]
  const __m128i *v168; // [rsp+50h] [rbp-1A8h]
  unsigned __int64 v169; // [rsp+58h] [rbp-1A0h]
  void *v170; // [rsp+60h] [rbp-198h] BYREF
  unsigned __int64 v171; // [rsp+68h] [rbp-190h]
  int v172; // [rsp+70h] [rbp-188h]
  void *v173; // [rsp+80h] [rbp-178h] BYREF
  __int64 v174; // [rsp+88h] [rbp-170h]
  int v175; // [rsp+90h] [rbp-168h]
  void *v176[2]; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE v177[128]; // [rsp+B0h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+130h] [rbp-C8h] BYREF
  _BYTE v179[184]; // [rsp+140h] [rbp-B8h] BYREF

  v5 = a4;
  v8 = a2;
  v9 = *a1;
  v176[0] = v177;
  ptr[0] = v179;
  v176[1] = (void *)0x2000000000LL;
  ptr[1] = (void *)0x2000000000LL;
  v10 = sub_168B6C0(v9);
  sub_F1A490(a3, (__int64)v176, v10, 1, 0);
  v11 = *a1;
  v159 = a1;
  v12 = 0;
  v13 = sub_168B6C0(v11);
  sub_F1A490(a5, (__int64)ptr, v13, 1, 0);
  if ( (unsigned __int8)sub_2222ED0(v176, ptr) )
    goto LABEL_2;
  sub_168B9B0((__int64)&v170, *v159, 5737);
  v16 = (unsigned __int8 *)v170;
  if ( !v170 )
  {
    v122 = v171;
    v123 = *(_DWORD *)(v171 + 14976);
    if ( v123 )
    {
      v124 = (unsigned int)(v123 - 1);
      *(_DWORD *)(v171 + 14976) = v124;
      v16 = *(unsigned __int8 **)(v122 + 8 * v124 + 14848);
      v125 = *((unsigned int *)v16 + 134);
      *v16 = 0;
      v126 = *((_QWORD *)v16 + 66);
      *((_DWORD *)v16 + 106) = 0;
      v125 <<= 6;
      v127 = v126 + v125;
      if ( v126 != v126 + v125 )
      {
        v128 = v126;
        do
        {
          while ( 1 )
          {
            v127 -= 64;
            v129 = *(void **)(v127 + 24);
            if ( v129 == (void *)(v127 + 40) )
              break;
            operator delete(v129);
            if ( v128 == v127 )
              goto LABEL_167;
          }
        }
        while ( v128 != v127 );
LABEL_167:
        v8 = a2;
      }
      *((_DWORD *)v16 + 134) = 0;
    }
    else
    {
      v16 = (unsigned __int8 *)operator new(0x3A0u);
      *v16 = 0;
      *((_QWORD *)v16 + 12) = v16 + 112;
      *((_QWORD *)v16 + 16) = v16 + 144;
      *((_QWORD *)v16 + 20) = v16 + 176;
      *((_QWORD *)v16 + 24) = v16 + 208;
      *((_QWORD *)v16 + 28) = v16 + 240;
      *((_QWORD *)v16 + 32) = v16 + 272;
      *((_QWORD *)v16 + 36) = v16 + 304;
      *((_QWORD *)v16 + 40) = v16 + 336;
      *((_QWORD *)v16 + 44) = v16 + 368;
      *((_QWORD *)v16 + 48) = v16 + 400;
      *((_QWORD *)v16 + 52) = v16 + 432;
      *((_QWORD *)v16 + 13) = 0;
      v16[112] = 0;
      *((_QWORD *)v16 + 17) = 0;
      v16[144] = 0;
      *((_QWORD *)v16 + 21) = 0;
      v16[176] = 0;
      *((_QWORD *)v16 + 25) = 0;
      v16[208] = 0;
      *((_QWORD *)v16 + 29) = 0;
      v16[240] = 0;
      *((_QWORD *)v16 + 33) = 0;
      v16[272] = 0;
      *((_QWORD *)v16 + 37) = 0;
      v16[304] = 0;
      *((_QWORD *)v16 + 41) = 0;
      v16[336] = 0;
      *((_QWORD *)v16 + 45) = 0;
      v16[368] = 0;
      *((_QWORD *)v16 + 49) = 0;
      v16[400] = 0;
      *((_QWORD *)v16 + 53) = 0x800000000LL;
      *((_QWORD *)v16 + 66) = v16 + 544;
      *((_QWORD *)v16 + 67) = 0x600000000LL;
    }
    v170 = v16;
  }
  v16[*v16 + 1] = 2;
  v17 = v170;
  v18 = *(unsigned __int8 *)v170;
  v19 = (unsigned int)(v18 + 1);
  *(_BYTE *)v170 = v18 + 1;
  v20 = (unsigned __int8 *)v170;
  v17[v18 + 2] = v8;
  if ( !v20 )
  {
    v137 = v171;
    v138 = *(_DWORD *)(v171 + 14976);
    if ( v138 )
    {
      v139 = (unsigned int)(v138 - 1);
      *(_DWORD *)(v171 + 14976) = v139;
      v20 = *(unsigned __int8 **)(v137 + 8 * v139 + 14848);
      v140 = *((unsigned int *)v20 + 134);
      *v20 = 0;
      v141 = *((_QWORD *)v20 + 66);
      *((_DWORD *)v20 + 106) = 0;
      v142 = v141 + (v140 << 6);
      while ( v141 != v142 )
      {
        while ( 1 )
        {
          v142 -= 64;
          v143 = *(void **)(v142 + 24);
          if ( v143 == (void *)(v142 + 40) )
            break;
          operator delete(v143);
          if ( v141 == v142 )
            goto LABEL_180;
        }
      }
LABEL_180:
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
    v170 = v20;
  }
  v20[*v20 + 1] = 15;
  v21 = v170;
  v22 = *(unsigned __int8 *)v170;
  *(_BYTE *)v170 = v22 + 1;
  v21[v22 + 2] = a3;
  v23 = (unsigned __int8 *)v170;
  if ( !v170 )
  {
    v130 = v171;
    v131 = *(_DWORD *)(v171 + 14976);
    if ( v131 )
    {
      v132 = (unsigned int)(v131 - 1);
      *(_DWORD *)(v171 + 14976) = v132;
      v23 = *(unsigned __int8 **)(v130 + 8 * v132 + 14848);
      v133 = *((unsigned int *)v23 + 134);
      v134 = *((_QWORD *)v23 + 66);
      *v23 = 0;
      *((_DWORD *)v23 + 106) = 0;
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
            goto LABEL_174;
        }
      }
LABEL_174:
      *((_DWORD *)v23 + 134) = 0;
    }
    else
    {
      v23 = (unsigned __int8 *)operator new(0x3A0u);
      *v23 = 0;
      *((_QWORD *)v23 + 12) = v23 + 112;
      *((_QWORD *)v23 + 16) = v23 + 144;
      *((_QWORD *)v23 + 20) = v23 + 176;
      *((_QWORD *)v23 + 24) = v23 + 208;
      *((_QWORD *)v23 + 28) = v23 + 240;
      *((_QWORD *)v23 + 32) = v23 + 272;
      *((_QWORD *)v23 + 36) = v23 + 304;
      *((_QWORD *)v23 + 40) = v23 + 336;
      *((_QWORD *)v23 + 44) = v23 + 368;
      *((_QWORD *)v23 + 48) = v23 + 400;
      *((_QWORD *)v23 + 52) = v23 + 432;
      *((_QWORD *)v23 + 13) = 0;
      v23[112] = 0;
      *((_QWORD *)v23 + 17) = 0;
      v23[144] = 0;
      *((_QWORD *)v23 + 21) = 0;
      v23[176] = 0;
      *((_QWORD *)v23 + 25) = 0;
      v23[208] = 0;
      *((_QWORD *)v23 + 29) = 0;
      v23[240] = 0;
      *((_QWORD *)v23 + 33) = 0;
      v23[272] = 0;
      *((_QWORD *)v23 + 37) = 0;
      v23[304] = 0;
      *((_QWORD *)v23 + 41) = 0;
      v23[336] = 0;
      *((_QWORD *)v23 + 45) = 0;
      v23[368] = 0;
      *((_QWORD *)v23 + 49) = 0;
      v23[400] = 0;
      *((_QWORD *)v23 + 53) = 0x800000000LL;
      *((_QWORD *)v23 + 66) = v23 + 544;
      *((_QWORD *)v23 + 67) = 0x600000000LL;
    }
    v170 = v23;
  }
  v23[*v23 + 1] = 2;
  v24 = v170;
  v25 = *(unsigned __int8 *)v170;
  *(_BYTE *)v170 = v25 + 1;
  v26 = (unsigned __int8 *)v170;
  v24[v25 + 2] = v5;
  if ( !v26 )
  {
    v115 = v171;
    v116 = *(_DWORD *)(v171 + 14976);
    if ( v116 )
    {
      v117 = (unsigned int)(v116 - 1);
      *(_DWORD *)(v171 + 14976) = v117;
      v26 = *(unsigned __int8 **)(v115 + 8 * v117 + 14848);
      v118 = *((unsigned int *)v26 + 134);
      v119 = *((_QWORD *)v26 + 66);
      *v26 = 0;
      *((_DWORD *)v26 + 106) = 0;
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
            goto LABEL_161;
        }
      }
LABEL_161:
      *((_DWORD *)v26 + 134) = 0;
    }
    else
    {
      v26 = (unsigned __int8 *)operator new(0x3A0u);
      *v26 = 0;
      *((_QWORD *)v26 + 12) = v26 + 112;
      *((_QWORD *)v26 + 16) = v26 + 144;
      *((_QWORD *)v26 + 20) = v26 + 176;
      *((_QWORD *)v26 + 24) = v26 + 208;
      *((_QWORD *)v26 + 28) = v26 + 240;
      *((_QWORD *)v26 + 32) = v26 + 272;
      *((_QWORD *)v26 + 36) = v26 + 304;
      *((_QWORD *)v26 + 40) = v26 + 336;
      *((_QWORD *)v26 + 44) = v26 + 368;
      *((_QWORD *)v26 + 48) = v26 + 400;
      *((_QWORD *)v26 + 52) = v26 + 432;
      *((_QWORD *)v26 + 13) = 0;
      v26[112] = 0;
      *((_QWORD *)v26 + 17) = 0;
      v26[144] = 0;
      *((_QWORD *)v26 + 21) = 0;
      v26[176] = 0;
      *((_QWORD *)v26 + 25) = 0;
      v26[208] = 0;
      *((_QWORD *)v26 + 29) = 0;
      v26[240] = 0;
      *((_QWORD *)v26 + 33) = 0;
      v26[272] = 0;
      *((_QWORD *)v26 + 37) = 0;
      v26[304] = 0;
      *((_QWORD *)v26 + 41) = 0;
      v26[336] = 0;
      *((_QWORD *)v26 + 45) = 0;
      v26[368] = 0;
      *((_QWORD *)v26 + 49) = 0;
      v26[400] = 0;
      *((_QWORD *)v26 + 53) = 0x800000000LL;
      *((_QWORD *)v26 + 66) = v26 + 544;
      *((_QWORD *)v26 + 67) = 0x600000000LL;
    }
    v170 = v26;
  }
  v26[*v26 + 1] = 15;
  v27 = v170;
  v28 = *(unsigned __int8 *)v170;
  *(_BYTE *)v170 = v28 + 1;
  v29 = v171;
  v27[v28 + 2] = a5;
  v30 = (__m128i *)v170;
  v158 = v29;
  v162 = v172;
  if ( v170 )
  {
    v31 = *(_DWORD *)(v29 + 14976);
    if ( v31 )
    {
      v62 = (unsigned int)(v31 - 1);
      *(_DWORD *)(v29 + 14976) = v62;
      v32 = *(__m128i **)(v29 + 8 * v62 + 14848);
      v63 = v32[33].m128i_u32[2];
      v32->m128i_i8[0] = 0;
      v64 = v32[33].m128i_i64[0];
      v32[26].m128i_i32[2] = 0;
      v65 = v64 + (v63 << 6);
      while ( v64 != v65 )
      {
        while ( 1 )
        {
          v65 -= 64;
          v66 = *(void **)(v65 + 24);
          if ( v66 == (void *)(v65 + 40) )
            break;
          operator delete(v66);
          if ( v64 == v65 )
            goto LABEL_70;
        }
      }
LABEL_70:
      v32[33].m128i_i32[2] = 0;
      v160 = v32 + 6;
    }
    else
    {
      v32 = (__m128i *)operator new(0x3A0u);
      v32->m128i_i8[0] = 0;
      v160 = v32 + 6;
      v32[6].m128i_i64[0] = (__int64)v32[7].m128i_i64;
      v32[8].m128i_i64[0] = (__int64)v32[9].m128i_i64;
      v32[10].m128i_i64[0] = (__int64)v32[11].m128i_i64;
      v32[12].m128i_i64[0] = (__int64)v32[13].m128i_i64;
      v32[14].m128i_i64[0] = (__int64)v32[15].m128i_i64;
      v32[16].m128i_i64[0] = (__int64)v32[17].m128i_i64;
      v32[18].m128i_i64[0] = (__int64)v32[19].m128i_i64;
      v32[20].m128i_i64[0] = (__int64)v32[21].m128i_i64;
      v32[22].m128i_i64[0] = (__int64)v32[23].m128i_i64;
      v32[24].m128i_i64[0] = (__int64)v32[25].m128i_i64;
      v32[6].m128i_i64[1] = 0;
      v32[7].m128i_i8[0] = 0;
      v32[8].m128i_i64[1] = 0;
      v32[9].m128i_i8[0] = 0;
      v32[10].m128i_i64[1] = 0;
      v32[11].m128i_i8[0] = 0;
      v32[12].m128i_i64[1] = 0;
      v32[13].m128i_i8[0] = 0;
      v32[14].m128i_i64[1] = 0;
      v32[15].m128i_i8[0] = 0;
      v32[16].m128i_i64[1] = 0;
      v32[17].m128i_i8[0] = 0;
      v32[18].m128i_i64[1] = 0;
      v32[19].m128i_i8[0] = 0;
      v32[20].m128i_i64[1] = 0;
      v32[21].m128i_i8[0] = 0;
      v32[22].m128i_i64[1] = 0;
      v32[23].m128i_i8[0] = 0;
      v32[24].m128i_i64[1] = 0;
      v32[25].m128i_i8[0] = 0;
      v32[26].m128i_i64[0] = (__int64)v32[27].m128i_i64;
      v32[26].m128i_i64[1] = 0x800000000LL;
      v32[33].m128i_i64[0] = (__int64)v32[34].m128i_i64;
      v32[33].m128i_i64[1] = 0x600000000LL;
    }
    v33 = (const __m128i *)v170;
    v169 = (unsigned __int64)&v32[1];
    v32->m128i_i8[0] = *(_BYTE *)v170;
    v32->m128i_i8[1] = v33->m128i_i8[1];
    v32->m128i_i8[2] = v33->m128i_i8[2];
    v32->m128i_i8[3] = v33->m128i_i8[3];
    v32->m128i_i8[4] = v33->m128i_i8[4];
    v32->m128i_i8[5] = v33->m128i_i8[5];
    v32->m128i_i8[6] = v33->m128i_i8[6];
    v32->m128i_i8[7] = v33->m128i_i8[7];
    v32->m128i_i8[8] = v33->m128i_i8[8];
    v32->m128i_i8[9] = v33->m128i_i8[9];
    v32->m128i_i8[10] = v33->m128i_i8[10];
    v167 = (unsigned __int64)&v32[2];
    if ( &v32[2] > &v33[1] && &v32[1] < &v33[2] )
    {
      v32[1].m128i_i64[0] = v33[1].m128i_i64[0];
      v32[1].m128i_i64[1] = v33[1].m128i_i64[1];
      v32[2].m128i_i64[0] = v33[2].m128i_i64[0];
      v32[2].m128i_i64[1] = v33[2].m128i_i64[1];
      v32[3].m128i_i64[0] = v33[3].m128i_i64[0];
      v32[3].m128i_i64[1] = v33[3].m128i_i64[1];
      v32[4].m128i_i64[0] = v33[4].m128i_i64[0];
      v32[4].m128i_i64[1] = v33[4].m128i_i64[1];
      v32[5].m128i_i64[0] = v33[5].m128i_i64[0];
      v32[5].m128i_i64[1] = v33[5].m128i_i64[1];
    }
    else
    {
      v32[1] = _mm_loadu_si128(v33 + 1);
      v32[2] = _mm_loadu_si128(v33 + 2);
      v32[3] = _mm_loadu_si128(v33 + 3);
      v32[4] = _mm_loadu_si128(v33 + 4);
      v32[5] = _mm_loadu_si128(v33 + 5);
    }
    v165 = v32;
    v168 = v33;
    m128i_i64 = v160[1].m128i_i64;
    v35 = v33 + 26;
    v36 = v33 + 6;
    do
    {
      if ( v36 != (const __m128i *)(m128i_i64 - 2) )
      {
        v38 = (__int64 *)*(m128i_i64 - 2);
        v39 = v36->m128i_u64[1];
        if ( v38 == m128i_i64 )
          v40 = 15;
        else
          v40 = *m128i_i64;
        if ( v39 > v40 )
        {
          if ( (v39 & 0x8000000000000000LL) != 0LL )
LABEL_210:
            std::__throw_length_error("basic_string::_M_create");
          v41 = 2 * v40;
          if ( v39 < v41 )
          {
            v42 = v41 + 1;
            if ( v41 < 0 )
            {
              v42 = 0x8000000000000000LL;
              v41 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v42 = v39 + 1;
            v41 = v36->m128i_i64[1];
          }
          v38 = (__int64 *)operator new(v42);
          v43 = (__int64 *)*(m128i_i64 - 2);
          if ( v43 != m128i_i64 )
          {
            v163 = v38;
            operator delete(v43);
            v38 = v163;
          }
          *(m128i_i64 - 2) = (__int64)v38;
          *m128i_i64 = v41;
        }
        if ( v39 )
        {
          v37 = (_BYTE *)v36->m128i_i64[0];
          if ( v39 == 1 )
            *(_BYTE *)v38 = *v37;
          else
            memcpy(v38, v37, v39);
          v38 = (__int64 *)*(m128i_i64 - 2);
        }
        *(m128i_i64 - 1) = v39;
        *((_BYTE *)v38 + v39) = 0;
      }
      v36 += 2;
      m128i_i64 += 4;
    }
    while ( v36 != v35 );
    v30 = v165;
    v164 = v165 + 26;
    if ( &v165[26] != v36 )
    {
      v67 = v168[26].m128i_u32[2];
      v68 = v165[26].m128i_u32[2];
      v69 = v168[26].m128i_i32[2];
      if ( v67 <= v68 )
      {
        if ( v168[26].m128i_i32[2] )
        {
          v144 = v165[26].m128i_i64[0];
          v145 = v168[26].m128i_i64[0];
          v146 = 0;
          do
          {
            *(_QWORD *)(v144 + v146) = *(_QWORD *)(v145 + v146);
            *(_BYTE *)(v144 + v146 + 8) = *(_BYTE *)(v145 + v146 + 8);
            v146 += 12;
          }
          while ( 12 * v67 != v146 );
        }
      }
      else
      {
        if ( v67 > v165[26].m128i_u32[3] )
        {
          v165[26].m128i_i32[2] = 0;
          sub_2237220(v164, &v165[27], v67, 12);
          v71 = (char *)v168[26].m128i_i64[0];
          v70 = (_BYTE *)v165[26].m128i_i64[0];
          v73 = 0;
          v67 = v168[26].m128i_u32[2];
          v72 = v71;
        }
        else
        {
          v70 = (_BYTE *)v165[26].m128i_i64[0];
          v71 = (char *)v168[26].m128i_i64[0];
          if ( v165[26].m128i_i32[2] )
          {
            v153 = 3 * v68;
            v154 = 0;
            v155 = 4 * v153;
            v73 = v155;
            do
            {
              *(_QWORD *)&v70[v154] = *(_QWORD *)&v71[v154];
              v70[v154 + 8] = v71[v154 + 8];
              v154 += 12;
            }
            while ( v155 != v154 );
            v70 += v155;
            v67 = v168[26].m128i_u32[2];
            v72 = &v71[v155];
          }
          else
          {
            v72 = (char *)v168[26].m128i_i64[0];
            v73 = 0;
          }
        }
        v74 = 12 * v67;
        if ( v72 != &v71[v74] )
          memcpy(v70, v72, v74 - v73);
      }
      v165[26].m128i_i32[2] = v69;
    }
    v166 = v165[33].m128i_i64;
    sub_9EED30((__int64)v30[33].m128i_i64, v168[33].m128i_i64);
    v75 = (void **)v170;
    if ( v170 )
    {
      v76 = v171;
      if ( v171 )
      {
        if ( v171 > (unsigned __int64)v170 || (unsigned __int64)v170 > v171 + 14848 )
        {
          v77 = *((void ***)v170 + 66);
          v78 = &v77[8 * (unsigned __int64)*((unsigned int *)v170 + 134)];
          if ( v77 != v78 )
          {
            do
            {
              while ( 1 )
              {
                v78 -= 8;
                v79 = (void **)v78[3];
                if ( v79 == v78 + 5 )
                  break;
                operator delete(v79);
                if ( v77 == v78 )
                  goto LABEL_95;
              }
            }
            while ( v77 != v78 );
LABEL_95:
            v78 = (void **)v75[66];
          }
          if ( v78 != v75 + 68 )
            free(v78);
          v80 = (void **)v75[52];
          v81 = v75 + 52;
          if ( v80 != v75 + 54 )
            free(v80);
          v82 = v75 + 12;
          do
          {
            while ( 1 )
            {
              v81 -= 4;
              if ( *v81 == v81 + 2 )
                break;
              operator delete(*v81);
              if ( v81 == v82 )
                goto LABEL_103;
            }
          }
          while ( v81 != v82 );
LABEL_103:
          operator delete(v75, 0x3A0u);
        }
        else
        {
          v109 = *(unsigned int *)(v171 + 14976);
          *(_DWORD *)(v171 + 14976) = v109 + 1;
          *(_QWORD *)(v76 + 8 * v109 + 14848) = v75;
        }
      }
    }
    v173 = nullptr;
    v175 = v162;
    v174 = v158;
    v83 = *(_DWORD *)(v158 + 14976);
    if ( v83 )
    {
      v110 = (unsigned int)(v83 - 1);
      *(_DWORD *)(v158 + 14976) = v110;
      v84 = *(_QWORD *)(v158 + 8 * v110 + 14848);
      v111 = *(unsigned int *)(v84 + 536);
      *(_BYTE *)v84 = 0;
      v112 = *(_QWORD *)(v84 + 528);
      *(_DWORD *)(v84 + 424) = 0;
      v113 = v112 + (v111 << 6);
      while ( v112 != v113 )
      {
        while ( 1 )
        {
          v113 -= 64;
          v114 = *(void **)(v113 + 24);
          if ( v114 == (void *)(v113 + 40) )
            break;
          operator delete(v114);
          if ( v112 == v113 )
            goto LABEL_155;
        }
      }
LABEL_155:
      *(_DWORD *)(v84 + 536) = 0;
      v85 = v84 + 96;
    }
    else
    {
      v84 = operator new(0x3A0u);
      *(_BYTE *)v84 = 0;
      v85 = v84 + 96;
      *(_QWORD *)(v84 + 96) = v84 + 112;
      *(_QWORD *)(v84 + 128) = v84 + 144;
      *(_QWORD *)(v84 + 160) = v84 + 176;
      *(_QWORD *)(v84 + 192) = v84 + 208;
      *(_QWORD *)(v84 + 224) = v84 + 240;
      *(_QWORD *)(v84 + 256) = v84 + 272;
      *(_QWORD *)(v84 + 288) = v84 + 304;
      *(_QWORD *)(v84 + 320) = v84 + 336;
      *(_QWORD *)(v84 + 352) = v84 + 368;
      *(_QWORD *)(v84 + 384) = v84 + 400;
      *(_QWORD *)(v84 + 416) = v84 + 432;
      *(_QWORD *)(v84 + 104) = 0;
      *(_BYTE *)(v84 + 112) = 0;
      *(_QWORD *)(v84 + 136) = 0;
      *(_BYTE *)(v84 + 144) = 0;
      *(_QWORD *)(v84 + 168) = 0;
      *(_BYTE *)(v84 + 176) = 0;
      *(_QWORD *)(v84 + 200) = 0;
      *(_BYTE *)(v84 + 208) = 0;
      *(_QWORD *)(v84 + 232) = 0;
      *(_BYTE *)(v84 + 240) = 0;
      *(_QWORD *)(v84 + 264) = 0;
      *(_BYTE *)(v84 + 272) = 0;
      *(_QWORD *)(v84 + 296) = 0;
      *(_BYTE *)(v84 + 304) = 0;
      *(_QWORD *)(v84 + 328) = 0;
      *(_BYTE *)(v84 + 336) = 0;
      *(_QWORD *)(v84 + 360) = 0;
      *(_BYTE *)(v84 + 368) = 0;
      *(_QWORD *)(v84 + 392) = 0;
      *(_BYTE *)(v84 + 400) = 0;
      *(_QWORD *)(v84 + 424) = 0x800000000LL;
      *(_QWORD *)(v84 + 528) = v84 + 544;
      *(_QWORD *)(v84 + 536) = 0x600000000LL;
    }
    v173 = (void *)v84;
    *(_BYTE *)v84 = v30->m128i_i8[0];
    *(_BYTE *)(v84 + 1) = v30->m128i_i8[1];
    *(_BYTE *)(v84 + 2) = v30->m128i_i8[2];
    *(_BYTE *)(v84 + 3) = v30->m128i_i8[3];
    *(_BYTE *)(v84 + 4) = v30->m128i_i8[4];
    *(_BYTE *)(v84 + 5) = v30->m128i_i8[5];
    *(_BYTE *)(v84 + 6) = v30->m128i_i8[6];
    *(_BYTE *)(v84 + 7) = v30->m128i_i8[7];
    *(_BYTE *)(v84 + 8) = v30->m128i_i8[8];
    *(_BYTE *)(v84 + 9) = v30->m128i_i8[9];
    *(_BYTE *)(v84 + 10) = v30->m128i_i8[10];
    if ( v167 > v84 + 16 && v169 < v84 + 32 )
    {
      *(_QWORD *)(v84 + 16) = v30[1].m128i_i64[0];
      *(_QWORD *)(v84 + 24) = v30[1].m128i_i64[1];
      *(_QWORD *)(v84 + 32) = v30[2].m128i_i64[0];
      *(_QWORD *)(v84 + 40) = v30[2].m128i_i64[1];
      *(_QWORD *)(v84 + 48) = v30[3].m128i_i64[0];
      *(_QWORD *)(v84 + 56) = v30[3].m128i_i64[1];
      *(_QWORD *)(v84 + 64) = v30[4].m128i_i64[0];
      *(_QWORD *)(v84 + 72) = v30[4].m128i_i64[1];
      *(_QWORD *)(v84 + 80) = v30[5].m128i_i64[0];
      *(_QWORD *)(v84 + 88) = v30[5].m128i_i64[1];
    }
    else
    {
      *(__m128i *)(v84 + 16) = _mm_loadu_si128(v30 + 1);
      *(__m128i *)(v84 + 32) = _mm_loadu_si128(v30 + 2);
      *(__m128i *)(v84 + 48) = _mm_loadu_si128(v30 + 3);
      *(__m128i *)(v84 + 64) = _mm_loadu_si128(v30 + 4);
      *(__m128i *)(v84 + 80) = _mm_loadu_si128(v30 + 5);
    }
    v86 = (__int64 *)(v85 + 16);
    v87 = (__int64 *)v160;
    do
    {
      if ( v87 != v86 - 2 )
      {
        v89 = (__int64 *)*(v86 - 2);
        v90 = v87[1];
        if ( v89 == v86 )
          v91 = 15;
        else
          v91 = *v86;
        if ( v90 > v91 )
        {
          if ( (v90 & 0x8000000000000000LL) != 0LL )
            goto LABEL_210;
          v92 = 2 * v91;
          if ( v90 < v92 )
          {
            v93 = v92 + 1;
            if ( v92 < 0 )
            {
              v93 = 0x8000000000000000LL;
              v92 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v93 = v90 + 1;
            v92 = v87[1];
          }
          v89 = (__int64 *)operator new(v93);
          v94 = (__int64 *)*(v86 - 2);
          if ( v94 != v86 )
          {
            v161 = v89;
            operator delete(v94);
            v89 = v161;
          }
          *(v86 - 2) = (__int64)v89;
          *v86 = v92;
        }
        if ( v90 )
        {
          v88 = (_BYTE *)*v87;
          if ( v90 == 1 )
            *(_BYTE *)v89 = *v88;
          else
            memcpy(v89, v88, v90);
          v89 = (__int64 *)*(v86 - 2);
        }
        *(v86 - 1) = v90;
        *((_BYTE *)v89 + v90) = 0;
      }
      v87 += 4;
      v86 += 4;
    }
    while ( v87 != (__int64 *)v164 );
    if ( v87 != (__int64 *)(v84 + 416) )
    {
      v95 = v30[26].m128i_u32[2];
      v96 = *(unsigned int *)(v84 + 424);
      v97 = v30[26].m128i_i32[2];
      if ( v95 <= v96 )
      {
        if ( v30[26].m128i_i32[2] )
        {
          v147 = *(_QWORD *)(v84 + 416);
          v148 = v30[26].m128i_i64[0];
          v149 = 0;
          do
          {
            *(_QWORD *)(v147 + v149) = *(_QWORD *)(v148 + v149);
            *(_BYTE *)(v147 + v149 + 8) = *(_BYTE *)(v148 + v149 + 8);
            v149 += 12;
          }
          while ( 12 * v95 != v149 );
        }
      }
      else
      {
        if ( v95 > *(unsigned int *)(v84 + 428) )
        {
          *(_DWORD *)(v84 + 424) = 0;
          sub_2237220(v84 + 416, v84 + 432, v95, 12);
          v99 = (char *)v30[26].m128i_i64[0];
          v98 = *(_BYTE **)(v84 + 416);
          v101 = 0;
          v95 = v30[26].m128i_u32[2];
          v100 = v99;
        }
        else
        {
          v98 = *(_BYTE **)(v84 + 416);
          v99 = (char *)v30[26].m128i_i64[0];
          if ( *(_DWORD *)(v84 + 424) )
          {
            v150 = 3 * v96;
            v151 = 0;
            v152 = 4 * v150;
            v101 = v152;
            do
            {
              *(_QWORD *)&v98[v151] = *(_QWORD *)&v99[v151];
              v98[v151 + 8] = v99[v151 + 8];
              v151 += 12;
            }
            while ( v152 != v151 );
            v98 += v152;
            v95 = v30[26].m128i_u32[2];
            v100 = &v99[v152];
          }
          else
          {
            v100 = (char *)v30[26].m128i_i64[0];
            v101 = 0;
          }
        }
        v102 = 12 * v95;
        if ( v100 != &v99[v102] )
          memcpy(v98, v100, v102 - v101);
      }
      *(_DWORD *)(v84 + 424) = v97;
    }
    sub_9EED30(v84 + 528, v166);
    v106 = sub_C00A40(a5, (__int64)v166, v103, v104, v105);
    v107 = sub_1AAB2D0((__int64)v159, v106, (__int64)&v173);
    v46 = (unsigned int *)v173;
    v12 = v107;
    if ( !v173 )
    {
LABEL_53:
      v55 = v158;
      if ( (unsigned __int64)v30 >= v158 )
        goto LABEL_143;
      goto LABEL_54;
    }
    v47 = v174;
    if ( !v174 )
    {
      v55 = v158;
      if ( (unsigned __int64)v30 >= v158 )
      {
LABEL_143:
        if ( (unsigned __int64)v30 <= v55 + 14848 )
        {
          v108 = *(unsigned int *)(v158 + 14976);
          *(_DWORD *)(v158 + 14976) = v108 + 1;
          *(_QWORD *)(v158 + 8 * v108 + 14848) = v30;
          goto LABEL_2;
        }
      }
LABEL_54:
      v56 = (__m128i *)v30[33].m128i_i64[0];
      v57 = &v56[4 * (unsigned __int64)v30[33].m128i_u32[2]];
      if ( v56 != v57 )
      {
        do
        {
          while ( 1 )
          {
            v57 -= 4;
            v58 = (unsigned __int64 *)v57[1].m128i_i64[1];
            if ( v58 == &v57[2].m128i_u64[1] )
              break;
            operator delete(v58);
            if ( v56 == v57 )
              goto LABEL_57;
          }
        }
        while ( v56 != v57 );
LABEL_57:
        v57 = (__m128i *)v30[33].m128i_i64[0];
      }
      if ( v57 != &v30[34] )
        free(v57);
      v59 = (__m128i *)v30[26].m128i_i64[0];
      v60 = (void **)&v30[26];
      if ( v59 != &v30[27] )
        free(v59);
      v61 = (void **)&v30[6];
      do
      {
        while ( 1 )
        {
          v60 -= 4;
          if ( *v60 == v60 + 2 )
            break;
          operator delete(*v60);
          if ( v60 == v61 )
            goto LABEL_65;
        }
      }
      while ( v60 != v61 );
LABEL_65:
      operator delete(v30, 0x3A0u);
      goto LABEL_2;
    }
  }
  else
  {
    v174 = v29;
    v173 = nullptr;
    v175 = v172;
    v44 = sub_C00A40(a5, v19, (__int64)v27, v29, v15);
    v45 = sub_1AAB2D0((__int64)v159, v44, (__int64)&v173);
    v46 = (unsigned int *)v173;
    v12 = v45;
    if ( !v173 )
      goto LABEL_2;
    v47 = v174;
    if ( !v174 )
      goto LABEL_2;
  }
  if ( (unsigned __int64)v46 >= v47 && (unsigned __int64)v46 <= v47 + 14848 )
  {
    v156 = *(unsigned int *)(v47 + 14976);
    *(_DWORD *)(v47 + 14976) = v156 + 1;
    *(_QWORD *)(v47 + 8 * v156 + 14848) = v46;
  }
  else
  {
    v48 = *((unsigned int **)v46 + 66);
    v49 = &v48[16 * (unsigned __int64)v46[134]];
    if ( v48 != v49 )
    {
      v50 = *((unsigned int **)v46 + 66);
      do
      {
        while ( 1 )
        {
          v49 -= 16;
          v51 = *((unsigned int **)v49 + 3);
          if ( v51 == v49 + 10 )
            break;
          operator delete(v51);
          if ( v50 == v49 )
            goto LABEL_42;
        }
      }
      while ( v50 != v49 );
LABEL_42:
      v49 = *((unsigned int **)v46 + 66);
    }
    if ( v49 != v46 + 136 )
      free(v49);
    v52 = *((unsigned int **)v46 + 52);
    v53 = (void **)(v46 + 104);
    if ( v52 != v46 + 108 )
      free(v52);
    v54 = (void **)(v46 + 24);
    do
    {
      while ( 1 )
      {
        v53 -= 4;
        if ( *v53 == v53 + 2 )
          break;
        operator delete(*v53);
        if ( v53 == v54 )
          goto LABEL_50;
      }
    }
    while ( v53 != v54 );
LABEL_50:
    operator delete(v46, 0x3A0u);
  }
  if ( v30 && v158 )
    goto LABEL_53;
LABEL_2:
  if ( ptr[0] != v179 )
    free(ptr[0]);
  if ( v176[0] != v177 )
    free(v176[0]);
  return v12;
}
