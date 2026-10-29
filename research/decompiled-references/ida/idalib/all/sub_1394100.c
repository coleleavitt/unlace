void __fastcall sub_1394100(
        __int64 a1,
        void *a2,
        __int64 a3,
        int a4,
        _BYTE *a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v14; // r8d
  unsigned int *v15; // r13
  __int64 *v16; // rbp
  _BYTE *v17; // rdi
  __int64 v18; // rdx
  void **p_dest; // r15
  __int64 v20; // rcx
  int v21; // eax
  int v22; // xmm0_4
  _BYTE *v23; // rdi
  size_t v24; // rdx
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 v28; // rdx
  _BYTE *v29; // rdi
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 *v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // r14
  __int64 v35; // rbp
  unsigned int *v36; // rbx
  unsigned int *v37; // rdi
  size_t v38; // rdx
  _QWORD *v39; // r12
  __int64 v40; // rax
  _QWORD *v41; // rdi
  size_t v42; // rdx
  __int64 *v43; // rsi
  size_t v44; // rdx
  int v45; // eax
  __int64 v46; // r14
  int *v47; // r15
  int *v48; // rbp
  int v49; // r12d
  int v50; // r13d
  __int64 v51; // rdx
  __int64 v52; // rcx
  _QWORD *v53; // r8
  unsigned int v54; // esi
  unsigned __int64 v55; // r12
  __int64 v56; // r9
  __int64 v57; // rax
  unsigned int v58; // esi
  int v59; // r10d
  __int64 v60; // rax
  __int64 v61; // r9
  __int64 v62; // r13
  int v63; // r12d
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  int v68; // eax
  unsigned int v69; // r12d
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  int v74; // eax
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // rax
  unsigned __int64 v80; // rdx
  char *v81; // rax
  int v82; // eax
  size_t v83; // rdx
  size_t v84; // rdx
  size_t v85; // rdx
  __int64 v86; // rdx
  int v87; // eax
  __int64 v88; // rax
  unsigned __int64 v89; // rdx
  __int64 v90; // rdi
  char *v91; // rax
  void *v92; // r8
  size_t v93; // r14
  int v94; // r12d
  int v95; // eax
  _BYTE *v96; // rdi
  size_t v97; // rdx
  void *v98; // rcx
  __int64 *v99; // rdi
  __int64 v100; // rdx
  _QWORD *v101; // r14
  _QWORD *v102; // r12
  _QWORD *v103; // rdi
  __int64 *v104; // r12
  __int64 *v105; // rbx
  __int64 *v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  size_t v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  unsigned __int64 v114; // r11
  __int64 v115; // rax
  unsigned __int64 v116; // r10
  __int64 v117; // rax
  _QWORD *v118; // r11
  size_t *v119; // rax
  size_t i; // rdx
  unsigned __int64 v121; // rdx
  __int64 *v122; // rdi
  __int64 v123; // rcx
  _DWORD *v124; // rax
  _DWORD *v125; // rdx
  unsigned int v126; // r10d
  __int64 *v127; // rdi
  __int64 v128; // rcx
  _DWORD *v129; // rax
  _DWORD *v130; // rdx
  unsigned int v131; // r11d
  void *v133; // [rsp+10h] [rbp-8A8h] BYREF
  __int64 v134; // [rsp+18h] [rbp-8A0h]
  __int64 v135; // [rsp+20h] [rbp-898h]
  void **v136; // [rsp+28h] [rbp-890h] BYREF
  _QWORD *v137; // [rsp+30h] [rbp-888h] BYREF
  __int64 v138; // [rsp+38h] [rbp-880h]
  void **v139; // [rsp+40h] [rbp-878h]
  void **v140; // [rsp+48h] [rbp-870h]
  void **v141; // [rsp+50h] [rbp-868h]
  int *v142; // [rsp+58h] [rbp-860h]
  _BYTE *v143; // [rsp+60h] [rbp-858h]
  _QWORD *v144; // [rsp+68h] [rbp-850h]
  _QWORD *v145; // [rsp+70h] [rbp-848h]
  unsigned int v146; // [rsp+78h] [rbp-840h]
  int v147; // [rsp+7Ch] [rbp-83Ch]
  unsigned __int64 v148; // [rsp+88h] [rbp-830h]
  int v149; // [rsp+90h] [rbp-828h]
  unsigned __int64 v150; // [rsp+94h] [rbp-824h]
  int v151; // [rsp+9Ch] [rbp-81Ch]
  void *v152; // [rsp+A0h] [rbp-818h] BYREF
  __int64 v153; // [rsp+A8h] [rbp-810h]
  int v154; // [rsp+B0h] [rbp-808h] BYREF
  __int64 v155; // [rsp+B8h] [rbp-800h]
  void *v156; // [rsp+C0h] [rbp-7F8h] BYREF
  __int64 v157; // [rsp+C8h] [rbp-7F0h]
  _BYTE v158[48]; // [rsp+D0h] [rbp-7E8h] BYREF
  void *dest; // [rsp+100h] [rbp-7B8h] BYREF
  __m128 v160; // [rsp+108h] [rbp-7B0h] BYREF
  void *v161; // [rsp+120h] [rbp-798h] BYREF
  __m128 v162; // [rsp+128h] [rbp-790h] BYREF
  void *v163; // [rsp+140h] [rbp-778h] BYREF
  __m128 v164; // [rsp+148h] [rbp-770h] BYREF
  void *v165; // [rsp+160h] [rbp-758h] BYREF
  __m128 v166; // [rsp+168h] [rbp-750h] BYREF
  __int64 v167; // [rsp+180h] [rbp-738h]
  int v168; // [rsp+188h] [rbp-730h]
  void *v169; // [rsp+190h] [rbp-728h] BYREF
  void *v170; // [rsp+198h] [rbp-720h] BYREF
  __m128 v171; // [rsp+1A0h] [rbp-718h] BYREF
  void *v172; // [rsp+1B8h] [rbp-700h] BYREF
  __m128 v173; // [rsp+1C0h] [rbp-6F8h] BYREF
  void *v174; // [rsp+1D8h] [rbp-6E0h] BYREF
  __int64 v175; // [rsp+1E0h] [rbp-6D8h]
  __int64 v176; // [rsp+1E8h] [rbp-6D0h] BYREF
  unsigned int *v177; // [rsp+248h] [rbp-670h] BYREF
  __int64 v178; // [rsp+250h] [rbp-668h]
  __int64 v179; // [rsp+258h] [rbp-660h] BYREF
  __int64 v180; // [rsp+3D8h] [rbp-4E0h]
  void *v181; // [rsp+3E0h] [rbp-4D8h] BYREF
  size_t v182; // [rsp+3E8h] [rbp-4D0h] BYREF
  _QWORD *v183; // [rsp+3F0h] [rbp-4C8h] BYREF
  void *v184[2]; // [rsp+3F8h] [rbp-4C0h] BYREF
  void *v185; // [rsp+408h] [rbp-4B0h] BYREF
  __int64 v186; // [rsp+410h] [rbp-4A8h] BYREF
  void *v187[2]; // [rsp+418h] [rbp-4A0h] BYREF
  void *v188; // [rsp+428h] [rbp-490h] BYREF
  __int64 v189; // [rsp+430h] [rbp-488h] BYREF
  __int64 v190; // [rsp+438h] [rbp-480h] BYREF
  void *v191[2]; // [rsp+440h] [rbp-478h] BYREF
  _BYTE v192[16]; // [rsp+450h] [rbp-468h] BYREF
  __int64 v193; // [rsp+460h] [rbp-458h]
  int v194; // [rsp+468h] [rbp-450h]
  __int64 *v195; // [rsp+498h] [rbp-420h] BYREF
  __int64 v196; // [rsp+4A0h] [rbp-418h]
  __int64 v197; // [rsp+4A8h] [rbp-410h] BYREF
  __int64 v198; // [rsp+628h] [rbp-290h]
  void *src; // [rsp+630h] [rbp-288h] BYREF
  size_t n; // [rsp+638h] [rbp-280h] BYREF
  size_t v201; // [rsp+640h] [rbp-278h] BYREF
  void *v202[2]; // [rsp+648h] [rbp-270h] BYREF
  __m256i v203; // [rsp+658h] [rbp-260h] BYREF
  size_t v204; // [rsp+678h] [rbp-240h] BYREF
  __int64 v205; // [rsp+680h] [rbp-238h] BYREF
  __int64 v206; // [rsp+688h] [rbp-230h] BYREF
  void *v207; // [rsp+690h] [rbp-228h] BYREF
  size_t v208; // [rsp+698h] [rbp-220h]
  _QWORD v209[2]; // [rsp+6A0h] [rbp-218h] BYREF
  _BYTE v210[12]; // [rsp+6B0h] [rbp-208h]
  void *ptr; // [rsp+6E8h] [rbp-1D0h] BYREF
  __int64 v212; // [rsp+6F0h] [rbp-1C8h]
  _BYTE v213[384]; // [rsp+6F8h] [rbp-1C0h] BYREF
  __int64 v214; // [rsp+878h] [rbp-40h]

  v133 = a2;
  v134 = a10;
  v135 = a11;
  if ( !a12 || (a12 & 4) != 0 || (a12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return;
  v138 = a3;
  v146 = (unsigned int)a2;
  v14 = *(_DWORD *)((a12 & 0xFFFFFFFFFFFFFFF8LL) + 12);
  src = &v201;
  v15 = (unsigned int *)&v169;
  v203.m256i_i64[3] = (__int64)&v205;
  v16 = (__int64 *)&v181;
  v207 = v209;
  *(_QWORD *)&v210[4] = 0xBF80000000000002LL;
  v136 = a6;
  n = 0;
  LOBYTE(v201) = 0;
  v202[1] = &v203.m256i_u64[1];
  v203.m256i_i64[0] = 0;
  v203.m256i_i8[8] = 0;
  v204 = 0;
  LOBYTE(v205) = 0;
  v208 = 0;
  LOBYTE(v209[0]) = 0;
  v210[0] = 1;
  sub_D8B070(
    &v169,
    (__int64 (__fastcall *)(_BYTE *, __int64, __int64, __va_list_tag *))&vsnprintf,
    16,
    (__int64)"%u",
    v14);
  v181 = &v183;
  if ( !v169 )
  {
    LOBYTE(v183) = 0;
    v17 = v202[1];
    v38 = 0;
LABEL_97:
    v203.m256i_i64[0] = v38;
    v17[v38] = 0;
    v17 = v181;
    goto LABEL_9;
  }
  v137 = &v183;
  sub_1393260(&v181, v169, (__int64)v170 + (_QWORD)v169);
  v17 = v202[1];
  if ( v181 == &v183 )
  {
    v38 = v182;
    if ( v182 )
    {
      if ( v182 == 1 )
        *(_BYTE *)v202[1] = (_BYTE)v183;
      else
        memcpy(v202[1], v181, v182);
      v38 = v182;
      v17 = v202[1];
    }
    goto LABEL_97;
  }
  if ( v202[1] == &v203.m256i_u64[1] )
  {
    v137 = v183;
    v202[1] = v181;
    *(__m128 *)v203.m256i_i8 = _mm_loadh_ps((const double *)&v137);
  }
  else
  {
    v137 = v183;
    v18 = v203.m256i_i64[1];
    v202[1] = v181;
    *(__m128 *)v203.m256i_i8 = _mm_loadh_ps((const double *)&v137);
    if ( v17 )
    {
      v181 = v17;
      v183 = (_QWORD *)v18;
      goto LABEL_9;
    }
  }
  v17 = &v183;
  v181 = &v183;
LABEL_9:
  v182 = 0;
  *v17 = 0;
  if ( v181 != &v183 )
    operator delete(v181);
  p_dest = &dest;
  dest = &v160.m128_u16[4];
  sub_13931A0(&dest, src, (__int64)src + n);
  v161 = &v162.m128_u16[4];
  sub_13931A0(&v161, (_BYTE *)v202[1], (__int64)v202[1] + v203.m256i_i64[0]);
  v163 = &v164.m128_u16[4];
  sub_13931A0(&v163, (_BYTE *)v203.m256i_i64[3], v203.m256i_i64[3] + v204);
  v165 = &v166.m128_u16[4];
  sub_13931A0(&v165, v207, (__int64)v207 + v208);
  v167 = *(_QWORD *)v210;
  v168 = *(_DWORD *)&v210[8];
  if ( v169 != &v171 )
    operator delete(v169);
  if ( v207 != v209 )
    operator delete(v207);
  if ( (__int64 *)v203.m256i_i64[3] != &v205 )
    operator delete((void *)v203.m256i_i64[3]);
  if ( v202[1] != &v203.m256i_u64[1] )
    operator delete(v202[1]);
  if ( src != &v201 )
    operator delete(src);
  v181 = &v183;
  sub_13931A0(&v181, dest, (__int64)dest + v160.m128_u64[0]);
  v184[1] = &v186;
  sub_13931A0(&v184[1], v161, (__int64)v161 + v162.m128_u64[0]);
  v187[1] = &v189;
  sub_13931A0(&v187[1], v163, (__int64)v163 + v164.m128_u64[0]);
  v191[0] = v192;
  sub_13931A0(v191, v165, (__int64)v165 + v166.m128_u64[0]);
  v20 = (unsigned int)(a4 - 1);
  v193 = v167;
  if ( (unsigned int)v20 > 4 )
  {
    v22 = -1082130432;
    v21 = 2;
  }
  else
  {
    v21 = dword_26112A0[v20];
    v22 = dword_2611280[v20];
  }
  HIDWORD(v193) = v21;
  LOBYTE(v193) = 1;
  v194 = v22;
  src = &v201;
  sub_13931A0(&src, v181, (__int64)v181 + v182);
  v202[1] = &v203.m256i_u64[1];
  sub_13931A0(&v202[1], (_BYTE *)v184[1], (__int64)v184[1] + (unsigned __int64)v185);
  v203.m256i_i64[3] = (__int64)&v205;
  sub_13931A0(&v203.m256i_i64[3], (_BYTE *)v187[1], (__int64)v187[1] + (unsigned __int64)v188);
  v207 = v209;
  sub_13931A0(&v207, (_BYTE *)v191[0], (__int64)v191[0] + (unsigned __int64)v191[1]);
  v23 = dest;
  *(_QWORD *)v210 = v193;
  *(_DWORD *)&v210[8] = v194;
  if ( src == &v201 )
  {
    v83 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v201;
      else
        memcpy(dest, src, n);
      v83 = n;
      v23 = dest;
    }
    v160.m128_u64[0] = v83;
    v23[v83] = 0;
    v23 = src;
  }
  else
  {
    if ( dest == &v160.m128_u16[4] )
    {
      v137 = (_QWORD *)v201;
      dest = src;
      v160 = _mm_loadh_ps((const double *)&v137);
    }
    else
    {
      v137 = (_QWORD *)v201;
      v24 = v160.m128_u64[1];
      dest = src;
      v160 = _mm_loadh_ps((const double *)&v137);
      if ( v23 )
      {
        src = v23;
        v201 = v24;
        goto LABEL_27;
      }
    }
    v23 = &v201;
    src = &v201;
  }
LABEL_27:
  n = 0;
  *v23 = 0;
  v25 = (__int64 *)v161;
  if ( v202[1] == &v203.m256i_u64[1] )
  {
    v86 = v203.m256i_i64[0];
    if ( v203.m256i_i64[0] )
    {
      if ( v203.m256i_i64[0] == 1 )
        *(_BYTE *)v161 = v203.m256i_i8[8];
      else
        memcpy(v161, v202[1], v203.m256i_u64[0]);
      v86 = v203.m256i_i64[0];
      v25 = (__int64 *)v161;
    }
    v162.m128_u64[0] = v86;
    *((_BYTE *)v25 + v86) = 0;
    v25 = (__int64 *)v202[1];
  }
  else
  {
    if ( v161 == &v162.m128_u16[4] )
    {
      v137 = (_QWORD *)v203.m256i_i64[1];
      v161 = v202[1];
      v162 = _mm_loadh_ps((const double *)&v137);
    }
    else
    {
      v137 = (_QWORD *)v203.m256i_i64[1];
      v26 = v162.m128_i64[1];
      v161 = v202[1];
      v162 = _mm_loadh_ps((const double *)&v137);
      if ( v25 )
      {
        v202[1] = v25;
        v203.m256i_i64[1] = v26;
        goto LABEL_31;
      }
    }
    v25 = &v203.m256i_i64[1];
    v202[1] = &v203.m256i_u64[1];
  }
LABEL_31:
  v203.m256i_i64[0] = 0;
  *(_BYTE *)v25 = 0;
  v27 = (__int64 *)v163;
  if ( (__int64 *)v203.m256i_i64[3] == &v205 )
  {
    v85 = v204;
    if ( v204 )
    {
      if ( v204 == 1 )
        *(_BYTE *)v163 = v205;
      else
        memcpy(v163, (const void *)v203.m256i_i64[3], v204);
      v85 = v204;
      v27 = (__int64 *)v163;
    }
    v164.m128_u64[0] = v85;
    *((_BYTE *)v27 + v85) = 0;
    v27 = (__int64 *)v203.m256i_i64[3];
  }
  else
  {
    if ( v163 == &v164.m128_u16[4] )
    {
      v137 = (_QWORD *)v205;
      v163 = (void *)v203.m256i_i64[3];
      v164 = _mm_loadh_ps((const double *)&v137);
    }
    else
    {
      v137 = (_QWORD *)v205;
      v28 = v164.m128_i64[1];
      v163 = (void *)v203.m256i_i64[3];
      v164 = _mm_loadh_ps((const double *)&v137);
      if ( v27 )
      {
        v203.m256i_i64[3] = (__int64)v27;
        v205 = v28;
        goto LABEL_35;
      }
    }
    v27 = &v205;
    v203.m256i_i64[3] = (__int64)&v205;
  }
LABEL_35:
  v204 = 0;
  *(_BYTE *)v27 = 0;
  v29 = v165;
  if ( v207 == v209 )
  {
    v84 = v208;
    if ( v208 )
    {
      if ( v208 == 1 )
        *(_BYTE *)v165 = v209[0];
      else
        memcpy(v165, v207, v208);
      v84 = v208;
      v29 = v165;
    }
    v166.m128_u64[0] = v84;
    v29[v84] = 0;
    v29 = v207;
  }
  else
  {
    if ( v165 == &v166.m128_u16[4] )
    {
      v137 = (_QWORD *)v209[0];
      v165 = v207;
      v166 = _mm_loadh_ps((const double *)&v137);
    }
    else
    {
      v137 = (_QWORD *)v209[0];
      v30 = v166.m128_u64[1];
      v165 = v207;
      v166 = _mm_loadh_ps((const double *)&v137);
      if ( v29 )
      {
        v207 = v29;
        v209[0] = v30;
        goto LABEL_39;
      }
    }
    v29 = v209;
    v207 = v209;
  }
LABEL_39:
  v208 = 0;
  *v29 = 0;
  v167 = *(_QWORD *)v210;
  v168 = *(_DWORD *)&v210[8];
  if ( v207 != v209 )
    operator delete(v207);
  if ( (__int64 *)v203.m256i_i64[3] != &v205 )
    operator delete((void *)v203.m256i_i64[3]);
  if ( v202[1] != &v203.m256i_u64[1] )
    operator delete(v202[1]);
  if ( src != &v201 )
    operator delete(src);
  if ( v191[0] != v192 )
    operator delete(v191[0]);
  if ( v187[1] != &v189 )
    operator delete(v187[1]);
  if ( v184[1] != &v186 )
    operator delete(v184[1]);
  if ( v181 != &v183 )
    operator delete(v181);
  v31 = sub_100D3E0(*(_QWORD *)(a1 + 40), (__int64)&dest);
  v201 = 0;
  LODWORD(src) = v31;
  v204 = (size_t)&v206;
  n = (size_t)v202;
  LOBYTE(v202[0]) = 0;
  v203.m256i_i64[0] = (__int64)&v203.m256i_i64[2];
  v203.m256i_i64[1] = 0;
  v203.m256i_i8[16] = 0;
  v205 = 0x800000000LL;
  ptr = v213;
  v212 = 0x800000000LL;
  BYTE4(v214) = 0;
  if ( !a5 )
  {
    LOBYTE(v183) = 0;
    v32 = &v203.m256i_i64[2];
    v181 = &v183;
    v42 = 0;
LABEL_110:
    v203.m256i_i64[1] = v42;
    *((_BYTE *)v32 + v42) = 0;
    v32 = (__int64 *)v181;
    goto LABEL_60;
  }
  v181 = &v183;
  v137 = &v183;
  sub_1393260(&v181, a5, (__int64)v136 + (_QWORD)a5);
  v32 = (__int64 *)v203.m256i_i64[0];
  if ( v181 == v137 )
  {
    v42 = v182;
    if ( v182 )
    {
      if ( v182 == 1 )
        *(_BYTE *)v203.m256i_i64[0] = (_BYTE)v183;
      else
        memcpy((void *)v203.m256i_i64[0], v181, v182);
      v42 = v182;
      v32 = (__int64 *)v203.m256i_i64[0];
    }
    goto LABEL_110;
  }
  if ( (unsigned __int64 *)v203.m256i_i64[0] == &v203.m256i_u64[2] )
  {
    v136 = (void **)v183;
    v203.m256i_i64[0] = (__int64)v181;
    *(__m128 *)&v203.m256i_u64[1] = _mm_loadh_ps((const double *)&v136);
    goto LABEL_227;
  }
  v136 = (void **)v183;
  v33 = v203.m256i_i64[2];
  v203.m256i_i64[0] = (__int64)v181;
  *(__m128 *)&v203.m256i_u64[1] = _mm_loadh_ps((const double *)&v136);
  if ( !v32 )
  {
LABEL_227:
    v32 = (__int64 *)&v183;
    v181 = &v183;
    goto LABEL_60;
  }
  v181 = v32;
  v183 = (_QWORD *)v33;
LABEL_60:
  v182 = 0;
  *(_BYTE *)v32 = 0;
  if ( v181 != &v183 )
    operator delete(v181);
  LODWORD(v169) = (_DWORD)src;
  v170 = &v171.m128_u16[4];
  sub_13931A0(&v170, (_BYTE *)n, n + v201);
  v172 = &v173.m128_u16[4];
  sub_13931A0(&v172, v203.m256i_i64[0], v203.m256i_i64[0] + v203.m256i_i64[1]);
  v174 = &v176;
  v175 = 0x800000000LL;
  if ( (_DWORD)v205 )
    sub_E32260((__int64 *)&v174, (__int64 *)&v204);
  v177 = (unsigned int *)&v179;
  v178 = 0x800000000LL;
  if ( (_DWORD)v212 )
  {
    sub_1393730((__int64)&v177, (__int64 *)&ptr);
    v39 = ptr;
    v180 = v214;
    v40 = 48LL * (unsigned int)v212;
    v34 = (char *)ptr + v40;
    if ( ptr != (char *)ptr + v40 )
    {
      do
      {
        while ( 1 )
        {
          v34 -= 6;
          v41 = (_QWORD *)v34[2];
          if ( v41 == v34 + 4 )
            break;
          operator delete(v41);
          if ( v39 == v34 )
          {
            v34 = ptr;
            goto LABEL_66;
          }
        }
      }
      while ( v39 != v34 );
      v34 = ptr;
    }
  }
  else
  {
    v34 = ptr;
    v180 = v214;
  }
LABEL_66:
  if ( v34 != (_QWORD *)v213 )
    free(v34);
  if ( (__int64 *)v204 != &v206 )
    free((void *)v204);
  if ( (unsigned __int64 *)v203.m256i_i64[0] != &v203.m256i_u64[2] )
    operator delete((void *)v203.m256i_i64[0]);
  if ( (void **)n != v202 )
    operator delete((void *)n);
  if ( !v146 )
    goto LABEL_75;
  LODWORD(v181) = (_DWORD)v169;
  v182 = (size_t)v184;
  sub_13931A0(&v182, v170, (__int64)v170 + v171.m128_u64[0]);
  v43 = (__int64 *)v172;
  v185 = v187;
  sub_13931A0(&v185, v172, (__int64)v172 + v173.m128_u64[0]);
  v188 = &v190;
  v189 = 0x800000000LL;
  if ( (_DWORD)v175 )
  {
    v43 = (__int64 *)&v174;
    sub_E32260((__int64 *)&v188, (__int64 *)&v174);
  }
  v195 = &v197;
  v196 = 0x800000000LL;
  if ( (_DWORD)v178 )
  {
    v43 = (__int64 *)&v177;
    sub_1393730((__int64)&v195, (__int64 *)&v177);
  }
  v156 = v158;
  v198 = v180;
  v152 = v133;
  v153 = v138;
  LODWORD(v137) = HIDWORD(a8);
  LODWORD(v138) = a8;
  v146 = a9;
  v136 = &v156;
  v157 = 0x400000000LL;
  if ( !a7 )
  {
    if ( (unsigned int)sub_101B270((__int64)&v152) )
    {
      v119 = (size_t *)sub_101B8C0((__int64)&v152, (__int64)v43, v107, v108, v109, v110);
      if ( v119 )
      {
        for ( i = v119[1]; i; i = *(_QWORD *)(v121 + 8) )
        {
          if ( (i & 4) == 0 )
            break;
          v121 = i & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v121 )
            break;
          v119 = (size_t *)v121;
        }
        sub_13934B0(a1, v119 + 4, *v119, v153);
      }
    }
    LODWORD(src) = (_DWORD)v181;
    n = (size_t)v202;
    if ( (void **)v182 == v184 )
    {
      *(__m128i *)v202 = _mm_loadu_si128((const __m128i *)v184);
    }
    else
    {
      n = v182;
      v202[0] = v184[0];
    }
    v111 = (size_t)v183;
    v183 = nullptr;
    LOBYTE(v184[0]) = 0;
    v201 = v111;
    v182 = (size_t)v184;
    v203.m256i_i64[0] = (__int64)&v203.m256i_i64[2];
    if ( v185 == v187 )
    {
      *(__m128i *)&v203.m256i_u64[2] = _mm_loadu_si128((const __m128i *)v187);
    }
    else
    {
      v203.m256i_i64[0] = (__int64)v185;
      v203.m256i_i64[2] = (__int64)v187[0];
    }
    v112 = v186;
    v186 = 0;
    LOBYTE(v187[0]) = 0;
    v203.m256i_i64[1] = v112;
    v185 = v187;
    v204 = (size_t)&v206;
    v205 = 0x800000000LL;
    if ( (_DWORD)v189 )
      sub_1393350((__int64)&v204, (char **)&v188);
    ptr = v213;
    v212 = 0x800000000LL;
    if ( (_DWORD)v196 )
      sub_1393BA0((__int64)&ptr, (__int64)&v195);
    goto LABEL_180;
  }
  LODWORD(src) = sub_101B2B0((__int64)&v152);
  n = v44;
  v45 = sub_101B270((__int64)&src);
  v46 = v153;
  LODWORD(v133) = v45;
  if ( v134 + 12 * v135 == v134 )
    goto LABEL_170;
  v139 = &dest;
  v47 = (int *)(v134 + 12 * v135);
  v140 = &v181;
  v48 = (int *)v134;
  v142 = &v154;
  v143 = v158;
  v141 = &v169;
  do
  {
    v49 = v48[1];
    v50 = *v48;
    if ( !v49 || !v50 )
      goto LABEL_118;
    if ( v50 < 0 )
      v50 = sub_10212A0(v46, v50);
    v148 = sub_101FD20(v46, v49);
    v54 = v50 & 0x7FFFFFFF;
    v149 = v51;
    v55 = HIDWORD(v148);
    LOBYTE(v135) = v51;
    if ( (v50 & 0x7FFFFFFFu) < *(_DWORD *)(v46 + 476) || v54 >= *(_DWORD *)(v46 + 480) )
      v56 = (unsigned int)sub_101D590(v46, v54);
    else
      v56 = *(unsigned int *)(v46 + 472);
    LOBYTE(src) = 0;
    if ( (unsigned int)(v56 + 1) <= 1 )
    {
LABEL_234:
      v56 = 0;
      goto LABEL_131;
    }
    if ( (int)v56 >= 0 )
    {
      v51 = 3LL * (unsigned int)v56;
      v57 = *(_QWORD *)(v46 + 184) + 24LL * (unsigned int)v56;
      goto LABEL_129;
    }
    v116 = (unsigned int)(-2 - v56);
    v117 = *(_QWORD *)(*(_QWORD *)(v46 + 320) + 8LL * ((unsigned int)(-2 - v56) >> 6));
    if ( _bittest64(&v117, v116) )
    {
      v118 = (_QWORD *)(*(_QWORD *)(v46 + 272) + 8 * ((unsigned __int64)(int)v116 >> 5));
      if ( *v118 )
      {
        v51 = 3LL * ((-2 - (_BYTE)v56) & 0x1F);
        v57 = *v118 + 24LL * ((-2 - (_BYTE)v56) & 0x1F);
        goto LABEL_129;
      }
      v122 = (__int64 *)(*(_QWORD *)(v46 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v123 = *v122;
      v122[10] += 768;
      v124 = (_DWORD *)((v123 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v122[1] >= (unsigned __int64)(v124 + 192) && v123 )
      {
        *v122 = (__int64)(v124 + 192);
      }
      else
      {
        LODWORD(v145) = v56;
        v144 = v118;
        LODWORD(v134) = -2 - v56;
        v124 = (_DWORD *)sub_986170((__int64)v122, 768, 768, 3, (__int64)v53, v56);
        v56 = (unsigned int)v145;
        v118 = v144;
        LOBYTE(v116) = v134;
      }
      *v118 = v124;
      v125 = v124 + 192;
      do
      {
        *v124 = 0;
        v124 += 6;
        *((_OWORD *)v124 - 1) = 0;
        *((_QWORD *)v124 - 1) = 0;
      }
      while ( v125 != v124 );
      v126 = v116 & 0x1F;
      v51 = (unsigned __int8)src;
      v52 = 3LL * v126;
      v57 = *v118 + 24LL * v126;
    }
    else
    {
      LODWORD(v134) = v56;
      v57 = sub_101F930(v46, v116, &src);
      v51 = (unsigned __int8)src;
      v56 = (unsigned int)v134;
    }
    if ( (_BYTE)v51 )
      goto LABEL_234;
LABEL_129:
    if ( !v57 )
      v56 = 0;
LABEL_131:
    v58 = v55 & 0x7FFFFFFF;
    if ( (v55 & 0x7FFFFFFF) < *(_DWORD *)(v46 + 476) || v58 >= *(_DWORD *)(v46 + 480) )
    {
      LODWORD(v134) = v56;
      v82 = sub_101D590(v46, v58);
      v56 = (unsigned int)v134;
      v59 = v82;
    }
    else
    {
      v59 = *(_DWORD *)(v46 + 472);
    }
    LOBYTE(src) = 0;
    if ( (unsigned int)(v59 + 1) > 1 )
    {
      if ( v59 >= 0 )
      {
        v51 = 3LL * (unsigned int)v59;
        v60 = *(_QWORD *)(v46 + 184) + 24LL * (unsigned int)v59;
        goto LABEL_137;
      }
      v114 = (unsigned int)(-2 - v59);
      v115 = *(_QWORD *)(*(_QWORD *)(v46 + 320) + 8LL * ((unsigned int)(-2 - v59) >> 6));
      if ( _bittest64(&v115, v114) )
      {
        v53 = (_QWORD *)(*(_QWORD *)(v46 + 272) + 8 * ((unsigned __int64)(int)v114 >> 5));
        if ( *v53 )
        {
          v51 = 3LL * ((-2 - (_BYTE)v59) & 0x1F);
          v60 = *v53 + 24LL * ((-2 - (_BYTE)v59) & 0x1F);
LABEL_137:
          if ( !v60 )
            v59 = 0;
          goto LABEL_139;
        }
        v127 = (__int64 *)(*(_QWORD *)(v46 + 288) & 0xFFFFFFFFFFFFFFF8LL);
        v128 = *v127;
        v127[10] += 768;
        v129 = (_DWORD *)((v128 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v127[1] >= (unsigned __int64)(v129 + 192) && v128 )
        {
          *v127 = (__int64)(v129 + 192);
        }
        else
        {
          v147 = v59;
          v145 = v53;
          LODWORD(v144) = -2 - v59;
          LODWORD(v134) = v56;
          v129 = (_DWORD *)sub_986170((__int64)v127, 768, 768, 3, (__int64)v53, v56);
          v59 = v147;
          v53 = v145;
          LOBYTE(v114) = (_BYTE)v144;
          LODWORD(v56) = v134;
        }
        *v53 = v129;
        v130 = v129 + 192;
        do
        {
          *v129 = 0;
          v129 += 6;
          *((_OWORD *)v129 - 1) = 0;
          *((_QWORD *)v129 - 1) = 0;
        }
        while ( v129 != v130 );
        v131 = v114 & 0x1F;
        v51 = (unsigned __int8)src;
        v52 = 3LL * v131;
        v60 = *v53 + 24LL * v131;
      }
      else
      {
        LODWORD(v144) = v59;
        LODWORD(v134) = v56;
        v60 = sub_101F930(v46, v114, &src);
        LODWORD(v56) = v134;
        v59 = (int)v144;
        v51 = (unsigned __int8)src;
      }
      if ( !(_BYTE)v51 )
        goto LABEL_137;
    }
    v59 = 0;
LABEL_139:
    if ( (_DWORD)v133 == (_DWORD)v56 && v59 == (_DWORD)v133 )
    {
      v61 = 0;
      if ( (_BYTE)v135 )
        v61 = (unsigned int)sub_13DC0F0((unsigned int)v55, v46, *(_QWORD *)(a1 + 8));
      v154 = v50;
      v62 = (__int64)v142;
      LODWORD(v135) = v61;
      LODWORD(src) = v55;
      v155 = v46;
      n = v46;
      v63 = sub_101BC00((__int64)v142, 0, v51, v52, (__int64)v53, v61);
      LODWORD(v134) = sub_101B500(v62, 0, v64, v65, v66, v67);
      v68 = sub_101B270(v62);
      v69 = sub_10224B0((__int64 *)v46, v68, v134, v63);
      v74 = sub_101BC00((__int64)&src, 0, v70, v71, v72, v73);
      v75 = (unsigned int)v135;
      LODWORD(v135) = v74 + v135;
      LODWORD(v134) = sub_101B500((__int64)&src, 0, v76, (unsigned int)v135, v77, v75);
      v78 = sub_101B270((__int64)&src);
      v150 = __PAIR64__(sub_10224B0((__int64 *)v46, v78, v134, v135), v69);
      v79 = (unsigned int)v157;
      LOBYTE(v151) = 0;
      v80 = (unsigned int)v157 + 1LL;
      if ( v80 > HIDWORD(v157) )
      {
        sub_2237220(v136, v143, v80, 12);
        v79 = (unsigned int)v157;
      }
      v81 = (char *)v156 + 12 * v79;
      *(_QWORD *)v81 = v150;
      *((_DWORD *)v81 + 2) = v151;
      LODWORD(v157) = v157 + 1;
    }
    v46 = v153;
LABEL_118:
    v48 += 3;
  }
  while ( v47 != v48 );
  p_dest = v139;
  v16 = (__int64 *)v140;
  v15 = (unsigned int *)v141;
LABEL_170:
  v146 = (__PAIR64__(v146, *(_DWORD *)(*(_QWORD *)(a1 + 8) + 152LL) - 1) - 169999999) >> 32;
  v87 = sub_10224B0((__int64 *)v46, v138, (unsigned int)v137, v146);
  LOBYTE(n) = 0;
  LODWORD(src) = v87;
  HIDWORD(src) = v87;
  v88 = (unsigned int)v157;
  v89 = (unsigned int)v157 + 1LL;
  if ( v89 > HIDWORD(v157) )
  {
    sub_2237220(v136, v136 + 2, v89, 12);
    v88 = (unsigned int)v157;
  }
  v90 = 0;
  v91 = (char *)v156 + 12 * v88;
  *(_QWORD *)v91 = src;
  v92 = v156;
  *((_DWORD *)v91 + 2) = n;
  LODWORD(v189) = 0;
  LODWORD(v157) = v157 + 1;
  v93 = 12LL * (unsigned int)v157;
  v94 = v157;
  v95 = 0;
  if ( (unsigned int)v157 > (unsigned __int64)HIDWORD(v189) )
  {
    v133 = v92;
    sub_2237220(v16 + 9, v16 + 11, (unsigned int)v157, 12);
    v95 = v189;
    v92 = v133;
    v90 = 12LL * (unsigned int)v189;
  }
  if ( v93 )
  {
    memcpy((char *)v188 + v90, v92, v93);
    v95 = v189;
  }
  LODWORD(v189) = v95 + v94;
  LODWORD(src) = (_DWORD)v181;
  n = (size_t)v202;
  sub_13931A0(&n, (_BYTE *)v182, (__int64)v183 + v182);
  v203.m256i_i64[0] = (__int64)&v203.m256i_i64[2];
  sub_13931A0(&v203, v185, (__int64)v185 + v186);
  v204 = (size_t)&v206;
  v205 = 0x800000000LL;
  if ( (_DWORD)v189 )
    sub_E32260((__int64 *)&v204, v16 + 9);
  ptr = v213;
  v212 = 0x800000000LL;
  if ( (_DWORD)v196 )
    sub_1393730((__int64)&ptr, v16 + 23);
LABEL_180:
  v214 = v198;
  if ( v156 != v136 + 2 )
    free(v156);
  v96 = v170;
  v97 = v201;
  LODWORD(v169) = (_DWORD)src;
  if ( (void **)n == v202 )
  {
    if ( v201 )
    {
      if ( v201 == 1 )
        *(_BYTE *)v170 = v202[0];
      else
        memcpy(v170, (const void *)n, v201);
      v97 = v201;
      v96 = v170;
    }
    v171.m128_u64[0] = v97;
    v96[v97] = 0;
    v96 = (_BYTE *)n;
  }
  else
  {
    if ( v170 == v15 + 6 )
    {
      v133 = v202[0];
      v170 = (void *)n;
      v171 = _mm_loadh_ps((const double *)&v133);
    }
    else
    {
      v133 = v202[0];
      v98 = (void *)v171.m128_u64[1];
      v170 = (void *)n;
      v171 = _mm_loadh_ps((const double *)&v133);
      if ( v96 )
      {
        n = (size_t)v96;
        v202[0] = v98;
        goto LABEL_186;
      }
    }
    v96 = v202;
    n = (size_t)v202;
  }
LABEL_186:
  v201 = 0;
  *v96 = 0;
  v99 = (__int64 *)v172;
  if ( (unsigned __int64 *)v203.m256i_i64[0] == &v203.m256i_u64[2] )
  {
    v113 = v203.m256i_i64[1];
    if ( v203.m256i_i64[1] )
    {
      if ( v203.m256i_i64[1] == 1 )
        *(_BYTE *)v172 = v203.m256i_i8[16];
      else
        memcpy(v172, (const void *)v203.m256i_i64[0], v203.m256i_u64[1]);
      v113 = v203.m256i_i64[1];
      v99 = (__int64 *)v172;
    }
    v173.m128_u64[0] = v113;
    *((_BYTE *)v99 + v113) = 0;
    v99 = (__int64 *)v203.m256i_i64[0];
  }
  else
  {
    if ( v172 == v15 + 14 )
    {
      v133 = (void *)v203.m256i_i64[2];
      v172 = (void *)v203.m256i_i64[0];
      v173 = _mm_loadh_ps((const double *)&v133);
    }
    else
    {
      v133 = (void *)v203.m256i_i64[2];
      v100 = v173.m128_i64[1];
      v172 = (void *)v203.m256i_i64[0];
      v173 = _mm_loadh_ps((const double *)&v133);
      if ( v99 )
      {
        v203.m256i_i64[0] = (__int64)v99;
        v203.m256i_i64[2] = v100;
        goto LABEL_190;
      }
    }
    v99 = &v203.m256i_i64[2];
    v203.m256i_i64[0] = (__int64)&v203.m256i_i64[2];
  }
LABEL_190:
  v203.m256i_i64[1] = 0;
  *(_BYTE *)v99 = 0;
  sub_1393350((__int64)(v15 + 18), (char **)&v204);
  sub_1393BA0((__int64)(v15 + 46), (__int64)&ptr);
  v101 = ptr;
  v180 = v214;
  v102 = (char *)ptr + 48 * (unsigned int)v212;
  if ( ptr != v102 )
  {
    do
    {
      while ( 1 )
      {
        v102 -= 6;
        v103 = (_QWORD *)v102[2];
        if ( v103 == v102 + 4 )
          break;
        operator delete(v103);
        if ( v101 == v102 )
          goto LABEL_193;
      }
    }
    while ( v101 != v102 );
LABEL_193:
    v102 = ptr;
  }
  if ( v102 != (_QWORD *)v213 )
    free(v102);
  if ( (__int64 *)v204 != &v206 )
    free((void *)v204);
  if ( (unsigned __int64 *)v203.m256i_i64[0] != &v203.m256i_u64[2] )
    operator delete((void *)v203.m256i_i64[0]);
  if ( (void **)n != v202 )
    operator delete((void *)n);
  v104 = v195;
  v105 = &v195[6 * (unsigned int)v196];
  if ( v195 != v105 )
  {
    do
    {
      while ( 1 )
      {
        v105 -= 6;
        v106 = (__int64 *)v105[2];
        if ( v106 == v105 + 4 )
          break;
        operator delete(v106);
        if ( v104 == v105 )
          goto LABEL_205;
      }
    }
    while ( v104 != v105 );
LABEL_205:
    v105 = v195;
  }
  if ( v105 != v16 + 25 )
    free(v105);
  if ( v188 != v16 + 11 )
    free(v188);
  if ( v185 != v16 + 7 )
    operator delete(v185);
  if ( (__int64 *)v182 != v16 + 3 )
    operator delete((void *)v182);
LABEL_75:
  sub_10114B0(*(_QWORD *)(a1 + 40), v15);
  v35 = (__int64)v177;
  v36 = &v177[12 * (unsigned int)v178];
  if ( v177 != v36 )
  {
    do
    {
      while ( 1 )
      {
        v36 -= 12;
        v37 = *((unsigned int **)v36 + 2);
        if ( v37 == v36 + 8 )
          break;
        operator delete(v37);
        if ( (unsigned int *)v35 == v36 )
          goto LABEL_78;
      }
    }
    while ( (unsigned int *)v35 != v36 );
LABEL_78:
    v36 = v177;
  }
  if ( v36 != v15 + 50 )
    free(v36);
  if ( v174 != v15 + 22 )
    free(v174);
  if ( v172 != v15 + 14 )
    operator delete(v172);
  if ( v170 != v15 + 6 )
    operator delete(v170);
  if ( v165 != p_dest + 14 )
    operator delete(v165);
  if ( v163 != p_dest + 10 )
    operator delete(v163);
  if ( v161 != p_dest + 6 )
    operator delete(v161);
  if ( dest != p_dest + 2 )
    operator delete(dest);
}
