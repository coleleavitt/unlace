__int64 __fastcall sub_944450(
        __int64 a1,
        char *a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10,
        const __m128i a11,
        __int128 a12,
        __int128 a13,
        __int128 a14,
        __int128 a15,
        __int128 a16,
        __int128 a17,
        __int128 a18,
        __int128 a19,
        __int64 a20)
{
  unsigned int v25; // r15d
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  _QWORD *v28; // rdi
  __m128i v29; // xmm3
  __m128i v30; // xmm4
  __m128i v31; // xmm5
  __m128i v32; // xmm6
  __m128i v33; // xmm7
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  __int64 v37; // rax
  __m128i v38; // xmm3
  __m128i v39; // xmm4
  __m128i v40; // xmm5
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  int v44; // edx
  int v45; // r12d
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // eax
  int v51; // ecx
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  pthread_mutex_t *v54; // r12
  __int64 v55; // r14
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 v58; // rdx
  int v59; // eax
  unsigned __int64 v60; // r15
  unsigned __int64 v61; // rax
  size_t v62; // r12
  __int64 v63; // rdi
  void (__fastcall *v64)(__int64); // rax
  __int64 (__fastcall *v65)(__int64, size_t); // rax
  void *v66; // rax
  __m128i v67; // xmm6
  pthread_mutex_t *v68; // r14
  __m128i v69; // xmm7
  int v70; // eax
  __m128i v71; // xmm0
  __m128i v72; // xmm1
  __m128i v73; // xmm6
  __m128i v74; // xmm2
  __m128i v75; // xmm7
  __m128i v76; // xmm3
  __m128i v77; // xmm4
  __m128i v78; // xmm5
  __m128i v79; // xmm6
  __m128i v80; // xmm7
  __m128i v81; // xmm2
  __m128i v82; // xmm3
  __m128i v83; // xmm4
  __int64 v84; // rax
  __m128i v85; // xmm5
  __m128i v86; // xmm0
  __m128i v87; // xmm6
  __m128i v88; // xmm7
  __int64 result; // rax
  __m128i v90; // xmm1
  __m128i v91; // xmm2
  __m128i v92; // xmm3
  __m128i v93; // xmm4
  __m128i v94; // xmm5
  int v95; // r9d
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // rsi
  char *v101; // rdi
  char *v102; // rdx
  __int64 v103; // rdi
  __int64 v104; // rsi
  pthread_mutex_t *v105; // rax
  __int64 v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  pthread_mutex_t *v111; // rax
  __int64 v112; // rdi
  pthread_mutex_t *v113; // rax
  void *v114; // rax
  void *v115; // rdi
  __int64 v116; // rax
  unsigned int v117; // r14d
  int v118; // ecx
  char v119; // al
  void *v120; // rsi
  void *v121; // rax
  void *v122; // rsi
  char *v123; // rdx
  unsigned __int64 v124; // rbp
  __int64 v125; // rax
  __int64 v126; // rcx
  char *v127; // rdx
  unsigned int v128; // esi
  int v129; // eax
  __int64 v130; // rax
  __m128i v131; // xmm7
  int v132; // ecx
  __int64 v134; // [rsp+50h] [rbp-158h]
  __int64 (__fastcall *v135)(__int64, __int64); // [rsp+58h] [rbp-150h]
  __int64 n; // [rsp+60h] [rbp-148h]
  __int64 size; // [rsp+68h] [rbp-140h]
  unsigned __int64 v138; // [rsp+70h] [rbp-138h]
  void (__fastcall *v139)(__int64); // [rsp+78h] [rbp-130h]
  unsigned __int32 v140; // [rsp+80h] [rbp-128h]
  int v141; // [rsp+84h] [rbp-124h]
  unsigned int v142; // [rsp+88h] [rbp-120h]
  unsigned __int32 v143; // [rsp+8Ch] [rbp-11Ch]
  __int128 v144; // [rsp+90h] [rbp-118h] BYREF
  __m128i v145; // [rsp+A0h] [rbp-108h] BYREF
  __m128i v146; // [rsp+B0h] [rbp-F8h] BYREF
  __m128i v147; // [rsp+C0h] [rbp-E8h] BYREF
  __m128i v148; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v149; // [rsp+E0h] [rbp-C8h] BYREF
  __m128i v150; // [rsp+F0h] [rbp-B8h] BYREF
  __m128i v151; // [rsp+100h] [rbp-A8h] BYREF
  __m128i v152; // [rsp+110h] [rbp-98h] BYREF
  __m128i v153; // [rsp+120h] [rbp-88h] BYREF
  __m128i v154; // [rsp+130h] [rbp-78h] BYREF
  __m128i v155; // [rsp+140h] [rbp-68h] BYREF
  __m128i v156; // [rsp+150h] [rbp-58h] BYREF
  __int64 v157; // [rsp+160h] [rbp-48h]
  unsigned __int64 v158; // [rsp+168h] [rbp-40h]

  v25 = a11.m128i_u32[3];
  v158 = __readfsqword(0x28u);
  if ( a11.m128i_i32[3] == *(_DWORD *)(a1 + 116) )
    goto LABEL_2;
  if ( (unsigned int)sub_8DF470(*(char **)a1, a11.m128i_u32[3]) )
    return -64;
  v99 = *(unsigned int *)(a1 + 3008);
  LODWORD(v144) = v25 + 2;
  v100 = (unsigned int)(v99 + 1);
  if ( v25 + 2 <= (unsigned int)v100 )
  {
LABEL_51:
    v103 = *(_QWORD *)(a1 + 16);
    v104 = 2 * v25 + 3;
    if ( !v103 )
      return -64;
    if ( (unsigned int)v104 > *(_DWORD *)(v103 + 48) )
    {
      v105 = sub_943590(v103, v104);
      *(_QWORD *)(a1 + 16) = v105;
      if ( !v105 )
        return -64;
    }
    v106 = *(_QWORD *)(a1 + 24);
    if ( !v106 )
      return -64;
    if ( (signed int)v25 > *(_DWORD *)(v106 + 40) )
    {
      v144 = (__int128)_mm_loadu_si128((const __m128i *)(v106 + 48));
      v145.m128i_i64[0] = *(_QWORD *)(v106 + 64);
      sub_943100((pthread_mutex_t *)v106);
      v111 = sub_9432E0(v25, v104, v107, v108, v109, v110, v144, v145.m128i_i64[0]);
      *(_QWORD *)(a1 + 24) = v111;
      if ( !v111 )
        return -64;
    }
    v112 = *(_QWORD *)(a1 + 32);
    if ( !v112 )
      return -64;
    if ( v25 > *(_DWORD *)(v112 + 48) )
    {
      v113 = sub_943590(v112, v25);
      *(_QWORD *)(a1 + 32) = v113;
      if ( !v113 )
        return -64;
    }
    sub_8ED410(a1 + 40, 0x190u, v25);
LABEL_2:
    if ( (unsigned __int64)(a12 - 1) <= 0x7FFFE )
    {
      v95 = *(_DWORD *)(a1 + 3024);
      *(_QWORD *)&a12 = 0x80000;
      if ( v95 )
        goto LABEL_6;
    }
    else
    {
      if ( (unsigned __int64)a12 > 0x40000000 )
        *(_QWORD *)&a12 = 0x40000000;
      if ( *(_DWORD *)(a1 + 3024) )
      {
LABEL_6:
        v26 = _mm_loadu_si128((const __m128i *)&a7);
        *(_QWORD *)(a1 + 3032) = a6;
        v27 = _mm_loadu_si128((const __m128i *)&a8);
        v28 = *(_QWORD **)(a1 + 3080);
        v29 = _mm_loadu_si128((const __m128i *)&a9);
        *(__m128i *)(a1 + 40) = v26;
        v30 = _mm_loadu_si128((const __m128i *)&a10);
        v31 = _mm_loadu_si128(&a11);
        *(__m128i *)(a1 + 56) = v27;
        v32 = _mm_loadu_si128((const __m128i *)&a12);
        *(__m128i *)(a1 + 72) = v29;
        v33 = _mm_loadu_si128((const __m128i *)&a13);
        v34 = _mm_loadu_si128((const __m128i *)&a14);
        *(__m128i *)(a1 + 88) = v30;
        v35 = _mm_loadu_si128((const __m128i *)&a15);
        v36 = _mm_loadu_si128((const __m128i *)&a16);
        *(__m128i *)(a1 + 104) = v31;
        v37 = a20;
        v38 = _mm_loadu_si128((const __m128i *)&a17);
        v39 = _mm_loadu_si128((const __m128i *)&a18);
        *(__m128i *)(a1 + 120) = v32;
        v40 = _mm_loadu_si128((const __m128i *)&a19);
        *(__m128i *)(a1 + 136) = v33;
        *(__m128i *)(a1 + 152) = v34;
        *(__m128i *)(a1 + 168) = v35;
        *(__m128i *)(a1 + 184) = v36;
        *(__m128i *)(a1 + 200) = v38;
        *(__m128i *)(a1 + 216) = v39;
        *(__m128i *)(a1 + 232) = v40;
        *(_QWORD *)(a1 + 248) = v37;
        if ( a2 )
        {
          sub_8ECAE0(v28);
          v43 = sub_8EE8C0(
                  a2,
                  a3,
                  0,
                  a4,
                  v41,
                  v42,
                  (__int128)_mm_loadu_si128((const __m128i *)((char *)&a7 + 4)),
                  *(__int64 *)((char *)&a8 + 4),
                  SHIDWORD(a8),
                  *(_OWORD *)(a1 + 3056),
                  *(_QWORD *)(a1 + 3072));
          *(_QWORD *)(a1 + 3080) = v43;
          *(_QWORD *)(a1 + 3088) = v43;
          if ( !v43 )
            return -64;
        }
        else
        {
          sub_8ECAE0(v28);
          *(_QWORD *)(a1 + 3088) = a5;
          *(_QWORD *)(a1 + 3080) = 0;
        }
        v44 = DWORD2(a12);
        if ( !DWORD2(a12) )
        {
          v116 = (unsigned int)(HIDWORD(a8) - 5);
          if ( (unsigned int)v116 > 4 )
          {
            v45 = 3;
            goto LABEL_70;
          }
          v44 = dword_23B43B0[v116];
        }
        v45 = 9 - v44;
        if ( 9 - v44 > 7 )
        {
          if ( (_DWORD)a13 != 1 )
            goto LABEL_11;
          v117 = DWORD1(a7);
LABEL_102:
          if ( (unsigned int)sub_942E60(&a7) - 2 <= v117 )
            v132 = sub_942E60(&a7) - 2;
          else
            v132 = DWORD1(a7);
          v118 = v132 - v45;
LABEL_71:
          if ( v118 )
          {
            v46 = 1LL << v118;
LABEL_12:
            v47 = a12;
            *(_QWORD *)(a1 + 264) = v46;
            *(_QWORD *)(a1 + 256) = v47;
            if ( !v47 )
            {
              v119 = sub_942E60(&a7);
              v46 = *(_QWORD *)(a1 + 264);
              v47 = 1LL << v119;
              *(_QWORD *)(a1 + 256) = 1LL << v119;
            }
            if ( HIDWORD(a12) )
            {
              v48 = 31;
              *(_QWORD *)(a1 + 2984) = 0;
              v49 = 1;
              _BitScanReverse(&v50, v47 >> 10);
              v51 = 5;
              *(_QWORD *)(a1 + 2992) = (1LL << (41 - (v50 ^ 0x1F))) - 1;
              v52 = 0xCF1BBCDCB7A56463LL;
              do
              {
                if ( (v48 & 1) != 0 )
                  v49 *= v52;
                v48 >>= 1;
                v52 *= v52;
                --v51;
              }
              while ( v51 );
              *(_QWORD *)(a1 + 3000) = v49;
            }
            if ( v46 > v47 )
            {
              *(_QWORD *)(a1 + 256) = v46;
              v47 = v46;
            }
            v53 = sub_8E78E0(v47);
            v54 = *(pthread_mutex_t **)(a1 + 16);
            v55 = v53;
            pthread_mutex_lock(v54);
            v54[1].__align = v55;
            pthread_mutex_unlock(v54);
            v58 = 0;
            if ( *(_DWORD *)(a1 + 136) == 1 )
              v58 = (unsigned int)(1 << *(_DWORD *)(a1 + 44));
            v59 = 1;
            v60 = *(_QWORD *)(a1 + 256);
            if ( *(int *)(a1 + 116) > 0 )
              v59 = *(_DWORD *)(a1 + 116);
            v61 = v60 * v59;
            if ( v61 < v58 )
              v61 = v58;
            v62 = v61 + v60 * ((*(_QWORD *)(a1 + 264) != 0) + 2LL);
            if ( *(_QWORD *)(a1 + 328) < v62 )
            {
              v63 = *(_QWORD *)(a1 + 3072);
              if ( *(_QWORD *)(a1 + 320) )
              {
                v64 = *(void (__fastcall **)(__int64))(a1 + 3064);
                if ( v64 )
                  v64(v63);
                else
                  free(*(void **)(a1 + 320));
                v63 = *(_QWORD *)(a1 + 3072);
              }
              v65 = *(__int64 (__fastcall **)(__int64, size_t))(a1 + 3056);
              if ( v65 )
                v66 = (void *)v65(v63, v62);
              else
                v66 = malloc(v62);
              *(_QWORD *)(a1 + 320) = v66;
              if ( !v66 )
              {
                *(_QWORD *)(a1 + 328) = 0;
                return -64;
              }
              *(_QWORD *)(a1 + 328) = v62;
              v60 = *(_QWORD *)(a1 + 256);
            }
            v67 = _mm_loadu_si128((const __m128i *)&a7);
            v68 = *(pthread_mutex_t **)(a1 + 32);
            *(_QWORD *)(a1 + 336) = 0;
            v69 = _mm_loadu_si128((const __m128i *)&a8);
            v70 = a13;
            *(_QWORD *)(a1 + 296) = 0;
            v71 = _mm_loadu_si128((const __m128i *)&a9);
            v144 = (__int128)v67;
            v72 = _mm_loadu_si128((const __m128i *)&a12);
            v73 = _mm_loadu_si128((const __m128i *)&a10);
            v145 = v69;
            v74 = _mm_loadu_si128((const __m128i *)&a13);
            v75 = _mm_loadu_si128(&a11);
            v146 = v71;
            v76 = _mm_loadu_si128((const __m128i *)&a14);
            v77 = _mm_loadu_si128((const __m128i *)&a15);
            v78 = _mm_loadu_si128((const __m128i *)&a16);
            v147 = v73;
            v148 = v75;
            *(_QWORD *)(a1 + 304) = 0;
            *(_QWORD *)(a1 + 312) = 0;
            *(_QWORD *)(a1 + 280) = 0;
            *(_QWORD *)(a1 + 288) = 0;
            *(_QWORD *)(a1 + 3012) = 0;
            *(_QWORD *)(a1 + 3020) = 0;
            *(_QWORD *)(a1 + 3040) = 0;
            *(_QWORD *)(a1 + 3048) = 0;
            v149 = v72;
            v150 = v74;
            v151 = v76;
            v152 = v77;
            v153 = v78;
            v79 = _mm_loadu_si128((const __m128i *)&a18);
            v80 = _mm_loadu_si128((const __m128i *)&a19);
            v154 = _mm_loadu_si128((const __m128i *)&a17);
            v155 = v79;
            v156 = v80;
            v157 = a20;
            if ( v70 == 1 )
            {
              sub_9346E0((unsigned int *)&v150, (unsigned int *)&v144 + 1);
            }
            else
            {
              v150 = 0;
              v151.m128i_i64[0] = 0;
            }
            *(_DWORD *)(a1 + 2848) = 0;
            if ( v146.m128i_i32[1] )
            {
              sub_8DF940((_QWORD *)(a1 + 2760), 0);
              if ( v150.m128i_i32[0] != 1 )
                goto LABEL_41;
            }
            else if ( v150.m128i_i32[0] != 1 )
            {
LABEL_41:
              v81 = _mm_load_si128(&v145);
              v82 = _mm_load_si128(&v146);
              v83 = _mm_load_si128(&v147);
              v84 = v157;
              *(__m128i *)(a1 + 432) = _mm_load_si128((const __m128i *)&v144);
              v85 = _mm_load_si128(&v148);
              v86 = _mm_load_si128(&v149);
              *(__m128i *)(a1 + 448) = v81;
              v87 = _mm_load_si128(&v150);
              v88 = _mm_load_si128(&v151);
              *(_QWORD *)(a1 + 640) = v84;
              result = 0;
              *(__m128i *)(a1 + 464) = v82;
              v90 = _mm_load_si128(&v152);
              v91 = _mm_load_si128(&v153);
              *(__m128i *)(a1 + 480) = v83;
              v92 = _mm_load_si128(&v154);
              v93 = _mm_load_si128(&v155);
              *(__m128i *)(a1 + 496) = v85;
              v94 = _mm_load_si128(&v156);
              *(__m128i *)(a1 + 512) = v86;
              *(_QWORD *)(a1 + 512) = (unsigned int)v60;
              *(__m128i *)(a1 + 528) = v87;
              *(__m128i *)(a1 + 544) = v88;
              *(__m128i *)(a1 + 560) = v90;
              *(__m128i *)(a1 + 576) = v91;
              *(__m128i *)(a1 + 592) = v92;
              *(__m128i *)(a1 + 608) = v93;
              *(__m128i *)(a1 + 624) = v94;
              return result;
            }
            v135 = (__int64 (__fastcall *)(__int64, __int64))v153.m128i_i64[1];
            v134 = v154.m128i_i64[1];
            v139 = (void (__fastcall *)(__int64))v154.m128i_i64[0];
            v141 = *(_DWORD *)(a1 + 532);
            n = 8LL << v150.m128i_i8[4];
            v142 = *(_DWORD *)(a1 + 536);
            v143 = v150.m128i_u32[1];
            v140 = v150.m128i_i32[1] - v150.m128i_i32[2];
            size = 1LL << (v150.m128i_i8[4] - v150.m128i_i8[8]);
            v138 = sub_934780(
                     v60,
                     v142,
                     v150.m128i_u32[1],
                     (unsigned int)(v150.m128i_i32[1] - v150.m128i_i32[2]),
                     v56,
                     v57,
                     v150.m128i_i32[0],
                     v150.m128i_i64[1]);
            pthread_mutex_lock(v68);
            v68[1].__align = 12 * v138;
            pthread_mutex_unlock(v68);
            *(_DWORD *)(a1 + 684) = 0;
            *(_QWORD *)(a1 + 656) = " ";
            *(_QWORD *)(a1 + 648) = &unk_22B68A7;
            *(_QWORD *)(a1 + 672) = 0x200000002LL;
            v120 = *(void **)(a1 + 688);
            *(_QWORD *)(a1 + 664) = " ";
            *(_DWORD *)(a1 + 680) = 0;
            if ( v120 )
            {
              if ( v143 <= *(_DWORD *)(a1 + 532) )
                goto LABEL_83;
              if ( v139 )
                v139(v134);
              else
                free(v120);
            }
            if ( v135 )
              v121 = (void *)v135(v134, n);
            else
              v121 = malloc(n);
            *(_QWORD *)(a1 + 688) = v121;
LABEL_83:
            v122 = *(void **)(a1 + 704);
            if ( v122 )
            {
              if ( v140 <= v141 - v142 )
              {
                v115 = *(void **)(a1 + 688);
                if ( v115 )
                {
LABEL_86:
                  memset(v115, 0, n);
                  memset(*(void **)(a1 + 704), 0, size);
                  *(_DWORD *)(a1 + 696) = 0;
                  if ( a3 && a4 == 1 )
                  {
                    v123 = *(char **)(a1 + 648);
                    v124 = (unsigned __int64)&a2[a3];
                    v125 = *(unsigned int *)(a1 + 672);
                    if ( a2 == v123 )
                    {
                      v128 = *(_DWORD *)(a1 + 672);
                      v126 = *(_QWORD *)(a1 + 664);
                      v125 = *(unsigned int *)(a1 + 676);
                    }
                    else
                    {
                      v126 = *(_QWORD *)(a1 + 656);
                      *(_DWORD *)(a1 + 676) = v125;
                      v127 = &v123[-v126];
                      *(_QWORD *)(a1 + 664) = v126;
                      v128 = (unsigned int)v127;
                      *(_DWORD *)(a1 + 672) = (_DWORD)v127;
                      *(_QWORD *)(a1 + 656) = a2 - v127;
                      if ( (unsigned int)((_DWORD)v127 - v125) <= 7 )
                      {
                        *(_DWORD *)(a1 + 676) = (_DWORD)v127;
                        v125 = (unsigned int)v127;
                      }
                    }
                    *(_QWORD *)(a1 + 648) = v124;
                    if ( v124 > v126 + v125 && (unsigned __int64)a2 < v126 + (unsigned __int64)v128 )
                    {
                      if ( (__int64)(v124 - v126) <= v128 )
                        v128 = v124 - v126;
                      *(_DWORD *)(a1 + 676) = v128;
                    }
                    sub_9347A0(a1 + 648, (unsigned __int64)a2, v124, &v150);
                    v129 = 0;
                    if ( !v147.m128i_i32[0] )
                      v129 = v124 - *(_DWORD *)(a1 + 656);
                    *(_DWORD *)(a1 + 696) = v129;
                  }
                  v130 = *(_QWORD *)(a1 + 680);
                  v131 = _mm_loadu_si128((const __m128i *)(a1 + 664));
                  *(__m128i *)(a1 + 2944) = _mm_loadu_si128((const __m128i *)(a1 + 648));
                  *(__m128i *)(a1 + 2960) = v131;
                  *(_QWORD *)(a1 + 2976) = v130;
                  goto LABEL_41;
                }
                return -64;
              }
              if ( v139 )
                v139(v134);
              else
                free(v122);
            }
            if ( v135 )
              v114 = (void *)v135(v134, size);
            else
              v114 = malloc(size);
            v115 = *(void **)(a1 + 688);
            *(_QWORD *)(a1 + 704) = v114;
            if ( v115 && v114 )
              goto LABEL_86;
            return -64;
          }
LABEL_11:
          v46 = 0;
          goto LABEL_12;
        }
LABEL_70:
        v117 = DWORD1(a7);
        v118 = DWORD1(a7) - v45;
        if ( (_DWORD)a13 != 1 )
          goto LABEL_71;
        goto LABEL_102;
      }
    }
    sub_942DC0(a1);
    sub_942C40(a1);
    *(_DWORD *)(a1 + 3024) = 1;
    goto LABEL_6;
  }
  v101 = *(char **)(a1 + 8);
  if ( v101 )
    sub_943080(v101, v100, *(void (__fastcall **)(__int64, char *))(a1 + 3064), *(_QWORD *)(a1 + 3072));
  *(_DWORD *)(a1 + 3008) = 0;
  v102 = sub_9431C0(
           (unsigned int *)&v144,
           v100,
           v96,
           v99,
           v97,
           v98,
           *(__int64 (__fastcall **)(__int64, size_t))(a1 + 3056),
           *(void (__fastcall **)(__int64, char *))(a1 + 3064),
           *(_QWORD *)(a1 + 3072));
  *(_QWORD *)(a1 + 8) = v102;
  result = -64;
  if ( v102 )
  {
    *(_DWORD *)(a1 + 3008) = v144 - 1;
    goto LABEL_51;
  }
  return result;
}

