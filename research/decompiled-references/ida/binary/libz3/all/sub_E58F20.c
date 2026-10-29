void __fastcall sub_E58F20(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD *v10; // rbx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r14
  int *v19; // r15
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  int **v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  char *v26; // rdx
  int v27; // esi
  __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  _DWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // rdx
  unsigned int *v35; // rcx
  __int64 v36; // rdx
  _QWORD *v37; // r15
  __int64 v38; // rsi
  _Unwind_Exception *v39; // rcx
  bool v40; // zf
  unsigned int *v41; // r9
  unsigned int v42; // eax
  __int64 v43; // rsi
  __m128i v44; // xmm0
  unsigned int v45; // edx
  size_t v46; // rsi
  unsigned int *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rbp
  __int64 *v52; // r13
  __int64 *v53; // rdi
  __int64 *v54; // rbp
  unsigned __int64 v55; // r12
  __int64 v56; // rsi
  _QWORD *v57; // rax
  int v58; // eax
  __int64 v59; // rax
  _QWORD *v60; // rcx
  __int64 v61; // rcx
  _Unwind_Exception *v62; // rax
  _Unwind_Exception *v63; // r15
  unsigned int *v64; // r14
  __int64 v65; // rax
  __int64 v66; // rcx
  unsigned __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rax
  __m128 v70; // xmm1
  __m128 v71; // xmm0
  __m128 *v72; // rax
  unsigned int *v73; // r9
  _Unwind_Exception *v74; // r14
  __int64 v75; // rax
  __m128 *v76; // rsi
  __int64 v77; // rax
  __m128 *v78; // rax
  __m128 si128; // xmm1
  __m128 v80; // xmm0
  unsigned int *v81; // xmm4_8
  _Unwind_Exception_Class exception_class; // rax
  __m128i v83; // xmm2
  __m128 *(__fastcall *v84)(__int64, const __m128i *, double, double, __m128, __m128); // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r15
  _QWORD *v88; // rcx
  unsigned int v89; // eax
  __int64 v90; // rsi
  int v91; // eax
  __int64 *v92; // rsi
  _QWORD *private_2; // rax
  __int64 v94; // rsi
  int v95; // edx
  __int64 v96; // rsi
  _Unwind_Exception *v97; // r9
  unsigned int *v98; // r11
  unsigned int v99; // esi
  unsigned int *private_1; // rdx
  unsigned int v101; // eax
  size_t v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rdx
  _DWORD *v105; // r8
  __int64 *v106; // rdi
  __int64 v107; // r15
  __int64 v108; // rcx
  int v109; // r11d
  __int64 *v110; // rax
  __int64 *v111; // r10
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 *v116; // r15
  __int64 *v117; // rbx
  __int64 *v118; // rdi
  unsigned int v119; // edx
  unsigned int v120; // edi
  unsigned int *v121; // rsi
  __int64 v122; // rdi
  _QWORD *v123; // rax
  _Unwind_Exception_Cleanup_Fn exception_cleanup; // rsi
  _Unwind_Exception_Cleanup_Fn v125; // rdi
  _QWORD *v126; // rax
  _QWORD *v127; // rdx
  unsigned int v128; // r10d
  size_t v129; // rsi
  unsigned int *v130; // rax
  __int64 v131; // rsi
  _QWORD *v132; // rax
  unsigned int v133; // r10d
  int v134; // edi
  unsigned int **v135; // rsi
  unsigned int v136; // r10d
  _DWORD *v137; // rdx
  int v138; // eax
  _QWORD *v139; // rax
  __int64 v140; // rcx
  _QWORD *v141; // r8
  __int64 v142; // rax
  unsigned int v143; // esi
  _Unwind_Exception *v144; // r14
  __int64 v145; // rax
  __m128 v146; // xmm5
  __int64 v147; // r15
  unsigned __int64 v148; // rsi
  __int64 v149; // rdx
  __int64 v150; // rax
  __m128 v151; // xmm1
  __m128 v152; // xmm0
  __m128 *v153; // rax
  unsigned int *v154; // xmm5_8
  __int64 v155; // r9
  _QWORD *v156; // rax
  unsigned int v157; // edx
  unsigned int v158; // esi
  unsigned int v159; // r8d
  size_t v160; // rsi
  unsigned int *v161; // rax
  unsigned int v162; // r11d
  size_t v163; // rsi
  __int64 v164; // rax
  _DWORD *v165; // rsi
  __int64 v166; // rsi
  int v167; // edi
  _QWORD *v168; // rcx
  unsigned int v169; // edx
  unsigned int v170; // edi
  __int64 v171; // rax
  _DWORD *v172; // rsi
  _QWORD *v173; // rax
  __int64 v174; // rax
  unsigned int v175; // edx
  unsigned int v176; // edi
  unsigned int *v177; // rsi
  _QWORD *v178; // rax
  char **v179; // r12
  char **v180; // r12
  char **v181; // r12
  char **exception; // r12
  char **v183; // r12
  char **v184; // r12
  unsigned int v185; // [rsp+0h] [rbp-108h]
  unsigned int v186; // [rsp+0h] [rbp-108h]
  __m128 *(__fastcall *v187)(__int64, const __m128i *, double, double, __m128, __m128); // [rsp+0h] [rbp-108h]
  int v188[2]; // [rsp+0h] [rbp-108h]
  int v189[2]; // [rsp+0h] [rbp-108h]
  int v190[2]; // [rsp+0h] [rbp-108h]
  unsigned int v191; // [rsp+0h] [rbp-108h]
  int v192[2]; // [rsp+0h] [rbp-108h]
  int v193[2]; // [rsp+0h] [rbp-108h]
  int v194[2]; // [rsp+0h] [rbp-108h]
  int v195[2]; // [rsp+0h] [rbp-108h]
  int v196[2]; // [rsp+0h] [rbp-108h]
  int v197[2]; // [rsp+0h] [rbp-108h]
  int v198[2]; // [rsp+0h] [rbp-108h]
  int v199[2]; // [rsp+0h] [rbp-108h]
  __m128 *(__fastcall *v200)(__int64, const __m128i *, double, double, __m128, __m128); // [rsp+0h] [rbp-108h]
  unsigned int v201; // [rsp+0h] [rbp-108h]
  unsigned int v202; // [rsp+0h] [rbp-108h]
  int v203[2]; // [rsp+0h] [rbp-108h]
  unsigned int v204; // [rsp+0h] [rbp-108h]
  int v205[2]; // [rsp+0h] [rbp-108h]
  int v206[2]; // [rsp+10h] [rbp-F8h]
  int v207[2]; // [rsp+18h] [rbp-F0h]
  int v208[2]; // [rsp+18h] [rbp-F0h]
  int v209[2]; // [rsp+18h] [rbp-F0h]
  int v210[2]; // [rsp+18h] [rbp-F0h]
  int v211[2]; // [rsp+18h] [rbp-F0h]
  int v212[2]; // [rsp+18h] [rbp-F0h]
  _Unwind_Exception *v213; // [rsp+20h] [rbp-E8h]
  _Unwind_Exception *v214; // [rsp+20h] [rbp-E8h]
  unsigned int v215; // [rsp+20h] [rbp-E8h]
  _Unwind_Exception *v216; // [rsp+20h] [rbp-E8h]
  _Unwind_Exception *v217; // [rsp+20h] [rbp-E8h]
  _Unwind_Exception *v218; // [rsp+20h] [rbp-E8h]
  __int64 v219; // [rsp+28h] [rbp-E0h]
  unsigned int *v220; // [rsp+28h] [rbp-E0h]
  unsigned int *v221; // [rsp+28h] [rbp-E0h]
  __int64 v222; // [rsp+28h] [rbp-E0h]
  unsigned int v223; // [rsp+28h] [rbp-E0h]
  __int64 v224; // [rsp+28h] [rbp-E0h]
  unsigned int *v225; // [rsp+28h] [rbp-E0h]
  _Unwind_Exception *v226; // [rsp+28h] [rbp-E0h]
  _QWORD *v227; // [rsp+28h] [rbp-E0h]
  _QWORD *v228; // [rsp+28h] [rbp-E0h]
  __int64 v229; // [rsp+28h] [rbp-E0h]
  unsigned int *v230; // [rsp+30h] [rbp-D8h]
  __int64 v231; // [rsp+30h] [rbp-D8h]
  __int64 v232; // [rsp+30h] [rbp-D8h]
  unsigned int v233; // [rsp+30h] [rbp-D8h]
  _DWORD *v234; // [rsp+38h] [rbp-D0h]
  _DWORD *v235; // [rsp+38h] [rbp-D0h]
  _QWORD *v236; // [rsp+40h] [rbp-C8h]
  __int64 v237; // [rsp+40h] [rbp-C8h]
  __int64 v238; // [rsp+48h] [rbp-C0h]
  int v239[2]; // [rsp+78h] [rbp-90h] BYREF
  void *ptr; // [rsp+80h] [rbp-88h]
  int v241[4]; // [rsp+90h] [rbp-78h] BYREF
  __m128i v242; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v243[11]; // [rsp+B0h] [rbp-58h] BYREF

  v10 = nullptr;
  v11 = *(_QWORD *)(a1 + 160);
  v12 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)v239 = 0;
  v13 = *(_QWORD *)(v11 + 96);
  v14 = v12;
  ptr = nullptr;
  *(_QWORD *)v206 = v13;
  while ( 1 )
  {
    v15 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL);
    if ( v15 != sub_E501D0 )
    {
      v48 = v15(a1);
      v16 = *(_QWORD *)(a1 + 160);
      v17 = *(_QWORD *)(v16 + 112);
      if ( v14 >= v48 )
        break;
      goto LABEL_5;
    }
    v16 = *(_QWORD *)(a1 + 160);
    v17 = *(_QWORD *)(v16 + 112);
    if ( !v17 )
      goto LABEL_46;
    if ( v14 >= *(_DWORD *)(v17 - 4) )
      break;
LABEL_5:
    v18 = 32LL * v14;
    v19 = *(int **)(v17 + v18 + 8);
    if ( v19 )
      ++v19[2];
    if ( v10 )
    {
      v20 = *((_DWORD *)v10 - 1);
      if ( v20 == *((_DWORD *)v10 - 2) )
      {
        v45 = (3 * v20 + 1) >> 1;
        v46 = 8 * v45 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v46 || v20 >= v45 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v243, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v243);
          sub_233E40((__int64)v243);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v186 = (3 * v20 + 1) >> 1;
        v47 = (unsigned int *)sub_186B300(v10 - 1, v46);
        v10 = v47 + 2;
        *v47 = v186;
        LODWORD(v47) = v47[1];
        v23 = (int **)&v10[(unsigned int)v47];
        v22 = (_DWORD)v47 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = (int **)&v10[v21];
      }
    }
    else
    {
      v57 = (_QWORD *)sub_186B270(0x18u);
      v10 = v57 + 1;
      *v57 = 2;
      v22 = 1;
      v23 = (int **)v10;
    }
    *v23 = v19;
    *((_DWORD *)v10 - 1) = v22;
    v24 = *v19;
    if ( (unsigned int)*v19 < v239[0] )
    {
      v26 = (char *)ptr + 4 * (v24 >> 5);
      v27 = *(_DWORD *)v26;
      v25 = 1 << v24;
      if ( ((1 << v24) & *(_DWORD *)v26) != 0 )
        goto LABEL_34;
    }
    else
    {
      v185 = *v19;
      sub_186B510(v239, v24 + 1, 0);
      v25 = 1 << v185;
      v26 = (char *)ptr + 4 * (v185 >> 5);
      v27 = *(_DWORD *)v26;
    }
    *(_DWORD *)v26 = v27 | v25;
    v28 = *(_QWORD *)(a1 + 160);
    v29 = *(_QWORD *)(v28 + 96);
    if ( v19 == *(int **)(v29 + 856) )
      goto LABEL_34;
    if ( *((_WORD *)v19 + 2) )
      goto LABEL_202;
    v30 = *(_DWORD **)(*((_QWORD *)v19 + 2) + 24LL);
    if ( !v30 || *v30 )
      goto LABEL_202;
    v58 = v30[1];
    if ( v58 == 5 )
    {
      v73 = *(unsigned int **)(*(_QWORD *)(v28 + 112) + v18 + 24);
      v74 = (_Unwind_Exception *)(v19 + 8);
      v75 = 2LL * (unsigned int)v19[6];
      v214 = (_Unwind_Exception *)&v19[v75 + 8];
      if ( v75 * 4 )
      {
        while ( 1 )
        {
          exception_class = v74->exception_class;
          v83 = (__m128i)v74->exception_class;
          v84 = *(__m128 *(__fastcall **)(__int64, const __m128i *, double, double, __m128, __m128))(*(_QWORD *)a1 + 40LL);
          v242.m128i_i64[0] = 0;
          v242.m128i_i64[1] = (__int64)v73;
          *(__m128i *)v241 = _mm_unpacklo_epi64((__m128i)v29, v83);
          if ( exception_class )
            ++*(_DWORD *)(exception_class + 8);
          if ( v73 )
            *v73 = (*v73 + 1) & 0x3FFFFFFF | *v73 & 0xC0000000;
          if ( v84 == sub_E56D20 )
          {
            *(_BYTE *)(a1 + 272) = 1;
            if ( exception_class == *(_QWORD *)(v29 + 864) && !*(_BYTE *)(v28 + 472) )
            {
              v230 = v73;
              v219 = v28 + 472;
              *(_QWORD *)v189 = v28;
              v85 = sub_180C100(v28 + 240, 24);
              v86 = *(_QWORD *)v189;
              v87 = v85;
              *(_QWORD *)v85 = off_1C54EE8;
              v73 = v230;
              *(_QWORD *)(v85 + 8) = v219;
              v88 = *(_QWORD **)(*(_QWORD *)v189 + 224LL);
              *(_BYTE *)(v85 + 16) = 0;
              if ( v88 )
              {
                v89 = *((_DWORD *)v88 - 1);
                if ( v89 == *((_DWORD *)v88 - 2) )
                {
                  v128 = (3 * v89 + 1) >> 1;
                  v129 = 8 * v128 + 8;
                  if ( 8 * v89 + 8 >= (unsigned int)v129 || v89 >= v128 )
                  {
                    v179 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v243, "Overflow encountered when expanding vector");
                    *v179 = (char *)off_1C63128;
                    sub_2333C0(v179 + 1, v243);
                    sub_233E40((__int64)v243);
                    __cxa_throw(
                      v179,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v232 = *(_QWORD *)v189;
                  v223 = (3 * v89 + 1) >> 1;
                  *(_QWORD *)v197 = v73;
                  v130 = (unsigned int *)sub_186B300(v88 - 1, v129);
                  v131 = v130[1];
                  v86 = v232;
                  v88 = v130 + 2;
                  v73 = *(unsigned int **)v197;
                  *(_QWORD *)(v232 + 224) = v130 + 2;
                  *v130 = v223;
                  LODWORD(v130) = v131;
                  v92 = &v88[v131];
                  v91 = (_DWORD)v130 + 1;
                }
                else
                {
                  v90 = v89;
                  v91 = v89 + 1;
                  v92 = &v88[v90];
                }
              }
              else
              {
                v168 = (_QWORD *)sub_186B270(0x18u);
                v86 = *(_QWORD *)v189;
                *v168 = 2;
                v91 = 1;
                v88 = v168 + 1;
                v73 = v230;
                *(_QWORD *)(*(_QWORD *)v189 + 224LL) = v88;
                v92 = v88;
              }
              *v92 = v87;
              *((_DWORD *)v88 - 1) = v91;
              *(_BYTE *)(v86 + 472) = 1;
              v28 = *(_QWORD *)(a1 + 160);
            }
            v76 = *(__m128 **)(v28 + 112);
            if ( v76 )
            {
              v77 = v76[-1].m128_u32[3];
              if ( (_DWORD)v77 == v76[-1].m128_i32[2] )
              {
                v191 = (unsigned int)(3 * v77 + 1) >> 1;
                v102 = 32 * v191 + 8;
                if ( 32 * (int)v77 + 8 >= (unsigned int)v102 || (unsigned int)v77 >= (unsigned int)(3 * v77 + 1) >> 1 )
                {
                  v181 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v243, "Overflow encountered when expanding vector");
                  *v181 = (char *)off_1C63128;
                  sub_2333C0(v181 + 1, v243);
                  sub_233E40((__int64)v243);
                  __cxa_throw(v181, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v231 = v28;
                v220 = v73;
                v103 = sub_186B270(v102);
                v104 = v231;
                v73 = v220;
                v105 = (_DWORD *)v103;
                v76 = (__m128 *)(v103 + 8);
                v106 = *(__int64 **)(v231 + 112);
                if ( v106 )
                {
                  v107 = *((unsigned int *)v106 - 1);
                  v108 = v103 + 8;
                  *(_DWORD *)(v103 + 4) = v107;
                  v109 = v107;
                  v110 = v106;
                  v111 = &v106[4 * v107];
                  if ( v106 != v111 )
                  {
                    do
                    {
                      v112 = *v110;
                      v110 += 4;
                      v108 += 32;
                      *(_QWORD *)(v108 - 32) = v112;
                      v113 = *(v110 - 3);
                      *(v110 - 3) = 0;
                      *(_QWORD *)(v108 - 24) = v113;
                      v114 = *(v110 - 2);
                      *(v110 - 2) = 0;
                      *(_QWORD *)(v108 - 16) = v114;
                      v115 = *(v110 - 1);
                      *(v110 - 1) = 0;
                      *(_QWORD *)(v108 - 8) = v115;
                    }
                    while ( v110 != v111 );
                    v104 = v231;
                  }
                  v116 = &v106[4 * v107];
                  if ( v109 )
                  {
                    v234 = v105;
                    v238 = v104;
                    v236 = v10;
                    v117 = v106;
                    do
                    {
                      v118 = v117;
                      v117 += 4;
                      sub_234F80(v118);
                    }
                    while ( v117 != v116 );
                    v104 = v238;
                    v73 = v220;
                    v105 = v234;
                    v10 = v236;
                    v106 = *(__int64 **)(v238 + 112);
                  }
                  v237 = v104;
                  v235 = v105;
                  v221 = v73;
                  sub_186B220(v106 - 1);
                  v105 = v235;
                  v104 = v237;
                  v73 = v221;
                  v78 = &v76[2 * (unsigned int)v235[1]];
                }
                else
                {
                  *(_DWORD *)(v103 + 4) = 0;
                  v78 = (__m128 *)(v103 + 8);
                }
                *(_QWORD *)(v104 + 112) = v76;
                *v105 = v191;
              }
              else
              {
                v78 = &v76[2 * v77];
              }
            }
            else
            {
              v222 = v28;
              *(_QWORD *)v194 = v73;
              v123 = (_QWORD *)sub_186B270(0x48u);
              v76 = (__m128 *)(v123 + 1);
              *v123 = 2;
              v73 = *(unsigned int **)v194;
              v78 = v76;
              *(_QWORD *)(v222 + 112) = v76;
            }
            si128 = (__m128)_mm_load_si128((const __m128i *)v241);
            v80 = (__m128)_mm_load_si128(&v242);
            a5 = _mm_movehl_ps(a5, si128);
            v81 = (unsigned int *)_mm_movehl_ps(a6, v80).m128_u64[0];
            *v78 = si128;
            v78[1] = v80;
            if ( a5.m128_u64[0] )
              ++*(_DWORD *)(a5.m128_u64[0] + 8);
            if ( v80.m128_u64[0] )
              ++*(_DWORD *)(v80.m128_u64[0] + 8);
            if ( v81 )
              *v81 = (*v81 + 1) & 0x3FFFFFFF | *v81 & 0xC0000000;
            ++v76[-1].m128_i32[3];
          }
          else
          {
            *(_QWORD *)v192 = v73;
            ((void (__fastcall *)(__int64, int *))v84)(a1, v241);
            v73 = *(unsigned int **)v192;
          }
          *(_QWORD *)v188 = v73;
          v74 = (_Unwind_Exception *)((char *)v74 + 8);
          sub_234F80((__int64 *)v241);
          if ( v214 == v74 )
            break;
          v28 = *(_QWORD *)(a1 + 160);
          v73 = *(unsigned int **)v188;
          v29 = *(_QWORD *)(v28 + 96);
        }
      }
      goto LABEL_34;
    }
    if ( v58 == 8
      && v19[6] == 1
      && (v59 = *((_QWORD *)v19 + 4), !*(_WORD *)(v59 + 4))
      && (v60 = *(_QWORD **)(*(_QWORD *)(v59 + 16) + 24LL)) != nullptr
      && *v60 == 0x600000000LL )
    {
      v61 = 8LL * *(unsigned int *)(v59 + 24);
      if ( v61 )
      {
        v62 = (_Unwind_Exception *)(v59 + 32);
        v63 = v62;
        v64 = *(unsigned int **)(*(_QWORD *)(v28 + 112) + v18 + 24);
        v213 = (_Unwind_Exception *)((char *)v62 + v61);
        if ( v64 )
        {
          while ( 1 )
          {
            v187 = *(__m128 *(__fastcall **)(__int64, const __m128i *, double, double, __m128, __m128))(*(_QWORD *)a1 + 40LL);
            v65 = sub_15EC2C0(v29, v63->exception_class);
            v66 = *(_QWORD *)(a1 + 160);
            v67 = *(_QWORD *)(v66 + 96);
            v242.m128i_i64[1] = (__int64)v64;
            v242.m128i_i64[0] = 0;
            *(__m128i *)v241 = _mm_unpacklo_epi64((__m128i)v67, (__m128i)(unsigned __int64)v65);
            if ( v65 )
              ++*(_DWORD *)(v65 + 8);
            *v64 = (*v64 + 1) & 0x3FFFFFFF | *v64 & 0xC0000000;
            if ( v187 == sub_E56D20 )
            {
              *(_BYTE *)(a1 + 272) = 1;
              if ( v65 == *(_QWORD *)(v67 + 864) && !*(_BYTE *)(v66 + 472) )
              {
                *(_QWORD *)v199 = v66;
                v224 = v66 + 472;
                v139 = (_QWORD *)sub_180C100(v66 + 240, 24);
                v140 = *(_QWORD *)v199;
                v141 = v139;
                *v139 = off_1C54EE8;
                v142 = *(_QWORD *)(*(_QWORD *)v199 + 224LL);
                v141[1] = v224;
                *((_BYTE *)v141 + 16) = 0;
                if ( v142 )
                {
                  v143 = *(_DWORD *)(v142 - 4);
                  if ( v143 == *(_DWORD *)(v142 - 8) )
                  {
                    v169 = (3 * v143 + 1) >> 1;
                    v170 = 8 * v169 + 8;
                    if ( 8 * v143 + 8 >= v170 || v143 >= v169 )
                      goto LABEL_199;
                    v233 = (3 * v143 + 1) >> 1;
                    v227 = v141;
                    v171 = sub_186B300((void *)(v142 - 8), v170);
                    v140 = *(_QWORD *)v199;
                    v172 = (_DWORD *)v171;
                    v142 = v171 + 8;
                    v141 = v227;
                    *(_QWORD *)(*(_QWORD *)v199 + 224LL) = v142;
                    *v172 = v233;
                    v143 = v172[1];
                  }
                }
                else
                {
                  v228 = v141;
                  v174 = sub_186B270(0x18u);
                  v140 = *(_QWORD *)v199;
                  v142 = v174 + 8;
                  v141 = v228;
                  v143 = 0;
                  *(_QWORD *)(v142 - 8) = 2;
                  *(_QWORD *)(*(_QWORD *)v199 + 224LL) = v142;
                }
                *(_QWORD *)(v142 + 8LL * v143) = v141;
                *(_DWORD *)(v142 - 4) = v143 + 1;
                *(_BYTE *)(v140 + 472) = 1;
                v66 = *(_QWORD *)(a1 + 160);
              }
              v68 = *(_QWORD *)(v66 + 112);
              if ( !v68 || (v69 = *(unsigned int *)(v68 - 4), (_DWORD)v69 == *(_DWORD *)(v68 - 8)) )
              {
                *(_QWORD *)v198 = v66;
                sub_E588D0((unsigned int **)(v66 + 112));
                v68 = *(_QWORD *)(*(_QWORD *)v198 + 112LL);
                v69 = *(unsigned int *)(v68 - 4);
              }
              v70 = (__m128)_mm_load_si128((const __m128i *)v241);
              v71 = (__m128)_mm_load_si128(&v242);
              v72 = (__m128 *)(v68 + 32 * v69);
              a8 = _mm_movehl_ps(a8, v70);
              a9 = _mm_movehl_ps(a9, v71);
              *v72 = v70;
              v72[1] = v71;
              if ( a8.m128_u64[0] )
                ++*(_DWORD *)(a8.m128_u64[0] + 8);
              if ( v71.m128_u64[0] )
                ++*(_DWORD *)(v71.m128_u64[0] + 8);
              if ( a9.m128_u64[0] )
                *(_DWORD *)a9.m128_u64[0] = (*(_DWORD *)a9.m128_u64[0] + 1) & 0x3FFFFFFF
                                          | *(_DWORD *)a9.m128_u64[0] & 0xC0000000;
              ++*(_DWORD *)(v68 - 4);
            }
            else
            {
              ((void (__fastcall *)(__int64, int *))v187)(a1, v241);
            }
            v63 = (_Unwind_Exception *)((char *)v63 + 8);
            sub_234F80((__int64 *)v241);
            if ( v213 == v63 )
              goto LABEL_34;
            v29 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 96LL);
          }
        }
        v144 = v62;
        while ( 1 )
        {
          v200 = *(__m128 *(__fastcall **)(__int64, const __m128i *, double, double, __m128, __m128))(*(_QWORD *)a1 + 40LL);
          v145 = sub_15EC2C0(v29, v144->exception_class);
          v147 = *(_QWORD *)(a1 + 160);
          a8 = (__m128)(unsigned __int64)v145;
          v148 = *(_QWORD *)(v147 + 96);
          v242 = 0u;
          *(__m128i *)v241 = _mm_unpacklo_epi64((__m128i)v148, (__m128i)(unsigned __int64)v145);
          if ( v145 )
            ++*(_DWORD *)(v145 + 8);
          if ( v200 == sub_E56D20 )
          {
            *(_BYTE *)(a1 + 272) = 1;
            if ( *(_QWORD *)(v148 + 864) == v145 && !*(_BYTE *)(v147 + 472) )
            {
              v155 = sub_180C100(v147 + 240, 24);
              *(_QWORD *)v155 = off_1C54EE8;
              v156 = *(_QWORD **)(v147 + 224);
              *(_QWORD *)(v155 + 8) = v147 + 472;
              *(_BYTE *)(v155 + 16) = 0;
              if ( v156 )
              {
                v157 = *((_DWORD *)v156 - 1);
                v158 = *((_DWORD *)v156 - 2);
                if ( v158 == v157 )
                {
                  v229 = v155;
                  v175 = (3 * v158 + 1) >> 1;
                  v176 = 8 * v175 + 8;
                  if ( 8 * v158 + 8 >= v176 || (v204 = (3 * v158 + 1) >> 1, v158 >= v175) )
                  {
LABEL_199:
                    v184 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v243, "Overflow encountered when expanding vector");
                    *v184 = (char *)off_1C63128;
                    sub_2333C0(v184 + 1, v243);
                    sub_233E40((__int64)v243);
                    __cxa_throw(
                      v184,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v177 = (unsigned int *)sub_186B300(v156 - 1, v176);
                  v156 = v177 + 2;
                  v155 = v229;
                  *(_QWORD *)(v147 + 224) = v177 + 2;
                  *v177 = v204;
                  v157 = v177[1];
                }
              }
              else
              {
                *(_QWORD *)v205 = v155;
                v178 = (_QWORD *)sub_186B270(0x18u);
                *v178 = 2;
                v156 = v178 + 1;
                v155 = *(_QWORD *)v205;
                v157 = 0;
                *(_QWORD *)(v147 + 224) = v156;
              }
              v156[v157] = v155;
              *((_DWORD *)v156 - 1) = v157 + 1;
              *(_BYTE *)(v147 + 472) = 1;
              v147 = *(_QWORD *)(a1 + 160);
            }
            v149 = *(_QWORD *)(v147 + 112);
            if ( !v149 || (v150 = *(unsigned int *)(v149 - 4), *(_DWORD *)(v149 - 8) == (_DWORD)v150) )
            {
              sub_E588D0((unsigned int **)(v147 + 112));
              v149 = *(_QWORD *)(v147 + 112);
              v150 = *(unsigned int *)(v149 - 4);
            }
            v151 = (__m128)_mm_load_si128((const __m128i *)v241);
            v152 = (__m128)_mm_load_si128(&v242);
            v153 = (__m128 *)(v149 + 32 * v150);
            a9 = _mm_movehl_ps(a9, v151);
            v154 = (unsigned int *)_mm_movehl_ps(v146, v152).m128_u64[0];
            *v153 = v151;
            v153[1] = v152;
            if ( a9.m128_u64[0] )
              ++*(_DWORD *)(a9.m128_u64[0] + 8);
            if ( v152.m128_u64[0] )
              ++*(_DWORD *)(v152.m128_u64[0] + 8);
            if ( v154 )
              *v154 = (*v154 + 1) & 0x3FFFFFFF | *v154 & 0xC0000000;
            ++*(_DWORD *)(v149 - 4);
          }
          else
          {
            ((void (__fastcall *)(__int64, int *))v200)(a1, v241);
          }
          sub_234F80((__int64 *)v241);
          v144 = (_Unwind_Exception *)((char *)v144 + 8);
          if ( v213 == v144 )
            break;
          v29 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 96LL);
        }
      }
    }
    else
    {
LABEL_202:
      if ( v12 != v14 )
      {
        v31 = 32LL * v12;
        if ( v18 != v31 )
        {
          v32 = *(_QWORD *)(v28 + 112);
          v33 = v32 + v18;
          v34 = *(_QWORD *)(v33 + 8);
          if ( v34 )
            ++*(_DWORD *)(v34 + 8);
          v35 = *(unsigned int **)(v33 + 24);
          if ( v35 )
            *v35 = (*v35 + 1) & 0x3FFFFFFF | *v35 & 0xC0000000;
          v36 = *(_QWORD *)(v33 + 16);
          if ( v36 )
            ++*(_DWORD *)(v36 + 8);
          v37 = (_QWORD *)(v31 + v32);
          v38 = v37[1];
          v39 = (_Unwind_Exception *)*v37;
          if ( v38 )
          {
            v40 = (*(_DWORD *)(v38 + 8))-- == 1;
            if ( v40 )
            {
              sub_15D7BC0(v39, v38);
              v39 = (_Unwind_Exception *)*v37;
            }
          }
          v41 = (unsigned int *)v37[3];
          if ( v41 )
          {
            v42 = (*v41 + 0x3FFFFFFF) & 0x3FFFFFFF | *v41 & 0xC0000000;
            *v41 = v42;
            if ( (v42 & 0x3FFFFFFF) == 0 )
            {
              private_2 = (_QWORD *)v39[20].private_2;
              if ( private_2 )
              {
                v94 = *((unsigned int *)private_2 - 1);
                if ( (_DWORD)v94 == *((_DWORD *)private_2 - 2) )
                {
                  v119 = (unsigned int)(3 * v94 + 1) >> 1;
                  v120 = 8 * v119 + 8;
                  if ( 8 * (int)v94 + 8 >= v120 || (unsigned int)v94 >= v119 )
                  {
                    v180 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v243, "Overflow encountered when expanding vector");
                    *v180 = (char *)off_1C63128;
                    sub_2333C0(v180 + 1, v243);
                    sub_233E40((__int64)v243);
                    __cxa_throw(
                      v180,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v215 = (unsigned int)(3 * v94 + 1) >> 1;
                  *(_QWORD *)v207 = v41;
                  *(_QWORD *)v193 = v39;
                  v121 = (unsigned int *)sub_186B300(private_2 - 1, v120);
                  v39 = *(_Unwind_Exception **)v193;
                  private_2 = v121 + 2;
                  v122 = v121[1];
                  *(_QWORD *)(*(_QWORD *)v193 + 664LL) = v121 + 2;
                  *v121 = v215;
                  v95 = v122 + 1;
                  *(_QWORD *)&v121[2 * v122 + 2] = *(_QWORD *)v207;
                  v121[1] = v122 + 1;
                }
                else
                {
                  v95 = v94 + 1;
                  private_2[v94] = v41;
                  *((_DWORD *)private_2 - 1) = v94 + 1;
                }
              }
              else
              {
                *(_QWORD *)v209 = v41;
                *(_QWORD *)v196 = v39;
                v126 = (_QWORD *)sub_186B270(0x18u);
                v39 = *(_Unwind_Exception **)v196;
                *v126 = 2;
                v127 = v126;
                private_2 = v126 + 1;
                *(_QWORD *)(*(_QWORD *)v196 + 664LL) = private_2;
                v127[1] = *(_QWORD *)v209;
                *((_DWORD *)v127 + 1) = 1;
                v95 = 1;
              }
              while ( v95 )
              {
                v96 = (unsigned int)(v95 - 1);
                v97 = (_Unwind_Exception *)private_2[v96];
                *((_DWORD *)private_2 - 1) = v96;
                if ( (v97->exception_class & 0x80000000) != 0 )
                {
                  exception_cleanup = v97->exception_cleanup;
                  if ( exception_cleanup )
                  {
                    v125 = v39[20].exception_cleanup;
                    v40 = (*((_DWORD *)exception_cleanup + 2))-- == 1;
                    if ( v40 )
                    {
                      *(_QWORD *)v208 = v97;
                      *(_QWORD *)v195 = v39;
                      sub_15D7BC0(v125, exception_cleanup);
                      v97 = *(_Unwind_Exception **)v208;
                      v39 = *(_Unwind_Exception **)v195;
                    }
                  }
                  *(_QWORD *)v190 = v39;
                  sub_17E9C40(v39[20].private_1, 16, v97);
                }
                else
                {
                  v98 = (unsigned int *)v97->exception_cleanup;
                  v99 = (*v98 + 0x3FFFFFFF) & 0x3FFFFFFF | *v98 & 0xC0000000;
                  *v98 = v99;
                  if ( (v99 & 0x3FFFFFFF) == 0 )
                  {
                    v136 = *((_DWORD *)private_2 - 2);
                    if ( v136 == v95 - 1 )
                    {
                      v225 = v98;
                      v216 = v97;
                      v159 = (3 * v136 + 1) >> 1;
                      v160 = 8 * v159 + 8;
                      *(_QWORD *)v210 = v39;
                      if ( 8 * v95 >= (unsigned int)v160 || (v201 = (3 * v136 + 1) >> 1, v136 >= v159) )
                      {
LABEL_198:
                        v183 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v243, "Overflow encountered when expanding vector");
                        *v183 = (char *)off_1C63128;
                        sub_2333C0(v183 + 1, v243);
                        sub_233E40((__int64)v243);
                        __cxa_throw(
                          v183,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v161 = (unsigned int *)sub_186B300(private_2 - 1, v160);
                      v39 = *(_Unwind_Exception **)v210;
                      v137 = v161 + 2;
                      v97 = v216;
                      v98 = v225;
                      *(_QWORD *)(*(_QWORD *)v210 + 664LL) = v161 + 2;
                      *v161 = v201;
                    }
                    else
                    {
                      v137 = (_DWORD *)v39[20].private_2;
                    }
                    v138 = *(v137 - 1);
                    *(_QWORD *)&v137[2 * v138] = v98;
                    *(v137 - 1) = v138 + 1;
                  }
                  private_1 = (unsigned int *)v97->private_1;
                  v101 = (*private_1 + 0x3FFFFFFF) & 0x3FFFFFFF | *private_1 & 0xC0000000;
                  *private_1 = v101;
                  if ( (v101 & 0x3FFFFFFF) == 0 )
                  {
                    v132 = (_QWORD *)v39[20].private_2;
                    if ( v132 )
                    {
                      v133 = *((_DWORD *)v132 - 1);
                      if ( v133 == *((_DWORD *)v132 - 2) )
                      {
                        v226 = v97;
                        v217 = v39;
                        v162 = (3 * v133 + 1) >> 1;
                        v163 = 8 * v162 + 8;
                        *(_QWORD *)v211 = private_1;
                        if ( 8 * v133 + 8 >= (unsigned int)v163 )
                          goto LABEL_198;
                        v202 = (3 * v133 + 1) >> 1;
                        if ( v133 >= v162 )
                          goto LABEL_198;
                        v164 = sub_186B300(v132 - 1, v163);
                        v39 = v217;
                        v165 = (_DWORD *)v164;
                        v132 = (_QWORD *)(v164 + 8);
                        private_1 = *(unsigned int **)v211;
                        v97 = v226;
                        v217[20].private_2 = (_Unwind_Word)v132;
                        *v165 = v202;
                        v166 = (unsigned int)v165[1];
                        v167 = v166;
                        v135 = (unsigned int **)&v132[v166];
                        v134 = v167 + 1;
                      }
                      else
                      {
                        v134 = v133 + 1;
                        v135 = (unsigned int **)&v132[v133];
                      }
                    }
                    else
                    {
                      v218 = v97;
                      *(_QWORD *)v212 = v39;
                      *(_QWORD *)v203 = private_1;
                      v173 = (_QWORD *)sub_186B270(0x18u);
                      v39 = *(_Unwind_Exception **)v212;
                      *v173 = 2;
                      v132 = v173 + 1;
                      v134 = 1;
                      private_1 = *(unsigned int **)v203;
                      v97 = v218;
                      v135 = (unsigned int **)v132;
                      *(_QWORD *)(*(_QWORD *)v212 + 664LL) = v132;
                    }
                    *v135 = private_1;
                    *((_DWORD *)v132 - 1) = v134;
                  }
                  *(_QWORD *)v190 = v39;
                  sub_17E9C40(v39[20].private_1, 24, v97);
                }
                v39 = *(_Unwind_Exception **)v190;
                private_2 = *(_QWORD **)(*(_QWORD *)v190 + 664LL);
                if ( !private_2 )
                  break;
                v95 = *((_DWORD *)private_2 - 1);
              }
              v39 = (_Unwind_Exception *)*v37;
            }
          }
          v43 = v37[2];
          if ( v43 )
          {
            v40 = (*(_DWORD *)(v43 + 8))-- == 1;
            if ( v40 )
              sub_15D7BC0(v39, v43);
          }
          v44 = _mm_loadu_si128((const __m128i *)(v33 + 8));
          v37[3] = *(_QWORD *)(v33 + 24);
          *(__m128i *)(v37 + 1) = v44;
        }
      }
      ++v12;
    }
LABEL_34:
    ++v14;
  }
  if ( v17 )
  {
    v49 = 32LL * v12;
    v50 = 32LL * *(unsigned int *)(v17 - 4);
    v51 = (__int64 *)(v17 + v49);
    v52 = (__int64 *)(v17 + v50);
    if ( v49 != v50 )
    {
      do
      {
        v53 = v51;
        v51 += 4;
        sub_234F80(v53);
      }
      while ( v52 != v51 );
      v17 = *(_QWORD *)(v16 + 112);
    }
    *(_DWORD *)(v17 - 4) = v12;
  }
LABEL_46:
  if ( v10 )
  {
    v54 = v10;
    v55 = (unsigned __int64)&v10[*((unsigned int *)v10 - 1)];
    if ( (unsigned __int64)v10 < v55 )
    {
      do
      {
        while ( 1 )
        {
          v56 = *v54;
          if ( *v54 )
          {
            v40 = (*(_DWORD *)(v56 + 8))-- == 1;
            if ( v40 )
              break;
          }
          if ( (unsigned __int64)++v54 >= v55 )
            goto LABEL_53;
        }
        ++v54;
        sub_15D7BC0(*(_QWORD *)v206, v56);
      }
      while ( (unsigned __int64)v54 < v55 );
    }
LABEL_53:
    sub_186B220(v10 - 1);
  }
  if ( ptr )
    sub_186B220(ptr);
}

