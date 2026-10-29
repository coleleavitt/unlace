__int64 __fastcall sub_4EC210(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int16 a5,
        int a6,
        double a7,
        __m128 a8,
        int a9)
{
  __int64 v10; // rbx
  __int64 **v11; // rdi
  const char *v12; // r13
  __int64 *v13; // r14
  __int64 **v14; // rbx
  __int64 **v15; // rax
  _QWORD *v16; // rsi
  __int64 v17; // r9
  __int64 *v18; // rax
  __int64 v20; // rax
  const char *p_ptr; // rsi
  __int64 **v22; // rax
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // r14
  __int64 v27; // r13
  __m128i v28; // xmm0
  int v29; // eax
  const char *v30; // rdi
  const char *v31; // rdi
  char *file_ext; // rax
  __int64 *v33; // rax
  void *v34; // rdi
  double *v35; // r15
  int v36; // eax
  __int64 v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v40; // rdx
  const char *v41; // rsi
  double *v42; // rax
  __int64 v43; // rcx
  int v44; // r8d
  int v45; // r9d
  const char *v46; // rdi
  int v47; // r13d
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  const char *v52; // rdi
  char *v53; // rax
  const __m128i *v54; // rdx
  const char *v55; // r11
  void *v56; // rdi
  __int64 v57; // rdx
  _DWORD *v58; // r15
  __int64 v59; // rbx
  __int64 v60; // r14
  __int64 v61; // rax
  double *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // r8d
  int v66; // r9d
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rax
  _QWORD *v72; // r15
  __m128i v73; // xmm1
  __int64 v74; // r8
  __int64 v75; // rax
  __int64 v76; // rax
  __m128i *v77; // rax
  __m128i v78; // xmm0
  bool v79; // zf
  __int64 v80; // rax
  __int64 v81; // rax
  size_t v82; // rax
  size_t v83; // r9
  __m128i v84; // xmm1
  unsigned __int64 v85; // r8
  __int64 v86; // rax
  __m128i *v87; // rax
  __m128i v88; // xmm0
  __int64 v89; // rdx
  unsigned __int64 *v90; // rdi
  __int64 v91; // rsi
  __int64 v92; // rcx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // r8d
  int v98; // r9d
  void *v99; // rax
  size_t v100; // r9
  __int64 v101; // rax
  void *v102; // rax
  __int64 v103; // rax
  const char *src; // [rsp+0h] [rbp-100h]
  void *srca; // [rsp+0h] [rbp-100h]
  size_t v106; // [rsp+8h] [rbp-F8h]
  __int64 v107; // [rsp+8h] [rbp-F8h]
  __int64 v108; // [rsp+10h] [rbp-F0h]
  size_t v109; // [rsp+10h] [rbp-F0h]
  size_t n; // [rsp+18h] [rbp-E8h]
  size_t na; // [rsp+18h] [rbp-E8h]
  const void *nb; // [rsp+18h] [rbp-E8h]
  size_t nc; // [rsp+18h] [rbp-E8h]
  _DWORD *extlang; // [rsp+20h] [rbp-E0h]
  void *v115; // [rsp+20h] [rbp-E0h]
  unsigned int v116; // [rsp+20h] [rbp-E0h]
  const __m128i *v117; // [rsp+20h] [rbp-E0h]
  void *v118; // [rsp+20h] [rbp-E0h]
  bool v120; // [rsp+28h] [rbp-D8h]
  __int64 v121; // [rsp+28h] [rbp-D8h]
  unsigned int v125; // [rsp+40h] [rbp-C0h]
  size_t v126; // [rsp+40h] [rbp-C0h]
  void *ptr; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v129; // [rsp+58h] [rbp-A8h]
  __m128i v130; // [rsp+70h] [rbp-90h] BYREF
  __m128i v131; // [rsp+80h] [rbp-80h] BYREF
  __m128i v132; // [rsp+90h] [rbp-70h] BYREF
  __m128i v133; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v134; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v135; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v136; // [rsp+C8h] [rbp-38h]

  v136 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a3 + 8) <= 1u )
    return 0;
  v10 = a3;
  if ( !a2 || a1 )
  {
    if ( !qword_2CCBF88 )
    {
      if ( a1 )
      {
        v130.m128i_i64[0] = 0;
        v135 = nullptr;
LABEL_41:
        p_ptr = *(const char **)v10;
LABEL_19:
        v22 = sub_4E5510((__int64 **)qword_2CCBF80, p_ptr);
        v26 = (__int64)v22;
        if ( !v22 )
        {
          v120 = 1;
LABEL_23:
          v30 = haystack;
          if ( *(_QWORD *)(v10 + 8) )
            v30 = *(const char **)v10;
          qbasename(v30);
          if ( (debug & 0x20) != 0 )
            sub_3879F0();
          v31 = haystack;
          if ( *(_QWORD *)(v10 + 8) )
            v31 = *(const char **)v10;
          file_ext = (char *)get_file_ext(v31);
          extlang = (_DWORD *)find_extlang(file_ext);
          if ( !extlang )
          {
            v52 = haystack;
            if ( *(_QWORD *)(v10 + 8) )
              v52 = *(const char **)v10;
            v53 = sub_4E7470(v52, (__int64)"PLUGIN", 0);
            if ( !v53 )
              goto LABEL_38;
            v130 = _mm_loadu_si128((const __m128i *)(v53 + 40));
            v131 = _mm_loadu_si128((const __m128i *)(v53 + 56));
            v132 = _mm_loadu_si128((const __m128i *)(v53 + 72));
            v133 = _mm_loadu_si128((const __m128i *)(v53 + 88));
            v134 = _mm_loadu_si128((const __m128i *)(v53 + 104));
            v54 = *((const __m128i **)v53 + 15);
            v135 = (__int64 *)v54;
            v27 = (__int64)v54;
            if ( (v54->m128i_i8[5] & 1) != 0 )
            {
              v117 = v54;
              v87 = (__m128i *)operator new(0x50u);
              v87[4].m128i_i64[1] = 0;
              v27 = (__int64)v87;
              v88 = _mm_loadu_si128(v117);
              v79 = v117[1].m128i_i64[1] == 0;
              v87[4].m128i_i64[0] = (__int64)v117;
              *v87 = v88;
              v87[1] = _mm_loadu_si128(v117 + 1);
              v87[2] = _mm_loadu_si128(v117 + 2);
              v87[3] = _mm_loadu_si128(v117 + 3);
              if ( !v79 || v117[1].m128i_i64[0] )
                sub_378C70((__int64)"PLUGIN_MULTI is not compatible with run() and term() callbacks.\n"
                                    "Rather use virtual functions of plugmod_t");
            }
            if ( !v27 )
              goto LABEL_38;
            goto LABEL_35;
          }
          ptr = nullptr;
          v129 = 0;
          v33 = sub_4EB7F0((const char **)v10, (char **)&ptr);
          v27 = (__int64)v33;
          if ( !v33 )
            sub_368890();
          v135 = v33;
          if ( (*((_BYTE *)v33 + 5) & 1) != 0 )
          {
            v82 = operator new(0x88u);
            *(_BYTE *)(v82 + 96) = 2;
            v83 = v82;
            *(_OWORD *)(v82 + 104) = 0;
            v84 = _mm_loadl_epi64((const __m128i *)&off_2B2D420);
            *(_QWORD *)(v82 + 64) = 0;
            *(_QWORD *)(v82 + 88) = 0;
            *(_QWORD *)(v82 + 120) = 0;
            *(_QWORD *)(v82 + 128) = 0;
            *(_OWORD *)(v82 + 72) = 0;
            *(_QWORD *)(v82 + 24) = sub_4E6500;
            *(_QWORD *)v82 = 900;
            a8 = (__m128)_mm_unpacklo_epi64(v84, (__m128i)(unsigned __int64)sub_4E64E0);
            *(_OWORD *)(v82 + 32) = 0;
            *(__m128 *)(v82 + 8) = a8;
            *(_OWORD *)(v82 + 48) = 0;
            *(__m128i *)v82 = _mm_loadu_si128((const __m128i *)v27);
            *(__m128i *)(v82 + 16) = _mm_loadu_si128((const __m128i *)(v27 + 16));
            *(__m128i *)(v82 + 32) = _mm_loadu_si128((const __m128i *)(v27 + 32));
            *(__m128i *)(v82 + 48) = _mm_loadu_si128((const __m128i *)(v27 + 48));
            if ( v82 + 64 != v27 + 64 )
            {
              v85 = *(_QWORD *)(v27 + 72);
              if ( v85 > 1 )
              {
                srca = (void *)(v85 - 1);
                v106 = v82;
                nb = *(const void **)(v27 + 64);
                v108 = *(_QWORD *)(v27 + 72);
                v99 = (void *)qvector_reserve(v82 + 64, 0, v108, 1);
                v100 = v106;
                *(_QWORD *)(v106 + 72) = v108;
                *(_QWORD *)(v106 + 64) = v99;
                v107 = v108;
                v109 = v100;
                memmove(v99, nb, (size_t)srca);
                v83 = v109;
                *(_BYTE *)(*(_QWORD *)(v109 + 64) + v107 - 1) = 0;
                v101 = *(_QWORD *)(v109 + 88);
                if ( v101 )
                  --*(_DWORD *)(v101 + 12);
              }
            }
            v86 = *(_QWORD *)(v27 + 88);
            *(_QWORD *)(v83 + 88) = v86;
            if ( v86 )
              ++*(_DWORD *)(v86 + 12);
            na = v83;
            copy_idcv(v83 + 96);
            v34 = ptr;
            *(_QWORD *)(na + 128) = *(_QWORD *)(v27 + 128);
            v27 = na;
            if ( !v34 )
              goto LABEL_34;
          }
          else
          {
            v34 = ptr;
            if ( !ptr )
            {
LABEL_34:
              --extlang[3];
LABEL_35:
              if ( *(_DWORD *)v27 != 900 )
                sub_368890();
              v55 = haystack;
              v116 = *(_DWORD *)(v27 + 4);
              if ( *(_QWORD *)(v10 + 8) )
                v55 = *(const char **)v10;
              v28.m128i_i64[0] = 0;
              ptr = nullptr;
              v129 = 0;
              if ( v55 )
              {
                src = v55;
                n = strlen(v55);
                ptr = (void *)qvector_reserve(&ptr, 0, n + 1, 1);
                *(_QWORD *)&v129 = n + 1;
                memmove(ptr, src, n);
                *((_BYTE *)ptr + n) = 0;
              }
              p_ptr = (const char *)&ptr;
              *(_DWORD *)sub_4EBFF0(&qword_2CCBF20, (__int64)&ptr) = v116;
              v56 = ptr;
              if ( ptr )
              {
                *(_QWORD *)&v129 = 0;
                qfree(ptr);
              }
              if ( (get_merge_state(v56, &ptr) & 3) != 0 && (v116 & 0x140) == 0 || a9 && (v57 = v116, (v116 & a9) == 0) )
              {
                if ( (debug & 0x20) != 0 )
                  sub_3879F0();
                goto LABEL_37;
              }
              if ( (v116 & 0xA0) == 0 && !(unsigned __int8)netnode_inited() )
              {
                if ( (debug & 0x20) != 0 )
                  sub_3879F0();
LABEL_37:
                sub_4E9D30((_DWORD *)v27, (__int64)&v130, v57, v23, v24, v25);
LABEL_38:
                v35 = nullptr;
LABEL_56:
                if ( qword_2CCBF88 )
                  qmutex_unlock(qword_2CCBF88);
                return (__int64)v35;
              }
              if ( (debug & 0x20) != 0 )
                sub_3879F0();
LABEL_46:
              v125 = *(_DWORD *)(v27 + 4) & 0x20;
              if ( v125 )
              {
                v115 = nullptr;
                if ( (unsigned __int8)sub_3FB5F0() )
                  v115 = *(void **)(qword_2CCB598 + 624);
                set_dbg_pointer(0);
                if ( !v120 )
                {
LABEL_48:
                  if ( a1 )
                    goto LABEL_49;
                  goto LABEL_114;
                }
                if ( a2 && byte_2CCBF50 )
                  sub_4E6540(0, (__int64)p_ptr, v48, v23, v24, v25);
              }
              else
              {
                v115 = nullptr;
                if ( !v120 )
                  goto LABEL_48;
              }
              v49 = (__int64)"IDAPython";
              if ( !strcmp(*(const char **)(v27 + 48), "IDAPython") )
              {
                if ( (*(_BYTE *)(v27 + 5) & 1) != 0 )
                {
                  v80 = *(_QWORD *)(v27 + 64);
                  if ( !v80 || (v121 = *(_QWORD *)(v27 + 72)) != 0 )
                    sub_4E5210();
                  v81 = (*(__int64 (**)(void))(v80 + 8))();
                  *(_QWORD *)(v27 + 72) = v81;
                  if ( v81 == -1 )
                  {
                    *(_QWORD *)(v27 + 72) = 0;
                  }
                  else if ( v81 )
                  {
                    v121 = 2;
                    v51 = *(_QWORD *)(v27 + 64);
                    *(_QWORD *)(v81 + 96) = v51;
                  }
LABEL_107:
                  if ( (debug & 0x20) != 0 )
                    sub_3879F0();
                  v24 = v125;
                  if ( !v125 )
                  {
                    if ( a1 )
                      goto LABEL_49;
                    if ( v121 )
                    {
                      if ( v121 != 2 )
                      {
                        if ( v26 )
                        {
                          if ( !a2 )
                          {
                            sub_4E6950(v27, v49, v51, v23, 0, v25);
                            if ( !*(_QWORD *)(v26 + 48) )
                              sub_4E9D30((_DWORD *)v27, (__int64)&v130, v95, v96, v97, v98);
                            v35 = (double *)v26;
                            goto LABEL_56;
                          }
                          v59 = v26;
                          v60 = 0;
                          goto LABEL_118;
                        }
                        goto LABEL_173;
                      }
LABEL_114:
                      if ( v26 )
                      {
                        v121 = 2;
                        v59 = v26;
                        v60 = v27;
                        v61 = *(_QWORD *)(v59 + 48);
                        if ( *(char *)(v27 + 4) >= 0 )
                        {
                          v89 = (__int64)v135;
                          if ( v61 || !v135 )
                          {
LABEL_117:
                            if ( !a2 )
                            {
                              if ( !v125 || !v115 )
                                sub_4E5DD0(0x8Eu, nullptr, v59, v23, v24, v25);
                              v91 = v59;
                              v35 = nullptr;
                              v90 = (unsigned __int64 *)&qword_2CCBF60;
                              goto LABEL_182;
                            }
LABEL_118:
                            v62 = (double *)sub_4E6DD0(a2, v59, a4, a5, a6, v60, *(double *)v28.m128i_i64, a8);
                            v35 = v62;
                            if ( v121 != 2 )
                            {
                              sub_4E6950(v27, v59, v63, v64, v65, v66);
                              goto LABEL_120;
                            }
                            if ( !v125 || (v90 = (unsigned __int64 *)(a2 + 16), v91 = (__int64)v62, !v115) )
                              sub_4E5DD0(0x8Eu, v62, v59, v125, v65, v66);
LABEL_182:
                            sub_4E6340(v90, v91, (__int64)v115);
                            sub_4E5DD0(0x8Eu, v35, v59, v92, v93, v94);
                          }
                        }
                        else
                        {
                          if ( v61 )
                            goto LABEL_117;
                          v89 = v27;
                        }
                        *(_QWORD *)(v59 + 48) = v89;
                        *(__m128i *)(v59 + 56) = _mm_load_si128(&v130);
                        *(__m128i *)(v59 + 72) = _mm_load_si128(&v131);
                        *(__m128i *)(v59 + 88) = _mm_load_si128(&v132);
                        *(__m128i *)(v59 + 104) = _mm_load_si128(&v133);
                        v28 = _mm_load_si128(&v134);
                        *(__m128i *)(v59 + 120) = v28;
                        *(_QWORD *)(v59 + 136) = v135;
                        goto LABEL_117;
                      }
LABEL_173:
                      callui(50, *(_QWORD *)(v27 + 56), (int)&callui, v23, v24, v25);
                    }
                    goto LABEL_162;
                  }
                  v58 = (_DWORD *)dbg;
                  if ( dbg )
                  {
                    set_dbg_pointer((__int64)v115);
                    if ( v121 )
                      goto LABEL_111;
                    goto LABEL_161;
                  }
                  if ( (unsigned __int8)sub_3FB5F0() )
                  {
                    v58 = *(_DWORD **)(qword_2CCB598 + 624);
                    set_dbg_pointer((__int64)v115);
                    if ( v121 )
                    {
                      if ( v58 )
                      {
LABEL_111:
                        if ( (unsigned int)(*v58 - 22) > 9 )
                          sub_368890();
                        if ( !a1 )
                        {
                          v115 = v58;
                          goto LABEL_114;
                        }
LABEL_49:
                        v37 = (__int64)v135;
                        *(__m128i *)(a1 + 56) = _mm_load_si128(&v130);
                        v38 = _mm_load_si128(&v131);
                        *(_QWORD *)(a1 + 136) = v37;
                        *(__m128i *)(a1 + 72) = v38;
                        v39 = _mm_load_si128(&v132);
                        *(_QWORD *)(a1 + 48) = v27;
                        *(__m128i *)(a1 + 88) = v39;
                        *(__m128i *)(a1 + 104) = _mm_load_si128(&v133);
                        *(__m128i *)(a1 + 120) = _mm_load_si128(&v134);
                        if ( !v26 )
                        {
                          if ( !under_debugger )
                            interr(1811);
LABEL_206:
                          BUG();
                        }
                        v40 = *(_QWORD *)(v26 + 48);
                        if ( *(char *)(v27 + 4) >= 0 )
                        {
                          v27 = v37;
                          if ( v40 || !v37 )
                          {
LABEL_52:
                            if ( a2 )
                            {
                              v41 = haystack;
                              if ( *(_QWORD *)(v10 + 8) )
                                v41 = *(const char **)v10;
                              v42 = (double *)sub_4E5510(*(__int64 ***)(a2 + 8), v41);
                              sub_4E5DD0(0x8Eu, v42, v26, v43, v44, v45);
                            }
                            sub_4E5DD0(0x8Eu, nullptr, v26, a1, v24, v25);
                          }
                        }
                        else if ( v40 )
                        {
                          goto LABEL_52;
                        }
                        *(_QWORD *)(v26 + 48) = v27;
                        *(__m128i *)(v26 + 56) = _mm_load_si128(&v130);
                        *(__m128i *)(v26 + 72) = _mm_load_si128(&v131);
                        *(__m128i *)(v26 + 88) = _mm_load_si128(&v132);
                        *(__m128i *)(v26 + 104) = _mm_load_si128(&v133);
                        *(__m128i *)(v26 + 120) = _mm_load_si128(&v134);
                        *(_QWORD *)(v26 + 136) = v135;
                        goto LABEL_52;
                      }
LABEL_153:
                      sub_378C70((__int64)"global variable dbg must be set by the debugger module!");
                    }
                  }
                  else
                  {
                    set_dbg_pointer((__int64)v115);
                    if ( v121 )
                      goto LABEL_153;
                  }
LABEL_161:
                  if ( a1 )
                    goto LABEL_49;
LABEL_162:
                  sub_4E6950(v27, v49, v51, v23, v24, v25);
                  v35 = nullptr;
                  v59 = 0;
                  if ( !v26 )
                  {
LABEL_163:
                    sub_4E9D30((_DWORD *)v27, (__int64)&v130, v67, v68, v69, v70);
LABEL_121:
                    if ( !a2 )
                      v35 = (double *)v59;
                    goto LABEL_56;
                  }
                  v59 = v26;
LABEL_120:
                  if ( *(_QWORD *)(v59 + 48) )
                    goto LABEL_121;
                  goto LABEL_163;
                }
                v50 = (*(__int64 (**)(void))(v27 + 8))();
              }
              else
              {
                v49 = a2 == 0;
                v50 = sub_4E6750(v27, v49);
              }
              v121 = v50;
              goto LABEL_107;
            }
          }
          *(_QWORD *)&v129 = 0;
          qfree(v34);
          goto LABEL_34;
        }
        v27 = (__int64)v22[6];
        v130 = _mm_loadu_si128((const __m128i *)(v22 + 7));
        v131 = _mm_loadu_si128((const __m128i *)(v22 + 9));
        v132 = _mm_loadu_si128((const __m128i *)(v22 + 11));
        v133 = _mm_loadu_si128((const __m128i *)(v22 + 13));
        v28 = _mm_loadu_si128((const __m128i *)(v22 + 15));
        v134 = v28;
        v135 = v22[17];
        v29 = *((_DWORD *)v22 + 36);
        if ( (v29 & 0x80u) == 0 )
        {
          if ( a2 || (v29 & 0x20) != 0 )
          {
            v120 = v27 != 0;
            if ( v27 )
            {
              v36 = *(_DWORD *)(v27 + 4);
              if ( (v36 & 0x100) == 0 )
                goto LABEL_45;
              if ( (v36 & 0x8000) != 0 )
              {
                v71 = operator new(0x88u);
                *(_BYTE *)(v71 + 96) = 2;
                v72 = (_QWORD *)v71;
                *(_OWORD *)(v71 + 104) = 0;
                v73 = _mm_loadl_epi64((const __m128i *)&off_2B2D420);
                *(_QWORD *)(v71 + 64) = 0;
                *(_QWORD *)(v71 + 88) = 0;
                *(_QWORD *)(v71 + 120) = 0;
                *(_QWORD *)(v71 + 128) = 0;
                *(_OWORD *)(v71 + 72) = 0;
                *(_QWORD *)(v71 + 24) = sub_4E6500;
                *(_QWORD *)v71 = 900;
                a8 = (__m128)_mm_unpacklo_epi64(v73, (__m128i)(unsigned __int64)sub_4E64E0);
                *(_OWORD *)(v71 + 32) = 0;
                *(__m128 *)(v71 + 8) = a8;
                *(_OWORD *)(v71 + 48) = 0;
                *(__m128i *)v71 = _mm_loadu_si128((const __m128i *)v27);
                *(__m128i *)(v71 + 16) = _mm_loadu_si128((const __m128i *)(v27 + 16));
                *(__m128i *)(v71 + 32) = _mm_loadu_si128((const __m128i *)(v27 + 32));
                v28 = _mm_loadu_si128((const __m128i *)(v27 + 48));
                *(__m128i *)(v71 + 48) = v28;
                if ( v71 + 64 != v27 + 64 )
                {
                  v74 = *(_QWORD *)(v27 + 72);
                  if ( v74 )
                  {
                    v126 = v74 - 1;
                    if ( v74 != 1 )
                    {
                      nc = *(_QWORD *)(v27 + 72);
                      v118 = *(void **)(v27 + 64);
                      v102 = (void *)qvector_reserve(v71 + 64, 0, v74, 1);
                      v72[8] = v102;
                      v72[9] = nc;
                      memmove(v102, v118, v126);
                      *(_BYTE *)(v72[8] + nc - 1) = 0;
                      v103 = v72[11];
                      if ( v103 )
                        --*(_DWORD *)(v103 + 12);
                    }
                  }
                }
                v75 = *(_QWORD *)(v27 + 88);
                v72[11] = v75;
                if ( v75 )
                  ++*(_DWORD *)(v75 + 12);
                p_ptr = (const char *)(v27 + 96);
                copy_idcv(v72 + 12);
                v76 = *(_QWORD *)(v27 + 128);
                v27 = (__int64)v72;
                v72[16] = v76;
                goto LABEL_45;
              }
              v77 = (__m128i *)operator new(0x50u);
              v78 = _mm_loadu_si128((const __m128i *)v27);
              v79 = *(_QWORD *)(v27 + 24) == 0;
              v77[4].m128i_i64[0] = v27;
              v77[4].m128i_i64[1] = 0;
              *v77 = v78;
              v77[1] = _mm_loadu_si128((const __m128i *)(v27 + 16));
              v77[2] = _mm_loadu_si128((const __m128i *)(v27 + 32));
              v28 = _mm_loadu_si128((const __m128i *)(v27 + 48));
              v77[3] = v28;
              if ( !v79 || *(_QWORD *)(v27 + 16) )
                sub_378C70((__int64)"PLUGIN_MULTI is not compatible with run() and term() callbacks.\n"
                                    "Rather use virtual functions of plugmod_t");
              v27 = (__int64)v77;
            }
            else
            {
              v120 = 1;
            }
          }
          else
          {
            v120 = 0;
          }
        }
        else
        {
          v120 = v27 == 0;
        }
        if ( !v27 )
          goto LABEL_23;
LABEL_45:
        if ( (debug & 0x20) != 0 )
          sub_3879F0();
        goto LABEL_46;
      }
      goto LABEL_71;
    }
    qmutex_lock(qword_2CCBF88);
    if ( a1 )
      goto LABEL_18;
LABEL_61:
    v46 = haystack;
    if ( !*(_QWORD *)(v10 + 8) )
    {
LABEL_62:
      if ( (unsigned __int8)sub_4E6FF0(v46, (int *)&ptr) )
      {
        v47 = (int)ptr;
        if ( (get_merge_state(v46, &ptr) & 3) != 0 && (v47 & 0x140) == 0 )
          goto LABEL_38;
        if ( a9 && (v47 & a9) == 0 || (v47 & 0xA0) == 0 && (!a2 || !(unsigned __int8)netnode_inited()) )
          goto LABEL_38;
      }
LABEL_18:
      v20 = *(_QWORD *)(v10 + 8);
      v135 = nullptr;
      p_ptr = haystack;
      v130.m128i_i64[0] = 0;
      if ( !v20 )
        goto LABEL_19;
      goto LABEL_41;
    }
LABEL_71:
    v46 = *(const char **)v10;
    goto LABEL_62;
  }
  v11 = *(__int64 ***)(a2 + 8);
  v12 = *(const char **)a3;
  if ( !v11 )
    goto LABEL_10;
  v13 = (__int64 *)a6;
  v14 = *(__int64 ***)(a2 + 8);
  do
  {
    if ( !strcmp((const char *)v14[1], v12) && v14[5] == v13 )
      return (__int64)v14;
    v14 = (__int64 **)*v14;
  }
  while ( v14 );
  v10 = a3;
LABEL_10:
  v15 = sub_4E5510(v11, v12);
  if ( !v15 )
  {
    if ( qword_2CCBF88 )
      qmutex_lock(qword_2CCBF88);
    goto LABEL_61;
  }
  v16 = qword_2CCBF80;
  v17 = (__int64)v15[6];
  if ( !qword_2CCBF80 )
  {
LABEL_200:
    if ( !under_debugger )
      interr(1810);
    goto LABEL_206;
  }
  v18 = v15[1];
  while ( (__int64 *)v16[1] != v18 )
  {
    v16 = (_QWORD *)*v16;
    if ( !v16 )
      goto LABEL_200;
  }
  return sub_4E6DD0(a2, (__int64)v16, a4, a5, a6, v17, a7, a8);
}
