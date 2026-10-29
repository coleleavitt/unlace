__int64 __fastcall sub_27BC20(__int64 a1, char *a2, __int64 a3)
{
  _DWORD *exception; // rdi
  unsigned int v4; // r13d
  int v6; // eax
  int *v7; // rbp
  bool v8; // al
  unsigned int v9; // r14d
  int tinfo_size; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r12
  const char *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned int v27; // eax
  char v28; // bl
  unsigned int v29; // r12d
  int *v30; // r15
  int v31; // ebx
  _QWORD *v32; // r13
  __int64 *v33; // r15
  __int64 v34; // rsi
  int *v35; // r15
  _QWORD *v36; // rdx
  _QWORD *i; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // edx
  int v45; // r15d
  unsigned int v46; // eax
  int v47; // eax
  int v48; // edx
  __int64 tinfo_property; // rax
  char v50; // r12
  char v51; // bp
  int *v52; // rax
  int *v53; // rbp
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // r14
  __int64 v61; // rbx
  int *v62; // rdx
  int *v63; // rbp
  int *v64; // rbx
  unsigned int v65; // edx
  unsigned int v66; // edx
  __int64 v67; // rax
  int *v68; // rax
  __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  int aflags; // ebp
  int v72; // eax
  int v73; // ebp
  unsigned int v74; // edx
  unsigned int v75; // eax
  __m128i v76; // xmm0
  __int64 v77; // r14
  int v78; // r12d
  int *v79; // rax
  __int64 v80; // rbx
  unsigned __int64 v81; // r9
  __int64 v82; // rbx
  unsigned __int64 v83; // r8
  char v84; // bl
  char *v85; // rax
  __int64 tinfo_pdata; // rax
  char *v87; // rbp
  char v88; // al
  __int64 v92; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v93; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 v94; // [rsp+20h] [rbp-2E8h]
  int flags; // [rsp+20h] [rbp-2E8h]
  unsigned __int8 v96; // [rsp+20h] [rbp-2E8h]
  unsigned int v97; // [rsp+2Ch] [rbp-2DCh]
  unsigned __int8 v98; // [rsp+2Ch] [rbp-2DCh]
  __int64 udm_by_tid; // [rsp+38h] [rbp-2D0h]
  unsigned int v100; // [rsp+40h] [rbp-2C8h]
  unsigned __int8 v101; // [rsp+40h] [rbp-2C8h]
  char v102; // [rsp+44h] [rbp-2C4h]
  int v103; // [rsp+44h] [rbp-2C4h]
  size_t n; // [rsp+50h] [rbp-2B8h]
  int data_elsize; // [rsp+58h] [rbp-2B0h]
  char *v106; // [rsp+60h] [rbp-2A8h]
  unsigned __int64 v107; // [rsp+68h] [rbp-2A0h]
  double v108[3]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v109; // [rsp+88h] [rbp-280h] BYREF
  __int64 v110; // [rsp+90h] [rbp-278h] BYREF
  __int64 v111; // [rsp+98h] [rbp-270h] BYREF
  int *v112; // [rsp+A0h] [rbp-268h] BYREF
  __int128 v113; // [rsp+A8h] [rbp-260h]
  void *v114; // [rsp+C0h] [rbp-248h] BYREF
  __int128 v115; // [rsp+C8h] [rbp-240h]
  char *s1[3]; // [rsp+E0h] [rbp-228h] BYREF
  __int128 v117; // [rsp+F8h] [rbp-210h]
  __int64 v118; // [rsp+108h] [rbp-200h]
  int v119; // [rsp+110h] [rbp-1F8h]
  __m128i v120; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v121; // [rsp+130h] [rbp-1D8h]
  __int128 v122; // [rsp+138h] [rbp-1D0h]
  __int64 v123; // [rsp+148h] [rbp-1C0h]
  __int128 v124; // [rsp+150h] [rbp-1B8h]
  __int128 v125; // [rsp+160h] [rbp-1A8h]
  __int64 v126; // [rsp+190h] [rbp-178h]
  int v127; // [rsp+198h] [rbp-170h]
  __int64 v128; // [rsp+1A0h] [rbp-168h]
  char v129; // [rsp+1A8h] [rbp-160h]
  unsigned __int64 v130; // [rsp+2C8h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
    return 0;
  v4 = is_special_frame_member();
  if ( (_BYTE)v4 )
    return 0;
  v6 = sub_278DE0((int **)a3);
  v7 = *(int **)a3;
  v97 = v6;
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)(a3 + 8) || (v30 = *((int **)v7 + 1), v30 == v7) )
    {
      v92 = 0;
      v8 = 0;
      v7 = nullptr;
      v9 = 0;
      v93 = 0;
      tinfo_size = -1;
    }
    else
    {
      v92 = 0;
      v31 = 1;
      tinfo_size = -1;
      v93 = 0;
      if ( v6 > 0 )
        v31 = v6;
      v7 = nullptr;
      v9 = 0;
      v101 = v4;
      v32 = v30;
      do
      {
        v33 = v32 + 3;
        if ( tinfo_size == -1 )
          tinfo_size = get_tinfo_size();
        if ( *((_DWORD *)v32 + 10) >= v31 && (*((_DWORD *)v32 + 10) < (signed int)v9 || !v9) )
          v9 = *((_DWORD *)v32 + 10);
        if ( *((_DWORD *)v32 + 8) != -1 )
        {
          v34 = *v33;
          v35 = (int *)(*(_QWORD *)(*v33 + 432) + 104LL * *((int *)v32 + 8));
          if ( !v7 )
          {
            v92 = v34;
            v7 = v35;
          }
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            v41 = sub_1C35C0(v35, v35[22]);
            v42 = sub_1CFD50((_QWORD *)v92, v41);
            if ( (__int64)v93 >= v42 )
              v42 = v93;
            v93 = v42;
          }
        }
        if ( (*v32 & 2) == 0 )
        {
          v36 = (_QWORD *)v32[2];
          if ( (*(_BYTE *)v36 & 2) != 0 )
          {
            v38 = (_QWORD *)(*v32 & 0xFFFFFFFFFFFFFFFCLL);
            v39 = *v38;
            if ( (*v38 & 2) == 0 )
            {
              while ( (_QWORD *)v38[2] == v32 )
              {
                v32 = v38;
                v40 = v39 & 0xFFFFFFFFFFFFFFFCLL;
                v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v39 & 2) != 0 )
                {
                  v32 = (_QWORD *)v40;
                  goto LABEL_58;
                }
                v38 = (_QWORD *)v40;
              }
            }
            v32 = v38;
          }
          else
          {
            for ( i = (_QWORD *)v36[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v36 = i;
            v32 = v36;
          }
        }
LABEL_58:
        ;
      }
      while ( *(_QWORD **)a3 != v32 );
      v4 = v101;
      v8 = v9 != 0;
    }
  }
  else
  {
    v92 = 0;
    v8 = 0;
    tinfo_size = -1;
    v9 = 0;
    v93 = 0;
  }
  v109 = 0;
  v121 = 0;
  v102 = v8 || (int)v97 > tinfo_size;
  v123 = 0;
  v126 = 1;
  v127 = -1;
  v128 = 0;
  v129 = 0;
  v120 = 0;
  v122 = 0;
  v124 = 0;
  v125 = 0;
  udm_by_tid = get_udm_by_tid();
  if ( udm_by_tid == -1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < (unsigned __int64)a2 )
      goto LABEL_70;
    flags = get_flags_ex();
    if ( (get_aflags() & 0x2000000) != 0 )
      goto LABEL_70;
    v28 = is_spec_ea();
    if ( v28 )
    {
      v43 = (unsigned __int8)getinf() == 8 ? get_qword() : get_dword();
      if ( v43 < 0 )
      {
        if ( v102 )
          tinfo_size = 0;
        v28 = v102;
        v100 = tinfo_size;
      }
      else
      {
        v44 = v97;
        if ( v97 < v9 )
          v44 = v9;
        if ( v44 >= v43 )
          v43 = v44;
        v28 = 0;
        v100 = v43;
      }
    }
    else
    {
      v100 = calc_max_item_end() - (_DWORD)a2;
    }
    v29 = get_item_end() - (_DWORD)a2;
    n = flags & 0x600;
    if ( n == 1024 && (flags & 0xF0000000) == 0x60000000 )
      goto LABEL_70;
LABEL_86:
    v45 = sub_278A80((_QWORD *)a3, nullptr);
    if ( v45 > 1 && v102 )
      v100 = v45 * (v100 / v45);
    if ( !v28 && (v29 >= v100 || v100 < v97 || v100 < v9) )
      goto LABEL_70;
    if ( udm_by_tid == -1 )
    {
      get_opinfo();
      data_elsize = get_data_elsize();
    }
    else
    {
      data_elsize = (unsigned __int64)v120.m128i_i64[1] >> 3;
    }
    if ( v9 < v29 )
    {
      v46 = v97;
      if ( *(_BYTE *)(a3 + 20) )
        v46 = v100;
      if ( v29 >= v46 && n == 1024 && v45 == data_elsize )
        goto LABEL_70;
    }
    v110 = 0;
    v98 = sub_27AE10((_QWORD *)a3, a1, v100, v102, &v110, 0);
    if ( !v98 )
      goto LABEL_146;
    v47 = get_tinfo_size();
    v103 = v47;
    if ( v7 )
    {
      v48 = *(_DWORD *)(a3 + 16);
      if ( v48 )
      {
        if ( v48 > v47 )
          goto LABEL_146;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xD )
    {
      if ( (v110 & 0x100) == 0 )
      {
LABEL_146:
        clear_tinfo_t();
        goto LABEL_70;
      }
LABEL_106:
      v111 = 0;
      if ( udm_by_tid == -1 )
      {
        if ( !(unsigned __int8)get_tinfo() || (unsigned __int8)sub_278410(&v111, &v110, v9) )
        {
          aflags = get_aflags();
          if ( (unsigned __int8)apply_tinfo() )
          {
            if ( (aflags & 0x400000) == 0 && (get_aflags() & 0x400000) != 0 )
            {
              exception = __cxa_allocate_exception(0x30u);
              *(_QWORD *)exception = off_4DBCD0;
              exception[2] = -17;
              *((_QWORD *)exception + 2) = a2;
              *((_QWORD *)exception + 3) = 0;
              *((_OWORD *)exception + 2) = 0;
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
            }
LABEL_116:
            v112 = nullptr;
            v113 = 0;
            v52 = *(int **)a3;
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)(a3 + 8) )
              {
                v53 = *((int **)v52 + 1);
                if ( v52 != v53 )
                {
                  v96 = 0;
                  do
                  {
                    v54 = v53[8];
                    if ( (_DWORD)v54 == -1 )
                    {
                      sub_278EB0(a1, (__int64)a2, &v110, 0, (__int64)&v109, udm_by_tid);
                      v96 = v98;
                    }
                    else
                    {
                      v55 = *(_QWORD *)(*((_QWORD *)v53 + 3) + 432LL) + 104 * v54;
                      if ( !sub_1EF510(v55, *(_QWORD *)(a1 + 112), &v110, 0) )
                        goto LABEL_143;
                      if ( *(_DWORD *)(v55 + 88) <= v103 )
                        goto LABEL_246;
                      if ( *(char *)(v55 + 26) >= 0 )
                      {
                        v67 = v55 - *(_QWORD *)(v92 + 432);
                        LOBYTE(v118) = 0;
                        s1[1] = nullptr;
                        s1[2] = nullptr;
                        v117 = 0u;
                        HIDWORD(v118) = -991146299 * (v67 >> 3);
                        s1[0] = (char *)&off_4E0850;
                        v119 = v103;
                        if ( !(unsigned int)sub_11FBB0(v92, (__int64)s1) )
                        {
LABEL_246:
                          if ( *(_DWORD *)v55 == 1 )
                          {
                            v56 = *(_QWORD *)(v55 + 8);
                            if ( udm_by_tid != -1 && v56 != -1 )
                            {
                              v57 = sub_1CFD50((_QWORD *)v92, v56);
                              if ( v57 == (unsigned __int64)v120.m128i_i64[0] >> 3 )
                              {
                                if ( v53[10] || v53[11] )
                                  goto LABEL_128;
                                v114 = nullptr;
                                v115 = 0;
                                v80 = *(_QWORD *)(v92 + 216);
                                if ( v80 )
                                {
                                  v114 = (void *)qalloc_or_throw(16 * v80, v56, 16 * v80, v58);
                                  *((_QWORD *)&v115 + 1) = v80;
                                  memcpy(v114, *(const void **)(v92 + 208), 16 * v80);
                                  *(_QWORD *)&v115 = v80;
                                }
                                memset(s1, 0, sizeof(s1));
                                v81 = *(_QWORD *)(v92 + 568);
                                v108[0] = *(double *)(v92 + 576);
                                if ( v81 + *(_QWORD *)&v108[0] - 1 >= v81 )
                                {
                                  *(_QWORD *)&v108[1] = v81;
                                  s1[0] = (char *)qvector_reserve((__int64)s1, 0, 1, 16);
                                  *(__m128 *)&s1[0][16 * (__int64)s1[1]++] = _mm_loadh_ps(v108);
                                }
                                *(_QWORD *)&v108[0] = &v114;
                                sub_3180C0(&v114, s1);
                                if ( s1[0] )
                                {
                                  s1[1] = nullptr;
                                  qfree((__int64)s1[0]);
                                }
                                v82 = v53[14];
                                v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v92 + 1496) + 24LL) + 16LL)
                                    & (v56 + *(_QWORD *)(v92 + 1440));
                                memset(s1, 0, sizeof(s1));
                                if ( v82 + v83 - 1 >= v83 )
                                {
                                  v107 = v83;
                                  s1[0] = (char *)qvector_reserve((__int64)s1, 0, 1, 16);
                                  v85 = &s1[0][16 * (__int64)s1[1]];
                                  *(_QWORD *)v85 = v107;
                                  *((_QWORD *)v85 + 1) = v82;
                                  ++s1[1];
                                }
                                v84 = sub_317F40(*(_QWORD *)&v108[0], s1);
                                if ( s1[0] )
                                {
                                  s1[1] = nullptr;
                                  qfree((__int64)s1[0]);
                                }
                                if ( v114 )
                                {
                                  *(_QWORD *)&v115 = 0;
                                  qfree((__int64)v114);
                                }
                                if ( !v84 )
                                {
LABEL_128:
                                  v59 = v113;
                                  v60 = (__int64)v112;
                                  v61 = (__int64)&v112[4 * v113];
                                  if ( v112 == (int *)v61 )
                                    goto LABEL_206;
                                  do
                                  {
                                    if ( !(unsigned int)sub_256980((__int64)(v53 + 6), v60) )
                                      break;
                                    v60 += 16;
                                  }
                                  while ( v61 != v60 );
                                  v59 = v113;
                                  v61 = (__int64)v112;
                                  if ( (int *)v60 == &v112[4 * (_QWORD)v113] )
                                  {
LABEL_206:
                                    v77 = *((_QWORD *)v53 + 3);
                                    v78 = v53[8];
                                    if ( *((_QWORD *)&v113 + 1) < (unsigned __int64)(v59 + 1) )
                                      v112 = (int *)qvector_reserve((__int64)&v112, v61, v59 + 1, 16);
                                    v79 = &v112[4 * v113];
                                    *(_QWORD *)v79 = v77;
                                    v79[2] = v78;
                                    *(_QWORD *)&v113 = v113 + 1;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( (*(_QWORD *)v53 & 2) == 0 )
                    {
                      v62 = *((int **)v53 + 2);
                      if ( (*(_BYTE *)v62 & 2) != 0 )
                      {
                        v68 = (int *)(*(_QWORD *)v53 & 0xFFFFFFFFFFFFFFFCLL);
                        v69 = *(_QWORD *)v68;
                        if ( (*(_QWORD *)v68 & 2) == 0 )
                        {
                          while ( *((int **)v68 + 2) == v53 )
                          {
                            v53 = v68;
                            v70 = v69 & 0xFFFFFFFFFFFFFFFCLL;
                            v69 = *(_QWORD *)(v69 & 0xFFFFFFFFFFFFFFFCLL);
                            if ( (v69 & 2) != 0 )
                            {
                              v53 = (int *)v70;
                              goto LABEL_136;
                            }
                            v68 = (int *)v70;
                          }
                        }
                        v53 = v68;
                      }
                      else
                      {
                        do
                        {
                          v53 = v62;
                          v62 = *((int **)v62 + 1);
                        }
                        while ( (*(_BYTE *)v62 & 2) == 0 );
                      }
                    }
LABEL_136:
                    ;
                  }
                  while ( v53 != *(int **)a3 );
                  v63 = v112;
                  v64 = &v112[4 * v113];
                  if ( v64 != v112 )
                  {
                    while ( 1 )
                    {
                      v96 = sub_278FC0(a1, (__int64)a2, &v110, v63, (__int64)&v109, udm_by_tid);
                      if ( !v96 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v63 + 432LL) + 104LL * v63[2] + 25) & 1) == 0 )
                        break;
                      v63 += 4;
                      if ( v64 == v63 )
                        goto LABEL_141;
                    }
                    if ( !under_debugger )
                      sub_383060(50190);
LABEL_243:
                    BUG();
                  }
LABEL_141:
                  if ( v96 )
                  {
                    sub_374BA0(a1, a2);
                    v4 = v96;
                  }
LABEL_143:
                  if ( v112 )
                  {
                    *(_QWORD *)&v113 = 0;
                    qfree((__int64)v112);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        copy_tinfo_t();
        v114 = nullptr;
        tinfo_property = get_tinfo_property();
        v114 = (void *)tinfo_property;
        v50 = tinfo_property;
        if ( (unsigned __int8)v111 <= 0x3Fu
          && (unsigned __int8)tinfo_property <= 0x3Fu
          && (!(_BYTE)tinfo_property
           || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
           || (s1[0] = nullptr,
               s1[0] = (char *)get_tinfo_property(),
               v51 = get_tinfo_property() & 0x3F,
               clear_tinfo_t(),
               v51 == 48)
           || (v50 & 0xCF) == 9) )
        {
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          if ( (unsigned __int8)sub_32CB80(&v111, a1, -1) && !(unsigned __int8)sub_278410(&v111, &v110, v9) )
            goto LABEL_145;
        }
        if ( (int)set_tinfo_property4() >= 0 )
          goto LABEL_116;
      }
LABEL_145:
      clear_tinfo_t();
      goto LABEL_146;
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( v100 == v29 && v9 == data_elsize || n == 1024 && (flags & 0xF0000000) == 0x60000000 )
        goto LABEL_146;
      goto LABEL_106;
    }
    v114 = nullptr;
    *(_QWORD *)&v108[0] = &v114;
    *(_QWORD *)&v115 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      if ( (get_tinfo_property() & 0x3F) != 0xD )
      {
        v72 = get_tinfo_size();
        v73 = v72;
        if ( udm_by_tid == -1
          || v72 <= 1
          || (v74 = v72 - v29, v75 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), v74 >= v75)
          || (v76 = _mm_load_si128(&v120),
              v100 + ((unsigned __int64)v76.m128i_i64[0] >> 3) != (((int)(v75 - 1)
                                                                  + (_mm_add_epi64(_mm_srli_si128(v76, 8), v76).m128i_u64[0] >> 3))
                                                                 & -v75)) )
        {
          if ( DWORD1(v115) != 2 )
            goto LABEL_201;
          if ( (unsigned __int8)(((unsigned __int8)v114 & 0xF) - 2) > 5u )
          {
            *(_OWORD *)s1 = 0;
            getinf_buf();
            if ( a2 >= s1[0] && a2 < s1[1] )
            {
              v88 = get_tinfo_property();
              if ( (v88 & 0xE) == 0 && (v88 & 0x30) != 0 && v73 > 3 )
                goto LABEL_205;
            }
LABEL_201:
            if ( ((unsigned __int8)v114 & 0xF) == 0xA && !get_tinfo_property() )
              goto LABEL_205;
LABEL_202:
            memset(s1, 0, sizeof(s1));
            if ( ((unsigned __int16)v114 & 0x100) != 0 )
            {
              tinfo_pdata = get_tinfo_pdata();
              v87 = s1[0];
              if ( tinfo_pdata && s1[1] && !strcmp(s1[0], "va_list") )
              {
                if ( v87 )
                {
                  s1[1] = nullptr;
                  qfree((__int64)v87);
                }
                goto LABEL_205;
              }
              if ( v87 )
              {
                s1[1] = nullptr;
                qfree((__int64)v87);
              }
            }
            clear_tinfo_t();
            goto LABEL_106;
          }
          if ( v73 <= 3 )
            goto LABEL_202;
        }
      }
    }
LABEL_205:
    clear_tinfo_t();
    goto LABEL_146;
  }
  if ( get_tinfo_property4() == -1 )
  {
    if ( !under_debugger )
      sub_383060(52696);
    goto LABEL_243;
  }
  memset(s1, 0, sizeof(s1));
  v118 = 0;
  v119 = 1;
  v117 = 0;
  get_tinfo_details();
  v100 = v9;
  v11 = 144 * (udm_by_tid + 1);
  v12 = v11;
  v13 = *(_QWORD *)v11;
  if ( qword_18[v11 / 8] )
  {
    v14 = *(const char **)&word_10[72 * udm_by_tid + 72];
    if ( v14 )
    {
      v106 = &s1[0][v11];
      v15 = strncmp(v14, "anonymous", 9u);
      v12 = (unsigned __int64)v106;
      if ( v15 )
        goto LABEL_148;
    }
  }
  else if ( ::s1 )
  {
LABEL_148:
    v17 = v13 >> 3;
    if ( v13 >> 3 < v93 )
      v17 = v93;
    if ( v92 )
      goto LABEL_16;
    if ( !v17 )
      goto LABEL_36;
    goto LABEL_152;
  }
  v16 = *(_QWORD *)(v12 + 8);
  if ( (unsigned __int64)(v16 - 8) > 7 )
    goto LABEL_148;
  v17 = (v16 + v13) >> 3;
  if ( v93 >= v17 )
    goto LABEL_148;
  if ( v92 )
  {
LABEL_16:
    v94 = v17;
    if ( (unsigned __int64)v120.m128i_i64[0] >> 3 >= sub_1CFD50((_QWORD *)v92, *(_QWORD *)(v92 + 144))
      || (v18 = *(_QWORD *)(v92 + 88), v18 >= v94) )
    {
      if ( v94 )
      {
        v66 = v94 - ((unsigned __int64)v120.m128i_i64[0] >> 3);
        if ( v9 >= v66 )
          v66 = v9;
        v100 = v66;
      }
    }
    else
    {
      if ( v18 < (unsigned __int64)v120.m128i_i64[0] >> 3 )
        v18 = (unsigned __int64)v120.m128i_i64[0] >> 3;
      if ( v18 )
      {
        v19 = v18 - ((unsigned __int64)v120.m128i_i64[0] >> 3);
        if ( v9 >= v19 )
          v19 = v9;
        v100 = v19;
      }
    }
    if ( *v7 == 1 )
    {
      v20 = *((_QWORD *)v7 + 1);
      if ( v20 >= 0 )
      {
        v21 = *(_QWORD *)(v92 + 440);
        v22 = v100 + v20;
        if ( v21 )
        {
          v23 = *(_QWORD *)(v92 + 432);
          v24 = v23 + 104 * v21;
          do
          {
            if ( *(_DWORD *)v23 == 1 )
            {
              v25 = *(_QWORD *)(v23 + 8);
              if ( v25 < v22 && v25 > v20 )
                v22 = *(_QWORD *)(v23 + 8);
            }
            v23 += 104;
          }
          while ( v23 != v24 );
        }
        v26 = v22 - v20;
        v27 = v26;
        if ( v26 >= v100 )
          v27 = v100;
        v100 = v27;
      }
    }
    goto LABEL_36;
  }
LABEL_152:
  v65 = v17 - ((unsigned __int64)v120.m128i_i64[0] >> 3);
  if ( v9 >= v65 )
    v65 = v9;
  v100 = v65;
LABEL_36:
  if ( (get_tinfo_property() & 0x2F) != 0xD )
  {
    flags = 1024;
    v28 = 0;
    n = 1024;
    v29 = (unsigned __int64)v120.m128i_i64[1] >> 3;
    goto LABEL_86;
  }
LABEL_70:
  clear_tinfo_t();
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123);
  }
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121);
  }
  clear_tinfo_t();
  return v4;
}
