_QWORD *__fastcall sub_F47B30(__int64 a1, __int64 a2, double a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // r13
  _BYTE *v9; // rax
  char *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned int *v13; // rdx
  unsigned __int64 v14; // r12
  size_t v15; // rax
  __m128i v16; // xmm2
  void *v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm3
  _BYTE *v20; // rdx
  __m128 v21; // xmm0
  __m128i *v22; // rdi
  unsigned __int64 v23; // rax
  __m128i *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *result; // rax
  __int64 v28; // rbp
  const char *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r12
  __int64 v33; // r12
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // eax
  __int64 v37; // rax
  size_t v38; // rax
  bool v39; // zf
  __m128i v40; // xmm1
  __m128i v41; // xmm7
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm7
  void *v45; // rdx
  __int64 v46; // rdx
  __m128i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdi
  void (__fastcall *v56)(__int64, __int64, __int64); // rax
  __int64 v57; // rax
  _BYTE *v58; // rax
  __int64 *v59; // r13
  __int64 *v60; // rdx
  __int64 v61; // r12
  size_t v62; // r14
  void *v63; // rdi
  __int64 v64; // rsi
  __int64 *v65; // r13
  __int64 v66; // r12
  __int64 v67; // rdi
  _WORD *v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r15
  _BYTE *v72; // rax
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  _WORD *v76; // rdi
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rdx
  unsigned int *v79; // rsi
  size_t v80; // r8
  const void *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rax
  _WORD *v84; // rdx
  __int64 v85; // r12
  __int64 v86; // rax
  _BYTE *v87; // rdx
  __int64 v88; // r12
  size_t v89; // r13
  void *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // rdi
  void (__fastcall *v97)(__int64, __int64, __int64); // rax
  __int64 v98; // rax
  _BYTE *v99; // rax
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __m128i *v105; // r14
  void *v106; // rax
  __int64 v107; // rax
  __m128i v108; // xmm5
  _BYTE *v109; // rdx
  __m128i si128; // xmm0
  void (__fastcall *v111)(__m256i *, __m256i *, __int64); // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // rax
  __m128i *v115; // r14
  __int64 v116; // rax
  __int64 v117; // rax
  __m128i v118; // xmm3
  void *v119; // rdx
  __m128i v120; // xmm0
  void (__fastcall *v121)(__m128i *, __m128i *, __int64); // rax
  __int64 v122; // [rsp+0h] [rbp-188h] BYREF
  unsigned __int64 v123; // [rsp+8h] [rbp-180h]
  __int64 *v124; // [rsp+10h] [rbp-178h]
  size_t v125; // [rsp+18h] [rbp-170h]
  char v126; // [rsp+2Dh] [rbp-15Bh] BYREF
  char v127; // [rsp+2Eh] [rbp-15Ah] BYREF
  char v128; // [rsp+2Fh] [rbp-159h] BYREF
  __m128 v129; // [rsp+30h] [rbp-158h] BYREF
  __int64 v130; // [rsp+40h] [rbp-148h] BYREF
  __m128i v131; // [rsp+50h] [rbp-138h] BYREF
  __m128 v132; // [rsp+60h] [rbp-128h] BYREF
  void *v133; // [rsp+70h] [rbp-118h]
  __m128i v134; // [rsp+78h] [rbp-110h] BYREF
  __m256i v135; // [rsp+90h] [rbp-F8h] BYREF
  void *v136; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v137; // [rsp+B8h] [rbp-D0h]
  __m128i v138; // [rsp+C0h] [rbp-C8h] BYREF
  void *v139; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v140; // [rsp+D8h] [rbp-B0h] BYREF
  void *v141; // [rsp+E8h] [rbp-A0h]
  void *v142; // [rsp+F0h] [rbp-98h]
  _BYTE v143[24]; // [rsp+F8h] [rbp-90h] BYREF
  __m128i *v144; // [rsp+110h] [rbp-78h]

  sub_F2AD60(a1, a2);
  sub_F2A610(a1, *(_QWORD *)(a2 + 48));
  v5 = sub_B77D20(a2);
  sub_F2AEB0(a1, v5);
  v7 = *(_BYTE *)(a2 + 81) >> 5;
  if ( *(_BYTE *)(a2 + 81) >> 5 )
  {
    v8 = *(_QWORD *)(a1 + 1096);
    v9 = *(_BYTE **)(v8 + 32);
    if ( *(_QWORD *)(v8 + 24) <= (unsigned __int64)v9 )
    {
      v8 = sub_227BA10(*(_QWORD *)(a1 + 1096), 32);
    }
    else
    {
      *(_QWORD *)(v8 + 32) = v9 + 1;
      *v9 = 32;
    }
    v10 = sub_B730C0(v7);
    sub_995540(v8, v10);
  }
  v11 = *(_QWORD *)(a2 + 80);
  if ( (v11 & 0x20000) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " inline");
    v11 = *(_QWORD *)(a2 + 80);
  }
  if ( (v11 & 0x40000) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " virtual");
    if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
      goto LABEL_9;
  }
  else if ( (*(_QWORD *)(a2 + 8) & 7LL) != 4 )
  {
    goto LABEL_9;
  }
  sub_995540(*(_QWORD *)(a1 + 1096), " __module_private__");
LABEL_9:
  v12 = *(_QWORD *)(a2 + 80);
  if ( (v12 & 0x80000) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " pure");
    v12 = *(_QWORD *)(a2 + 80);
  }
  if ( (v12 & 0x2000000) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " default");
    if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) + 82) & 0x40) != 0 )
      sub_995540(*(_QWORD *)(a1 + 1096), "_delete");
    v12 = *(_QWORD *)(a2 + 80);
  }
  if ( (*(_BYTE *)(a2 + 82) & 0x40) != 0 && (v12 & 0x2000000) == 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " delete");
    v12 = *(_QWORD *)(a2 + 80);
    v13 = (unsigned int *)(v12 >> 16);
    if ( (v12 & 0x800000) == 0 )
      goto LABEL_15;
LABEL_51:
    sub_995540(*(_QWORD *)(a1 + 1096), " trivial");
    v12 = *(_QWORD *)(a2 + 80);
    goto LABEL_15;
  }
  v13 = (unsigned int *)(v12 >> 16);
  if ( (v12 & 0x800000) != 0 )
    goto LABEL_51;
LABEL_15:
  if ( (v12 & 0x8000000) != 0 )
  {
    v13 = *(unsigned int **)(a2 + 128);
    if ( *((_BYTE *)v13 + 4) )
    {
      v6 = *v13;
      v14 = *(_QWORD *)&v13[2 * v6 + 2];
      if ( v14 )
      {
        if ( *(_BYTE *)(a1 + 1056) )
        {
          *(_BYTE *)(a1 + 1056) = 0;
          sub_F439B0(a1, v14, a3);
          v50 = *(unsigned int *)(a1 + 24);
          if ( (_DWORD)v50 )
          {
            v51 = *(_QWORD *)(a1 + 16);
            v127 = 1;
            v52 = v51 + 32 * v50 - 32;
            if ( !*(_QWORD *)(v52 + 16) )
              goto LABEL_153;
            while ( 1 )
            {
              (*(void (__fastcall **)(__int64, char *))(v52 + 24))(v52, &v127);
              v54 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
              *(_DWORD *)(a1 + 24) = v54;
              v55 = *(_QWORD *)(a1 + 16) + 32 * v54;
              v56 = *(void (__fastcall **)(__int64, __int64, __int64))(v55 + 16);
              if ( v56 )
                v56(v55, v55, 3);
              v57 = *(unsigned int *)(a1 + 24);
              if ( !(_DWORD)v57 )
                break;
              v53 = *(_QWORD *)(a1 + 16);
              v127 = 1;
              v52 = v53 + 32 * v57 - 32;
              if ( !*(_QWORD *)(v52 + 16) )
                goto LABEL_153;
            }
          }
          v58 = *(_BYTE **)(a1 + 1064);
          *(_QWORD *)(a1 + 1072) = 0;
          *v58 = 0;
          sub_995540(*(_QWORD *)a1, "\n");
          *(_BYTE *)(a1 + 1056) = 1;
          v12 = *(_QWORD *)(a2 + 80);
        }
        else
        {
          v15 = j__strlen("delete message");
          v131.m128i_i64[0] = a1;
          v131.m128i_i64[1] = v14;
          v132.m128_u64[0] = a1;
          v132.m128_u64[1] = (unsigned __int64)&v134;
          sub_F24710(&v132.m128_u64[1], "delete message", (__int64)&aDeleteMessage[v15]);
          if ( *(_BYTE *)(a1 + 1057) )
          {
            v16 = _mm_loadu_si128((const __m128i *)&v131.m128i_u64[1]);
            v139 = (void *)v131.m128i_i64[0];
            v141 = v143;
            v140 = v16;
            if ( (__m128i *)v132.m128_u64[1] == &v134 )
            {
              *(__m128i *)v143 = _mm_loadu_si128(&v134);
            }
            else
            {
              v141 = (void *)v132.m128_u64[1];
              *(_QWORD *)v143 = v134.m128i_i64[0];
            }
            v17 = v133;
            v133 = nullptr;
            v134.m128i_i8[0] = 0;
            v142 = v17;
            v132.m128_u64[1] = (unsigned __int64)&v134;
            v135.m256i_i64[2] = 0;
            v18 = operator new(0x38u);
            v19 = _mm_loadu_si128(&v140);
            *(_QWORD *)v18 = v139;
            *(_QWORD *)(v18 + 24) = v18 + 40;
            v20 = v141;
            *(__m128i *)(v18 + 8) = v19;
            if ( v20 == v143 )
            {
              *(__m128i *)(v18 + 40) = _mm_loadu_si128((const __m128i *)v143);
            }
            else
            {
              *(_QWORD *)(v18 + 24) = v20;
              *(_QWORD *)(v18 + 40) = *(_QWORD *)v143;
            }
            v135.m256i_i64[0] = v18;
            *(_QWORD *)(v18 + 32) = v142;
            v122 = (__int64)sub_F44AB0;
            v141 = v143;
            v142 = nullptr;
            v21 = _mm_loadh_ps((const double *)&v122);
            v143[0] = 0;
            *(__m128 *)&v135.m256i_u64[2] = v21;
            sub_ACD330(a1 + 16, (__m128i *)&v135);
            if ( v135.m256i_i64[2] )
              ((void (__fastcall *)(__m256i *, __m256i *, __int64))v135.m256i_i64[2])(&v135, &v135, 3);
          }
          else
          {
            v102 = *(unsigned int *)(a1 + 24);
            v103 = *(_QWORD *)(a1 + 16);
            v126 = 0;
            v104 = v103 + 32 * v102 - 32;
            if ( !*(_QWORD *)(v104 + 16) )
              goto LABEL_153;
            (*(void (__fastcall **)(__int64, char *))(v104 + 24))(v104, &v126);
            v105 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
            v140 = _mm_loadu_si128((const __m128i *)&v131.m128i_u64[1]);
            v139 = (void *)v131.m128i_i64[0];
            v141 = v143;
            if ( (__m128i *)v132.m128_u64[1] == &v134 )
            {
              *(__m128i *)v143 = _mm_loadu_si128(&v134);
            }
            else
            {
              v141 = (void *)v132.m128_u64[1];
              *(_QWORD *)v143 = v134.m128i_i64[0];
            }
            v106 = v133;
            v133 = nullptr;
            v134.m128i_i8[0] = 0;
            v142 = v106;
            v132.m128_u64[1] = (unsigned __int64)&v134;
            v135.m256i_i64[2] = 0;
            v107 = operator new(0x38u);
            v108 = _mm_loadu_si128(&v140);
            *(_QWORD *)v107 = v139;
            *(_QWORD *)(v107 + 24) = v107 + 40;
            v109 = v141;
            *(__m128i *)(v107 + 8) = v108;
            if ( v109 == v143 )
            {
              *(__m128i *)(v107 + 40) = _mm_loadu_si128((const __m128i *)v143);
            }
            else
            {
              *(_QWORD *)(v107 + 24) = v109;
              *(_QWORD *)(v107 + 40) = *(_QWORD *)v143;
            }
            v135.m256i_i64[0] = v107;
            v143[0] = 0;
            si128 = _mm_load_si128((const __m128i *)&v135);
            *(_QWORD *)(v107 + 32) = v142;
            v141 = v143;
            v142 = nullptr;
            *(__m128i *)v135.m256i_i8 = _mm_loadu_si128(v105);
            v111 = (void (__fastcall *)(__m256i *, __m256i *, __int64))v105[1].m128i_i64[0];
            v13 = (unsigned int *)v105[1].m128i_i64[1];
            *v105 = si128;
            v135.m256i_i64[2] = (__int64)v111;
            v105[1].m128i_i64[0] = (__int64)sub_F258A0;
            v6 = (__int64)sub_F44AB0;
            v135.m256i_i64[3] = (__int64)v13;
            v105[1].m128i_i64[1] = (__int64)sub_F44AB0;
            if ( v111 )
              v111(&v135, &v135, 3);
          }
          if ( v141 != v143 )
            operator delete(v141);
          v22 = (__m128i *)v132.m128_u64[1];
          *(_BYTE *)(a1 + 1057) = 0;
          if ( v22 != &v134 )
            operator delete(v22);
          v12 = *(_QWORD *)(a2 + 80);
        }
      }
    }
  }
  if ( (v12 & 0x10000000) != 0 )
  {
    v29 = " not_selected";
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x24 )
      v29 = " ineligible";
    sub_995540(*(_QWORD *)(a1 + 1096), v29);
  }
  v23 = *(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v24 = *(__m128i **)v23;
  if ( *(_BYTE *)(*(_QWORD *)v23 + 16LL) == 26
    || *(_BYTE *)(*(_QWORD *)(v24->m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
    && (v24 = (__m128i *)sub_F63050(v24, v24, v13, v6)) != nullptr )
  {
    sub_A5E110((__m128 *)&v139, (__int64)v24);
    if ( (_DWORD)v141 == 9 )
    {
      v49 = sub_995540(*(_QWORD *)(a1 + 1096), " noexcept-unevaluated ");
      v24 = *(__m128i **)&v143[16];
      sub_227B9B0(v49, *(_QWORD *)&v143[16]);
    }
    else if ( (_DWORD)v141 == 10 )
    {
      v48 = sub_995540(*(_QWORD *)(a1 + 1096), " noexcept-uninstantiated ");
      v24 = v144;
      sub_227B9B0(v48, v144);
    }
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3 && (unsigned int)sub_B984E0(a2) )
  {
    v38 = j__strlen(&byte_22F0C30);
    v122 = a1;
    v39 = *(_BYTE *)(a1 + 1056) == 0;
    v130 = a1;
    v129 = _mm_loadh_ps((const double *)&v122);
    if ( !v39 )
    {
      *(_BYTE *)(a1 + 1056) = 0;
      v59 = (__int64 *)sub_B98510(a2);
      v124 = v60;
      v61 = *(_QWORD *)(v129.m128_u64[1] + 1096);
      v62 = j__strlen("Overrides: [ ");
      v63 = *(void **)(v61 + 32);
      if ( v62 > *(_QWORD *)(v61 + 24) - (_QWORD)v63 )
      {
        sub_227BF10(v61, "Overrides: [ ", v62);
      }
      else if ( v62 )
      {
        memcpy(v63, "Overrides: [ ", v62);
        *(_QWORD *)(v61 + 32) += v62;
      }
      v64 = *v59;
      v65 = v59 + 1;
      sub_F26F10((__int64)&v130, v64);
      for ( ; v124 != v65; ++v65 )
      {
        while ( 1 )
        {
          v66 = *v65;
          v67 = *(_QWORD *)(v129.m128_u64[1] + 1096);
          v68 = *(_WORD **)(v67 + 32);
          if ( *(_QWORD *)(v67 + 24) - (_QWORD)v68 > 1u )
          {
            *v68 = 8236;
            *(_QWORD *)(v67 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v67, ", ", 2);
          }
          v69 = *(_QWORD *)(v66 + 48);
          if ( (v69 & 8) != 0 )
          {
            v100 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF0LL);
            v122 = *(_QWORD *)(v66 + 48) & 7LL
                 | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)(v66 + 48) & 0xFFFFFFFFFFFFFFF0LL));
            v123 = v100;
          }
          else
          {
            v70 = *(_QWORD *)(v66 + 48) & 7LL;
            v123 = v69 & 0xFFFFFFFFFFFFFFF0LL;
            v122 = (unsigned int)v70;
          }
          v71 = sub_227B9B0(*(_QWORD *)(v130 + 1096), v66);
          v72 = *(_BYTE **)(v71 + 32);
          if ( *(_BYTE **)(v71 + 24) == v72 )
          {
            v71 = sub_227BF10(v71, " ", 1);
          }
          else
          {
            *v72 = 32;
            ++*(_QWORD *)(v71 + 32);
          }
          v73 = *(_QWORD *)(sub_B8C1B0(v66 + 72) + 16);
          if ( (v73 & 4) != 0 )
            v74 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v74 = v73 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v74 )
            BUG();
          v75 = *(_QWORD *)(v74 - 24);
          v76 = *(_WORD **)(v71 + 32);
          v77 = *(_QWORD *)(v71 + 24) - (_QWORD)v76;
          if ( (v75 & 7) == 0 )
          {
            v78 = v75 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v78 )
            {
              v79 = *(unsigned int **)(v78 + 16);
              v80 = *v79;
              v81 = v79 + 4;
              if ( v80 <= v77 )
              {
                if ( v80 )
                {
                  v125 = v80;
                  memcpy(v76, v81, v80);
                  v101 = *(_QWORD *)(v71 + 24);
                  v76 = (_WORD *)(v125 + *(_QWORD *)(v71 + 32));
                  *(_QWORD *)(v71 + 32) = v76;
                  v77 = v101 - (_QWORD)v76;
                }
              }
              else
              {
                v82 = sub_227BF10(v71, v81, v80);
                v76 = *(_WORD **)(v82 + 32);
                v71 = v82;
                v77 = *(_QWORD *)(v82 + 24) - (_QWORD)v76;
              }
            }
          }
          if ( v77 > 1 )
          {
            *v76 = 14906;
            *(_QWORD *)(v71 + 32) += 2LL;
          }
          else
          {
            v71 = sub_227BF10(v71, "::", 2);
          }
          v83 = sub_B86360(v71, *(_QWORD *)(v66 + 40));
          v84 = *(_WORD **)(v83 + 32);
          v85 = v83;
          if ( *(_QWORD *)(v83 + 24) - (_QWORD)v84 > 1u )
          {
            *v84 = 10016;
            *(_QWORD *)(v83 + 32) += 2LL;
          }
          else
          {
            v85 = sub_227BF10(v83, " '", 2);
          }
          sub_F783D0(&v139, v123, v122, v130 + 1144);
          v86 = sub_227BF10(v85, v139, v140.m128i_i64[0]);
          v87 = *(_BYTE **)(v86 + 32);
          if ( *(_BYTE **)(v86 + 24) == v87 )
          {
            sub_227BF10(v86, "'", 1);
          }
          else
          {
            *v87 = 39;
            ++*(_QWORD *)(v86 + 32);
          }
          if ( v139 == &v140.m128i_u64[1] )
            break;
          operator delete(v139);
          if ( v124 == ++v65 )
            goto LABEL_107;
        }
      }
LABEL_107:
      v88 = *(_QWORD *)(v129.m128_u64[1] + 1096);
      v89 = j__strlen(" ]");
      v90 = *(void **)(v88 + 32);
      if ( v89 > *(_QWORD *)(v88 + 24) - (_QWORD)v90 )
      {
        sub_227BF10(v88, " ]", v89);
      }
      else if ( v89 )
      {
        memcpy(v90, " ]", v89);
        *(_QWORD *)(v88 + 32) += v89;
      }
      v91 = *(unsigned int *)(a1 + 24);
      if ( (_DWORD)v91 )
      {
        v92 = *(_QWORD *)(a1 + 16);
        LOBYTE(v139) = 1;
        v93 = v92 + 32 * v91 - 32;
        if ( !*(_QWORD *)(v93 + 16) )
          goto LABEL_153;
        while ( 1 )
        {
          (*(void (__fastcall **)(__int64, void **))(v93 + 24))(v93, &v139);
          v95 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          *(_DWORD *)(a1 + 24) = v95;
          v96 = *(_QWORD *)(a1 + 16) + 32 * v95;
          v97 = *(void (__fastcall **)(__int64, __int64, __int64))(v96 + 16);
          if ( v97 )
            v97(v96, v96, 3);
          v98 = *(unsigned int *)(a1 + 24);
          if ( !(_DWORD)v98 )
            break;
          v94 = *(_QWORD *)(a1 + 16);
          LOBYTE(v139) = 1;
          v93 = v94 + 32 * v98 - 32;
          if ( !*(_QWORD *)(v93 + 16) )
            goto LABEL_153;
        }
      }
      v99 = *(_BYTE **)(a1 + 1064);
      v24 = (__m128i *)"\n";
      *(_QWORD *)(a1 + 1072) = 0;
      *v99 = 0;
      sub_995540(*(_QWORD *)a1, "\n");
      *(_BYTE *)(a1 + 1056) = 1;
      goto LABEL_38;
    }
    v40 = _mm_load_si128((const __m128i *)&v129);
    v135.m256i_i64[0] = a1;
    v135.m256i_i64[3] = a1;
    *(__m128i *)&v135.m256i_u64[1] = v40;
    v136 = &v138;
    sub_F24710(&v136, &byte_22F0C30, (__int64)(&byte_22F0C30 + v38));
    if ( *(_BYTE *)(a1 + 1057) )
    {
      v41 = _mm_loadu_si128((const __m128i *)&v135.m256i_u64[1]);
      v139 = (void *)v135.m256i_i64[0];
      v140 = v41;
      v141 = (void *)v135.m256i_i64[3];
      v142 = &v143[8];
      if ( v136 == &v138 )
      {
        *(__m128i *)&v143[8] = _mm_load_si128(&v138);
      }
      else
      {
        v142 = v136;
        *(_QWORD *)&v143[8] = v138.m128i_i64[0];
      }
      v42 = v137;
      v137 = 0;
      v138.m128i_i8[0] = 0;
      *(_QWORD *)v143 = v42;
      v136 = &v138;
      v132.m128_u64[0] = 0;
      v43 = operator new(0x40u);
      v44 = _mm_loadu_si128(&v140);
      *(_QWORD *)v43 = v139;
      v45 = v141;
      *(__m128i *)(v43 + 8) = v44;
      *(_QWORD *)(v43 + 24) = v45;
      *(_QWORD *)(v43 + 32) = v43 + 48;
      if ( v142 == &v143[8] )
      {
        *(__m128i *)(v43 + 48) = _mm_load_si128((const __m128i *)&v143[8]);
      }
      else
      {
        *(_QWORD *)(v43 + 32) = v142;
        *(_QWORD *)(v43 + 48) = *(_QWORD *)&v143[8];
      }
      v46 = *(_QWORD *)v143;
      v131.m128i_i64[0] = v43;
      v24 = &v131;
      *(_QWORD *)v143 = 0;
      *(_QWORD *)(v43 + 40) = v46;
      v122 = (__int64)sub_F30ED0;
      v142 = &v143[8];
      v143[8] = 0;
      v132 = _mm_loadh_ps((const double *)&v122);
      sub_ACD330(a1 + 16, &v131);
      if ( v132.m128_u64[0] )
      {
        v24 = &v131;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v132.m128_u64[0])(&v131, &v131, 3);
      }
LABEL_60:
      if ( v142 != &v143[8] )
        operator delete(v142);
      v47 = (__m128i *)v136;
      *(_BYTE *)(a1 + 1057) = 0;
      if ( v47 != &v138 )
        operator delete(v47);
      goto LABEL_38;
    }
    v112 = *(unsigned int *)(a1 + 24);
    v113 = *(_QWORD *)(a1 + 16);
    v128 = 0;
    v114 = v113 + 32 * v112 - 32;
    if ( *(_QWORD *)(v114 + 16) )
    {
      v24 = (__m128i *)&v128;
      (*(void (__fastcall **)(__int64, char *))(v114 + 24))(v114, &v128);
      v115 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v140 = _mm_loadu_si128((const __m128i *)&v135.m256i_u64[1]);
      v139 = (void *)v135.m256i_i64[0];
      v141 = (void *)v135.m256i_i64[3];
      v142 = &v143[8];
      if ( v136 == &v138 )
      {
        *(__m128i *)&v143[8] = _mm_load_si128(&v138);
      }
      else
      {
        v142 = v136;
        *(_QWORD *)&v143[8] = v138.m128i_i64[0];
      }
      v116 = v137;
      v137 = 0;
      v138.m128i_i8[0] = 0;
      *(_QWORD *)v143 = v116;
      v136 = &v138;
      v132.m128_u64[0] = 0;
      v117 = operator new(0x40u);
      v118 = _mm_loadu_si128(&v140);
      *(_QWORD *)v117 = v139;
      v119 = v141;
      *(__m128i *)(v117 + 8) = v118;
      *(_QWORD *)(v117 + 24) = v119;
      *(_QWORD *)(v117 + 32) = v117 + 48;
      if ( v142 == &v143[8] )
      {
        *(__m128i *)(v117 + 48) = _mm_load_si128((const __m128i *)&v143[8]);
      }
      else
      {
        *(_QWORD *)(v117 + 32) = v142;
        *(_QWORD *)(v117 + 48) = *(_QWORD *)&v143[8];
      }
      v131.m128i_i64[0] = v117;
      v143[8] = 0;
      v120 = _mm_load_si128(&v131);
      *(_QWORD *)(v117 + 40) = *(_QWORD *)v143;
      v142 = &v143[8];
      *(_QWORD *)v143 = 0;
      v131 = _mm_loadu_si128(v115);
      v121 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v115[1].m128i_i64[0];
      v13 = (unsigned int *)v115[1].m128i_i64[1];
      *v115 = v120;
      v132.m128_u64[0] = (unsigned __int64)v121;
      v115[1].m128i_i64[0] = (__int64)sub_F257E0;
      v6 = (__int64)sub_F30ED0;
      v132.m128_u64[1] = (unsigned __int64)v13;
      v115[1].m128i_i64[1] = (__int64)sub_F30ED0;
      if ( v121 )
      {
        v24 = &v131;
        v121(&v131, &v131, 3);
      }
      goto LABEL_60;
    }
LABEL_153:
    std::__throw_bad_function_call();
  }
LABEL_38:
  if ( (*(_QWORD *)(a2 + 80) & 0x20000LL) != 0 || (*(_QWORD *)(a2 + 80) & 0x10000LL) == 0 )
  {
    if ( !(unsigned int)sub_B76070(a2, (__int64)v24, (__int64)v13, v6) )
      goto LABEL_40;
  }
  else
  {
    v24 = (__m128i *)" implicit-inline";
    sub_995540(*(_QWORD *)(a1 + 1096), " implicit-inline");
    if ( !(unsigned int)sub_B76070(a2, (__int64)" implicit-inline", v30, v31) )
      goto LABEL_40;
  }
  v32 = *(_QWORD *)(a2 + 120);
  sub_B76070(a2, (__int64)v24, v25, v26);
  if ( !v32 )
  {
    v33 = sub_995540(*(_QWORD *)(a1 + 1096), " <<<NULL params x ");
    v36 = sub_B76070(a2, (__int64)" <<<NULL params x ", v34, v35);
    v37 = sub_227B910(v33, v36);
    sub_995540(v37, ">>>");
  }
LABEL_40:
  result = sub_B77970(a2);
  v28 = (__int64)result;
  if ( result )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " instantiated_from");
    return (_QWORD *)sub_F29AE0(a1, v28);
  }
  return result;
}
