_QWORD *__fastcall sub_15A8D00(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        unsigned int a5,
        __m128i si128,
        __m128i a7)
{
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rbx
  void *v12; // rbp
  _QWORD *v13; // r15
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *result; // rax
  unsigned int *v19; // rax
  size_t v20; // rbx
  __int64 v21; // rdi
  void *v22; // rdx
  int v23; // eax
  __int64 v24; // rbx
  void *v25; // rdx
  unsigned __int16 *v26; // rsi
  void **v27; // r15
  int *v28; // r12
  int v29; // ebp
  unsigned int v30; // ebp
  __int64 v31; // rbx
  __int64 v32; // r15
  _DWORD *v33; // rax
  unsigned int v34; // ebp
  unsigned __int64 v35; // r15
  unsigned int v36; // r13d
  __int64 v37; // r14
  _DWORD *v38; // rax
  unsigned int v39; // r13d
  unsigned __int64 v40; // r14
  bool v41; // zf
  __int64 v42; // r8
  __m128 *v43; // rdx
  __int64 v44; // rax
  _WORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // r8
  _BYTE *v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rbp
  _BYTE *v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rbp
  _BYTE *v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rax
  _BYTE *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  _WORD *v60; // rcx
  __int64 v61; // rdi
  _BYTE *v62; // rax
  _QWORD *v63; // rbx
  __int64 v64; // r13
  bool (__fastcall *v65)(__int64, const void *, size_t, __int64); // rbp
  void *v66; // rax
  signed __int64 v67; // r14
  char *v68; // rax
  char *v69; // r12
  __m128i v70; // xmm0
  _BYTE *v71; // r15
  signed __int64 v72; // r14
  _QWORD *v73; // r13
  _BYTE *v74; // rax
  __int64 v75; // rax
  bool v76; // bl
  unsigned int *v77; // rax
  char *v78; // rbp
  char *v79; // rdi
  char v80; // dl
  char v81; // dl
  unsigned __int64 v82; // r8
  __int64 v83; // rax
  __int64 *v84; // r9
  unsigned __int64 v85; // r13
  __int64 v86; // rax
  _QWORD *v87; // r14
  char *v88; // rax
  char *v89; // rcx
  const void *v90; // rbx
  size_t v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned int *v94; // rax
  char *v95; // rbp
  size_t v96; // rax
  bool v97; // al
  __int64 v98; // rax
  __int64 v99; // rbp
  const void *v100; // rbx
  size_t v101; // rax
  void *v102; // rdi
  size_t v103; // r12
  __int64 v104; // rbx
  void *v105; // rdi
  unsigned int *v106; // rsi
  size_t v107; // rbp
  const void *v108; // rsi
  __int64 v109; // r8
  __int64 (__fastcall *v110)(__int64); // rax
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // rbp
  __int64 v114; // rdx
  __int64 v115; // rbx
  char v116; // al
  __m128i *v117; // rax
  void **v118; // rbp
  __int64 v119; // rbp
  _WORD *v120; // rdx
  char *v121; // rbx
  _BYTE *v122; // rsi
  _QWORD *v123; // rax
  unsigned __int64 v124; // rsi
  void **v125; // r15
  char *v126; // r12
  void **v127; // r13
  char *v128; // rdx
  __int64 v129; // rax
  _BYTE *v130; // rdx
  void **v131; // rbx
  __int64 v132; // r8
  __int64 (__fastcall *v133)(__int64); // rax
  __int64 v134; // r9
  __int64 v135; // rcx
  __int64 v136; // rbx
  __int64 v137; // rbp
  __int64 v138; // rdx
  void **v139; // r15
  const char *v140; // rbp
  __int64 v141; // rbx
  __int64 v142; // rdx
  size_t v143; // rax
  void *v144; // rdi
  size_t v145; // r12
  unsigned __int64 v146; // rdi
  __m128 *v147; // rdx
  unsigned __int64 v148; // rax
  _BYTE *v149; // rdx
  __int64 v150; // r15
  __int64 *v151; // r14
  signed __int64 v152; // rax
  __int64 v153; // rax
  signed __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 *v157; // r9
  __int64 v158; // rax
  signed __int64 v159; // rdx
  __int64 v160; // rax
  __int64 v161; // rax
  signed __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 *v166; // r9
  signed __int64 v167; // rdx
  __int64 v168; // rax
  char *v169; // rdx
  __m128i *v170; // rax
  __m128i *v171; // rsi
  _WORD *v172; // rbx
  __m128i *v173; // rdx
  _BYTE *v174; // rbx
  __int64 *v175; // rdi
  __int64 v176; // rdx
  _DWORD *v177; // rax
  _DWORD *v178; // rdx
  __int64 *v179; // rdi
  __int64 v180; // rdx
  _DWORD *v181; // rax
  _DWORD *v182; // rdx
  __m128i *v183; // rax
  __m128i *v184; // rsi
  _DWORD *v185; // rbx
  __int64 v186; // rax
  __int64 v187; // rax
  __int64 v188; // rbp
  __int64 v189; // r15
  __int64 v190; // rax
  __int64 *v191; // rbp
  signed __int64 v192; // rcx
  __int64 v193; // r9
  __int64 v194; // r10
  __int64 v195; // rax
  __int64 v196; // r10
  __int64 *v197; // r9
  __int64 v198; // rdx
  signed __int64 v199; // r10
  __int64 v200; // rax
  __int64 *v201; // r10
  __int64 *v202; // r9
  __int64 v203; // r9
  __int64 v204; // rax
  __int64 v205; // rax
  signed __int64 v206; // rdx
  __int64 v207; // rax
  signed __int64 v208; // rcx
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 *v212; // r9
  signed __int64 v213; // rdx
  __int64 v214; // rax
  __m128i v215; // [rsp+0h] [rbp-148h] BYREF
  unsigned __int64 v216; // [rsp+10h] [rbp-138h]
  unsigned __int64 v217; // [rsp+18h] [rbp-130h]
  __int64 v218; // [rsp+20h] [rbp-128h]
  __int64 *v219; // [rsp+28h] [rbp-120h]
  int *v220; // [rsp+30h] [rbp-118h]
  size_t n; // [rsp+38h] [rbp-110h]
  signed __int64 v222; // [rsp+40h] [rbp-108h]
  void **v223; // [rsp+48h] [rbp-100h]
  __int64 v224; // [rsp+50h] [rbp-F8h]
  void *s2; // [rsp+58h] [rbp-F0h]
  __int64 v226; // [rsp+60h] [rbp-E8h]
  __int64 v227; // [rsp+68h] [rbp-E0h]
  __int64 v228; // [rsp+70h] [rbp-D8h]
  __int64 v229; // [rsp+78h] [rbp-D0h]
  __int64 v230; // [rsp+80h] [rbp-C8h]
  __int64 v231; // [rsp+88h] [rbp-C0h]
  void *v232[2]; // [rsp+90h] [rbp-B8h] BYREF
  __m128i *v233; // [rsp+A0h] [rbp-A8h]
  void *v234; // [rsp+B0h] [rbp-98h] BYREF
  char *s; // [rsp+B8h] [rbp-90h]
  __m128i v236; // [rsp+C0h] [rbp-88h] BYREF
  int v237; // [rsp+D0h] [rbp-78h]
  __m128i v238; // [rsp+D8h] [rbp-70h]
  char *v239; // [rsp+E8h] [rbp-60h]
  char v240; // [rsp+F0h] [rbp-58h]
  __int64 v241; // [rsp+F8h] [rbp-50h]
  __int64 v242; // [rsp+100h] [rbp-48h]
  __int64 v243; // [rsp+108h] [rbp-40h]

  v9 = 12LL * a5;
  v10 = (__int64)&a4[v9];
  v218 = a1;
  v219 = a2;
  v224 = a3;
  v223 = &v234;
  sub_15A69E0((__int64 *)&v234, a4, (__int64)&a4[v9]);
  if ( v236.m128i_i64[0] )
  {
    sub_15A8C20(a4, v10, v236.m128i_i64[0], (__int64)s);
  }
  else if ( (unsigned __int64)v9 <= 168 )
  {
    sub_15A38A0((__int64)a4, v10);
  }
  else
  {
    v150 = 12 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((v9 * 8) >> 5)) >> 1);
    v151 = &a4[v150];
    v152 = 0xAAAAAAAAAAAAAAABLL * ((v150 * 8) >> 5);
    v220 = (int *)v152;
    if ( (unsigned __int64)v150 <= 168 )
    {
      sub_15A38A0((__int64)a4, (__int64)&a4[v150]);
    }
    else
    {
      n = 96 * (v152 >> 1);
      v215.m128i_i64[0] = (__int64)a4 + n;
      v222 = 0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5);
      if ( n <= 0x540 )
      {
        sub_15A38A0((__int64)a4, v215.m128i_i64[0]);
      }
      else
      {
        v153 = 12 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5)) >> 1);
        v215.m128i_i64[1] = (__int64)&a4[v153];
        v154 = 0xAAAAAAAAAAAAAAABLL * ((v153 * 8) >> 5);
        v226 = v154;
        if ( (unsigned __int64)v153 <= 168 )
        {
          s2 = (void *)(96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5)) >> 1));
          sub_15A38A0((__int64)a4, v215.m128i_i64[1]);
          v158 = (__int64)s2;
        }
        else
        {
          v229 = 96 * (v154 >> 1);
          s2 = (char *)a4 + v229;
          v227 = 0xAAAAAAAAAAAAAAABLL * (v229 >> 5);
          if ( (unsigned __int64)v229 <= 0x540 )
          {
            sub_15A38A0((__int64)a4, (__int64)s2);
          }
          else
          {
            v231 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5)) >> 1);
            v230 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v229 >> 5)) >> 1);
            sub_15A4E20((__int64)a4, (__int64)a4 + v230);
            sub_15A4E20((__int64)a4 + v230, (__int64)s2);
            sub_15A4950(
              (__int64)a4,
              (__int64 *)((char *)a4 + v230),
              (__int64)s2,
              0xAAAAAAAAAAAAAAABLL * (v230 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v229 - v230) >> 5));
          }
          v155 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5)) >> 1);
          if ( v155 - v229 <= 1344 )
          {
            v229 = 0xAAAAAAAAAAAAAAABLL * ((v155 - v229) >> 5);
            sub_15A38A0((__int64)s2, v215.m128i_i64[1]);
            v156 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5)) >> 1);
            v157 = (__int64 *)v229;
          }
          else
          {
            v231 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * ((__int64)n >> 5)) >> 1);
            v230 = 0xAAAAAAAAAAAAAAABLL * ((v155 - v229) >> 5);
            v229 = 96 * (v230 >> 1);
            sub_15A4E20((__int64)s2, (__int64)s2 + v229);
            sub_15A4E20((__int64)s2 + v229, v215.m128i_i64[1]);
            sub_15A4950(
              (__int64)s2,
              (__int64 *)((char *)s2 + v229),
              v215.m128i_i64[1],
              0xAAAAAAAAAAAAAAABLL * (v229 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[1] - ((__int64)s2 + v229)) >> 5));
            v156 = v231;
            v157 = (__int64 *)v230;
          }
          v228 = v156;
          sub_15A4950((__int64)a4, (__int64 *)s2, v215.m128i_i64[1], v227, (__int64)v157);
          v158 = v228;
        }
        v227 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(n - v158) >> 5);
        if ( (__int64)(n - v158) <= 1344 )
        {
          sub_15A38A0(v215.m128i_i64[1], v215.m128i_i64[0]);
        }
        else
        {
          v159 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(n - v158) >> 5);
          v160 = 96 * (v159 >> 1);
          s2 = (void *)(v160 + v215.m128i_i64[1]);
          v228 = 0xAAAAAAAAAAAAAAABLL * (v160 >> 5);
          if ( (unsigned __int64)v160 <= 0x540 )
          {
            sub_15A38A0(v215.m128i_i64[1], v160 + v215.m128i_i64[1]);
          }
          else
          {
            v231 = 96 * (v159 >> 1);
            v230 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v160 >> 5)) >> 1);
            sub_15A4E20(v215.m128i_i64[1], v215.m128i_i64[1] + v230);
            sub_15A4E20(v215.m128i_i64[1] + v230, (__int64)s2);
            sub_15A4950(
              v215.m128i_i64[1],
              (__int64 *)(v215.m128i_i64[1] + v230),
              (__int64)s2,
              0xAAAAAAAAAAAAAAABLL * (v230 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v231 - v230) >> 5));
          }
          if ( v215.m128i_i64[0] - (__int64)s2 <= 1344 )
          {
            v229 = 0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[0] - (__int64)s2) >> 5);
            sub_15A38A0((__int64)s2, v215.m128i_i64[0]);
          }
          else
          {
            v231 = 0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[0] - (__int64)s2) >> 5);
            v230 = 96 * (v231 >> 1);
            v229 = (__int64)s2 + v230;
            sub_15A4E20((__int64)s2, (__int64)s2 + v230);
            sub_15A4E20((__int64)s2 + v230, v215.m128i_i64[0]);
            sub_15A4950(
              (__int64)s2,
              (__int64 *)v229,
              v215.m128i_i64[0],
              0xAAAAAAAAAAAAAAABLL * (v230 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[0] - v229) >> 5));
          }
          sub_15A4950(
            v215.m128i_i64[1],
            (__int64 *)s2,
            v215.m128i_i64[0],
            v228,
            0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[0] - (__int64)s2) >> 5));
        }
        sub_15A4950((__int64)a4, (__int64 *)v215.m128i_i64[1], v215.m128i_i64[0], v226, v227);
      }
      v161 = v150 * 8 - n;
      v162 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v150 * 8 - n) >> 5);
      n = v162;
      if ( v161 <= 1344 )
      {
        sub_15A38A0(v215.m128i_i64[0], (__int64)&a4[v150]);
      }
      else
      {
        v163 = 96 * (v162 >> 1);
        v215.m128i_i64[1] = v163 + v215.m128i_i64[0];
        v226 = 0xAAAAAAAAAAAAAAABLL * (v163 >> 5);
        if ( (unsigned __int64)v163 <= 0x540 )
        {
          sub_15A38A0(v215.m128i_i64[0], v215.m128i_i64[1]);
        }
        else
        {
          v229 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v163 >> 5)) >> 1);
          s2 = (void *)(v229 + v215.m128i_i64[0]);
          v227 = 0xAAAAAAAAAAAAAAABLL * (v229 >> 5);
          if ( (unsigned __int64)v229 <= 0x540 )
          {
            v228 = 96 * (v162 >> 1);
            sub_15A38A0(v215.m128i_i64[0], (__int64)s2);
            v164 = v228;
          }
          else
          {
            v231 = 96 * (v162 >> 1);
            v230 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v229 >> 5)) >> 1);
            sub_15A4E20(v215.m128i_i64[0], v215.m128i_i64[0] + v230);
            sub_15A4E20(v215.m128i_i64[0] + v230, (__int64)s2);
            sub_15A4950(
              v215.m128i_i64[0],
              (__int64 *)(v215.m128i_i64[0] + v230),
              (__int64)s2,
              0xAAAAAAAAAAAAAAABLL * (v230 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v229 - v230) >> 5));
            v164 = v231;
          }
          v165 = v164 - v229;
          if ( v165 <= 1344 )
          {
            v228 = 0xAAAAAAAAAAAAAAABLL * (v165 >> 5);
            sub_15A38A0((__int64)s2, v215.m128i_i64[1]);
            v166 = (__int64 *)v228;
          }
          else
          {
            v230 = 0xAAAAAAAAAAAAAAABLL * (v165 >> 5);
            v229 = 96 * (v230 >> 1);
            v228 = (__int64)s2 + v229;
            sub_15A4E20((__int64)s2, (__int64)s2 + v229);
            sub_15A4E20((__int64)s2 + v229, v215.m128i_i64[1]);
            sub_15A4950(
              (__int64)s2,
              (__int64 *)v228,
              v215.m128i_i64[1],
              0xAAAAAAAAAAAAAAABLL * (v229 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[1] - v228) >> 5));
            v166 = (__int64 *)v230;
          }
          sub_15A4950(v215.m128i_i64[0], (__int64 *)s2, v215.m128i_i64[1], v227, (__int64)v166);
        }
        v227 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v151 - v215.m128i_i64[1]) >> 5);
        if ( (__int64)v151 - v215.m128i_i64[1] <= 1344 )
        {
          sub_15A38A0(v215.m128i_i64[1], (__int64)&a4[v150]);
        }
        else
        {
          v167 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v151 - v215.m128i_i64[1]) >> 5);
          v168 = 96 * (v167 >> 1);
          s2 = (void *)(v168 + v215.m128i_i64[1]);
          v228 = 0xAAAAAAAAAAAAAAABLL * (v168 >> 5);
          if ( (unsigned __int64)v168 <= 0x540 )
          {
            sub_15A38A0(v215.m128i_i64[1], v168 + v215.m128i_i64[1]);
          }
          else
          {
            v231 = 96 * (v167 >> 1);
            v230 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v168 >> 5)) >> 1);
            sub_15A4E20(v215.m128i_i64[1], v215.m128i_i64[1] + v230);
            sub_15A4E20(v215.m128i_i64[1] + v230, (__int64)s2);
            sub_15A4950(
              v215.m128i_i64[1],
              (__int64 *)(v215.m128i_i64[1] + v230),
              (__int64)s2,
              0xAAAAAAAAAAAAAAABLL * (v230 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v231 - v230) >> 5));
          }
          if ( (char *)v151 - (_BYTE *)s2 <= 1344 )
          {
            v229 = 0xAAAAAAAAAAAAAAABLL * (((char *)v151 - (_BYTE *)s2) >> 5);
            sub_15A38A0((__int64)s2, (__int64)&a4[v150]);
          }
          else
          {
            v231 = 0xAAAAAAAAAAAAAAABLL * (((char *)v151 - (_BYTE *)s2) >> 5);
            v230 = 96 * (v231 >> 1);
            v229 = (__int64)s2 + v230;
            sub_15A4E20((__int64)s2, (__int64)s2 + v230);
            sub_15A4E20((__int64)s2 + v230, (__int64)&a4[v150]);
            sub_15A4950(
              (__int64)s2,
              (__int64 *)v229,
              (__int64)&a4[v150],
              0xAAAAAAAAAAAAAAABLL * (v230 >> 5),
              0xAAAAAAAAAAAAAAABLL * (((__int64)v151 - v229) >> 5));
          }
          sub_15A4950(
            v215.m128i_i64[1],
            (__int64 *)s2,
            (__int64)&a4[v150],
            v228,
            0xAAAAAAAAAAAAAAABLL * (((char *)v151 - (_BYTE *)s2) >> 5));
        }
        sub_15A4950(v215.m128i_i64[0], (__int64 *)v215.m128i_i64[1], (__int64)&a4[v150], v226, v227);
      }
      sub_15A4950((__int64)a4, (__int64 *)v215.m128i_i64[0], (__int64)&a4[v150], v222, n);
    }
    v188 = v9 * 8 - v150 * 8;
    v189 = 0xAAAAAAAAAAAAAAABLL * (v188 >> 5);
    if ( v188 <= 1344 )
    {
      sub_15A38A0((__int64)v151, v10);
    }
    else
    {
      v190 = 12 * (v189 >> 1);
      v191 = &v151[v190];
      v192 = 0xAAAAAAAAAAAAAAABLL * ((v190 * 8) >> 5);
      v215.m128i_i64[1] = v192;
      if ( (unsigned __int64)v190 <= 168 )
      {
        sub_15A38A0((__int64)v151, (__int64)&v151[v190]);
      }
      else
      {
        v193 = 96 * (v192 >> 1);
        v215.m128i_i64[0] = (__int64)&v151[(unsigned __int64)v193 / 8];
        v222 = 0xAAAAAAAAAAAAAAABLL * (v193 >> 5);
        if ( (unsigned __int64)v193 <= 0x540 )
        {
          s2 = (void *)v193;
          sub_15A38A0((__int64)v151, v215.m128i_i64[0]);
          v204 = 96 * (v189 >> 1);
          v203 = (__int64)s2;
        }
        else
        {
          v194 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v193 >> 5)) >> 1);
          n = (size_t)&v151[(unsigned __int64)v194 / 8];
          s2 = (void *)(0xAAAAAAAAAAAAAAABLL * (v194 >> 5));
          if ( (unsigned __int64)v194 <= 0x540 )
          {
            v228 = v194;
            v227 = v193;
            sub_15A38A0((__int64)v151, n);
            v195 = 96 * (v189 >> 1);
            v197 = (__int64 *)v227;
            v196 = v228;
          }
          else
          {
            v229 = 96 * (v189 >> 1);
            v230 = v193;
            v227 = v194;
            v228 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v194 >> 5)) >> 1);
            sub_15A4E20((__int64)v151, (__int64)v151 + v228);
            sub_15A4E20((__int64)v151 + v228, n);
            sub_15A4950(
              (__int64)v151,
              (__int64 *)((char *)v151 + v228),
              n,
              0xAAAAAAAAAAAAAAABLL * (v228 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v227 - v228) >> 5));
            v195 = v229;
            v196 = v227;
            v197 = (__int64 *)v230;
          }
          v198 = (__int64)v197 - v196;
          v199 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v197 - v196) >> 5);
          if ( v198 <= 1344 )
          {
            v228 = v199;
            v227 = (__int64)v197;
            v226 = v195;
            sub_15A38A0(n, v215.m128i_i64[0]);
            v200 = v226;
            v202 = (__int64 *)v227;
            v201 = (__int64 *)v228;
          }
          else
          {
            v229 = v195;
            v230 = (__int64)v197;
            v228 = v199;
            v227 = 96 * (v199 >> 1);
            sub_15A4E20(n, n + v227);
            sub_15A4E20(n + v227, v215.m128i_i64[0]);
            sub_15A4950(
              n,
              (__int64 *)(n + v227),
              v215.m128i_i64[0],
              0xAAAAAAAAAAAAAAABLL * (v227 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((__int64)(v215.m128i_i64[0] - (n + v227)) >> 5));
            v200 = v229;
            v201 = (__int64 *)v228;
            v202 = (__int64 *)v230;
          }
          v227 = (__int64)v202;
          v226 = v200;
          sub_15A4950((__int64)v151, (__int64 *)n, v215.m128i_i64[0], (__int64)s2, (__int64)v201);
          v203 = v227;
          v204 = v226;
        }
        v205 = v204 - v203;
        s2 = (void *)(0xAAAAAAAAAAAAAAABLL * (v205 >> 5));
        if ( v205 <= 1344 )
        {
          sub_15A38A0(v215.m128i_i64[0], (__int64)v191);
        }
        else
        {
          v206 = 0xAAAAAAAAAAAAAAABLL * (v205 >> 5);
          v207 = 96 * (v206 >> 1);
          n = v207 + v215.m128i_i64[0];
          v226 = 0xAAAAAAAAAAAAAAABLL * (v207 >> 5);
          if ( (unsigned __int64)v207 <= 0x540 )
          {
            sub_15A38A0(v215.m128i_i64[0], v207 + v215.m128i_i64[0]);
          }
          else
          {
            v229 = 96 * (v206 >> 1);
            v228 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v207 >> 5)) >> 1);
            sub_15A4E20(v215.m128i_i64[0], v215.m128i_i64[0] + v228);
            sub_15A4E20(v215.m128i_i64[0] + v228, n);
            sub_15A4950(
              v215.m128i_i64[0],
              (__int64 *)(v215.m128i_i64[0] + v228),
              n,
              0xAAAAAAAAAAAAAAABLL * (v228 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v229 - v228) >> 5));
          }
          if ( (__int64)((__int64)v191 - n) <= 1344 )
          {
            v227 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v191 - n) >> 5);
            sub_15A38A0(n, (__int64)v191);
          }
          else
          {
            v229 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v191 - n) >> 5);
            v228 = 96 * (v229 >> 1);
            v227 = n + v228;
            sub_15A4E20(n, n + v228);
            sub_15A4E20(n + v228, (__int64)v191);
            sub_15A4950(
              n,
              (__int64 *)v227,
              (__int64)v191,
              0xAAAAAAAAAAAAAAABLL * (v228 >> 5),
              0xAAAAAAAAAAAAAAABLL * (((__int64)v191 - v227) >> 5));
          }
          sub_15A4950(
            v215.m128i_i64[0],
            (__int64 *)n,
            (__int64)v191,
            v226,
            0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v191 - n) >> 5));
        }
        sub_15A4950((__int64)v151, (__int64 *)v215.m128i_i64[0], (__int64)v191, v222, (__int64)s2);
      }
      v208 = 0xAAAAAAAAAAAAAAABLL * ((v10 - (__int64)v191) >> 5);
      n = v208;
      if ( v10 - (__int64)v191 <= 1344 )
      {
        sub_15A38A0((__int64)v191, v10);
      }
      else
      {
        v209 = 96 * (v208 >> 1);
        v215.m128i_i64[0] = (__int64)&v191[(unsigned __int64)v209 / 8];
        s2 = (void *)(0xAAAAAAAAAAAAAAABLL * (v209 >> 5));
        if ( (unsigned __int64)v209 <= 0x540 )
        {
          sub_15A38A0((__int64)v191, v215.m128i_i64[0]);
        }
        else
        {
          v228 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v209 >> 5)) >> 1);
          v222 = (signed __int64)v191 + v228;
          v226 = 0xAAAAAAAAAAAAAAABLL * (v228 >> 5);
          if ( (unsigned __int64)v228 <= 0x540 )
          {
            v227 = v209;
            sub_15A38A0((__int64)v191, v222);
            v210 = v227;
          }
          else
          {
            v230 = v209;
            v229 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v228 >> 5)) >> 1);
            sub_15A4E20((__int64)v191, (__int64)v191 + v229);
            sub_15A4E20((__int64)v191 + v229, v222);
            sub_15A4950(
              (__int64)v191,
              (__int64 *)((char *)v191 + v229),
              v222,
              0xAAAAAAAAAAAAAAABLL * (v229 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v228 - v229) >> 5));
            v210 = v230;
          }
          v211 = v210 - v228;
          if ( v211 <= 1344 )
          {
            v227 = 0xAAAAAAAAAAAAAAABLL * (v211 >> 5);
            sub_15A38A0(v222, v215.m128i_i64[0]);
            v212 = (__int64 *)v227;
          }
          else
          {
            v229 = 0xAAAAAAAAAAAAAAABLL * (v211 >> 5);
            v228 = 96 * (v229 >> 1);
            v227 = v222 + v228;
            sub_15A4E20(v222, v222 + v228);
            sub_15A4E20(v222 + v228, v215.m128i_i64[0]);
            sub_15A4950(
              v222,
              (__int64 *)v227,
              v215.m128i_i64[0],
              0xAAAAAAAAAAAAAAABLL * (v228 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v215.m128i_i64[0] - v227) >> 5));
            v212 = (__int64 *)v229;
          }
          sub_15A4950((__int64)v191, (__int64 *)v222, v215.m128i_i64[0], v226, (__int64)v212);
        }
        v226 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v215.m128i_i64[0]) >> 5);
        if ( v10 - v215.m128i_i64[0] <= 1344 )
        {
          sub_15A38A0(v215.m128i_i64[0], v10);
        }
        else
        {
          v213 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v215.m128i_i64[0]) >> 5);
          v214 = 96 * (v213 >> 1);
          v222 = v214 + v215.m128i_i64[0];
          v227 = 0xAAAAAAAAAAAAAAABLL * (v214 >> 5);
          if ( (unsigned __int64)v214 <= 0x540 )
          {
            sub_15A38A0(v215.m128i_i64[0], v214 + v215.m128i_i64[0]);
          }
          else
          {
            v230 = 96 * (v213 >> 1);
            v229 = 96 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v214 >> 5)) >> 1);
            sub_15A4E20(v215.m128i_i64[0], v215.m128i_i64[0] + v229);
            sub_15A4E20(v215.m128i_i64[0] + v229, v222);
            sub_15A4950(
              v215.m128i_i64[0],
              (__int64 *)(v215.m128i_i64[0] + v229),
              v222,
              0xAAAAAAAAAAAAAAABLL * (v229 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v230 - v229) >> 5));
          }
          if ( v10 - v222 <= 1344 )
          {
            v228 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v222) >> 5);
            sub_15A38A0(v222, v10);
          }
          else
          {
            v230 = 0xAAAAAAAAAAAAAAABLL * ((v10 - v222) >> 5);
            v229 = 96 * (v230 >> 1);
            v228 = v222 + v229;
            sub_15A4E20(v222, v222 + v229);
            sub_15A4E20(v222 + v229, v10);
            sub_15A4950(
              v222,
              (__int64 *)v228,
              v10,
              0xAAAAAAAAAAAAAAABLL * (v229 >> 5),
              0xAAAAAAAAAAAAAAABLL * ((v10 - v228) >> 5));
          }
          sub_15A4950(v215.m128i_i64[0], (__int64 *)v222, v10, v227, 0xAAAAAAAAAAAAAAABLL * ((v10 - v222) >> 5));
        }
        sub_15A4950((__int64)v191, (__int64 *)v215.m128i_i64[0], v10, (__int64)s2, v226);
      }
      sub_15A4950((__int64)v151, v191, v10, v215.m128i_i64[1], n);
    }
    sub_15A4950((__int64)a4, v151, v10, (__int64)v220, v189);
  }
  v11 = v236.m128i_i64[0];
  v12 = (void *)(v236.m128i_i64[0] + 96LL * (_QWORD)s);
  if ( (void *)v236.m128i_i64[0] != v12 )
  {
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD **)(v11 + 48);
        v14 = *(_QWORD **)(v11 + 40);
        if ( v13 != v14 )
        {
          do
          {
            while ( 1 )
            {
              v15 = (_QWORD *)v14[3];
              if ( v15 == v14 + 5 )
                break;
              operator delete(v15);
              v14 += 8;
              if ( v13 == v14 )
                goto LABEL_7;
            }
            v14 += 8;
          }
          while ( v13 != v14 );
LABEL_7:
          v14 = *(_QWORD **)(v11 + 40);
        }
        if ( !v14 )
          break;
        v11 += 96;
        operator delete(v14);
        if ( v12 == (void *)v11 )
          goto LABEL_10;
      }
      v11 += 96;
    }
    while ( v12 != (void *)v11 );
LABEL_10:
    v12 = (void *)v236.m128i_i64[0];
  }
  operator delete(v12, (const std::nothrow_t *)&std::nothrow);
  if ( (*(_QWORD *)(v224 + 8) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v146 = *(_QWORD *)(v218 + 16);
    v147 = *(__m128 **)(v146 + 32);
    if ( *(_QWORD *)(v146 + 24) - (_QWORD)v147 > 0xFu )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA7C0);
      *v147 = (__m128)si128;
      *(_QWORD *)(v146 + 32) += 16LL;
    }
    else
    {
      v146 = sub_227BF10(v146, "PREFERRED-TYPE: ", 16);
    }
    v148 = sub_F76CF0(v146, *(_QWORD *)(v224 + 8));
    v149 = *(_BYTE **)(v148 + 32);
    if ( *(_QWORD *)(v148 + 24) <= (unsigned __int64)v149 )
    {
      sub_227BA10(v148, 10);
    }
    else
    {
      *(_QWORD *)(v148 + 32) = v149 + 1;
      *v149 = 10;
    }
  }
  n = 0;
  result = *(_QWORD **)(v219[30] + 976);
  s2 = result;
  if ( result )
  {
    v19 = (unsigned int *)result[2];
    v20 = *v19;
    result = v19 + 4;
    s2 = result;
    n = v20;
  }
  if ( a5 )
  {
    v215.m128i_i64[1] = (__int64)a4;
    v222 = (signed __int64)&a4[12 * a5];
    do
    {
      if ( !n )
      {
LABEL_17:
        v21 = *(_QWORD *)(v218 + 16);
        v22 = *(void **)(v21 + 32);
        if ( *(_QWORD *)(v21 + 24) - (_QWORD)v22 <= 0xBu )
        {
          sub_227BF10(v21, "COMPLETION: ", 12);
          v23 = *(_DWORD *)(v215.m128i_i64[1] + 24);
          if ( v23 != 1 )
            goto LABEL_19;
LABEL_149:
          v99 = *(_QWORD *)(v218 + 16);
          v100 = *(const void **)(v215.m128i_i64[1] + 8);
          if ( v100 )
          {
            v101 = strlen(*(const char **)(v215.m128i_i64[1] + 8));
            v102 = *(void **)(v99 + 32);
            v103 = v101;
            if ( v101 <= *(_QWORD *)(v99 + 24) - (_QWORD)v102 )
            {
              if ( v101 )
              {
                memcpy(v102, v100, v101);
                *(_QWORD *)(v99 + 32) += v103;
              }
            }
            else
            {
              sub_227BF10(v99, v100, v101);
            }
          }
LABEL_27:
          v28 = *(int **)(v215.m128i_i64[1] + 40);
          v220 = *(int **)(v215.m128i_i64[1] + 48);
          if ( v220 != v28 )
          {
            while ( 1 )
            {
              v29 = *v28;
              v215.m128i_i32[0] = v28[1];
              v30 = v29 & 0x7FFFFFFF;
              v31 = v219[34];
              if ( v30 < *(_DWORD *)(v31 + 476) || v30 >= *(_DWORD *)(v31 + 480) )
                v32 = (unsigned int)sub_101D590(v219[34], v30);
              else
                v32 = *(unsigned int *)(v31 + 472);
              LOBYTE(v234) = 0;
              if ( (unsigned int)(v32 + 1) <= 1 )
              {
LABEL_110:
                v34 = 0;
                v32 = 0;
                goto LABEL_36;
              }
              if ( (int)v32 >= 0 )
              {
                v33 = (_DWORD *)(*(_QWORD *)(v31 + 184) + 24LL * (unsigned int)v32);
                goto LABEL_34;
              }
              v85 = (unsigned int)(-2 - v32);
              v86 = *(_QWORD *)(*(_QWORD *)(v31 + 320) + 8LL * ((unsigned int)(-2 - v32) >> 6));
              if ( _bittest64(&v86, v85) )
              {
                v87 = (_QWORD *)(*(_QWORD *)(v31 + 272) + 8 * ((unsigned __int64)(int)v85 >> 5));
                if ( *v87 )
                {
                  v33 = (_DWORD *)(*v87 + 24LL * ((-2 - (_BYTE)v32) & 0x1F));
                  goto LABEL_34;
                }
                v175 = (__int64 *)(*(_QWORD *)(v31 + 288) & 0xFFFFFFFFFFFFFFF8LL);
                v176 = *v175;
                v175[10] += 768;
                v177 = (_DWORD *)((v176 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v175[1] >= (unsigned __int64)(v177 + 192) && v176 )
                  *v175 = (__int64)(v177 + 192);
                else
                  v177 = (_DWORD *)sub_986170((__int64)v175, 768, 768, 3, v16, v17);
                *v87 = v177;
                v178 = v177 + 192;
                do
                {
                  si128 = 0;
                  *v177 = 0;
                  v177 += 6;
                  *((_OWORD *)v177 - 1) = 0;
                  *((_QWORD *)v177 - 1) = 0;
                }
                while ( v178 != v177 );
                v80 = (char)v234;
                v33 = (_DWORD *)(*v87 + 24LL * ((-2 - (_BYTE)v32) & 0x1F));
              }
              else
              {
                v33 = (_DWORD *)sub_101F930(v31, v85, v223);
                v80 = (char)v234;
              }
              if ( v80 )
                goto LABEL_110;
LABEL_34:
              if ( !v33 )
                goto LABEL_110;
              v34 = v30 - (*v33 & 0x7FFFFFFF);
LABEL_36:
              v35 = v216 & 0xFFFFFFFF00000000LL | v32;
              v216 = v35;
              v36 = v215.m128i_i32[0] & 0x7FFFFFFF;
              if ( (v215.m128i_i32[0] & 0x7FFFFFFFu) < *(_DWORD *)(v31 + 476) || v36 >= *(_DWORD *)(v31 + 480) )
                v37 = (unsigned int)sub_101D590(v31, v36);
              else
                v37 = *(unsigned int *)(v31 + 472);
              LOBYTE(v234) = 0;
              if ( (unsigned int)(v37 + 1) <= 1 )
              {
LABEL_113:
                v39 = 0;
                v37 = 0;
                goto LABEL_44;
              }
              if ( (int)v37 >= 0 )
              {
                v38 = (_DWORD *)(*(_QWORD *)(v31 + 184) + 24LL * (unsigned int)v37);
                goto LABEL_42;
              }
              v82 = (unsigned int)(-2 - v37);
              v83 = *(_QWORD *)(*(_QWORD *)(v31 + 320) + 8LL * ((unsigned int)(-2 - v37) >> 6));
              if ( _bittest64(&v83, v82) )
              {
                v84 = (__int64 *)(*(_QWORD *)(v31 + 272) + 8 * ((unsigned __int64)(int)v82 >> 5));
                if ( *v84 )
                {
                  v38 = (_DWORD *)(*v84 + 24LL * ((-2 - (_BYTE)v37) & 0x1F));
                  goto LABEL_42;
                }
                v179 = (__int64 *)(*(_QWORD *)(v31 + 288) & 0xFFFFFFFFFFFFFFF8LL);
                v180 = *v179;
                v179[10] += 768;
                v181 = (_DWORD *)((v180 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v179[1] >= (unsigned __int64)(v181 + 192) && v180 )
                {
                  *v179 = (__int64)(v181 + 192);
                }
                else
                {
                  v227 = (__int64)v84;
                  LODWORD(v226) = -2 - v37;
                  v181 = (_DWORD *)sub_986170((__int64)v179, 768, 768, 3, v82, (__int64)v84);
                  v84 = (__int64 *)v227;
                  LOBYTE(v82) = v226;
                }
                *v84 = (__int64)v181;
                v182 = v181 + 192;
                do
                {
                  si128 = 0;
                  *v181 = 0;
                  v181 += 6;
                  *((_OWORD *)v181 - 1) = 0;
                  *((_QWORD *)v181 - 1) = 0;
                }
                while ( v182 != v181 );
                v81 = (char)v234;
                v38 = (_DWORD *)(*v84 + 24 * (v82 & 0x1F));
              }
              else
              {
                v38 = (_DWORD *)sub_101F930(v31, v82, v223);
                v81 = (char)v234;
              }
              if ( v81 )
                goto LABEL_113;
LABEL_42:
              if ( !v38 )
                goto LABEL_113;
              v39 = v36 - (*v38 & 0x7FFFFFFF);
LABEL_44:
              v40 = v217 & 0xFFFFFFFF00000000LL | v37;
              v41 = *((_BYTE *)v28 + 8) == 0;
              v217 = v40;
              if ( !v41 )
                v39 += sub_13DC0F0(v215.m128i_i32[0], (__int64 *)v31, v219[29], si128, *(double *)a7.m128i_i64);
              v42 = *(_QWORD *)(v218 + 16);
              v43 = *(__m128 **)(v42 + 32);
              if ( *(_QWORD *)(v42 + 24) - (_QWORD)v43 > 0x11u )
              {
                si128 = _mm_load_si128((const __m128i *)&xmmword_23AA7D0);
                v43[1].m128_i16[0] = 14964;
                *v43 = (__m128)si128;
                v45 = (_WORD *)(*(_QWORD *)(v42 + 32) + 18LL);
                *(_QWORD *)(v42 + 32) = v45;
              }
              else
              {
                v44 = sub_227BF10(*(_QWORD *)(v218 + 16), " (requires fix-it:", 18);
                v45 = *(_WORD **)(v44 + 32);
                v42 = v44;
              }
              if ( *(_QWORD *)(v42 + 24) - (_QWORD)v45 > 1u )
              {
                *v45 = 31520;
                *(_QWORD *)(v42 + 32) += 2LL;
              }
              else
              {
                v42 = sub_227BF10(v42, " {", 2);
              }
              v215.m128i_i64[0] = v42;
              v46 = sub_1022630(v31, v35, v34, nullptr);
              v47 = sub_227B910(v215.m128i_i64[0], v46);
              v48 = *(_BYTE **)(v47 + 32);
              if ( (unsigned __int64)v48 >= *(_QWORD *)(v47 + 24) )
              {
                v47 = sub_227BA10(v47, 58);
              }
              else
              {
                *(_QWORD *)(v47 + 32) = v48 + 1;
                *v48 = 58;
              }
              v215.m128i_i64[0] = v47;
              v49 = sub_1020110(v31, v35, v34, nullptr);
              v50 = sub_227B910(v215.m128i_i64[0], v49);
              v51 = *(_BYTE **)(v50 + 32);
              if ( (unsigned __int64)v51 >= *(_QWORD *)(v50 + 24) )
              {
                v50 = sub_227BA10(v50, 45);
              }
              else
              {
                *(_QWORD *)(v50 + 32) = v51 + 1;
                *v51 = 45;
              }
              v52 = sub_1022630(v31, v40, v39, nullptr);
              v53 = sub_227B910(v50, v52);
              v54 = *(_BYTE **)(v53 + 32);
              if ( (unsigned __int64)v54 >= *(_QWORD *)(v53 + 24) )
              {
                v53 = sub_227BA10(v53, 58);
              }
              else
              {
                *(_QWORD *)(v53 + 32) = v54 + 1;
                *v54 = 58;
              }
              v55 = sub_1020110(v31, v40, v39, nullptr);
              v56 = sub_227B910(v53, v55);
              v57 = *(_BYTE **)(v56 + 32);
              if ( *(_BYTE **)(v56 + 24) == v57 )
              {
                v56 = sub_227BF10(v56, "}", 1);
                v58 = *(_QWORD *)(v56 + 32);
              }
              else
              {
                *v57 = 125;
                v58 = *(_QWORD *)(v56 + 32) + 1LL;
                *(_QWORD *)(v56 + 32) = v58;
              }
              if ( (unsigned __int64)(*(_QWORD *)(v56 + 24) - v58) > 4 )
              {
                *(_DWORD *)v58 = 544175136;
                *(_BYTE *)(v58 + 4) = 34;
                *(_QWORD *)(v56 + 32) += 5LL;
              }
              else
              {
                v56 = sub_227BF10(v56, " to \"", 5);
              }
              v59 = sub_227BF10(v56, *((_QWORD *)v28 + 3), *((_QWORD *)v28 + 4));
              v60 = *(_WORD **)(v59 + 32);
              if ( *(_QWORD *)(v59 + 24) - (_QWORD)v60 > 1u )
              {
                v28 += 16;
                *v60 = 10530;
                *(_QWORD *)(v59 + 32) += 2LL;
                if ( v220 == v28 )
                  break;
              }
              else
              {
                v28 += 16;
                sub_227BF10(v59, "\")", 2);
                if ( v220 == v28 )
                  break;
              }
            }
          }
          v61 = *(_QWORD *)(v218 + 16);
          v62 = *(_BYTE **)(v61 + 32);
          if ( (unsigned __int64)v62 >= *(_QWORD *)(v61 + 24) )
          {
            sub_227BA10(v61, 10);
          }
          else
          {
            *(_QWORD *)(v61 + 32) = v62 + 1;
            *v62 = 10;
          }
          goto LABEL_100;
        }
        qmemcpy(v22, "COMPLETION: ", 12);
        v98 = v215.m128i_i64[1];
        *(_QWORD *)(v21 + 32) += 12LL;
        v23 = *(_DWORD *)(v98 + 24);
        if ( v23 == 1 )
          goto LABEL_149;
LABEL_19:
        if ( v23 )
        {
          if ( v23 == 2 )
          {
            v104 = *(_QWORD *)(v218 + 16);
            v105 = *(void **)(v104 + 32);
            v106 = *(unsigned int **)(*(_QWORD *)(v215.m128i_i64[1] + 8) + 16LL);
            v107 = *v106;
            v108 = v106 + 4;
            if ( v107 > *(_QWORD *)(v104 + 24) - (_QWORD)v105 )
            {
              sub_227BF10(*(_QWORD *)(v218 + 16), v108, v107);
            }
            else if ( v107 )
            {
              memcpy(v105, v108, v107);
              *(_QWORD *)(v104 + 32) += v107;
            }
            v109 = v218 + 24;
            v215.m128i_i32[0] = *(_DWORD *)(v218 + 8);
            v110 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v218 + 40LL);
            v111 = (v215.m128i_i8[0] & 0x10) != 0;
            if ( v110 == sub_15A1850 )
            {
              v112 = *(_QWORD *)(v218 + 48);
            }
            else
            {
              v220 = (int *)(v218 + 24);
              v215.m128i_i32[0] = (v215.m128i_i8[0] & 0x10) != 0;
              v186 = ((__int64 (__fastcall *)(__int64, const void *))v110)(v218, v108);
              v109 = (__int64)v220;
              v111 = v215.m128i_u32[0];
              v112 = v186;
            }
            v113 = sub_172E1A0(v215.m128i_i64[1], v219, v224, v112, v109, v111);
            if ( !v113 )
              goto LABEL_27;
            v24 = *(_QWORD *)(v218 + 16);
            v114 = *(_QWORD *)(v24 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v24 + 24) - v114) > 2 )
            {
              *(_BYTE *)(v114 + 2) = 32;
              *(_WORD *)v114 = 14880;
              *(_QWORD *)(v24 + 32) += 3LL;
            }
            else
            {
              v24 = sub_227BF10(*(_QWORD *)(v218 + 16), " : ", 3);
            }
            v26 = (unsigned __int16 *)v113;
          }
          else
          {
            if ( v23 != 3 )
              goto LABEL_27;
            v24 = *(_QWORD *)(v218 + 16);
            v25 = *(void **)(v24 + 32);
            if ( *(_QWORD *)(v24 + 24) - (_QWORD)v25 > 9u )
            {
              qmemcpy(v25, "Pattern : ", 10);
              *(_QWORD *)(v24 + 32) += 10LL;
            }
            else
            {
              v24 = sub_227BF10(*(_QWORD *)(v218 + 16), "Pattern : ", 10);
            }
            v26 = *(unsigned __int16 **)(v215.m128i_i64[1] + 8);
          }
          v27 = v223;
          sub_15A2AB0((__int64)v223, v26);
          sub_227BF10(v24, v234, s);
          if ( v234 != v27 + 2 )
            operator delete(v234);
          goto LABEL_27;
        }
        v115 = v215.m128i_i64[1];
        sub_B72CF0(*(_QWORD *)v215.m128i_i64[1], *(_QWORD *)(v218 + 16));
        v116 = *(_BYTE *)(v115 + 64);
        si128 = 0;
        v233 = nullptr;
        *(_OWORD *)v232 = 0;
        if ( (v116 & 1) != 0 )
        {
          v173 = (__m128i *)v223;
          v174 = v223 + 2;
          v234 = v223 + 2;
          *((_DWORD *)v223 + 4) = 1684302152;
          v173[1].m128i_i16[2] = 28261;
          s = &byte_6;
          v236.m128i_i8[6] = 0;
          sub_A82970((void ***)v232, nullptr, v173);
          if ( v234 != v174 )
            operator delete(v234);
          v116 = *(_BYTE *)(v215.m128i_i64[1] + 64);
        }
        if ( (v116 & 2) != 0 )
        {
          v170 = (__m128i *)v223;
          v171 = (__m128i *)v232[1];
          v172 = v223 + 2;
          v234 = v223 + 2;
          *((_DWORD *)v223 + 4) = 1631743561;
          v172[2] = 25971;
          s = &byte_6;
          v236.m128i_i8[6] = 0;
          if ( v171 == v233 )
          {
            sub_A82970((void ***)v232, v171, v170);
            if ( v234 != v172 )
              operator delete(v234);
          }
          else
          {
            v171->m128i_i64[0] = (__int64)v171[1].m128i_i64;
            if ( v234 == v172 )
            {
              a7 = _mm_load_si128(&v236);
              v171[1] = a7;
            }
            else
            {
              v171->m128i_i64[0] = (__int64)v234;
              v171[1].m128i_i64[0] = v236.m128i_i64[0];
            }
            v171->m128i_i64[1] = (__int64)s;
            v232[1] = (char *)v232[1] + 32;
          }
        }
        if ( *(_DWORD *)(v215.m128i_i64[1] + 32) == 3 )
        {
          v183 = (__m128i *)v223;
          v184 = (__m128i *)v232[1];
          v185 = v223 + 2;
          v234 = v223 + 2;
          v223[2] = (void *)0x7373656363616E49LL;
          v185[2] = 1701601897;
          s = byte_9 + 3;
          v236.m128i_i8[12] = 0;
          if ( v184 == v233 )
          {
            sub_A82970((void ***)v232, v184, v183);
            if ( v234 != v185 )
              operator delete(v234);
            goto LABEL_164;
          }
          v184->m128i_i64[0] = (__int64)v184[1].m128i_i64;
          if ( v234 == v185 )
          {
            v184[1] = _mm_load_si128(&v236);
          }
          else
          {
            v184->m128i_i64[0] = (__int64)v234;
            v184[1].m128i_i64[0] = v236.m128i_i64[0];
          }
          v184->m128i_i64[1] = (__int64)s;
          v117 = v184 + 2;
          v232[1] = &v184[2];
        }
        else
        {
LABEL_164:
          v117 = (__m128i *)v232[1];
        }
        v118 = (void **)v232[0];
        if ( v117 != v232[0] )
        {
          v119 = *(_QWORD *)(v218 + 16);
          v120 = *(_WORD **)(v119 + 32);
          if ( *(_QWORD *)(v119 + 24) - (_QWORD)v120 > 1u )
          {
            *v120 = 10272;
            *(_QWORD *)(v119 + 32) += 2LL;
          }
          else
          {
            v119 = sub_227BF10(*(_QWORD *)(v218 + 16), " (", 2);
          }
          v121 = (char *)v232[1];
          s = nullptr;
          v236.m128i_i8[0] = 0;
          v122 = v223 + 2;
          v234 = v223 + 2;
          if ( v232[1] == v232[0] )
          {
            v128 = nullptr;
          }
          else
          {
            v123 = v232[0];
            v124 = (((char *)v232[1] - (char *)v232[0]) >> 5) - 1;
            do
            {
              v124 += v123[1];
              v123 += 4;
            }
            while ( v232[1] != v123 );
            v125 = v223;
            v126 = (char *)v232[0] + 32;
            sub_995C30((__int64)v223, v124);
            sub_9EE560(v125, *((_BYTE **)v126 - 4), *((_QWORD *)v126 - 3));
            if ( v121 != v126 )
            {
              if ( s == (char *)0x7FFFFFFFFFFFFFFFLL )
LABEL_352:
                std::__throw_length_error("basic_string::append");
              v127 = v223;
              while ( 1 )
              {
                v126 += 32;
                sub_9EE560(v127, ",", 1u);
                sub_9EE560(v127, *((_BYTE **)v126 - 4), *((_QWORD *)v126 - 3));
                if ( v121 == v126 )
                  break;
                if ( s == (char *)0x7FFFFFFFFFFFFFFFLL )
                  goto LABEL_352;
              }
            }
            v128 = s;
            v122 = v234;
          }
          v129 = sub_227BF10(v119, v122, v128);
          v130 = *(_BYTE **)(v129 + 32);
          if ( *(_BYTE **)(v129 + 24) == v130 )
          {
            sub_227BF10(v129, ")", 1);
          }
          else
          {
            *v130 = 41;
            ++*(_QWORD *)(v129 + 32);
          }
          if ( v234 != v223 + 2 )
            operator delete(v234);
          v131 = (void **)v232[1];
          v118 = (void **)v232[0];
          if ( v232[1] != v232[0] )
          {
            do
            {
              while ( *v118 != v118 + 2 )
              {
                operator delete(*v118);
                v118 += 4;
                if ( v118 == v131 )
                {
                  v118 = (void **)v232[0];
                  goto LABEL_185;
                }
              }
              v118 += 4;
            }
            while ( v131 != v118 );
            v118 = (void **)v232[0];
          }
        }
LABEL_185:
        if ( v118 )
          operator delete(v118);
        v132 = v218 + 24;
        v215.m128i_i32[0] = *(_DWORD *)(v218 + 8);
        v133 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v218 + 40LL);
        v134 = (v215.m128i_i8[0] & 0x10) != 0;
        if ( v133 == sub_15A1850 )
        {
          v135 = *(_QWORD *)(v218 + 48);
        }
        else
        {
          v220 = (int *)(v218 + 24);
          v215.m128i_i32[0] = (v215.m128i_i8[0] & 0x10) != 0;
          v187 = v133(v218);
          v132 = (__int64)v220;
          v134 = v215.m128i_u32[0];
          v135 = v187;
        }
        v136 = sub_172E1A0(v215.m128i_i64[1], v219, v224, v135, v132, v134);
        if ( v136 )
        {
          v137 = *(_QWORD *)(v218 + 16);
          v138 = *(_QWORD *)(v137 + 32);
          if ( (unsigned __int64)(*(_QWORD *)(v137 + 24) - v138) > 2 )
          {
            *(_BYTE *)(v138 + 2) = 32;
            *(_WORD *)v138 = 14880;
            *(_QWORD *)(v137 + 32) += 3LL;
          }
          else
          {
            v137 = sub_227BF10(*(_QWORD *)(v218 + 16), " : ", 3);
          }
          v139 = v223;
          sub_15A2AB0((__int64)v223, (unsigned __int16 *)v136);
          sub_227BF10(v137, v234, s);
          if ( v234 != v139 + 2 )
            operator delete(v234);
          v140 = *(const char **)(v136 + 24);
          if ( v140 )
          {
            v141 = *(_QWORD *)(v218 + 16);
            v142 = *(_QWORD *)(v141 + 32);
            if ( (unsigned __int64)(*(_QWORD *)(v141 + 24) - v142) > 2 )
            {
              *(_BYTE *)(v142 + 2) = 32;
              *(_WORD *)v142 = 14880;
              *(_QWORD *)(v141 + 32) += 3LL;
            }
            else
            {
              v141 = sub_227BF10(*(_QWORD *)(v218 + 16), " : ", 3);
            }
            v143 = strlen(v140);
            v144 = *(void **)(v141 + 32);
            v145 = v143;
            if ( v143 > *(_QWORD *)(v141 + 24) - (_QWORD)v144 )
            {
              sub_227BF10(v141, v140, v143);
            }
            else if ( v143 )
            {
              memcpy(v144, v140, v143);
              *(_QWORD *)(v141 + 32) += v145;
            }
          }
        }
        goto LABEL_27;
      }
      v63 = *(_QWORD **)(v215.m128i_i64[1] + 48);
      v64 = *(_QWORD *)(v215.m128i_i64[1] + 40);
      v65 = *(bool (__fastcall **)(__int64, const void *, size_t, __int64))(*(_QWORD *)v218 + 16LL);
      v66 = *(void **)v215.m128i_i64[1];
      v238 = 0u;
      v67 = (signed __int64)v63 - v64;
      v234 = v66;
      v68 = *(char **)(v215.m128i_i64[1] + 8);
      v239 = nullptr;
      s = v68;
      v236 = *(__m128i *)(v215.m128i_i64[1] + 16);
      v237 = *(_DWORD *)(v215.m128i_i64[1] + 32);
      if ( ((__int64)v63 - v64) >> 6 )
      {
        if ( (unsigned __int64)(v67 >> 6) > 0x3FFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v69 = (char *)operator new(v67);
        v63 = *(_QWORD **)(v215.m128i_i64[1] + 48);
        v64 = *(_QWORD *)(v215.m128i_i64[1] + 40);
      }
      else
      {
        v69 = nullptr;
      }
      v215.m128i_i64[0] = (__int64)v69;
      v70 = _mm_loadl_epi64(&v215);
      v239 = &v69[v67];
      si128 = _mm_unpacklo_epi64(v70, v70);
      v238 = si128;
      if ( (_QWORD *)v64 != v63 )
      {
        *(_QWORD *)v69 = *(_QWORD *)v64;
        *((_DWORD *)v69 + 2) = *(_DWORD *)(v64 + 8);
        *(_QWORD *)(v69 + 12) = *(_QWORD *)(v64 + 12);
        *((_DWORD *)v69 + 5) = *(_DWORD *)(v64 + 20);
        *((_QWORD *)v69 + 3) = v69 + 40;
        v71 = *(_BYTE **)(v64 + 24);
        v72 = *(_QWORD *)(v64 + 32);
        if ( &v71[v72] && !v71 )
LABEL_81:
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        v73 = (_QWORD *)(v64 + 64);
        while ( 2 )
        {
          if ( (unsigned __int64)v72 <= 0xF )
          {
            v74 = *((_BYTE **)v69 + 3);
            if ( v72 == 1 )
            {
              *v74 = *v71;
              v74 = *((_BYTE **)v69 + 3);
              goto LABEL_78;
            }
            if ( v72 )
            {
LABEL_86:
              memcpy(v74, v71, v72);
              v74 = *((_BYTE **)v69 + 3);
            }
LABEL_78:
            *((_QWORD *)v69 + 4) = v72;
            v69 += 64;
            v74[v72] = 0;
            *(v69 - 8) = *((_BYTE *)v73 - 8);
            if ( v63 == v73 )
              goto LABEL_87;
            v75 = *v73;
            v73 += 8;
            *(_QWORD *)v69 = v75;
            *((_DWORD *)v69 + 2) = *((_DWORD *)v73 - 14);
            *(_QWORD *)(v69 + 12) = *(_QWORD *)((char *)v73 - 52);
            *((_DWORD *)v69 + 5) = *((_DWORD *)v73 - 11);
            *((_QWORD *)v69 + 3) = v69 + 40;
            v71 = (_BYTE *)*(v73 - 5);
            v72 = *(v73 - 4);
            if ( &v71[v72] && !v71 )
              goto LABEL_81;
            continue;
          }
          break;
        }
        if ( v72 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v74 = (_BYTE *)operator new(v72 + 1);
        *((_QWORD *)v69 + 5) = v72;
        *((_QWORD *)v69 + 3) = v74;
        goto LABEL_86;
      }
LABEL_87:
      v238.m128i_i64[1] = (__int64)v69;
      v215.m128i_i8[0] = *(_BYTE *)(v215.m128i_i64[1] + 64);
      v240 = v215.m128i_i8[0] & 0x7F | v240 & 0x80;
      v241 = *(_QWORD *)(v215.m128i_i64[1] + 72);
      v242 = *(_QWORD *)(v215.m128i_i64[1] + 80);
      v243 = *(_QWORD *)(v215.m128i_i64[1] + 88);
      if ( v65 == sub_15A28F0 )
      {
        if ( v236.m128i_i32[2] == 1 )
        {
          v95 = s;
          v76 = 1;
          if ( s )
          {
            v96 = strlen(s);
            if ( n <= v96 )
              v76 = memcmp(v95, s2, n) != 0;
          }
        }
        else if ( v236.m128i_i32[2] )
        {
          if ( v236.m128i_i32[2] != 2 )
          {
            v88 = s + 32;
            v89 = &s[16 * *(unsigned __int16 *)s + 32];
            if ( s + 32 != v89 )
            {
              if ( *((_DWORD *)s + 8) )
              {
                while ( 1 )
                {
                  v88 += 16;
                  if ( v89 == v88 )
                    break;
                  if ( !*(_DWORD *)v88 )
                  {
                    if ( !*((_QWORD *)v88 + 1) )
                      break;
                    v169 = s + 48;
                    while ( 1 )
                    {
                      v88 = v169;
                      if ( v89 == v169 )
                        break;
                      v169 += 16;
                      if ( !*((_DWORD *)v169 - 4) )
                        goto LABEL_130;
                    }
                    v76 = 1;
                    goto LABEL_93;
                  }
                }
              }
              else if ( *((_QWORD *)s + 5) )
              {
LABEL_130:
                v90 = *((const void **)v88 + 1);
                if ( v90 )
                {
                  v91 = strlen(*((const char **)v88 + 1));
                  if ( n <= v91 && !memcmp(v90, s2, n) )
                  {
                    v76 = 0;
                    goto LABEL_93;
                  }
                }
              }
            }
LABEL_136:
            v76 = 1;
            goto LABEL_93;
          }
          v76 = 1;
          v77 = *((unsigned int **)s + 2);
          if ( n <= *v77 )
            v76 = memcmp(v77 + 4, s2, n) != 0;
        }
        else
        {
          v76 = 1;
          v92 = *((_QWORD *)v234 + 5);
          if ( (v92 & 7) == 0 )
          {
            v93 = v92 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v93 )
            {
              v94 = *(unsigned int **)(v93 + 16);
              if ( n > *v94 || memcmp(v94 + 4, s2, n) )
                goto LABEL_136;
              v76 = 0;
            }
          }
        }
      }
      else
      {
        v97 = v65(v218, s2, n, (__int64)v223);
        v69 = (char *)v238.m128i_i64[1];
        v76 = v97;
      }
LABEL_93:
      v78 = (char *)v238.m128i_i64[0];
      if ( (char *)v238.m128i_i64[0] != v69 )
      {
        do
        {
          while ( 1 )
          {
            v79 = *((char **)v78 + 3);
            if ( v79 == v78 + 40 )
              break;
            operator delete(v79);
            v78 += 64;
            if ( v69 == v78 )
              goto LABEL_96;
          }
          v78 += 64;
        }
        while ( v78 != v69 );
LABEL_96:
        v69 = (char *)v238.m128i_i64[0];
      }
      if ( v69 )
        operator delete(v69);
      if ( !v76 )
        goto LABEL_17;
LABEL_100:
      v215.m128i_i64[1] += 96;
      result = (_QWORD *)v215.m128i_i64[1];
    }
    while ( v222 != v215.m128i_i64[1] );
  }
  return result;
}
