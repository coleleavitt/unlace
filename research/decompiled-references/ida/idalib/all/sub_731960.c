unsigned __int64 __fastcall sub_731960(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int16 v5; // bx
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  unsigned __int16 v8; // r12
  bool v9; // cf
  unsigned __int16 v10; // ax
  unsigned __int64 v11; // rax
  const char *v12; // rsi
  const char *v13; // rdi
  int v14; // eax
  __int32 v15; // edx
  bool v16; // cf
  unsigned __int16 v17; // ax
  unsigned int v18; // eax
  __int64 v19; // r9
  __m128i v20; // xmm0
  __int64 v21; // r10
  __int32 v22; // r11d
  bool v23; // cf
  unsigned __int16 v24; // ax
  unsigned int v25; // eax
  unsigned __int64 v26; // rax
  __int64 v27; // rbx
  __m128i v28; // xmm2
  void *v29; // rdi
  unsigned __int64 v30; // rdx
  void *v31; // rdi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r13
  unsigned __int16 v34; // ax
  bool v35; // cf
  unsigned __int64 v36; // rax
  const char *v37; // rsi
  const char *v38; // rdi
  unsigned __int16 v39; // r12
  unsigned __int16 v40; // ax
  unsigned __int16 v41; // ax
  bool v42; // cf
  unsigned __int64 v43; // rax
  const char *v44; // rsi
  const char *v45; // rdi
  __int64 v46; // rax
  int v47; // ebx
  int v48; // r9d
  __m128i v49; // xmm4
  __int64 v50; // rax
  const char *v51; // r12
  __m128i v52; // xmm0
  int v53; // ebx
  char *v54; // rdi
  char *v55; // rdi
  __int64 v56; // rax
  __m128i v57; // xmm5
  __int64 v58; // rax
  bool v59; // cf
  unsigned __int16 v60; // ax
  bool v61; // cf
  unsigned __int16 v62; // ax
  unsigned int v63; // eax
  unsigned __int64 v64; // rax
  __int64 v65; // rbx
  __m128i v66; // xmm2
  void *v67; // rdi
  unsigned __int64 v68; // rcx
  void *v69; // rdi
  bool v70; // al
  unsigned __int16 v71; // ax
  unsigned __int64 v72; // rbx
  unsigned __int64 v73; // rcx
  void *v74; // r14
  __m128i v75; // xmm1
  __int64 v76; // r13
  int v77; // ebx
  __int64 v78; // rax
  __m128i v79; // xmm2
  void *v80; // rdi
  unsigned __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v85; // rax
  __m128i v86; // xmm1
  __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __m128i v90; // xmm1
  __int64 v91; // r12
  int v92; // ebx
  __int64 v93; // rdx
  __m128i v94; // xmm2
  void *v95; // rdi
  char *v96; // rdi
  const char *v97; // rbx
  __m128i v98; // xmm2
  void *v99; // rdi
  char *v100; // rdi
  unsigned __int64 v101; // rax
  const char *v102; // rsi
  unsigned int v103; // eax
  unsigned __int64 v104; // rax
  const char *v105; // rsi
  const char *v106; // rdi
  unsigned int v107; // eax
  unsigned __int64 v108; // rax
  const char *v109; // rsi
  const char *v110; // rdi
  const char *v111; // rsi
  const char *v112; // rdi
  const char *v113; // rdi
  unsigned int v114; // eax
  __m128i v115; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v116; // [rsp+10h] [rbp-B8h] BYREF
  __m128i v117; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v118; // [rsp+38h] [rbp-90h]
  __m128i v119; // [rsp+40h] [rbp-88h] BYREF
  __int64 v120; // [rsp+50h] [rbp-78h]
  __int64 v121; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __m128i v123; // [rsp+68h] [rbp-60h]
  __int64 v124; // [rsp+78h] [rbp-50h]
  int v125; // [rsp+80h] [rbp-48h]
  unsigned __int64 v126; // [rsp+88h] [rbp-40h]

  v118 = a2;
  v120 = a3;
  v126 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 640 )
  {
    if ( v120 )
    {
      while ( 1 )
      {
        v5 = *(_WORD *)(a1 + 72);
        --v120;
        v6 = a1 + 40;
        v7 = a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v3 >> 3)) >> 1);
        v8 = *(_WORD *)(v7 + 32);
        v9 = v5 < v8;
        if ( v5 == v8
          && (v10 = *(_WORD *)(v7 + 34), v9 = *(_WORD *)(a1 + 74) < v10, *(_WORD *)(a1 + 74) == v10)
          && (v11 = *(_QWORD *)(v7 + 24), v9 = *(_QWORD *)(a1 + 64) < v11, *(_QWORD *)(a1 + 64) == v11) )
        {
          v12 = haystack;
          if ( *(_QWORD *)(v7 + 8) )
            v12 = *(const char **)v7;
          v13 = haystack;
          if ( *(_QWORD *)(a1 + 48) )
            v13 = *(const char **)(a1 + 40);
          v14 = strcmp(v13, v12);
          v15 = *(unsigned __int16 *)(v118 - 8);
          if ( v14 >= 0 )
          {
LABEL_11:
            v16 = v5 < (unsigned __int16)v15;
            if ( v5 == (_WORD)v15
              && (v17 = *(_WORD *)(v118 - 6), v16 = *(_WORD *)(a1 + 74) < v17, *(_WORD *)(a1 + 74) == v17)
              && (v101 = *(_QWORD *)(v118 - 16), v16 = *(_QWORD *)(a1 + 64) < v101, *(_QWORD *)(a1 + 64) == v101) )
            {
              v102 = haystack;
              if ( *(_QWORD *)(v118 - 32) )
              {
                v102 = *(const char **)(v118 - 40);
                if ( *(_QWORD *)(a1 + 48) )
                  goto LABEL_113;
LABEL_92:
                v115.m128i_i32[0] = v15;
                v103 = strcmp(haystack, v102);
                LOWORD(v15) = v115.m128i_i16[0];
                v18 = v103 >> 31;
              }
              else
              {
                if ( !*(_QWORD *)(a1 + 48) )
                  goto LABEL_92;
LABEL_113:
                v113 = *(const char **)(a1 + 40);
                v115.m128i_i32[0] = v15;
                v114 = strcmp(v113, v102);
                LOWORD(v15) = v115.m128i_i16[0];
                v18 = v114 >> 31;
              }
            }
            else
            {
              LOBYTE(v18) = v16;
            }
            v19 = *(_QWORD *)a1;
            v20 = _mm_loadu_si128((const __m128i *)(a1 + 8));
            v21 = *(_QWORD *)(a1 + 24);
            v22 = *(_DWORD *)(a1 + 32);
            if ( (_BYTE)v18 )
              goto LABEL_75;
            v23 = v8 < (unsigned __int16)v15;
            if ( v8 == (_WORD)v15
              && (v24 = *(_WORD *)(v118 - 6), v23 = *(_WORD *)(v7 + 34) < v24, *(_WORD *)(v7 + 34) == v24)
              && (v104 = *(_QWORD *)(v118 - 16), v23 = *(_QWORD *)(v7 + 24) < v104, *(_QWORD *)(v7 + 24) == v104) )
            {
              v105 = haystack;
              if ( *(_QWORD *)(v118 - 32) )
                v105 = *(const char **)(v118 - 40);
              v106 = haystack;
              if ( *(_QWORD *)(v7 + 8) )
                v106 = *(const char **)v7;
              v119.m128i_i64[0] = *(_QWORD *)(a1 + 24);
              v117.m128i_i32[0] = v22;
              v115.m128i_i64[0] = v19;
              v116 = v20;
              v107 = strcmp(v106, v105);
              v19 = v115.m128i_i64[0];
              v20 = _mm_load_si128(&v116);
              v22 = v117.m128i_i32[0];
              v21 = v119.m128i_i64[0];
              v25 = v107 >> 31;
            }
            else
            {
              LOBYTE(v25) = v23;
            }
            if ( !(_BYTE)v25 )
            {
              *(_QWORD *)a1 = 0;
              *(_OWORD *)(a1 + 8) = 0;
              v97 = *(const char **)v7;
              v98 = _mm_loadu_si128((const __m128i *)(v7 + 8));
              *(_QWORD *)v7 = 0;
              *(_OWORD *)(v7 + 8) = 0;
              v99 = *(void **)a1;
              if ( *(_QWORD *)a1 )
              {
                *(_QWORD *)(a1 + 8) = 0;
                v121 = v21;
                v119.m128i_i32[0] = v22;
                v116.m128i_i64[0] = v19;
                v117 = v20;
                v115 = v98;
                qfree(v99);
                v21 = v121;
                v22 = v119.m128i_i32[0];
                v20 = _mm_load_si128(&v117);
                v19 = v116.m128i_i64[0];
                v98 = _mm_load_si128(&v115);
              }
              *(_QWORD *)a1 = v97;
              *(__m128i *)(a1 + 8) = v98;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(v7 + 24);
              *(_WORD *)(a1 + 32) = *(_WORD *)(v7 + 32);
              *(_WORD *)(a1 + 34) = *(_WORD *)(v7 + 34);
              v100 = *(char **)v7;
              if ( *(_QWORD *)v7 )
              {
                *(_QWORD *)(v7 + 8) = 0;
                v119.m128i_i64[0] = v21;
                v117.m128i_i32[0] = v22;
                v115.m128i_i64[0] = v19;
                v116 = v20;
                qfree(v100);
                v21 = v119.m128i_i64[0];
                v22 = v117.m128i_i32[0];
                v20 = _mm_load_si128(&v116);
                v19 = v115.m128i_i64[0];
              }
              *(_QWORD *)v7 = v19;
              *(_QWORD *)(v7 + 24) = v21;
              *(_DWORD *)(v7 + 32) = v22;
              *(__m128i *)(v7 + 8) = v20;
              v5 = *(_WORD *)(a1 + 32);
              goto LABEL_24;
            }
            v26 = v118;
            *(_QWORD *)a1 = 0;
            *(_OWORD *)(a1 + 8) = 0;
            v27 = *(_QWORD *)(v26 - 40);
            v28 = _mm_loadu_si128((const __m128i *)(v26 - 32));
            *(_OWORD *)(v26 - 32) = 0;
            *(_QWORD *)(v26 - 40) = 0;
            v29 = *(void **)a1;
            if ( *(_QWORD *)a1 )
            {
              *(_QWORD *)(a1 + 8) = 0;
              v121 = v21;
              v117.m128i_i32[0] = v22;
              v115.m128i_i64[0] = v19;
              v119 = v28;
              v116 = v20;
              qfree(v29);
              v21 = v121;
              v22 = v117.m128i_i32[0];
              v28 = _mm_load_si128(&v119);
              v20 = _mm_load_si128(&v116);
              v19 = v115.m128i_i64[0];
            }
            v30 = v118;
            *(_QWORD *)a1 = v27;
            *(__m128i *)(a1 + 8) = v28;
            *(_QWORD *)(a1 + 24) = *(_QWORD *)(v30 - 16);
            *(_WORD *)(a1 + 32) = *(_WORD *)(v30 - 8);
            *(_WORD *)(a1 + 34) = *(_WORD *)(v30 - 6);
            v31 = *(void **)(v30 - 40);
            if ( v31 )
            {
              *(_QWORD *)(v30 - 32) = 0;
              v119.m128i_i64[0] = v21;
              v117.m128i_i32[0] = v22;
              v115.m128i_i64[0] = v19;
              v116 = v20;
              qfree(v31);
              v21 = v119.m128i_i64[0];
              v22 = v117.m128i_i32[0];
              v20 = _mm_load_si128(&v116);
              v19 = v115.m128i_i64[0];
            }
            goto LABEL_23;
          }
        }
        else
        {
          v15 = *(unsigned __int16 *)(v118 - 8);
          if ( !v9 )
            goto LABEL_11;
        }
        v59 = v8 < (unsigned __int16)v15;
        if ( v8 == (_WORD)v15 )
        {
          v60 = *(_WORD *)(v118 - 6);
          v59 = *(_WORD *)(v7 + 34) < v60;
          if ( *(_WORD *)(v7 + 34) == v60 )
            break;
        }
        if ( v59 )
          goto LABEL_79;
LABEL_53:
        v61 = v5 < (unsigned __int16)v15;
        if ( v5 == (_WORD)v15
          && (v62 = *(_WORD *)(v118 - 6), v61 = *(_WORD *)(a1 + 74) < v62, *(_WORD *)(a1 + 74) == v62)
          && (v108 = *(_QWORD *)(v118 - 16), v61 = *(_QWORD *)(a1 + 64) < v108, *(_QWORD *)(a1 + 64) == v108) )
        {
          v109 = haystack;
          if ( *(_QWORD *)(v118 - 32) )
            v109 = *(const char **)(v118 - 40);
          v110 = haystack;
          if ( *(_QWORD *)(a1 + 48) )
            v110 = *(const char **)(a1 + 40);
          v63 = (unsigned int)strcmp(v110, v109) >> 31;
        }
        else
        {
          LOBYTE(v63) = v61;
        }
        v19 = *(_QWORD *)a1;
        v20 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v21 = *(_QWORD *)(a1 + 24);
        v22 = *(_DWORD *)(a1 + 32);
        if ( !(_BYTE)v63 )
        {
LABEL_75:
          v85 = *(_QWORD *)(a1 + 40);
          v86 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          *(_QWORD *)(a1 + 40) = v19;
          *(__m128i *)(a1 + 48) = v20;
          *(_QWORD *)a1 = v85;
          v87 = *(_QWORD *)(a1 + 64);
          *(__m128i *)(a1 + 8) = v86;
          *(_QWORD *)(a1 + 24) = v87;
          LODWORD(v87) = *(unsigned __int16 *)(a1 + 74);
          *(_QWORD *)(a1 + 64) = v21;
          *(_DWORD *)(a1 + 72) = v22;
          *(_DWORD *)(a1 + 32) = v5 | ((_DWORD)v87 << 16);
          goto LABEL_24;
        }
        v64 = v118;
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v65 = *(_QWORD *)(v64 - 40);
        v66 = _mm_loadu_si128((const __m128i *)(v64 - 32));
        *(_OWORD *)(v64 - 32) = 0;
        *(_QWORD *)(v64 - 40) = 0;
        v67 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v121 = v21;
          v119.m128i_i32[0] = v22;
          v115.m128i_i64[0] = v19;
          v117 = v66;
          v116 = v20;
          qfree(v67);
          v21 = v121;
          v22 = v119.m128i_i32[0];
          v66 = _mm_load_si128(&v117);
          v20 = _mm_load_si128(&v116);
          v19 = v115.m128i_i64[0];
        }
        v68 = v118;
        *(_QWORD *)a1 = v65;
        *(__m128i *)(a1 + 8) = v66;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(v68 - 16);
        *(_WORD *)(a1 + 32) = *(_WORD *)(v68 - 8);
        *(_WORD *)(a1 + 34) = *(_WORD *)(v68 - 6);
        v69 = *(void **)(v68 - 40);
        if ( v69 )
        {
          *(_QWORD *)(v68 - 32) = 0;
          v119.m128i_i64[0] = v21;
          v117.m128i_i32[0] = v22;
          v115.m128i_i64[0] = v19;
          v116 = v20;
          qfree(v69);
          v21 = v119.m128i_i64[0];
          v22 = v117.m128i_i32[0];
          v20 = _mm_load_si128(&v116);
          v19 = v115.m128i_i64[0];
        }
LABEL_23:
        v32 = v118;
        *(_QWORD *)(v118 - 40) = v19;
        *(_QWORD *)(v32 - 16) = v21;
        *(_DWORD *)(v32 - 8) = v22;
        *(__m128i *)(v32 - 32) = v20;
        v5 = *(_WORD *)(a1 + 32);
LABEL_24:
        v33 = v118;
        while ( 1 )
        {
          while ( 1 )
          {
            v39 = *(_WORD *)(v6 + 32);
            v35 = v39 < v5;
            if ( v39 != v5
              || (v34 = *(_WORD *)(a1 + 34), v35 = *(_WORD *)(v6 + 34) < v34, *(_WORD *)(v6 + 34) != v34)
              || (v36 = *(_QWORD *)(a1 + 24), v35 = *(_QWORD *)(v6 + 24) < v36, *(_QWORD *)(v6 + 24) != v36) )
            {
              if ( v35 )
                goto LABEL_32;
              v40 = *(_WORD *)(v33 - 8);
              v33 -= 40LL;
              if ( v40 == v5 )
              {
                v41 = *(_WORD *)(v33 + 34);
                v42 = *(_WORD *)(a1 + 34) < v41;
                if ( *(_WORD *)(a1 + 34) != v41 )
                  goto LABEL_65;
                goto LABEL_37;
              }
LABEL_61:
              v70 = v5 < v40;
LABEL_62:
              if ( !v70 )
                goto LABEL_43;
              goto LABEL_63;
            }
            v37 = haystack;
            if ( *(_QWORD *)(a1 + 8) )
              v37 = *(const char **)a1;
            v38 = haystack;
            if ( *(_QWORD *)(v6 + 8) )
              v38 = *(const char **)v6;
            if ( strcmp(v38, v37) >= 0 )
              break;
LABEL_32:
            v6 += 40LL;
          }
          do
          {
LABEL_63:
            v40 = *(_WORD *)(v33 - 8);
            v33 -= 40LL;
            if ( v40 != v5 )
              goto LABEL_61;
            v71 = *(_WORD *)(v33 + 34);
            v42 = *(_WORD *)(a1 + 34) < v71;
            if ( *(_WORD *)(a1 + 34) != v71 )
            {
LABEL_65:
              v70 = v42;
              goto LABEL_62;
            }
LABEL_37:
            v43 = *(_QWORD *)(v33 + 24);
            v42 = *(_QWORD *)(a1 + 24) < v43;
            if ( *(_QWORD *)(a1 + 24) != v43 )
              goto LABEL_65;
            v44 = haystack;
            if ( *(_QWORD *)(v33 + 8) )
              v44 = *(const char **)v33;
            v45 = haystack;
            if ( *(_QWORD *)(a1 + 8) )
              v45 = *(const char **)a1;
          }
          while ( strcmp(v45, v44) < 0 );
LABEL_43:
          if ( v6 >= v33 )
            break;
          v46 = *(_QWORD *)v6;
          v47 = *(unsigned __int16 *)(v6 + 34);
          v48 = v39;
          *(_QWORD *)v6 = 0;
          v49 = _mm_loadu_si128((const __m128i *)(v6 + 8));
          v115.m128i_i64[0] = v46;
          v50 = *(_QWORD *)(v6 + 24);
          *(_OWORD *)(v6 + 8) = 0;
          v51 = *(const char **)v33;
          v52 = _mm_loadu_si128((const __m128i *)(v33 + 8));
          v53 = v48 | (v47 << 16);
          *(_QWORD *)v33 = 0;
          *(_OWORD *)(v33 + 8) = 0;
          v54 = *(char **)v6;
          v116.m128i_i64[0] = v50;
          v117 = v49;
          if ( v54 )
          {
            *(_QWORD *)(v6 + 8) = 0;
            v119 = v52;
            qfree(v54);
            v52 = _mm_load_si128(&v119);
          }
          *(_QWORD *)v6 = v51;
          *(__m128i *)(v6 + 8) = v52;
          *(_QWORD *)(v6 + 24) = *(_QWORD *)(v33 + 24);
          *(_WORD *)(v6 + 32) = *(_WORD *)(v33 + 32);
          *(_WORD *)(v6 + 34) = *(_WORD *)(v33 + 34);
          v55 = *(char **)v33;
          if ( *(_QWORD *)v33 )
          {
            *(_QWORD *)(v33 + 8) = 0;
            qfree(v55);
          }
          v56 = v115.m128i_i64[0];
          v57 = _mm_load_si128(&v117);
          *(_DWORD *)(v33 + 32) = v53;
          v6 += 40LL;
          *(_QWORD *)v33 = v56;
          v58 = v116.m128i_i64[0];
          *(__m128i *)(v33 + 8) = v57;
          *(_QWORD *)(v33 + 24) = v58;
          v5 = *(_WORD *)(a1 + 32);
        }
        sub_731960(v6, v118, v120);
        v3 = v6 - a1;
        if ( (__int64)(v6 - a1) <= 640 )
          return v126 - __readfsqword(0x28u);
        v118 = v6;
        if ( !v120 )
          goto LABEL_68;
      }
      v88 = *(_QWORD *)(v118 - 16);
      if ( *(_QWORD *)(v7 + 24) != v88 )
      {
        LOBYTE(v88) = *(_QWORD *)(v7 + 24) < v88;
        goto LABEL_78;
      }
      v111 = haystack;
      if ( *(_QWORD *)(v118 - 32) )
      {
        v111 = *(const char **)(v118 - 40);
        if ( !*(_QWORD *)(v7 + 8) )
          goto LABEL_107;
      }
      else if ( !*(_QWORD *)(v7 + 8) )
      {
LABEL_107:
        v115.m128i_i32[0] = v15;
        LODWORD(v88) = strcmp(haystack, v111);
        LOWORD(v15) = v115.m128i_i16[0];
        LODWORD(v88) = (unsigned int)v88 >> 31;
        goto LABEL_78;
      }
      v112 = *(const char **)v7;
      v115.m128i_i32[0] = v15;
      LODWORD(v88) = strcmp(v112, v111);
      LOWORD(v15) = v115.m128i_i16[0];
      LODWORD(v88) = (unsigned int)v88 >> 31;
LABEL_78:
      if ( (_BYTE)v88 )
      {
LABEL_79:
        v89 = *(_QWORD *)a1;
        v90 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v91 = *(_QWORD *)(a1 + 24);
        v92 = *(_DWORD *)(a1 + 32);
        v93 = *(_QWORD *)v7;
        v94 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        *(_QWORD *)v7 = 0;
        *(_OWORD *)(v7 + 8) = 0;
        v95 = *(void **)a1;
        if ( *(_QWORD *)a1 )
        {
          *(_QWORD *)(a1 + 8) = 0;
          v116.m128i_i64[0] = v93;
          v115.m128i_i64[0] = v89;
          v119 = v94;
          v117 = v90;
          qfree(v95);
          v94 = _mm_load_si128(&v119);
          v90 = _mm_load_si128(&v117);
          v93 = v116.m128i_i64[0];
          v89 = v115.m128i_i64[0];
        }
        *(_QWORD *)a1 = v93;
        *(__m128i *)(a1 + 8) = v94;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(v7 + 24);
        *(_WORD *)(a1 + 32) = *(_WORD *)(v7 + 32);
        *(_WORD *)(a1 + 34) = *(_WORD *)(v7 + 34);
        v96 = *(char **)v7;
        if ( *(_QWORD *)v7 )
        {
          *(_QWORD *)(v7 + 8) = 0;
          v115.m128i_i64[0] = v89;
          v116 = v90;
          qfree(v96);
          v90 = _mm_load_si128(&v116);
          v89 = v115.m128i_i64[0];
        }
        *(_QWORD *)v7 = v89;
        *(_QWORD *)(v7 + 24) = v91;
        *(_DWORD *)(v7 + 32) = v92;
        *(__m128i *)(v7 + 8) = v90;
        v5 = *(_WORD *)(a1 + 32);
        goto LABEL_24;
      }
      goto LABEL_53;
    }
LABEL_68:
    v72 = v118;
    sub_7316A0(a1, v118, v118);
    if ( (__int64)(v72 - a1) > 40 )
    {
      do
      {
        v118 -= 40LL;
        v73 = v118;
        v74 = *(void **)v118;
        v75 = _mm_loadu_si128((const __m128i *)(v118 + 8));
        *(_OWORD *)(v118 + 8) = 0;
        v76 = *(_QWORD *)(v73 + 24);
        v77 = *(_DWORD *)(v73 + 32);
        *(_QWORD *)v73 = 0;
        v78 = *(_QWORD *)a1;
        v79 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        *(_QWORD *)a1 = 0;
        *(_OWORD *)(a1 + 8) = 0;
        v80 = *(void **)v73;
        if ( *(_QWORD *)v73 )
        {
          *(_QWORD *)(v73 + 8) = 0;
          v115.m128i_i64[0] = v78;
          v117 = v79;
          v116 = v75;
          qfree(v80);
          v79 = _mm_load_si128(&v117);
          v75 = _mm_load_si128(&v116);
          v78 = v115.m128i_i64[0];
        }
        v81 = v118;
        v125 = v77;
        *(_QWORD *)v118 = v78;
        *(__m128i *)(v81 + 8) = v79;
        v82 = *(_QWORD *)(a1 + 24);
        v124 = v76;
        *(_QWORD *)(v81 + 24) = v82;
        LOWORD(v82) = *(_WORD *)(a1 + 32);
        ptr = v74;
        *(_WORD *)(v81 + 32) = v82;
        LOWORD(v82) = *(_WORD *)(a1 + 34);
        v123 = v75;
        *(_WORD *)(v81 + 34) = v82;
        v83 = v81 - a1;
        sub_730D00(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v81 - a1) >> 3), (unsigned __int64)&ptr);
        if ( ptr )
          qfree(ptr);
      }
      while ( v83 > 40 );
    }
  }
  return v126 - __readfsqword(0x28u);
}
