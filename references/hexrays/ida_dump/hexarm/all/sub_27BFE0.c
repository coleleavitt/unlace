__int64 __fastcall sub_27BFE0(__int64 a1, char *a2, __int64 a3)
{
  _DWORD *exception; // rdi
  unsigned int v4; // r13d
  int v6; // eax
  int *v7; // rbp
  bool v8; // al
  unsigned int v9; // r14d
  int tinfo_size; // r12d
  char *v11; // r8
  char *v12; // rcx
  __int64 v13; // rax
  char *v14; // r9
  unsigned __int64 v15; // r12
  const char *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rbx
  char *v32; // r12
  char *v33; // rbx
  char *v34; // r15
  char *v35; // r12
  __int64 v36; // rdi
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  char v39; // bl
  unsigned int v40; // r12d
  int *v41; // r15
  int v42; // ebx
  _QWORD *v43; // r13
  __int64 *v44; // r15
  __int64 v45; // rsi
  __int64 v46; // r15
  _QWORD *v47; // rdx
  _QWORD *i; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // edx
  int v58; // r15d
  unsigned int v59; // eax
  int v60; // eax
  int v61; // edx
  __int64 tinfo_property; // rax
  char v63; // r12
  char v64; // bp
  int *v65; // rax
  int *v66; // rbp
  __int64 v67; // rax
  __int64 v68; // r14
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // r14
  __int64 v73; // rbx
  int *v74; // rdx
  int *v75; // rbp
  int *v76; // rbx
  unsigned int v77; // r15d
  unsigned int v78; // edx
  unsigned int v79; // edx
  __int64 opinfo; // rax
  __int64 v81; // rax
  int *v82; // rax
  __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  int aflags; // ebp
  int v86; // eax
  int v87; // ebp
  unsigned int v88; // edx
  unsigned int v89; // eax
  __m128i v90; // xmm0
  __int64 v91; // r14
  int v92; // r12d
  __int64 v93; // rax
  __int64 v94; // rbx
  unsigned __int64 v95; // r9
  __int64 v96; // rbx
  unsigned __int64 v97; // r8
  char v98; // bl
  char *v99; // rax
  __int64 tinfo_pdata; // rax
  char *v101; // rbp
  char v102; // al
  __int64 v106; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v107; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 v108; // [rsp+20h] [rbp-2E8h]
  __int64 v109; // [rsp+20h] [rbp-2E8h]
  __int64 flags; // [rsp+20h] [rbp-2E8h]
  unsigned __int8 v111; // [rsp+20h] [rbp-2E8h]
  unsigned int v112; // [rsp+2Ch] [rbp-2DCh]
  unsigned __int8 v113; // [rsp+2Ch] [rbp-2DCh]
  __int64 udm_by_tid; // [rsp+38h] [rbp-2D0h]
  unsigned int v115; // [rsp+40h] [rbp-2C8h]
  unsigned __int8 v116; // [rsp+40h] [rbp-2C8h]
  char v117; // [rsp+44h] [rbp-2C4h]
  int v118; // [rsp+44h] [rbp-2C4h]
  size_t n; // [rsp+50h] [rbp-2B8h]
  char *v120; // [rsp+58h] [rbp-2B0h]
  int data_elsize; // [rsp+58h] [rbp-2B0h]
  char *v122; // [rsp+60h] [rbp-2A8h]
  unsigned __int64 v123; // [rsp+68h] [rbp-2A0h]
  double v124[3]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v125; // [rsp+88h] [rbp-280h] BYREF
  __int64 v126; // [rsp+90h] [rbp-278h] BYREF
  __int64 v127; // [rsp+98h] [rbp-270h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-268h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-260h]
  void *v130; // [rsp+C0h] [rbp-248h] BYREF
  __int128 v131; // [rsp+C8h] [rbp-240h]
  char *s1[3]; // [rsp+E0h] [rbp-228h] BYREF
  __int128 v133; // [rsp+F8h] [rbp-210h]
  __int64 v134; // [rsp+108h] [rbp-200h]
  int v135; // [rsp+110h] [rbp-1F8h]
  __m128i v136; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v137; // [rsp+130h] [rbp-1D8h]
  __int128 v138; // [rsp+138h] [rbp-1D0h]
  __int64 v139; // [rsp+148h] [rbp-1C0h]
  __int128 v140; // [rsp+150h] [rbp-1B8h]
  _OWORD v141[3]; // [rsp+160h] [rbp-1A8h] BYREF
  __int64 v142; // [rsp+190h] [rbp-178h]
  int v143; // [rsp+198h] [rbp-170h]
  __int64 v144; // [rsp+1A0h] [rbp-168h]
  char v145; // [rsp+1A8h] [rbp-160h]
  char v146[280]; // [rsp+1B0h] [rbp-158h] BYREF
  unsigned __int64 v147; // [rsp+2C8h] [rbp-40h]

  v147 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
    return 0;
  v4 = is_special_frame_member(a2);
  if ( (_BYTE)v4 )
    return 0;
  v6 = sub_2791A0((int **)a3);
  v7 = *(int **)a3;
  v112 = v6;
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)(a3 + 8) || (v41 = *((int **)v7 + 1), v41 == v7) )
    {
      v106 = 0;
      v8 = 0;
      v7 = nullptr;
      v9 = 0;
      v107 = 0;
      tinfo_size = -1;
    }
    else
    {
      v106 = 0;
      v42 = 1;
      tinfo_size = -1;
      v107 = 0;
      if ( v6 > 0 )
        v42 = v6;
      v7 = nullptr;
      v9 = 0;
      v116 = v4;
      v43 = v41;
      do
      {
        v44 = v43 + 3;
        if ( tinfo_size == -1 )
          tinfo_size = get_tinfo_size(0, v43[6], 0);
        if ( *((_DWORD *)v43 + 10) >= v42 && (*((_DWORD *)v43 + 10) < (signed int)v9 || !v9) )
          v9 = *((_DWORD *)v43 + 10);
        if ( *((_DWORD *)v43 + 8) != -1 )
        {
          v45 = *v44;
          v46 = *(_QWORD *)(*v44 + 432) + 104LL * *((int *)v43 + 8);
          if ( !v7 )
          {
            v106 = v45;
            v7 = (int *)v46;
          }
          if ( (get_tinfo_property(*(_QWORD *)(v46 + 80), 2) & 0xF) == 0xB )
          {
            v52 = sub_1C3000((_DWORD *)v46, *(_DWORD *)(v46 + 88));
            v53 = sub_1CF790((_QWORD *)v106, v52);
            if ( (__int64)v107 >= v53 )
              v53 = v107;
            v107 = v53;
          }
        }
        if ( (*v43 & 2) == 0 )
        {
          v47 = (_QWORD *)v43[2];
          if ( (*(_BYTE *)v47 & 2) != 0 )
          {
            v49 = (_QWORD *)(*v43 & 0xFFFFFFFFFFFFFFFCLL);
            v50 = *v49;
            if ( (*v49 & 2) == 0 )
            {
              while ( (_QWORD *)v49[2] == v43 )
              {
                v43 = v49;
                v51 = v50 & 0xFFFFFFFFFFFFFFFCLL;
                v50 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v50 & 2) != 0 )
                {
                  v43 = (_QWORD *)v51;
                  goto LABEL_70;
                }
                v49 = (_QWORD *)v51;
              }
            }
            v43 = v49;
          }
          else
          {
            for ( i = (_QWORD *)v47[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v47 = i;
            v43 = v47;
          }
        }
LABEL_70:
        ;
      }
      while ( *(_QWORD **)a3 != v43 );
      v4 = v116;
      v8 = v9 != 0;
    }
  }
  else
  {
    v106 = 0;
    v8 = 0;
    tinfo_size = -1;
    v9 = 0;
    v107 = 0;
  }
  v125 = 0;
  v137 = 0;
  v117 = v8 || (int)v112 > tinfo_size;
  v139 = 0;
  v142 = 1;
  v143 = -1;
  v144 = 0;
  v145 = 0;
  v136 = 0;
  v138 = 0;
  v140 = 0;
  v141[0] = 0;
  udm_by_tid = get_udm_by_tid(&v125, &v136, a2);
  if ( udm_by_tid == -1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < (unsigned __int64)a2 )
      goto LABEL_82;
    flags = get_flags_ex(a2, 4);
    if ( (get_aflags(a2) & 0x2000000) != 0 )
      goto LABEL_82;
    v39 = is_spec_ea(a2);
    if ( v39 )
    {
      v56 = (unsigned __int8)getinf(9) == 8 ? get_qword(a2) : get_dword(a2, 4, v54, v55);
      if ( v56 < 0 )
      {
        if ( v117 )
          tinfo_size = 0;
        v39 = v117;
        v115 = tinfo_size;
      }
      else
      {
        v57 = v112;
        if ( v112 < v9 )
          v57 = v9;
        if ( v57 >= v56 )
          v56 = v57;
        v39 = 0;
        v115 = v56;
      }
    }
    else
    {
      v115 = calc_max_item_end(a2, 12) - (_DWORD)a2;
    }
    v40 = get_item_end(a2) - (_DWORD)a2;
    n = flags & 0x600;
    if ( n == 1024 && (flags & 0xF0000000) == 0x60000000 )
      goto LABEL_82;
LABEL_98:
    v58 = sub_278E40((_QWORD *)a3, nullptr);
    if ( v58 > 1 && v117 )
      v115 = v58 * (v115 / v58);
    if ( !v39 && (v40 >= v115 || v115 < v112 || v115 < v9) )
      goto LABEL_82;
    if ( udm_by_tid == -1 )
    {
      opinfo = get_opinfo(v146, a2, 0, flags);
      data_elsize = get_data_elsize(a2, flags, opinfo);
    }
    else
    {
      data_elsize = (unsigned __int64)v136.m128i_i64[1] >> 3;
    }
    if ( v9 < v40 )
    {
      v59 = v112;
      if ( *(_BYTE *)(a3 + 20) )
        v59 = v115;
      if ( v40 >= v59 && n == 1024 && v58 == data_elsize )
        goto LABEL_82;
    }
    v126 = 0;
    v113 = sub_27B1D0((_QWORD *)a3, a1, v115, v117, &v126, 0);
    if ( !v113 )
      goto LABEL_158;
    v60 = get_tinfo_size(0, v126, 0);
    v118 = v60;
    if ( v7 )
    {
      v61 = *(_DWORD *)(a3 + 16);
      if ( v61 )
      {
        if ( v61 > v60 )
          goto LABEL_158;
      }
    }
    if ( (get_tinfo_property(v126, 2) & 0xF) == 0xD )
    {
      if ( (v126 & 0x100) == 0 )
      {
LABEL_158:
        clear_tinfo_t(&v126);
        goto LABEL_82;
      }
LABEL_118:
      v127 = 0;
      if ( udm_by_tid == -1 )
      {
        if ( !(unsigned __int8)get_tinfo(&v127, a2) || (unsigned __int8)sub_2787D0(&v127, &v126, v9) )
        {
          aflags = get_aflags(a2);
          if ( (unsigned __int8)apply_tinfo(a2, &v126, 4) )
          {
            if ( (aflags & 0x400000) == 0 && (get_aflags(a2) & 0x400000) != 0 )
            {
              exception = __cxa_allocate_exception(0x30u);
              *(_QWORD *)exception = off_4D6390;
              exception[2] = -17;
              *((_QWORD *)exception + 2) = a2;
              *((_QWORD *)exception + 3) = 0;
              *((_OWORD *)exception + 2) = 0;
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
            }
LABEL_128:
            v128 = 0;
            v129 = 0;
            v65 = *(int **)a3;
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)(a3 + 8) )
              {
                v66 = *((int **)v65 + 1);
                if ( v65 != v66 )
                {
                  v111 = 0;
                  do
                  {
                    v67 = v66[8];
                    if ( (_DWORD)v67 == -1 )
                    {
                      sub_279270(a1, (__int64)a2, &v126, 0, (__int64)&v125, udm_by_tid);
                      v111 = v113;
                    }
                    else
                    {
                      v68 = *(_QWORD *)(*((_QWORD *)v66 + 3) + 432LL) + 104 * v67;
                      if ( !sub_1EF8D0(v68, *(_QWORD *)(a1 + 112), &v126, 0) )
                        goto LABEL_155;
                      if ( *(_DWORD *)(v68 + 88) <= v118
                        || *(char *)(v68 + 26) >= 0
                        && (v81 = v68 - *(_QWORD *)(v106 + 432),
                            LOBYTE(v134) = 0,
                            s1[1] = nullptr,
                            s1[2] = nullptr,
                            v133 = 0u,
                            HIDWORD(v134) = -991146299 * (v81 >> 3),
                            s1[0] = (char *)&off_4DAF10,
                            v135 = v118,
                            !(unsigned int)sub_11F5F0(v106, (__int64)s1)) )
                      {
                        if ( *(_DWORD *)v68 == 1 )
                        {
                          v69 = *(_QWORD *)(v68 + 8);
                          if ( udm_by_tid != -1 && v69 != -1 )
                          {
                            v70 = sub_1CF790((_QWORD *)v106, v69);
                            if ( v70 == (unsigned __int64)v136.m128i_i64[0] >> 3 )
                            {
                              if ( v66[10] || v66[11] )
                                goto LABEL_140;
                              v130 = nullptr;
                              v131 = 0;
                              v94 = *(_QWORD *)(v106 + 216);
                              if ( v94 )
                              {
                                v130 = (void *)qalloc_or_throw(16 * v94);
                                *((_QWORD *)&v131 + 1) = v94;
                                memcpy(v130, *(const void **)(v106 + 208), 16 * v94);
                                *(_QWORD *)&v131 = v94;
                              }
                              memset(s1, 0, sizeof(s1));
                              v95 = *(_QWORD *)(v106 + 568);
                              v124[0] = *(double *)(v106 + 576);
                              if ( v95 + *(_QWORD *)&v124[0] - 1 >= v95 )
                              {
                                *(_QWORD *)&v124[1] = v95;
                                s1[0] = (char *)qvector_reserve(s1, 0, 1, 16);
                                *(__m128 *)&s1[0][16 * (__int64)s1[1]++] = _mm_loadh_ps(v124);
                              }
                              *(_QWORD *)&v124[0] = &v130;
                              sub_318480(&v130, s1);
                              if ( s1[0] )
                              {
                                s1[1] = nullptr;
                                qfree(s1[0]);
                              }
                              v96 = v66[14];
                              v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v106 + 1496) + 24LL) + 16LL)
                                  & (v69 + *(_QWORD *)(v106 + 1440));
                              memset(s1, 0, sizeof(s1));
                              if ( v96 + v97 - 1 >= v97 )
                              {
                                v123 = v97;
                                s1[0] = (char *)qvector_reserve(s1, 0, 1, 16);
                                v99 = &s1[0][16 * (__int64)s1[1]];
                                *(_QWORD *)v99 = v123;
                                *((_QWORD *)v99 + 1) = v96;
                                ++s1[1];
                              }
                              v98 = sub_318300(*(_QWORD *)&v124[0], s1);
                              if ( s1[0] )
                              {
                                s1[1] = nullptr;
                                qfree(s1[0]);
                              }
                              if ( v130 )
                              {
                                *(_QWORD *)&v131 = 0;
                                qfree(v130);
                              }
                              if ( !v98 )
                              {
LABEL_140:
                                v71 = v129;
                                v72 = v128;
                                v73 = v128 + 16 * v129;
                                if ( v128 == v73 )
                                  goto LABEL_225;
                                do
                                {
                                  if ( !(unsigned int)sub_256D40((__int64)(v66 + 6), v72) )
                                    break;
                                  v72 += 16;
                                }
                                while ( v73 != v72 );
                                v71 = v129;
                                v73 = v128;
                                if ( v72 == v128 + 16LL * (_QWORD)v129 )
                                {
LABEL_225:
                                  v91 = *((_QWORD *)v66 + 3);
                                  v92 = v66[8];
                                  if ( *((_QWORD *)&v129 + 1) < (unsigned __int64)(v71 + 1) )
                                    v128 = qvector_reserve(&v128, v73, v71 + 1, 16);
                                  v93 = v128 + 16 * v129;
                                  *(_QWORD *)v93 = v91;
                                  *(_DWORD *)(v93 + 8) = v92;
                                  *(_QWORD *)&v129 = v129 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( (*(_QWORD *)v66 & 2) == 0 )
                    {
                      v74 = *((int **)v66 + 2);
                      if ( (*(_BYTE *)v74 & 2) != 0 )
                      {
                        v82 = (int *)(*(_QWORD *)v66 & 0xFFFFFFFFFFFFFFFCLL);
                        v83 = *(_QWORD *)v82;
                        if ( (*(_QWORD *)v82 & 2) == 0 )
                        {
                          while ( *((int **)v82 + 2) == v66 )
                          {
                            v66 = v82;
                            v84 = v83 & 0xFFFFFFFFFFFFFFFCLL;
                            v83 = *(_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFCLL);
                            if ( (v83 & 2) != 0 )
                            {
                              v66 = (int *)v84;
                              goto LABEL_148;
                            }
                            v82 = (int *)v84;
                          }
                        }
                        v66 = v82;
                      }
                      else
                      {
                        do
                        {
                          v66 = v74;
                          v74 = *((int **)v74 + 1);
                        }
                        while ( (*(_BYTE *)v74 & 2) == 0 );
                      }
                    }
LABEL_148:
                    ;
                  }
                  while ( v66 != *(int **)a3 );
                  v75 = (int *)v128;
                  v76 = (int *)(v128 + 16 * v129);
                  if ( v76 != (int *)v128 )
                  {
                    while ( 1 )
                    {
                      v111 = sub_279380(a1, (__int64)a2, &v126, v75, (__int64)&v125, udm_by_tid);
                      if ( !v111 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v75 + 432LL) + 104LL * v75[2] + 25) & 1) == 0 )
                        break;
                      v75 += 4;
                      if ( v76 == v75 )
                        goto LABEL_153;
                    }
                    if ( !under_debugger )
                      sub_3835A0(50190);
LABEL_262:
                    BUG();
                  }
LABEL_153:
                  if ( v111 )
                  {
                    sub_3750E0(a1, a2);
                    v4 = v111;
                  }
LABEL_155:
                  if ( v128 )
                  {
                    *(_QWORD *)&v129 = 0;
                    qfree(v128);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        copy_tinfo_t(&v127, v141);
        v130 = nullptr;
        tinfo_property = get_tinfo_property(v127, 289);
        v130 = (void *)tinfo_property;
        v63 = tinfo_property;
        if ( (unsigned __int8)v127 <= 0x3Fu
          && (unsigned __int8)tinfo_property <= 0x3Fu
          && (!(_BYTE)tinfo_property
           || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
           || (s1[0] = nullptr,
               s1[0] = (char *)get_tinfo_property(tinfo_property, 9),
               v64 = get_tinfo_property(s1[0], 2) & 0x3F,
               clear_tinfo_t(s1),
               v64 == 48)
           || (v63 & 0xCF) == 9) )
        {
          clear_tinfo_t(&v130);
        }
        else
        {
          clear_tinfo_t(&v130);
          if ( (unsigned __int8)sub_32CEA0(&v127, a1, -1) && !(unsigned __int8)sub_2787D0(&v127, &v126, v9) )
            goto LABEL_157;
        }
        if ( (int)set_tinfo_property4(&v125, 12, udm_by_tid, &v126, 0, 0) >= 0 )
          goto LABEL_128;
      }
LABEL_157:
      clear_tinfo_t(&v127);
      goto LABEL_158;
    }
    if ( (get_tinfo_property(v126, 2) & 0xF) != 0xB )
    {
      if ( v115 == v40 && v9 == data_elsize || n == 1024 && (flags & 0xF0000000) == 0x60000000 )
        goto LABEL_158;
      goto LABEL_118;
    }
    v130 = nullptr;
    *(_QWORD *)&v124[0] = &v130;
    *(_QWORD *)&v131 = 0;
    if ( (unsigned __int8)get_tinfo_details(v126, 11, &v130) )
    {
      if ( (get_tinfo_property(v130, 2) & 0x3F) != 0xD )
      {
        v86 = get_tinfo_size(0, v130, 0);
        v87 = v86;
        if ( udm_by_tid == -1
          || v86 <= 1
          || (v88 = v86 - v40, v89 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), v88 >= v89)
          || (v90 = _mm_load_si128(&v136),
              v115 + ((unsigned __int64)v90.m128i_i64[0] >> 3) != (((int)(v89 - 1)
                                                                  + (_mm_add_epi64(_mm_srli_si128(v90, 8), v90).m128i_u64[0] >> 3))
                                                                 & -v89)) )
        {
          if ( DWORD1(v131) != 2 )
            goto LABEL_220;
          if ( (unsigned __int8)(((unsigned __int8)v130 & 0xF) - 2) > 5u )
          {
            *(_OWORD *)s1 = 0;
            getinf_buf(26, s1, 16);
            if ( a2 >= s1[0] && a2 < s1[1] )
            {
              v102 = get_tinfo_property(v130, 2);
              if ( (v102 & 0xE) == 0 && (v102 & 0x30) != 0 && v87 > 3 )
                goto LABEL_224;
            }
LABEL_220:
            if ( ((unsigned __int8)v130 & 0xF) == 0xA && !get_tinfo_property(v130, 6) )
              goto LABEL_224;
LABEL_221:
            memset(s1, 0, sizeof(s1));
            if ( ((unsigned __int16)v130 & 0x100) != 0 )
            {
              tinfo_pdata = get_tinfo_pdata(s1, v130, 0);
              v101 = s1[0];
              if ( tinfo_pdata && s1[1] && !strcmp(s1[0], "va_list") )
              {
                if ( v101 )
                {
                  s1[1] = nullptr;
                  qfree(v101);
                }
                goto LABEL_224;
              }
              if ( v101 )
              {
                s1[1] = nullptr;
                qfree(v101);
              }
            }
            clear_tinfo_t(*(_QWORD *)&v124[0]);
            goto LABEL_118;
          }
          if ( v87 <= 3 )
            goto LABEL_221;
        }
      }
    }
LABEL_224:
    clear_tinfo_t(*(_QWORD *)&v124[0]);
    goto LABEL_158;
  }
  if ( get_tinfo_property4(v125, 300, 0, 0, 0, 0) == -1 )
  {
    if ( !under_debugger )
      sub_3835A0(52696);
    goto LABEL_262;
  }
  memset(s1, 0, sizeof(s1));
  v134 = 0;
  v135 = 1;
  v133 = 0;
  get_tinfo_details(v125, 13, s1);
  v11 = s1[0];
  v115 = v9;
  v12 = s1[0];
  if ( (char *)(udm_by_tid + 1) != s1[1] )
  {
    v13 = 144 * (udm_by_tid + 1);
    v14 = &s1[0][v13];
    v15 = *(_QWORD *)&s1[0][v13];
    if ( *(_QWORD *)&s1[0][v13 + 24] )
    {
      v16 = *((const char **)v14 + 2);
      if ( v16 )
      {
        v122 = &s1[0][v13];
        v120 = s1[0];
        v17 = strncmp(v16, "anonymous", 9u);
        v12 = v120;
        v14 = v122;
        v11 = v120;
        if ( v17 )
          goto LABEL_167;
      }
    }
    else if ( ::s1 )
    {
      goto LABEL_167;
    }
    v18 = *((_QWORD *)v14 + 1);
    if ( (unsigned __int64)(v18 - 8) <= 7 )
    {
      v19 = (v18 + v15) >> 3;
      if ( v107 < v19 )
      {
        if ( v106 )
          goto LABEL_17;
        goto LABEL_171;
      }
    }
LABEL_167:
    v19 = v15 >> 3;
    if ( v15 >> 3 < v107 )
      v19 = v107;
    if ( v106 )
    {
LABEL_17:
      v108 = v19;
      v20 = (unsigned __int64)v136.m128i_i64[0] >> 3;
      if ( v20 >= sub_1CF790((_QWORD *)v106, *(_QWORD *)(v106 + 144)) || (v21 = *(_QWORD *)(v106 + 88), v21 >= v108) )
      {
        if ( v108 )
        {
          v11 = s1[0];
          v79 = v108 - ((unsigned __int64)v136.m128i_i64[0] >> 3);
          if ( v9 >= v79 )
            v79 = v9;
          v115 = v79;
          goto LABEL_26;
        }
      }
      else
      {
        if ( v21 < (unsigned __int64)v136.m128i_i64[0] >> 3 )
          v21 = (unsigned __int64)v136.m128i_i64[0] >> 3;
        if ( v21 )
        {
          v22 = v21 - ((unsigned __int64)v136.m128i_i64[0] >> 3);
          if ( v9 >= v22 )
            v22 = v9;
          v115 = v22;
        }
      }
      v11 = s1[0];
LABEL_26:
      v12 = v11;
      if ( *v7 == 1 )
      {
        v23 = *((_QWORD *)v7 + 1);
        if ( v23 >= 0 )
        {
          v24 = *(_QWORD *)(v106 + 440);
          v25 = v115 + v23;
          if ( v24 )
          {
            v26 = *(_QWORD *)(v106 + 432);
            v27 = v26 + 104 * v24;
            do
            {
              if ( *(_DWORD *)v26 == 1 )
              {
                v28 = *(_QWORD *)(v26 + 8);
                if ( v28 < v25 && v28 > v23 )
                  v25 = *(_QWORD *)(v26 + 8);
              }
              v26 += 104;
            }
            while ( v26 != v27 );
          }
          v29 = v25 - v23;
          v30 = v29;
          if ( v29 >= v115 )
            v30 = v115;
          v115 = v30;
        }
      }
      goto LABEL_38;
    }
    if ( !v19 )
      goto LABEL_38;
LABEL_171:
    v78 = v19 - ((unsigned __int64)v136.m128i_i64[0] >> 3);
    if ( v9 >= v78 )
      v78 = v9;
    v115 = v78;
LABEL_38:
    v31 = v136.m128i_i64[1];
    if ( !v11 )
      goto LABEL_48;
    v32 = s1[1];
    if ( !s1[1] )
      goto LABEL_47;
    goto LABEL_40;
  }
  if ( v107 )
  {
    v77 = v107 - ((unsigned __int64)v136.m128i_i64[0] >> 3);
    if ( v9 >= v77 )
      v77 = v9;
    v115 = v77;
  }
  if ( v106 )
    goto LABEL_26;
  v31 = v136.m128i_i64[1];
  if ( s1[0] )
  {
    v32 = s1[1];
LABEL_40:
    v109 = v31;
    v33 = nullptr;
    v34 = v32;
    do
    {
      v35 = &v12[144 * (_QWORD)v33];
      clear_tinfo_t(v35 + 64);
      v36 = *((_QWORD *)v35 + 5);
      if ( v36 )
      {
        *((_QWORD *)v35 + 6) = 0;
        qfree(v36);
      }
      v37 = *((_QWORD *)v35 + 2);
      if ( v37 )
      {
        *((_QWORD *)v35 + 3) = 0;
        qfree(v37);
      }
      ++v33;
      v12 = s1[0];
    }
    while ( v33 != v34 );
    v31 = v109;
LABEL_47:
    s1[1] = nullptr;
    qfree(v12);
  }
LABEL_48:
  if ( (get_tinfo_property(*(_QWORD *)&v141[0], 2) & 0x2F) != 0xD )
  {
    flags = 1024;
    v38 = v31;
    v39 = 0;
    n = 1024;
    v40 = v38 >> 3;
    goto LABEL_98;
  }
LABEL_82:
  clear_tinfo_t(v141);
  if ( v139 )
  {
    *(_QWORD *)&v140 = 0;
    qfree(v139);
  }
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  clear_tinfo_t(&v125);
  return v4;
}
