__int64 __fastcall sub_EE130(_QWORD *a1, __m128i *a2)
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
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i si128; // xmm0
  __int64 v21; // r12
  size_t v22; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r13
  __int64 i; // r12
  _QWORD *v28; // rbx
  __int64 custom_callcnv; // rax
  __int64 v31; // rdi
  __int64 (*v32)(); // rax
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  char v36; // dl
  int v37; // eax
  char v38; // dl
  int v39; // r9d
  int v40; // eax
  int v41; // r8d
  int v42; // ecx
  int v43; // eax
  int v44; // r12d
  __int64 v45; // rax
  int v46; // r8d
  int v47; // eax
  int v48; // r12d
  char v49; // al
  int v50; // eax
  int v51; // r12d
  char v52; // al
  int v53; // eax
  int v54; // eax
  _DWORD *v55; // rdx
  int v56; // r12d
  _DWORD *v57; // rcx
  int v58; // edx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r13
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rcx
  int v67; // edx
  char v68; // al
  __int64 v69; // rax
  __int64 v70; // rdi
  int v71; // eax
  int v72; // r12d
  __int64 v73; // rdi
  unsigned int v74; // eax
  int v75; // esi
  char v76; // al
  char v77; // cl
  int v78; // eax
  int v79; // r8d
  char v80; // cl
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  __int64 v85; // [rsp+0h] [rbp-1C8h]
  int v86; // [rsp+8h] [rbp-1C0h]
  int v87; // [rsp+8h] [rbp-1C0h]
  int v88; // [rsp+8h] [rbp-1C0h]
  int v89; // [rsp+8h] [rbp-1C0h]
  int v90; // [rsp+8h] [rbp-1C0h]
  int v91; // [rsp+8h] [rbp-1C0h]
  int v92; // [rsp+8h] [rbp-1C0h]
  int v93; // [rsp+8h] [rbp-1C0h]
  int v94; // [rsp+8h] [rbp-1C0h]
  int v95; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v96; // [rsp+8h] [rbp-1C0h]
  int v97; // [rsp+8h] [rbp-1C0h]
  int v98; // [rsp+8h] [rbp-1C0h]
  int v99; // [rsp+10h] [rbp-1B8h]
  int v100; // [rsp+18h] [rbp-1B0h]
  int v101; // [rsp+20h] [rbp-1A8h]
  int v102; // [rsp+20h] [rbp-1A8h]
  signed int v103; // [rsp+2Ch] [rbp-19Ch]
  __int64 v104; // [rsp+38h] [rbp-190h]
  int v105; // [rsp+38h] [rbp-190h]
  int v106; // [rsp+40h] [rbp-188h]
  int v107; // [rsp+40h] [rbp-188h]
  bool v108; // [rsp+44h] [rbp-184h]
  int v109; // [rsp+48h] [rbp-180h]
  int v110; // [rsp+48h] [rbp-180h]
  int v111; // [rsp+48h] [rbp-180h]
  int v112; // [rsp+4Ch] [rbp-17Ch]
  char v113[8]; // [rsp+50h] [rbp-178h] BYREF
  __int64 v114; // [rsp+58h] [rbp-170h]
  __int64 v115; // [rsp+60h] [rbp-168h] BYREF
  __int128 v116; // [rsp+68h] [rbp-160h]
  int v117; // [rsp+78h] [rbp-150h]
  __int64 v118; // [rsp+80h] [rbp-148h] BYREF
  __int64 v119; // [rsp+88h] [rbp-140h]
  _BYTE v120[24]; // [rsp+90h] [rbp-138h] BYREF
  __m128i v121[2]; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-100h]
  __int64 v123; // [rsp+D0h] [rbp-F8h]
  __int64 v124; // [rsp+D8h] [rbp-F0h]
  __int128 v125; // [rsp+E0h] [rbp-E8h]
  unsigned int *v126; // [rsp+F0h] [rbp-D8h]
  __int128 v127; // [rsp+F8h] [rbp-D0h]
  __int64 v128; // [rsp+108h] [rbp-C0h]
  _QWORD v129[2]; // [rsp+110h] [rbp-B8h] BYREF
  _QWORD v130[2]; // [rsp+120h] [rbp-A8h] BYREF
  __int64 v131; // [rsp+130h] [rbp-98h]
  __int128 v132; // [rsp+138h] [rbp-90h]
  int v133; // [rsp+148h] [rbp-80h]
  __int16 v134; // [rsp+14Ch] [rbp-7Ch]
  __m128i *v135; // [rsp+150h] [rbp-78h]
  __int64 v136; // [rsp+158h] [rbp-70h]
  __int128 v137; // [rsp+160h] [rbp-68h]
  int v138; // [rsp+170h] [rbp-58h]
  __int64 v139; // [rsp+178h] [rbp-50h]
  unsigned __int64 v140; // [rsp+188h] [rbp-40h]

  v140 = __readfsqword(0x28u);
  v85 = a2->m128i_i64[1];
  if ( !v85 )
  {
    if ( !under_debugger )
      sub_37EA20(50085);
    goto LABEL_174;
  }
  v4 = sub_2C1400(a1[1], a1[38]);
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
          v31 = custom_callcnv;
          if ( !custom_callcnv )
          {
            v12 = -1;
            goto LABEL_14;
          }
          v32 = *(__int64 (**)())(*(_QWORD *)custom_callcnv + 24LL);
          v11 = *(_QWORD *)(*a1 + 56LL);
          if ( v32 == sub_CE260 )
          {
LABEL_12:
            if ( (unsigned __int8)sub_ECC20(a1, a2, v11, 0, 0) )
            {
              v12 = a2->m128i_i32[2];
              goto LABEL_14;
            }
            v34 = *a1;
            v133 = -1;
            v35 = *(_QWORD *)(v34 + 480);
            v128 = v34;
            v118 = 0;
            v119 = 0;
            v122 = 0;
            v123 = v35;
            v124 = 0;
            v126 = 0;
            v129[0] = 0;
            v129[1] = 0;
            v130[0] = 0;
            v130[1] = 0;
            v131 = 0;
            v134 = 0;
            v135 = a2;
            v136 = 0;
            v138 = 0;
            v139 = -1;
            memset(v120, 0, sizeof(v120));
            memset(v121, 0, sizeof(v121));
            v125 = 0;
            v127 = 0;
            v132 = 0;
            v137 = 0;
            v104 = sub_1CD0D0(v10, a2);
            sub_DFD00((__int64)&v118);
            v86 = v136;
            if ( (v118 & 0xFFFFFFFB) == 2 )
              v86 = HIDWORD(v136) + v136;
            v106 = HIDWORD(v118);
            if ( SHIDWORD(v118) < v86 )
            {
              if ( !under_debugger )
                sub_37EA20(50086);
              goto LABEL_174;
            }
            v36 = sub_63F80(v129);
            v37 = 0;
            if ( !v36 )
              v37 = sub_64300(v129) + 1;
            v100 = v37 - v136;
            v38 = sub_63F80(v130);
            v40 = 0;
            if ( !v38 )
              v40 = sub_64300(v130) + 1;
            v41 = v85;
            v99 = v40 - HIDWORD(v136);
            v42 = v40 - HIDWORD(v136) + v100;
            v12 = v139;
            v103 = *(_DWORD *)(*(_QWORD *)(a1[2] + 112LL) + 80LL);
            if ( (_DWORD)v139 != -1 )
            {
LABEL_61:
              v43 = v12 / v103;
              if ( v12 % v103 )
              {
                if ( !under_debugger )
                  sub_37EA20(50088);
                goto LABEL_174;
              }
              v44 = v43 + v42;
              if ( v43 + v42 > 0 )
              {
                if ( v42 > v44 )
                {
                  if ( !under_debugger )
                    sub_37EA20(51168);
                  goto LABEL_174;
                }
LABEL_64:
                v87 = v42;
                v12 = v44 + v85;
                v45 = a1[2];
                if ( v44 + (int)v85 >= *(_DWORD *)(v45 + 656) )
                {
                  v102 = v41;
                  sub_32DD50(a1[1], a1[38], 5, v42, v41, v39);
                  v45 = a1[2];
                  v41 = v102;
                  v67 = *(_DWORD *)(v45 + 656);
                  v12 = v67 - 1;
                  if ( v87 + (int)v85 >= v67 )
                  {
                    v41 = v12 - v87;
                    v12 = v12 - v87 + v44;
                  }
                }
                v88 = v41;
                sub_328E20(v113, *(_QWORD *)(v45 + 112), (unsigned int)v103);
                sub_EC590(a2->m128i_i64, v88 + v100 + v99);
                v46 = v88;
                if ( v88 + v100 > v12 )
                {
                  if ( !under_debugger )
                    sub_37EA20(51751);
                  goto LABEL_174;
                }
                v47 = v136;
                if ( *(_QWORD *)v120 < (unsigned __int64)((int)v136 + v100) )
                {
                  if ( !under_debugger )
                    sub_37EA20(51752);
                  goto LABEL_174;
                }
                v48 = 0;
                if ( v100 > 0 )
                {
                  while ( 1 )
                  {
                    v93 = v46;
                    v54 = *(_DWORD *)(v119 + 4LL * (v48 + v47));
                    v55 = (_DWORD *)(80LL * v46 + a2->m128i_i64[0]);
                    *v55 = 3;
                    v55[2] = v54;
                    copy_tinfo_t();
                    ++v48;
                    v46 = v93 + 1;
                    if ( v48 == v100 )
                      break;
                    v47 = v136;
                  }
                }
                if ( v46 + v99 > v12 )
                {
                  if ( !under_debugger )
                    sub_37EA20(51753);
                  goto LABEL_174;
                }
                if ( v121[0].m128i_i64[0] < (unsigned __int64)(HIDWORD(v136) + v99) )
                {
                  if ( !under_debugger )
                    sub_37EA20(51754);
                  goto LABEL_174;
                }
                v114 = 25;
                if ( !(_QWORD)v127 )
                  goto LABEL_89;
                v89 = v46;
                v49 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v123 + 112) + 200LL))(
                        *(_QWORD *)(v123 + 112),
                        *v126);
                v46 = v89;
                if ( v49 )
                {
                  v74 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v123 + 112) + 32LL))(
                          *(_QWORD *)(v123 + 112),
                          *v126);
                  v46 = v89;
                  v51 = v74;
                  if ( (unsigned __int64)v127 <= 1 || v126[1] - *v126 >= v74 )
                  {
LABEL_75:
                    if ( v51 > 7 || *(_DWORD *)(*(_QWORD *)(v123 + 8) + 4LL) == 13 || !(_QWORD)v127 )
                      goto LABEL_89;
                    v91 = v46;
                    v52 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v123 + 112) + 200LL))(
                            *(_QWORD *)(v123 + 112),
                            *v126);
                    v46 = v91;
                    if ( v52 )
                    {
                      v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v123 + 112) + 32LL))(
                              *(_QWORD *)(v123 + 112),
                              *v126);
                      v46 = v91;
                      if ( (unsigned __int64)v127 <= 1 || v126[1] - *v126 >= v53 )
                      {
LABEL_82:
                        if ( v53 <= 7 )
                        {
                          if ( v51 == 4 )
                          {
                            v101 = 2;
                            if ( (v136 & 0x100000000LL) != 0 )
                            {
                              --v99;
                              ++HIDWORD(v136);
                            }
                            goto LABEL_90;
                          }
                          if ( !under_debugger )
                            sub_37EA20(52510);
LABEL_174:
                          BUG();
                        }
LABEL_89:
                        v101 = 1;
LABEL_90:
                        if ( v99 > 0 )
                        {
                          v56 = 0;
                          do
                          {
                            v94 = v46;
                            v57 = (_DWORD *)(80LL * v46 + a2->m128i_i64[0]);
                            v58 = *(_DWORD *)(*(_QWORD *)&v120[16] + 4LL * (v56 + HIDWORD(v136)));
                            *v57 = 3;
                            v57[2] = v58;
                            copy_tinfo_t();
                            v56 += v101;
                            v46 = v94 + 1;
                          }
                          while ( v99 > v56 );
                        }
                        v59 = a1[1];
                        v95 = v46;
                        v115 = 0;
                        v117 = 0;
                        v116 = 0;
                        sub_DB630((__int64)&v118, (__int64)&v115, v59, (__int64)a2);
                        v60 = v103 - 1;
                        v61 = -v103;
                        v62 = v61 & (v60 + v116);
                        v63 = v62;
                        if ( *((_QWORD *)&v116 + 1) != -1 )
                        {
                          v64 = (v60 + *((_QWORD *)&v116 + 1)) & v61;
                          if ( v62 < v64 )
                            v63 = v64;
                        }
                        sub_EC590(a2->m128i_i64, v12);
                        if ( v95 < v12 )
                        {
                          v65 = 80LL * v95;
                          v96 = 80 * (v95 + (unsigned __int64)(unsigned int)(v12 - v95));
                          do
                          {
                            v66 = v65 + a2->m128i_i64[0];
                            *(_DWORD *)v66 = 1;
                            *(_QWORD *)(v66 + 8) = v63;
                            copy_tinfo_t();
                            v65 += 80;
                            v63 += v103;
                          }
                          while ( v65 != v96 );
                        }
                        a2[3].m128i_i64[1] = v63;
                        clear_tinfo_t();
                        clear_tinfo_t();
                        goto LABEL_100;
                      }
                    }
                    else if ( (unsigned __int64)v127 <= 1 || v126[1] - *v126 > 7 )
                    {
                      goto LABEL_89;
                    }
                    v92 = v46;
                    v53 = round_down_power2();
                    v46 = v92;
                    goto LABEL_82;
                  }
                }
                else if ( (unsigned __int64)v127 <= 1 || v126[1] - *v126 > 7 )
                {
                  goto LABEL_89;
                }
                v90 = v46;
                v50 = round_down_power2();
                v46 = v90;
                v51 = v50;
                goto LABEL_75;
              }
              goto LABEL_130;
            }
            v109 = v40 - HIDWORD(v136) + v100;
            v68 = getinf_flag();
            v42 = v109;
            v41 = v85;
            v108 = v10 == 64;
            if ( v68 != 1 && v10 == 64 )
            {
              v76 = sub_DF7C0((__int64)&v118);
              v42 = v109;
              v41 = v85;
              if ( !v76 )
              {
                if ( v109 > 0 )
                {
                  v44 = v109;
                  goto LABEL_64;
                }
                goto LABEL_130;
              }
            }
            if ( (*(_BYTE *)(*a1 + 24LL) & 8) != 0
              && (v112 = v41,
                  v110 = v42,
                  v69 = sub_1CD070(a1[1], a1[38]),
                  v70 = a1[1],
                  v42 = v110,
                  v41 = v112,
                  *(_QWORD *)(v70 + 136) == v69) )
            {
              v75 = v86;
              v72 = 0;
              if ( v106 - v86 == v110 )
              {
                v82 = sub_DBD80(v70, *(_DWORD *)(*a1 + 72LL));
                v41 = v112;
                v72 = v82;
                v42 = v110;
                v75 = v82 | v86;
              }
              if ( !v75 )
              {
                sub_32DD50(a1[1], a1[38], 3, v42, v41, v39);
                goto LABEL_100;
              }
            }
            else
            {
              v107 = v42;
              v111 = v41;
              v71 = sub_E9C40((__int64)a1, v86, v104);
              v42 = v107;
              v41 = v111;
              v72 = v71;
              if ( v71 == -1 )
                goto LABEL_100;
              if ( !(v71 | v86) )
              {
                *(_QWORD *)(a1[2] + 416LL) = *(_QWORD *)(*(_QWORD *)(*a1 + 56LL) + 24LL);
                goto LABEL_100;
              }
              v73 = a1[1];
              if ( !*(_QWORD *)(v73 + 136) )
              {
                v39 = HIDWORD(v118);
                if ( !HIDWORD(v118) && v108 )
                {
                  sub_32DD50(v73, a1[38], 4, v107, v111, 0);
                  goto LABEL_100;
                }
              }
            }
            v105 = a2[3].m128i_i32[2] - v104;
            if ( v105 < 0 )
            {
              if ( (_DWORD)v118 != 4 )
              {
                if ( !under_debugger )
                  sub_37EA20(52025);
                goto LABEL_174;
              }
              v105 = 0;
            }
            v12 = v103 * v86 + v105;
            if ( v12 )
            {
              if ( v72 > 0 && HIBYTE(v134) )
              {
                v97 = v41;
                LODWORD(v115) = v72 / v103;
                sub_D2300((__int64)&v118, &v115);
                v72 = v115 * v103;
                v77 = sub_63F80(v129);
                v78 = 0;
                v79 = v97;
                if ( !v77 )
                {
                  v84 = sub_64300(v129);
                  v79 = v97;
                  v78 = v84 + 1;
                }
                v98 = v79;
                v100 = v78 - v136;
                v80 = sub_63F80(v130);
                v81 = 0;
                v41 = v98;
                if ( !v80 )
                {
                  v83 = sub_64300(v130);
                  v41 = v98;
                  v81 = v83 + 1;
                }
                v99 = v81 - HIDWORD(v136);
                v42 = v81 - HIDWORD(v136) + v100;
              }
              v12 = v72 - v105;
              if ( v72 - v105 >= 0 )
                goto LABEL_61;
              v44 = v42;
              if ( v42 > 0 )
                goto LABEL_64;
LABEL_130:
              v12 = v85;
            }
LABEL_100:
            if ( v131 )
            {
              *(_QWORD *)&v132 = 0;
              qfree();
            }
            qfree();
            qfree();
            if ( v126 )
            {
              *(_QWORD *)&v127 = 0;
              qfree();
            }
            if ( v124 )
            {
              *(_QWORD *)&v125 = 0;
              qfree();
            }
            if ( *(_QWORD *)&v120[16] )
            {
              v121[0].m128i_i64[0] = 0;
              qfree();
            }
            if ( v119 )
            {
              *(_QWORD *)v120 = 0;
              qfree();
            }
LABEL_14:
            if ( !v5 )
              return (unsigned int)v12;
            goto LABEL_33;
          }
          v12 = ((__int64 (__fastcall *)(__int64, __m128i *, _QWORD))v32)(v31, a2, *(_QWORD *)(v11 + 24));
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
      goto LABEL_111;
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
      LODWORD(v118) = 0;
      copy_argloc();
      memset(v120, 0, sizeof(v120));
      v22 = *(_QWORD *)(v21 + 24);
      if ( v22 )
      {
        *(_QWORD *)v120 = qalloc_or_throw();
        *(_QWORD *)&v120[16] = v22;
        memcpy(*(void **)v120, *(const void **)(v21 + 16), v22);
        *(_QWORD *)&v120[8] = v22;
      }
      memset(v121, 0, 24);
      v13 = *(_QWORD *)(v21 + 48);
      if ( v13 )
      {
        v121[0].m128i_i64[0] = qalloc_or_throw();
        v121[1].m128i_i64[0] = v13;
        memcpy((void *)v121[0].m128i_i64[0], *(const void **)(v21 + 40), v13);
        v121[0].m128i_i64[1] = v13;
      }
      v121[1].m128i_i64[1] = 0;
      copy_tinfo_t();
      v14 = a2->m128i_i64[1];
      v15 = a2->m128i_i64[0];
      LODWORD(v122) = *(_DWORD *)(v21 + 72);
      if ( a2[1].m128i_i64[0] < (unsigned __int64)(v14 + 1) )
      {
        v23 = qvector_reserve();
        a2->m128i_i64[0] = v23;
        v14 = a2->m128i_i64[1];
        v15 = v23;
      }
      v16 = v15 + 80 * v14;
      *(_DWORD *)v16 = 0;
      copy_argloc();
      v17 = *(_QWORD *)v120;
      v18 = _mm_loadu_si128((const __m128i *)&v120[8]);
      *(_QWORD *)v120 = 0;
      *(_QWORD *)(v16 + 16) = v17;
      *(__m128i *)(v16 + 24) = v18;
      v19 = v121[0].m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&v121[0].m128i_u64[1]);
      *(_OWORD *)&v120[8] = 0;
      memset(v121, 0, 24);
      *(_QWORD *)(v16 + 40) = v19;
      *(_QWORD *)(v16 + 64) = 0;
      *(__m128i *)(v16 + 48) = si128;
      copy_tinfo_t();
      *(_DWORD *)(v16 + 72) = v122;
      ++a2->m128i_i64[1];
      clear_tinfo_t();
      if ( v121[0].m128i_i64[0] )
      {
        v121[0].m128i_i64[1] = 0;
        qfree();
      }
      if ( *(_QWORD *)v120 )
      {
        *(_QWORD *)&v120[8] = 0;
        qfree();
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
    v24 = a2->m128i_i64[0] + 80 * v9 - 80;
    if ( *(_DWORD *)v24 == 1 )
    {
      v33 = *(_QWORD *)(v24 + 8);
      a2[3].m128i_i64[1] = get_tinfo_size() + v33;
    }
    goto LABEL_33;
  }
LABEL_111:
  v12 = 0;
LABEL_33:
  v25 = *v5;
  if ( *v5 )
  {
    v26 = v5[1];
    if ( v26 )
    {
      for ( i = 0; i != v26; ++i )
      {
        v28 = (_QWORD *)(v25 + 80 * i);
        clear_tinfo_t();
        if ( v28[5] )
        {
          v28[6] = 0;
          qfree();
        }
        if ( v28[2] )
        {
          v28[3] = 0;
          qfree();
        }
        cleanup_argloc();
        v25 = *v5;
      }
    }
    v5[1] = 0;
    qfree();
  }
  qfree();
  return (unsigned int)v12;
}
