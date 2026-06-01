__int64 __fastcall sub_EC750(_QWORD *a1, __m128i *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // r12d
  unsigned __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rdx
  int v12; // r14d
  size_t v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r12
  void *v17; // rax
  __m128i v18; // xmm0
  void *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r12
  const void *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  size_t v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 j; // r12
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 custom_callcnv; // rax
  __int64 v36; // rdi
  __int64 (*v37)(); // rax
  __int64 v38; // r12
  __int64 v39; // r14
  char v40; // dl
  int v41; // eax
  char v42; // dl
  int v43; // r8d
  int v44; // r9d
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // r12d
  __int64 v49; // rax
  int v50; // eax
  int v51; // r12d
  int v52; // r12d
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // rdx
  int i; // r12d
  _DWORD *v57; // rcx
  int v58; // edx
  __int64 v59; // rdx
  __int64 v60; // r13
  __int64 v61; // r12
  __int64 v62; // rcx
  int v63; // edx
  char v64; // al
  __int64 v65; // rax
  __int64 v66; // rdi
  int v67; // eax
  int v68; // r12d
  __int64 v69; // rdi
  int v70; // esi
  char v71; // al
  char v72; // cl
  int v73; // eax
  char v74; // cl
  int v75; // eax
  int v76; // eax
  int v77; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v78; // [rsp+0h] [rbp-1C8h]
  __int64 v79; // [rsp+8h] [rbp-1C0h]
  int v80; // [rsp+10h] [rbp-1B8h]
  int v81; // [rsp+18h] [rbp-1B0h]
  int v82; // [rsp+24h] [rbp-1A4h]
  int v83; // [rsp+24h] [rbp-1A4h]
  int v84; // [rsp+24h] [rbp-1A4h]
  __int64 v85; // [rsp+38h] [rbp-190h]
  int v86; // [rsp+38h] [rbp-190h]
  int v87; // [rsp+40h] [rbp-188h]
  int v88; // [rsp+44h] [rbp-184h]
  int v89; // [rsp+44h] [rbp-184h]
  bool v90; // [rsp+4Bh] [rbp-17Dh]
  int v91; // [rsp+4Ch] [rbp-17Ch]
  int v92; // [rsp+4Ch] [rbp-17Ch]
  char v93[8]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v94; // [rsp+58h] [rbp-170h]
  __int64 v95; // [rsp+60h] [rbp-168h] BYREF
  __int128 v96; // [rsp+68h] [rbp-160h]
  int v97; // [rsp+78h] [rbp-150h]
  int v98; // [rsp+80h] [rbp-148h] BYREF
  int v99; // [rsp+84h] [rbp-144h]
  __int64 v100; // [rsp+88h] [rbp-140h]
  void *v101; // [rsp+90h] [rbp-138h]
  __m128i v102; // [rsp+98h] [rbp-130h] BYREF
  void *v103; // [rsp+A8h] [rbp-120h]
  __m128i v104; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-108h]
  int v106; // [rsp+C8h] [rbp-100h]
  __int64 v107; // [rsp+D0h] [rbp-F8h]
  __int64 v108; // [rsp+D8h] [rbp-F0h]
  __int64 v109; // [rsp+E0h] [rbp-E8h]
  unsigned int *v110; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v111; // [rsp+F8h] [rbp-D0h]
  __int64 v112; // [rsp+108h] [rbp-C0h]
  __int64 v113[2]; // [rsp+110h] [rbp-B8h] BYREF
  __int64 v114[2]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v115; // [rsp+130h] [rbp-98h]
  __int128 v116; // [rsp+138h] [rbp-90h]
  int v117; // [rsp+148h] [rbp-80h]
  __int16 v118; // [rsp+14Ch] [rbp-7Ch]
  __m128i *v119; // [rsp+150h] [rbp-78h]
  __int64 v120; // [rsp+158h] [rbp-70h]
  __int128 v121; // [rsp+160h] [rbp-68h]
  int v122; // [rsp+170h] [rbp-58h]
  __int64 v123; // [rsp+178h] [rbp-50h]
  unsigned __int64 v124; // [rsp+188h] [rbp-40h]

  v124 = __readfsqword(0x28u);
  v79 = a2->m128i_i64[1];
  if ( !v79 )
  {
    if ( !under_debugger )
      sub_383060(50085);
    goto LABEL_171;
  }
  v4 = sub_2C43C0(a1[1], a1[38]);
  v5 = (__int64 *)v4;
  if ( !v4 || (v6 = *(_QWORD *)(v4 + 8), v7 = a2->m128i_u64[1], v6 < v7) )
  {
LABEL_9:
    LOBYTE(v10) = a2[5].m128i_i8[8] & 0xF0;
    if ( (_BYTE)v10 == 0xC0 )
    {
      v10 = a2[1].m128i_u32[3];
      if ( v10 > 0x10 )
      {
LABEL_46:
        if ( v10 > 0x1FF || v10 <= 0xFF && (v10 & 0xFFFFFF0F) != 0 )
        {
          custom_callcnv = get_custom_callcnv();
          v36 = custom_callcnv;
          if ( !custom_callcnv )
          {
            v12 = -1;
            goto LABEL_14;
          }
          v37 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 24LL);
          v11 = *(_QWORD *)(*a1 + 56LL);
          if ( v37 == sub_E37E0 )
          {
LABEL_12:
            if ( (unsigned __int8)sub_EB240(a1, a2, v11, 0, nullptr) )
            {
              v12 = a2->m128i_i32[2];
              goto LABEL_14;
            }
            v39 = *a1;
            sub_D10B0((__int64)&v98, *(_QWORD *)(*a1 + 480LL), 0);
            v112 = v39;
            v113[0] = 0;
            v113[1] = 0;
            v114[0] = 0;
            v114[1] = 0;
            v115 = 0;
            v117 = -1;
            v118 = 0;
            v119 = a2;
            v120 = 0;
            v122 = 0;
            v123 = -1;
            v116 = 0;
            v121 = 0;
            v85 = sub_1CFC10(v10);
            sub_DECE0((__int64)&v98);
            v82 = v120;
            if ( (v98 & 0xFFFFFFFB) == 2 )
              v82 = HIDWORD(v120) + v120;
            v88 = v99;
            if ( v99 < v82 )
            {
              if ( !under_debugger )
                sub_383060(50086);
              goto LABEL_171;
            }
            v40 = sub_64880(v113);
            v41 = 0;
            if ( !v40 )
              v41 = sub_64C00(v113) + 1;
            v81 = v41 - v120;
            v42 = sub_64880(v114);
            v45 = 0;
            if ( !v42 )
              v45 = sub_64C00(v114) + 1;
            v77 = v79;
            v80 = v45 - HIDWORD(v120);
            v46 = v45 - HIDWORD(v120) + v81;
            v87 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
            v12 = v123;
            if ( (_DWORD)v123 != -1 )
            {
LABEL_61:
              v47 = v12 / v87;
              if ( v12 % v87 )
              {
                if ( !under_debugger )
                  sub_383060(50088);
                goto LABEL_171;
              }
              v48 = v47 + v46;
              if ( v47 + v46 > 0 )
              {
                if ( v46 > v48 )
                {
                  if ( !under_debugger )
                    sub_383060(51168);
                  goto LABEL_171;
                }
LABEL_64:
                v83 = v46;
                v12 = v48 + v79;
                v49 = a1[2];
                if ( v48 + (int)v79 >= *(_DWORD *)(v49 + 656) )
                {
                  sub_3311F0(a1[1], a1[38], 5, v46, v43, v44);
                  v49 = a1[2];
                  v63 = *(_DWORD *)(v49 + 656);
                  v12 = v63 - 1;
                  if ( v83 + (int)v79 >= v63 )
                  {
                    v77 = v12 - v83;
                    v12 = v48 + v12 - v83;
                  }
                }
                sub_32C270(v93, *(_QWORD *)(v49 + 112), (unsigned int)v87);
                sub_EABB0(a2->m128i_i64, v77 + v81 + v80);
                if ( v77 + v81 > v12 )
                {
                  if ( !under_debugger )
                    sub_383060(51751);
                  goto LABEL_171;
                }
                v50 = v120;
                if ( (unsigned __int64)v101 < (int)v120 + v81 )
                {
                  if ( !under_debugger )
                    sub_383060(51752);
                  goto LABEL_171;
                }
                v51 = 0;
                if ( v81 > 0 )
                {
                  while ( 1 )
                  {
                    v54 = *(_DWORD *)(v100 + 4LL * (v51 + v50));
                    v55 = (_DWORD *)(80LL * v77 + a2->m128i_i64[0]);
                    *v55 = 3;
                    v55[2] = v54;
                    copy_tinfo_t();
                    ++v51;
                    ++v77;
                    if ( v51 == v81 )
                      break;
                    v50 = v120;
                  }
                }
                if ( v77 + v80 > v12 )
                {
                  if ( !under_debugger )
                    sub_383060(51753);
                  goto LABEL_171;
                }
                if ( (unsigned __int64)v103 < HIDWORD(v120) + v80 )
                {
                  if ( !under_debugger )
                    sub_383060(51754);
                  goto LABEL_171;
                }
                v94 = 25;
                if ( !v111 )
                  goto LABEL_89;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v107 + 112) + 200LL))(
                       *(_QWORD *)(v107 + 112),
                       *v110) )
                {
                  v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v107 + 112) + 32LL))(
                          *(_QWORD *)(v107 + 112),
                          *v110);
                  if ( v111 <= 1 || v110[1] - *v110 >= v52 )
                  {
LABEL_75:
                    if ( v52 > 7 || *(_DWORD *)(*(_QWORD *)(v107 + 8) + 4LL) == 13 || !v111 )
                      goto LABEL_89;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v107 + 112) + 200LL))(
                           *(_QWORD *)(v107 + 112),
                           *v110) )
                    {
                      v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v107 + 112) + 32LL))(
                              *(_QWORD *)(v107 + 112),
                              *v110);
                      if ( v111 <= 1 || v110[1] - *v110 >= v53 )
                      {
LABEL_82:
                        if ( v53 <= 7 )
                        {
                          if ( v52 == 4 )
                          {
                            v84 = 2;
                            if ( (v120 & 0x100000000LL) != 0 )
                            {
                              --v80;
                              ++HIDWORD(v120);
                            }
                            goto LABEL_90;
                          }
                          if ( !under_debugger )
                            sub_383060(52510);
LABEL_171:
                          BUG();
                        }
LABEL_89:
                        v84 = 1;
LABEL_90:
                        if ( v80 > 0 )
                        {
                          for ( i = 0; i < v80; i += v84 )
                          {
                            v57 = (_DWORD *)(80LL * v77 + a2->m128i_i64[0]);
                            v58 = *(_DWORD *)(v102.m128i_i64[1] + 4LL * (i + HIDWORD(v120)));
                            *v57 = 3;
                            v57[2] = v58;
                            copy_tinfo_t();
                            ++v77;
                          }
                        }
                        v59 = a1[1];
                        v95 = 0;
                        v97 = 0;
                        v96 = 0;
                        sub_D61D0((__int64)&v98, (unsigned int *)&v95, v59, (__int64)a2);
                        v60 = sub_D50D0((__int64)&v95, v87);
                        sub_EABB0(a2->m128i_i64, v12);
                        if ( v77 < v12 )
                        {
                          v61 = 80LL * v77;
                          v78 = 80 * (v77 + (unsigned __int64)(unsigned int)(v12 - v77));
                          do
                          {
                            v62 = v61 + a2->m128i_i64[0];
                            *(_DWORD *)v62 = 1;
                            *(_QWORD *)(v62 + 8) = v60;
                            copy_tinfo_t();
                            v61 += 80;
                            v60 += v87;
                          }
                          while ( v61 != v78 );
                        }
                        a2[3].m128i_i64[1] = v60;
                        clear_tinfo_t();
                        clear_tinfo_t();
                        goto LABEL_97;
                      }
                    }
                    else if ( v111 <= 1 || v110[1] - *v110 > 7 )
                    {
                      goto LABEL_89;
                    }
                    v53 = round_down_power2();
                    goto LABEL_82;
                  }
                }
                else if ( v111 <= 1 || v110[1] - *v110 > 7 )
                {
                  goto LABEL_89;
                }
                v52 = round_down_power2();
                goto LABEL_75;
              }
              goto LABEL_127;
            }
            v91 = v45 - HIDWORD(v120) + v81;
            v64 = getinf_flag();
            v46 = v91;
            v90 = v10 == 64;
            if ( v64 != 1 && v10 == 64 )
            {
              v71 = sub_DE780((__int64)&v98);
              v46 = v91;
              if ( !v71 )
              {
                if ( v91 > 0 )
                {
                  v48 = v91;
                  goto LABEL_64;
                }
                goto LABEL_127;
              }
            }
            if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0
              && (v92 = v46, v65 = sub_1CFBB0(a1[1], a1[38]), v66 = a1[1], v46 = v92, *(_QWORD *)(v66 + 136) == v65) )
            {
              v70 = v82;
              v68 = 0;
              if ( v88 - v82 == v92 )
              {
                v76 = sub_D6D40(v66, *(_DWORD *)(*a1 + 72LL));
                v46 = v92;
                v68 = v76;
                v70 = v76 | v82;
              }
              if ( !v70 )
              {
                sub_3311F0(a1[1], a1[38], 3, v46, v43, v44);
                goto LABEL_97;
              }
            }
            else
            {
              v89 = v46;
              v67 = sub_E0FE0((__int64)a1, v82, v85);
              v46 = v89;
              v68 = v67;
              if ( v67 < 0 )
                goto LABEL_97;
              if ( !(v67 | v82) )
              {
                *(_QWORD *)(a1[2] + 416LL) = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 24LL);
                goto LABEL_97;
              }
              v69 = a1[1];
              if ( !*(_QWORD *)(v69 + 136) )
              {
                v43 = v99;
                if ( !v99 && v90 )
                {
                  sub_3311F0(v69, a1[38], 4, v89, 0, v44);
                  goto LABEL_97;
                }
              }
            }
            v86 = a2[3].m128i_i32[2] - v85;
            if ( v86 < 0 )
            {
              if ( v98 != 4 )
              {
                if ( !under_debugger )
                  sub_383060(52025);
                goto LABEL_171;
              }
              v86 = 0;
            }
            v12 = v87 * v82 + v86;
            if ( v12 )
            {
              if ( v68 > 0 && HIBYTE(v118) )
              {
                LODWORD(v95) = v68 / v87;
                sub_DE8D0((__int64)&v98, &v95);
                v68 = v95 * v87;
                v72 = sub_64880(v113);
                v73 = 0;
                if ( !v72 )
                  v73 = sub_64C00(v113) + 1;
                v81 = v73 - v120;
                v74 = sub_64880(v114);
                v75 = 0;
                if ( !v74 )
                  v75 = sub_64C00(v114) + 1;
                v80 = v75 - HIDWORD(v120);
                v46 = v75 - HIDWORD(v120) + v81;
              }
              v12 = v68 - v86;
              if ( v68 - v86 >= 0 )
                goto LABEL_61;
              v48 = v46;
              if ( v46 > 0 )
                goto LABEL_64;
LABEL_127:
              v12 = v79;
            }
LABEL_97:
            if ( v115 )
            {
              *(_QWORD *)&v116 = 0;
              qfree(v115);
            }
            qfree(v114[0]);
            qfree(v113[0]);
            if ( v110 )
            {
              v111 = 0;
              qfree((__int64)v110);
            }
            if ( v108 )
            {
              v109 = 0;
              qfree(v108);
            }
            if ( v102.m128i_i64[1] )
            {
              v103 = nullptr;
              qfree(v102.m128i_i64[1]);
            }
            if ( v100 )
            {
              v101 = nullptr;
              qfree(v100);
            }
LABEL_14:
            if ( !v5 )
              return (unsigned int)v12;
            goto LABEL_33;
          }
          v12 = ((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v37)(v36, a2, *(_QWORD *)(v11 + 24));
          if ( v12 )
            goto LABEL_14;
        }
        v11 = *(_QWORD *)(*a1 + 56LL);
        goto LABEL_12;
      }
    }
    else if ( (unsigned __int8)v10 > 0x10u )
    {
      v10 = (unsigned __int8)v10;
      v11 = *(_QWORD *)(*a1 + 56LL);
      goto LABEL_12;
    }
    v10 = getinf();
    goto LABEL_46;
  }
  v8 = 0;
  if ( !v7 )
  {
    v12 = 0;
    if ( !v6 )
      goto LABEL_108;
    goto LABEL_27;
  }
  do
  {
    if ( (unsigned int)lexcompare_tinfo() || (unsigned int)compare_arglocs() )
      goto LABEL_9;
    ++v8;
    v9 = a2->m128i_u64[1];
  }
  while ( v8 < v9 );
  v12 = a2->m128i_i64[1];
  v7 = (int)v9;
  if ( (int)v9 < (unsigned __int64)v5[1] )
  {
    do
    {
LABEL_27:
      v21 = *v5 + 80 * v7;
      v98 = 0;
      v22 = (const void *)v21;
      copy_argloc();
      v101 = nullptr;
      v102 = 0;
      v25 = *(_QWORD *)(v21 + 24);
      if ( v25 )
      {
        v101 = (void *)qalloc_or_throw(*(_QWORD *)(v21 + 24), v21, v23, v24);
        v102.m128i_i64[1] = v25;
        v22 = *(const void **)(v21 + 16);
        memcpy(v101, v22, v25);
        v102.m128i_i64[0] = v25;
      }
      v103 = nullptr;
      v104 = 0;
      v13 = *(_QWORD *)(v21 + 48);
      if ( v13 )
      {
        v103 = (void *)qalloc_or_throw(*(_QWORD *)(v21 + 48), (__int64)v22, v23, v24);
        v104.m128i_i64[1] = v13;
        memcpy(v103, *(const void **)(v21 + 40), v13);
        v104.m128i_i64[0] = v13;
      }
      v105 = 0;
      copy_tinfo_t();
      v14 = a2->m128i_i64[1];
      v15 = a2->m128i_i64[0];
      v106 = *(_DWORD *)(v21 + 72);
      if ( a2[1].m128i_i64[0] < (unsigned __int64)(v14 + 1) )
      {
        v26 = qvector_reserve((__int64)a2, v15, v14 + 1, 80);
        a2->m128i_i64[0] = v26;
        v14 = a2->m128i_i64[1];
        v15 = v26;
      }
      v16 = v15 + 80 * v14;
      *(_DWORD *)v16 = 0;
      copy_argloc();
      v17 = v101;
      v18 = _mm_loadu_si128(&v102);
      v101 = nullptr;
      *(_QWORD *)(v16 + 16) = v17;
      *(__m128i *)(v16 + 24) = v18;
      v19 = v103;
      v20 = _mm_load_si128(&v104);
      v102 = 0;
      v103 = nullptr;
      v104 = 0;
      *(_QWORD *)(v16 + 40) = v19;
      *(_QWORD *)(v16 + 64) = 0;
      *(__m128i *)(v16 + 48) = v20;
      copy_tinfo_t();
      *(_DWORD *)(v16 + 72) = v106;
      ++a2->m128i_i64[1];
      clear_tinfo_t();
      if ( v103 )
      {
        v104.m128i_i64[0] = 0;
        qfree((__int64)v103);
      }
      if ( v101 )
      {
        v102.m128i_i64[0] = 0;
        qfree((__int64)v101);
      }
      ++v12;
      cleanup_argloc();
      v7 = v12;
    }
    while ( v12 < (unsigned __int64)v5[1] );
    v9 = a2->m128i_u64[1];
    v12 = v9;
  }
  if ( v12 )
  {
    v27 = a2->m128i_i64[0] + 80 * v9 - 80;
    if ( *(_DWORD *)v27 == 1 )
    {
      v38 = *(_QWORD *)(v27 + 8);
      a2[3].m128i_i64[1] = get_tinfo_size() + v38;
    }
    goto LABEL_33;
  }
LABEL_108:
  v12 = 0;
LABEL_33:
  v28 = *v5;
  if ( *v5 )
  {
    v29 = v5[1];
    if ( v29 )
    {
      for ( j = 0; j != v29; ++j )
      {
        v31 = (_QWORD *)(v28 + 80 * j);
        clear_tinfo_t();
        v32 = v31[5];
        if ( v32 )
        {
          v31[6] = 0;
          qfree(v32);
        }
        v33 = v31[2];
        if ( v33 )
        {
          v31[3] = 0;
          qfree(v33);
        }
        cleanup_argloc();
        v28 = *v5;
      }
    }
    v5[1] = 0;
    qfree(v28);
  }
  qfree((__int64)v5);
  return (unsigned int)v12;
}
