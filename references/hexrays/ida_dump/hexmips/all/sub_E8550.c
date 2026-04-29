__int64 __fastcall sub_E8550(_QWORD *a1, __m128i *a2)
{
  __int64 v4; // rax
  __int64 *v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r14
  unsigned int v13; // r12d
  __int64 v14; // rdx
  int v15; // r14d
  size_t v16; // r13
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r12
  void *v20; // rax
  __m128i v21; // xmm0
  void *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // r12
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
  __int64 v52; // rdi
  int v53; // r12d
  __int64 v54; // rdi
  int v55; // eax
  int v56; // eax
  __int64 v57; // rdi
  _DWORD *v58; // rdx
  int i; // r12d
  __int64 v60; // rdi
  _DWORD *v61; // rcx
  int v62; // edx
  __int64 v63; // rdx
  __int64 v64; // r13
  __int64 v65; // r12
  __int64 v66; // rcx
  int v67; // edx
  char v68; // al
  __int64 v69; // rax
  __int64 v70; // rdi
  int v71; // eax
  int v72; // r12d
  __int64 v73; // rdi
  int v74; // esi
  char v75; // al
  char v76; // cl
  int v77; // eax
  char v78; // cl
  int v79; // eax
  int v80; // eax
  int v81; // [rsp+0h] [rbp-1C8h]
  unsigned __int64 v82; // [rsp+0h] [rbp-1C8h]
  __int64 v83; // [rsp+8h] [rbp-1C0h]
  int v84; // [rsp+10h] [rbp-1B8h]
  int v85; // [rsp+18h] [rbp-1B0h]
  int v86; // [rsp+24h] [rbp-1A4h]
  int v87; // [rsp+24h] [rbp-1A4h]
  int v88; // [rsp+24h] [rbp-1A4h]
  __int64 v89; // [rsp+38h] [rbp-190h]
  int v90; // [rsp+38h] [rbp-190h]
  int v91; // [rsp+40h] [rbp-188h]
  int v92; // [rsp+44h] [rbp-184h]
  int v93; // [rsp+44h] [rbp-184h]
  bool v94; // [rsp+4Bh] [rbp-17Dh]
  int v95; // [rsp+4Ch] [rbp-17Ch]
  int v96; // [rsp+4Ch] [rbp-17Ch]
  char v97[8]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v98; // [rsp+58h] [rbp-170h] BYREF
  __int64 v99; // [rsp+60h] [rbp-168h] BYREF
  __int128 v100; // [rsp+68h] [rbp-160h]
  int v101; // [rsp+78h] [rbp-150h]
  int v102; // [rsp+80h] [rbp-148h] BYREF
  int v103; // [rsp+84h] [rbp-144h]
  __int64 v104; // [rsp+88h] [rbp-140h]
  void *v105; // [rsp+90h] [rbp-138h]
  __m128i v106; // [rsp+98h] [rbp-130h] BYREF
  void *v107; // [rsp+A8h] [rbp-120h]
  __m128i v108; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v109; // [rsp+C0h] [rbp-108h] BYREF
  int v110; // [rsp+C8h] [rbp-100h]
  __int64 v111; // [rsp+D0h] [rbp-F8h]
  __int64 v112; // [rsp+D8h] [rbp-F0h]
  __int64 v113; // [rsp+E0h] [rbp-E8h]
  unsigned int *v114; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v115; // [rsp+F8h] [rbp-D0h]
  __int64 v116; // [rsp+108h] [rbp-C0h]
  _QWORD v117[2]; // [rsp+110h] [rbp-B8h] BYREF
  _QWORD v118[2]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v119; // [rsp+130h] [rbp-98h]
  __int128 v120; // [rsp+138h] [rbp-90h]
  int v121; // [rsp+148h] [rbp-80h]
  __int16 v122; // [rsp+14Ch] [rbp-7Ch]
  __m128i *v123; // [rsp+150h] [rbp-78h]
  __int64 v124; // [rsp+158h] [rbp-70h]
  __int128 v125; // [rsp+160h] [rbp-68h]
  int v126; // [rsp+170h] [rbp-58h]
  __int64 v127; // [rsp+178h] [rbp-50h]
  unsigned __int64 v128; // [rsp+188h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  v83 = a2->m128i_i64[1];
  if ( !v83 )
  {
    if ( !under_debugger )
      sub_37E160(50085);
    goto LABEL_171;
  }
  v4 = sub_2BFB40(a1[1], a1[38]);
  v5 = (__int64 *)v4;
  if ( !v4 || (v6 = *(_QWORD *)(v4 + 8), v7 = a2->m128i_u64[1], v6 < v7) )
  {
LABEL_9:
    LOBYTE(v13) = a2[5].m128i_i8[8] & 0xF0;
    if ( (_BYTE)v13 == 0xC0 )
    {
      v13 = a2[1].m128i_u32[3];
      if ( v13 > 0x10 )
      {
LABEL_46:
        if ( v13 > 0x1FF || v13 <= 0xFF && (v13 & 0xFFFFFF0F) != 0 )
        {
          custom_callcnv = get_custom_callcnv(*((unsigned int *)a1 + 90));
          v36 = custom_callcnv;
          if ( !custom_callcnv )
          {
            v15 = -1;
            goto LABEL_14;
          }
          v37 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 24LL);
          v14 = *(_QWORD *)(*a1 + 56LL);
          if ( v37 == sub_DF5E0 )
          {
LABEL_12:
            if ( (unsigned __int8)sub_E7040(a1, a2, v14, 0, nullptr) )
            {
              v15 = a2->m128i_i32[2];
              goto LABEL_14;
            }
            v39 = *a1;
            sub_CCEB0((__int64)&v102, *(_QWORD *)(*a1 + 480LL), 0);
            v116 = v39;
            v117[0] = 0;
            v117[1] = 0;
            v118[0] = 0;
            v118[1] = 0;
            v119 = 0;
            v121 = -1;
            v122 = 0;
            v123 = a2;
            v124 = 0;
            v126 = 0;
            v127 = -1;
            v120 = 0;
            v125 = 0;
            v89 = sub_1CB850(v13);
            sub_DAAE0((__int64)&v102);
            v86 = v124;
            if ( (v102 & 0xFFFFFFFB) == 2 )
              v86 = HIDWORD(v124) + v124;
            v92 = v103;
            if ( v103 < v86 )
            {
              if ( !under_debugger )
                sub_37E160(50086);
              goto LABEL_171;
            }
            v40 = sub_60680(v117);
            v41 = 0;
            if ( !v40 )
              v41 = sub_60A00(v117) + 1;
            v85 = v41 - v124;
            v42 = sub_60680(v118);
            v45 = 0;
            if ( !v42 )
              v45 = sub_60A00(v118) + 1;
            v81 = v83;
            v84 = v45 - HIDWORD(v124);
            v46 = v45 - HIDWORD(v124) + v85;
            v91 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
            v15 = v127;
            if ( (_DWORD)v127 != -1 )
            {
LABEL_61:
              v47 = v15 / v91;
              if ( v15 % v91 )
              {
                if ( !under_debugger )
                  sub_37E160(50088);
                goto LABEL_171;
              }
              v48 = v47 + v46;
              if ( v47 + v46 > 0 )
              {
                if ( v46 > v48 )
                {
                  if ( !under_debugger )
                    sub_37E160(51168);
                  goto LABEL_171;
                }
LABEL_64:
                v87 = v46;
                v15 = v48 + v83;
                v49 = a1[2];
                if ( v48 + (int)v83 >= *(_DWORD *)(v49 + 656) )
                {
                  sub_32C190(a1[1], a1[38], 5, v46, v43, v44);
                  v49 = a1[2];
                  v67 = *(_DWORD *)(v49 + 656);
                  v15 = v67 - 1;
                  if ( v87 + (int)v83 >= v67 )
                  {
                    v81 = v15 - v87;
                    v15 = v48 + v15 - v87;
                  }
                }
                sub_327340(v97, *(_QWORD *)(v49 + 112), (unsigned int)v91);
                sub_E69B0(a2, v81 + v85 + v84);
                if ( v81 + v85 > v15 )
                {
                  if ( !under_debugger )
                    sub_37E160(51751);
                  goto LABEL_171;
                }
                v50 = v124;
                if ( (unsigned __int64)v105 < (int)v124 + v85 )
                {
                  if ( !under_debugger )
                    sub_37E160(51752);
                  goto LABEL_171;
                }
                v51 = 0;
                if ( v85 > 0 )
                {
                  while ( 1 )
                  {
                    v56 = *(_DWORD *)(v104 + 4LL * (v51 + v50));
                    v57 = 80LL * v81;
                    v58 = (_DWORD *)(v57 + a2->m128i_i64[0]);
                    *v58 = 3;
                    v58[2] = v56;
                    copy_tinfo_t(a2->m128i_i64[0] + v57 + 64, v97);
                    ++v51;
                    ++v81;
                    if ( v51 == v85 )
                      break;
                    v50 = v124;
                  }
                }
                if ( v81 + v84 > v15 )
                {
                  if ( !under_debugger )
                    sub_37E160(51753);
                  goto LABEL_171;
                }
                if ( (unsigned __int64)v107 < HIDWORD(v124) + v84 )
                {
                  if ( !under_debugger )
                    sub_37E160(51754);
                  goto LABEL_171;
                }
                v98 = 25;
                if ( !v115 )
                  goto LABEL_89;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v111 + 112) + 200LL))(
                       *(_QWORD *)(v111 + 112),
                       *v114) )
                {
                  v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v111 + 112) + 32LL))(
                          *(_QWORD *)(v111 + 112),
                          *v114);
                  if ( v115 <= 1 || (v52 = v114[1] - *v114, (unsigned int)v52 >= v53) )
                  {
LABEL_75:
                    if ( v53 > 7 || *(_DWORD *)(*(_QWORD *)(v111 + 8) + 4LL) == 13 || !v115 )
                      goto LABEL_89;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v111 + 112) + 200LL))(
                           *(_QWORD *)(v111 + 112),
                           *v114) )
                    {
                      v55 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v111 + 112) + 32LL))(
                              *(_QWORD *)(v111 + 112),
                              *v114);
                      if ( v115 <= 1 || (v54 = v114[1] - *v114, (unsigned int)v54 >= v55) )
                      {
LABEL_82:
                        if ( v55 <= 7 )
                        {
                          if ( v53 == 4 )
                          {
                            v88 = 2;
                            if ( (v124 & 0x100000000LL) != 0 )
                            {
                              --v84;
                              ++HIDWORD(v124);
                            }
                            goto LABEL_90;
                          }
                          if ( !under_debugger )
                            sub_37E160(52510);
LABEL_171:
                          BUG();
                        }
LABEL_89:
                        v88 = 1;
LABEL_90:
                        if ( v84 > 0 )
                        {
                          for ( i = 0; i < v84; i += v88 )
                          {
                            v60 = 80LL * v81;
                            v61 = (_DWORD *)(v60 + a2->m128i_i64[0]);
                            v62 = *(_DWORD *)(v106.m128i_i64[1] + 4LL * (i + HIDWORD(v124)));
                            *v61 = 3;
                            v61[2] = v62;
                            copy_tinfo_t(a2->m128i_i64[0] + v60 + 64, &v98);
                            ++v81;
                          }
                        }
                        v63 = a1[1];
                        v99 = 0;
                        v101 = 0;
                        v100 = 0;
                        sub_D1FD0((__int64)&v102, (unsigned int *)&v99, v63, (__int64)a2);
                        v64 = sub_D0ED0((__int64)&v99, v91);
                        sub_E69B0(a2, v15);
                        if ( v81 < v15 )
                        {
                          v65 = 80LL * v81;
                          v82 = 80 * (v81 + (unsigned __int64)(unsigned int)(v15 - v81));
                          do
                          {
                            v66 = v65 + a2->m128i_i64[0];
                            *(_DWORD *)v66 = 1;
                            *(_QWORD *)(v66 + 8) = v64;
                            copy_tinfo_t(v65 + a2->m128i_i64[0] + 64, v97);
                            v65 += 80;
                            v64 += v91;
                          }
                          while ( v65 != v82 );
                        }
                        a2[3].m128i_i64[1] = v64;
                        clear_tinfo_t(&v98);
                        clear_tinfo_t(v97);
                        goto LABEL_97;
                      }
                    }
                    else
                    {
                      if ( v115 <= 1 )
                        goto LABEL_89;
                      v54 = v114[1] - *v114;
                      if ( (unsigned int)v54 > 7 )
                        goto LABEL_89;
                    }
                    v55 = round_down_power2(v54);
                    goto LABEL_82;
                  }
                }
                else
                {
                  if ( v115 <= 1 )
                    goto LABEL_89;
                  v52 = v114[1] - *v114;
                  if ( (unsigned int)v52 > 7 )
                    goto LABEL_89;
                }
                v53 = round_down_power2(v52);
                goto LABEL_75;
              }
              goto LABEL_127;
            }
            v95 = v45 - HIDWORD(v124) + v85;
            v68 = getinf_flag(67, 16);
            v46 = v95;
            v94 = v13 == 64;
            if ( v68 != 1 && v13 == 64 )
            {
              v75 = sub_DA580((__int64)&v102);
              v46 = v95;
              if ( !v75 )
              {
                if ( v95 > 0 )
                {
                  v48 = v95;
                  goto LABEL_64;
                }
                goto LABEL_127;
              }
            }
            if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0
              && (v96 = v46, v69 = sub_1CB7F0(a1[1], a1[38]), v70 = a1[1], v46 = v96, *(_QWORD *)(v70 + 136) == v69) )
            {
              v74 = v86;
              v72 = 0;
              if ( v92 - v86 == v96 )
              {
                v80 = sub_D2B40(v70, *(_DWORD *)(*a1 + 72LL));
                v46 = v96;
                v72 = v80;
                v74 = v80 | v86;
              }
              if ( !v74 )
              {
                sub_32C190(a1[1], a1[38], 3, v46, v43, v44);
                goto LABEL_97;
              }
            }
            else
            {
              v93 = v46;
              v71 = sub_DCDE0((__int64)a1, v86, v89);
              v46 = v93;
              v72 = v71;
              if ( v71 < 0 )
                goto LABEL_97;
              if ( !(v71 | v86) )
              {
                *(_QWORD *)(a1[2] + 416LL) = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 24LL);
                goto LABEL_97;
              }
              v73 = a1[1];
              if ( !*(_QWORD *)(v73 + 136) )
              {
                v43 = v103;
                if ( !v103 && v94 )
                {
                  sub_32C190(v73, a1[38], 4, v93, 0, v44);
                  goto LABEL_97;
                }
              }
            }
            v90 = a2[3].m128i_i32[2] - v89;
            if ( v90 < 0 )
            {
              if ( v102 != 4 )
              {
                if ( !under_debugger )
                  sub_37E160(52025);
                goto LABEL_171;
              }
              v90 = 0;
            }
            v15 = v91 * v86 + v90;
            if ( v15 )
            {
              if ( v72 > 0 && HIBYTE(v122) )
              {
                LODWORD(v99) = v72 / v91;
                sub_DA6D0((__int64)&v102, &v99);
                v72 = v99 * v91;
                v76 = sub_60680(v117);
                v77 = 0;
                if ( !v76 )
                  v77 = sub_60A00(v117) + 1;
                v85 = v77 - v124;
                v78 = sub_60680(v118);
                v79 = 0;
                if ( !v78 )
                  v79 = sub_60A00(v118) + 1;
                v84 = v79 - HIDWORD(v124);
                v46 = v79 - HIDWORD(v124) + v85;
              }
              v15 = v72 - v90;
              if ( v72 - v90 >= 0 )
                goto LABEL_61;
              v48 = v46;
              if ( v46 > 0 )
                goto LABEL_64;
LABEL_127:
              v15 = v83;
            }
LABEL_97:
            if ( v119 )
            {
              *(_QWORD *)&v120 = 0;
              qfree(v119);
            }
            qfree(v118[0]);
            qfree(v117[0]);
            if ( v114 )
            {
              v115 = 0;
              qfree(v114);
            }
            if ( v112 )
            {
              v113 = 0;
              qfree(v112);
            }
            if ( v106.m128i_i64[1] )
            {
              v107 = nullptr;
              qfree(v106.m128i_i64[1]);
            }
            if ( v104 )
            {
              v105 = nullptr;
              qfree(v104);
            }
LABEL_14:
            if ( !v5 )
              return (unsigned int)v15;
            goto LABEL_33;
          }
          v15 = ((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v37)(v36, a2, *(_QWORD *)(v14 + 24));
          if ( v15 )
            goto LABEL_14;
        }
        v14 = *(_QWORD *)(*a1 + 56LL);
        goto LABEL_12;
      }
    }
    else if ( (unsigned __int8)v13 > 0x10u )
    {
      v13 = (unsigned __int8)v13;
      v14 = *(_QWORD *)(*a1 + 56LL);
      goto LABEL_12;
    }
    v13 = getinf(99);
    goto LABEL_46;
  }
  v8 = 0;
  v9 = 0;
  if ( !v7 )
  {
    v15 = 0;
    if ( !v6 )
      goto LABEL_108;
    goto LABEL_27;
  }
  do
  {
    v11 = 80 * v9 + *v5;
    v12 = a2->m128i_i64[0] + 80 * v9;
    if ( (unsigned int)lexcompare_tinfo(*(_QWORD *)(v11 + 64), *(_QWORD *)(v12 + 64), 0)
      || (unsigned int)compare_arglocs(v11, v12) )
    {
      goto LABEL_9;
    }
    ++v8;
    v10 = a2->m128i_u64[1];
    v9 = v8;
  }
  while ( v8 < v10 );
  v15 = a2->m128i_i64[1];
  v7 = (int)v10;
  if ( (int)v10 < (unsigned __int64)v5[1] )
  {
    do
    {
LABEL_27:
      v24 = *v5 + 80 * v7;
      v102 = 0;
      copy_argloc(&v102, v24);
      v105 = nullptr;
      v106 = 0;
      v25 = *(_QWORD *)(v24 + 24);
      if ( v25 )
      {
        v105 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 24));
        v106.m128i_i64[1] = v25;
        memcpy(v105, *(const void **)(v24 + 16), v25);
        v106.m128i_i64[0] = v25;
      }
      v107 = nullptr;
      v108 = 0;
      v16 = *(_QWORD *)(v24 + 48);
      if ( v16 )
      {
        v107 = (void *)qalloc_or_throw(*(_QWORD *)(v24 + 48));
        v108.m128i_i64[1] = v16;
        memcpy(v107, *(const void **)(v24 + 40), v16);
        v108.m128i_i64[0] = v16;
      }
      v109 = 0;
      copy_tinfo_t(&v109, v24 + 64);
      v17 = a2->m128i_i64[1];
      v18 = a2->m128i_i64[0];
      v110 = *(_DWORD *)(v24 + 72);
      if ( a2[1].m128i_i64[0] < (unsigned __int64)(v17 + 1) )
      {
        v26 = qvector_reserve(a2, v18, v17 + 1, 80);
        a2->m128i_i64[0] = v26;
        v17 = a2->m128i_i64[1];
        v18 = v26;
      }
      v19 = v18 + 80 * v17;
      *(_DWORD *)v19 = 0;
      copy_argloc(v19, &v102);
      v20 = v105;
      v21 = _mm_loadu_si128(&v106);
      v105 = nullptr;
      *(_QWORD *)(v19 + 16) = v20;
      *(__m128i *)(v19 + 24) = v21;
      v22 = v107;
      v23 = _mm_load_si128(&v108);
      v106 = 0;
      v107 = nullptr;
      v108 = 0;
      *(_QWORD *)(v19 + 40) = v22;
      *(_QWORD *)(v19 + 64) = 0;
      *(__m128i *)(v19 + 48) = v23;
      copy_tinfo_t(v19 + 64, &v109);
      *(_DWORD *)(v19 + 72) = v110;
      ++a2->m128i_i64[1];
      clear_tinfo_t(&v109);
      if ( v107 )
      {
        v108.m128i_i64[0] = 0;
        qfree(v107);
      }
      if ( v105 )
      {
        v106.m128i_i64[0] = 0;
        qfree(v105);
      }
      ++v15;
      cleanup_argloc(&v102);
      v7 = v15;
    }
    while ( v15 < (unsigned __int64)v5[1] );
    v10 = a2->m128i_u64[1];
    v15 = v10;
  }
  if ( v15 )
  {
    v27 = a2->m128i_i64[0] + 80 * v10 - 80;
    if ( *(_DWORD *)v27 == 1 )
    {
      v38 = *(_QWORD *)(v27 + 8);
      a2[3].m128i_i64[1] = get_tinfo_size(0, *(_QWORD *)(v27 + 64), 0) + v38;
    }
    goto LABEL_33;
  }
LABEL_108:
  v15 = 0;
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
        clear_tinfo_t(v31 + 8);
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
        cleanup_argloc(v31);
        v28 = *v5;
      }
    }
    v5[1] = 0;
    qfree(v28);
  }
  qfree(v5);
  return (unsigned int)v15;
}
