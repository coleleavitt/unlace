__int64 __fastcall sub_1A9240(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  void (__fastcall *v5)(_QWORD *, __int64, __int64); // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  int v16; // r15d
  __int64 v17; // r13
  unsigned int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 *v23; // rax
  __m128i v24; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r9d
  int v30; // eax
  unsigned int v31; // eax
  _QWORD *v32; // rbp
  __int64 v33; // r12
  __int64 func; // r13
  __int64 v35; // rax
  unsigned __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r12
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r14d
  __int64 v53; // rax
  __int64 v54; // r13
  __int64 v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 **v61; // rdi
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  int v65; // ebp
  unsigned __int64 v66; // rax
  __int64 v67; // r14
  __int64 **v68; // rax
  __int64 *v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rax
  int v72; // ebp
  __int64 v73; // rbp
  unsigned __int64 v74; // r12
  __int64 *v75; // rdx
  __int64 v76; // rdi
  _QWORD *v77; // r13
  _QWORD *i; // r12
  __int128 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rdi
  __m128i *v82; // r12
  unsigned int v83; // r14d
  int v84; // r13d
  __int64 v85; // r15
  unsigned int v86; // r13d
  __int64 v87; // rsi
  int v88; // edx
  __int64 v89; // rbx
  __int64 v90; // rax
  int tinfo_udt_member; // eax
  char *v92; // rsi
  char v93; // r13
  unsigned __int64 v94; // r15
  unsigned __int64 v95; // rbx
  __int64 *v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned int v100; // r12d
  __int64 v101; // r14
  __int64 v102; // rbp
  __m128i *v103; // rax
  __int64 v104; // r14
  __int64 v105; // r15
  __int64 v106; // r12
  unsigned int v107; // r13d
  __m128i *v108; // rax
  __int64 *v109; // r12
  __int64 v110; // rdx
  __int64 *v111; // rdi
  __int64 *v112; // rdi
  unsigned __int64 *v113; // rax
  __m128i v114; // xmm0
  void *v115; // r14
  void *v116; // rbx
  int v118; // [rsp+0h] [rbp-250h]
  int n; // [rsp+10h] [rbp-240h]
  int na; // [rsp+10h] [rbp-240h]
  _QWORD *v121; // [rsp+18h] [rbp-238h]
  int v122; // [rsp+18h] [rbp-238h]
  __int64 v123; // [rsp+18h] [rbp-238h]
  __int64 v124; // [rsp+20h] [rbp-230h]
  int v125; // [rsp+34h] [rbp-21Ch]
  __int64 v126; // [rsp+38h] [rbp-218h]
  __int64 v128; // [rsp+50h] [rbp-200h] BYREF
  unsigned __int64 v129; // [rsp+58h] [rbp-1F8h] BYREF
  __int128 v130; // [rsp+60h] [rbp-1F0h]
  __int64 v131; // [rsp+78h] [rbp-1D8h] BYREF
  unsigned __int64 *v132; // [rsp+80h] [rbp-1D0h]
  __int64 v133; // [rsp+88h] [rbp-1C8h]
  __int64 v134; // [rsp+90h] [rbp-1C0h]
  __int128 v135; // [rsp+98h] [rbp-1B8h]
  _QWORD *v136; // [rsp+A8h] [rbp-1A8h]
  __int64 v137; // [rsp+B0h] [rbp-1A0h]
  __int64 v138; // [rsp+B8h] [rbp-198h]
  __int128 v139; // [rsp+C0h] [rbp-190h]
  __int64 v140; // [rsp+D0h] [rbp-180h]
  __int128 v141; // [rsp+D8h] [rbp-178h]
  _QWORD v142[2]; // [rsp+E8h] [rbp-168h] BYREF
  __int64 v143; // [rsp+F8h] [rbp-158h]
  __int128 v144; // [rsp+100h] [rbp-150h]
  __int64 v145; // [rsp+110h] [rbp-140h]
  __int128 v146; // [rsp+118h] [rbp-138h]
  __int128 v147[3]; // [rsp+128h] [rbp-128h] BYREF
  __int64 v148; // [rsp+158h] [rbp-F8h]
  int v149; // [rsp+160h] [rbp-F0h]
  __int64 v150; // [rsp+168h] [rbp-E8h]
  char v151; // [rsp+170h] [rbp-E0h]
  _BYTE v152[24]; // [rsp+178h] [rbp-D8h] BYREF
  __int128 v153; // [rsp+190h] [rbp-C0h]
  unsigned __int64 v154; // [rsp+1A0h] [rbp-B0h]
  __int128 v155; // [rsp+1A8h] [rbp-A8h]
  __int128 v156[3]; // [rsp+1B8h] [rbp-98h] BYREF
  __int64 v157; // [rsp+1E8h] [rbp-68h]
  int v158; // [rsp+1F0h] [rbp-60h]
  __int64 v159; // [rsp+1F8h] [rbp-58h]
  char v160; // [rsp+200h] [rbp-50h]
  unsigned __int64 v161; // [rsp+210h] [rbp-40h]

  v161 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 16);
  v135 = 0;
  v132 = nullptr;
  v133 = 0;
  v134 = 0;
  v137 = 0;
  v138 = 0;
  v3 = v2[35];
  v136 = v2;
  v140 = 0;
  v4 = *(_QWORD *)(v3 + 1496);
  v139 = 0;
  v141 = 0;
  v131 = v4;
  v5 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v2 + 56LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 32LL))(v2);
  v5(v2, a1 + 144, v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 184) > *(_DWORD *)(v7 + 24) || *(_DWORD *)(a1 + 208) > *(_DWORD *)(v7 + 48) )
  {
    if ( !under_debugger )
      sub_383060(51506);
    goto LABEL_179;
  }
  v8 = *(_QWORD *)(v7 + 280);
  v9 = 8;
  v10 = 1;
  if ( *(int *)(v8 + 64) > 1 )
  {
    while ( 1 )
    {
      sub_1A9050(a1, &v131, *(_QWORD *)(*(_QWORD *)(v8 + 528) + v9));
      v11 = *(_DWORD *)(v8 + 64);
      if ( (int)v11 <= (int)++v10 )
        break;
      v9 += 8;
      if ( v10 >= v11 )
      {
        if ( !under_debugger )
          sub_383060(52719);
        goto LABEL_179;
      }
    }
  }
  sub_19C970(a1, &v131);
  v126 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  if ( !(unsigned __int8)sub_1A5C40(a1, v8) )
    goto LABEL_8;
  sub_19C2D0(a1, v126);
  v30 = *(_DWORD *)(v8 + 72);
  if ( v30 == 128
    || (v31 = v30 & 0xFFFFFFF0, v31 != 64) && v31 != 208 && (*(_BYTE *)(v8 + 320) || (*(_BYTE *)(v8 + 4) & 0x20) != 0) )
  {
    n = 0;
    goto LABEL_96;
  }
  v129 = 0;
  v130 = 0;
  v32 = *(_QWORD **)(a1 + 120);
  n = 0;
  v121 = &v32[16 * *(_QWORD *)(a1 + 128)];
  if ( v121 == v32 )
    goto LABEL_96;
  do
  {
    v33 = sub_1CFD50(v8, v32[9]);
    func = get_func(*(_QWORD *)(v8 + 40));
    v128 = 0;
    tinfo_get_func_frame(&v128, func);
    if ( !(_BYTE)v128 || v33 < 0 )
      goto LABEL_39;
    v142[1] = 0;
    v143 = 0;
    v148 = 1;
    v142[0] = 8 * v33;
    v145 = 0;
    v149 = -1;
    v150 = 0;
    v151 = 0;
    v144 = 0;
    v146 = 0;
    v147[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member(v142, v128, 0);
    if ( tinfo_udt_member == -1 )
      goto LABEL_112;
    if ( v142[0] >> 3 != v33 )
    {
      set_tinfo_property4(&v128, 10, tinfo_udt_member, tinfo_udt_member + 1LL, 0, 0);
LABEL_112:
      v154 = 0;
      v157 = 1;
      v158 = -1;
      v159 = 0;
      v160 = 0;
      memset(v152, 0, sizeof(v152));
      v153 = 0;
      v155 = 0;
      v156[0] = 0;
      *(_QWORD *)&v152[16] = qvector_reserve(&v152[16], 0, 3, 1);
      *(_QWORD *)&v153 = 3;
      strcpy(*(char **)&v152[16], "va");
      v125 = find_tinfo_udt_member(v152, v128, 3);
      clear_tinfo_t(v156);
      if ( v154 )
      {
        *(_QWORD *)&v155 = 0;
        qfree(v154);
      }
      if ( *(_QWORD *)&v152[16] )
      {
        *(_QWORD *)&v153 = 0;
        qfree(*(_QWORD *)&v152[16]);
      }
      v92 = nullptr;
      *(_QWORD *)v152 = 17;
      if ( v125 == -1 )
        v92 = "va";
      v93 = add_frame_member(func, v92, v33, v152, 0, 0);
      clear_tinfo_t(v152);
      if ( !v93 )
        goto LABEL_164;
      v142[0] = 8 * v33;
      tinfo_udt_member = find_tinfo_udt_member(v142, v128, 0);
      if ( tinfo_udt_member == -1 )
      {
        if ( !under_debugger )
          sub_383060(51206);
        goto LABEL_179;
      }
      if ( v33 != v142[0] >> 3 )
      {
LABEL_164:
        if ( !under_debugger )
          sub_383060(51207);
        goto LABEL_179;
      }
    }
    set_tinfo_property4(&v128, 12, tinfo_udt_member, *(_QWORD *)(a1 + 8) + 248LL, 0, 260);
    clear_tinfo_t(v147);
    if ( v145 )
    {
      *(_QWORD *)&v146 = 0;
      qfree(v145);
    }
    if ( v143 )
    {
      *(_QWORD *)&v144 = 0;
      qfree(v143);
    }
LABEL_39:
    v35 = sub_1A15A0((__int64)v32, 0);
    if ( (unsigned int)sub_1A1640((_QWORD *)v8, (__int64)v32, v35) == -1 )
    {
      if ( !under_debugger )
        sub_383060(51307);
      goto LABEL_179;
    }
    if ( !*v32 )
    {
      if ( !under_debugger )
        sub_383060(51371);
      goto LABEL_179;
    }
    v36 = v130;
    v37 = *(int *)(*v32 + 72LL);
    v38 = v129;
    v39 = v129;
    if ( (int)v37 > (int)v130 - 1 )
    {
      v40 = (int)v37 + 1;
      if ( (_QWORD)v130 != v40 )
      {
        memset(v152, 0, sizeof(v152));
        if ( v40 < (unsigned __int64)v130 )
        {
          v124 = v8;
          v94 = (int)v37 + 1;
          v95 = v130;
          do
          {
            v96 = (__int64 *)(v38 + 24 * v94);
            v97 = *v96;
            if ( *v96 )
            {
              v96[1] = 0;
              qfree(v97);
              v38 = v129;
            }
            ++v94;
          }
          while ( v94 < v95 );
          *(_QWORD *)&v130 = (int)v37 + 1;
          v8 = v124;
          v39 = v38;
        }
        else
        {
          if ( (unsigned __int64)v152 < v129 || (unsigned __int64)v152 >= v129 + 24LL * *((_QWORD *)&v130 + 1) )
          {
            if ( *((_QWORD *)&v130 + 1) < v40 )
            {
              v39 = qvector_reserve(&v129, v129, v40, 24);
              v36 = v130;
              v40 = (int)v37 + 1;
              v129 = v39;
            }
            if ( v36 < v40 )
            {
              v98 = 24 * v36;
              do
              {
                v99 = v98 + v39;
                ++v36;
                v98 += 24;
                *(_QWORD *)v99 = 0;
                *(_OWORD *)(v99 + 8) = 0;
                v39 = v129;
              }
              while ( v40 != v36 );
            }
          }
          else
          {
            if ( *((_QWORD *)&v130 + 1) < v40 )
            {
              v39 = qvector_reserve(&v129, v129, v40, 24);
              v36 = v130;
              v40 = (int)v37 + 1;
              v129 = v39;
            }
            if ( v36 < v40 )
            {
              v41 = 24 * v36;
              do
              {
                v42 = v41 + v39;
                ++v36;
                v41 += 24;
                *(_QWORD *)v42 = 0;
                *(_OWORD *)(v42 + 8) = 0;
                v39 = v129;
              }
              while ( v40 != v36 );
            }
          }
          *(_QWORD *)&v130 = v40;
        }
      }
    }
    v43 = (__int64 *)(v39 + 24 * v37);
    v44 = v43[1];
    v45 = *v43;
    if ( v43[2] < (unsigned __int64)(v44 + 1) )
    {
      v90 = qvector_reserve(v43, v45, v44 + 1, 8);
      *v43 = v90;
      v45 = v90;
      v44 = v43[1];
    }
    *(_QWORD *)(v45 + 8 * v44) = v32;
    v32 += 16;
    ++v43[1];
    ++n;
    clear_tinfo_t(&v128);
  }
  while ( v121 != v32 );
  v27 = 0;
  v122 = 0;
  v46 = v129;
  if ( (_QWORD)v130 )
  {
    do
    {
      v47 = v46 + 24 * v27;
      if ( *(_QWORD *)(v47 + 8) > 1u )
      {
        memset(v152, 0, sizeof(v152));
        v48 = ***(_QWORD ***)v47;
        if ( !v48 )
          sub_195160(0.0);
        v49 = *(_QWORD *)(v48 + 48);
        v50 = *(_QWORD *)(v47 + 8);
        v51 = 0;
        if ( v49 )
        {
          while ( 1 )
          {
            v52 = 0;
            v53 = 0;
            if ( v50 )
              break;
LABEL_72:
            v49 = *(_QWORD *)(v49 + 8);
            if ( !v49 )
            {
              v51 = *(_QWORD *)&v152[8];
              goto LABEL_74;
            }
          }
          while ( 1 )
          {
            v54 = *(_QWORD *)(*(_QWORD *)v47 + 8 * v53);
            if ( !*(_QWORD *)(v54 + 104) )
              break;
            if ( **(_QWORD **)(v54 + 96) == v49 )
            {
              v55 = *(_QWORD *)v152;
              v56 = *(_DWORD *)&v152[8] - 1;
              if ( *(_DWORD *)&v152[8] - 1 < 0 )
              {
LABEL_108:
                v58 = *(_DWORD *)(v54 + 8) & 0xFFFFFFFA;
              }
              else
              {
                v57 = *(_QWORD *)v152 + 8LL * v56;
                while ( *(_QWORD *)(v54 + 72) != *(_QWORD *)(*(_QWORD *)v57 + 72LL) )
                {
                  --v56;
                  v57 -= 8;
                  if ( v56 == -1 )
                    goto LABEL_108;
                }
                v58 = *(_DWORD *)(v54 + 8) | 5;
              }
              *(_DWORD *)(v54 + 8) = v58;
              v59 = *(_QWORD *)&v152[8];
              if ( *(_QWORD *)&v152[16] < (unsigned __int64)(*(_QWORD *)&v152[8] + 1LL) )
              {
                *(_QWORD *)v152 = qvector_reserve(v152, v55, *(_QWORD *)&v152[8] + 1LL, 8);
                v59 = *(_QWORD *)&v152[8];
                v55 = *(_QWORD *)v152;
              }
              *(_QWORD *)(v55 + 8 * v59) = v54;
              ++v52;
              ++*(_QWORD *)&v152[8];
              v50 = *(_QWORD *)(v47 + 8);
              v53 = v52;
              if ( v52 >= v50 )
                goto LABEL_72;
            }
            else
            {
              v53 = ++v52;
              if ( v52 >= v50 )
                goto LABEL_72;
            }
          }
          if ( !under_debugger )
            sub_383060(51196);
LABEL_179:
          BUG();
        }
LABEL_74:
        if ( v50 != v51 )
        {
          if ( !under_debugger )
            sub_383060(51384);
          goto LABEL_179;
        }
        v60 = *(_QWORD *)v152;
        v61 = *(__int64 ***)v47;
        *(_QWORD *)(v47 + 8) = v50;
        v62 = *(_QWORD *)(v47 + 16);
        *(_QWORD *)v47 = v60;
        *(_QWORD *)(v47 + 16) = *(_QWORD *)&v152[16];
        *(_QWORD *)v152 = v61;
        *(_QWORD *)&v152[16] = v62;
        if ( v61 )
        {
          *(_QWORD *)&v152[8] = 0;
          qfree(v61);
        }
        v46 = v129;
      }
      ++v122;
      v63 = v130;
      v27 = v122;
      v64 = v130;
    }
    while ( v122 < (unsigned __int64)v130 );
    if ( (unsigned __int64)v130 > 1 )
    {
      v27 = 1;
      v65 = 1;
      do
      {
        v66 = v46 + 24 * v27;
        if ( *(_QWORD *)(v66 + 8) )
        {
          v67 = ***(_QWORD ***)v66;
          if ( !v67 )
            sub_195160(0.0);
          *(_QWORD *)&v152[16] = 0;
          LOBYTE(v153) = 0;
          v154 = v46 + 24 * v27;
          v68 = *(__int64 ***)v66;
          *(_OWORD *)v152 = (unsigned __int64)&off_4DE208;
          v69 = *v68;
          *((_QWORD *)&v153 + 1) = &v129;
          v70 = *v69;
          if ( !v70 )
            sub_195160(0.0);
          LODWORD(v155) = *(_DWORD *)(v70 + 72);
          v71 = (__int64 *)sub_670E0(*(_QWORD **)(v67 + 64));
          sub_6F590((__int64 *)v152, v71, *(_DWORD *)(v67 + 72), 1);
          *(_QWORD *)v152 = off_4DBB18;
          qfree(*(_QWORD *)&v152[8]);
          v46 = v129;
          v63 = v130;
        }
        ++v65;
        v64 = v63;
        v27 = v65;
      }
      while ( v65 < v63 );
    }
    v26 = (unsigned int)(v64 - 1);
    if ( (int)v26 >= 0 )
    {
      v72 = 0;
      do
      {
        sub_1A2060(a1, (_QWORD *)(v46 + 24LL * v72));
        v64 = v130;
        ++v72;
        v46 = v129;
        v26 = (unsigned int)(v130 - 1);
      }
      while ( v72 <= (int)v26 );
    }
    if ( v46 )
    {
      if ( v64 )
      {
        v73 = 0;
        v74 = v64;
        do
        {
          v75 = (__int64 *)(v46 + 24 * v73);
          v76 = *v75;
          if ( *v75 )
          {
            v75[1] = 0;
            qfree(v76);
            v46 = v129;
          }
          ++v73;
        }
        while ( v73 != v74 );
      }
LABEL_95:
      *(_QWORD *)&v130 = 0;
      qfree(v46);
    }
  }
  else if ( v129 )
  {
    goto LABEL_95;
  }
LABEL_96:
  v18 = n + (unsigned __int8)sub_1A2A70((_QWORD *)a1, a2, v26, v27, v28, v29);
  sub_19C0B0(a1);
  v77 = *(_QWORD **)(a1 + 120);
  for ( i = &v77[16 * *(_QWORD *)(a1 + 128)]; i != v77; v77 += 16 )
  {
    *((_QWORD *)&v79 + 1) = v77;
    *(_QWORD *)&v79 = a1;
    sub_1A46A0(v79);
    sub_1A1220(v77, *(_DWORD *)(a1 + 464));
  }
  sub_190300(v8);
  v80 = *(_QWORD *)(a1 + 400);
  if ( v80 )
  {
    *(_QWORD *)(a1 + 408) = 0;
    qfree(v80);
    *(_QWORD *)(a1 + 400) = 0;
    *(_QWORD *)(a1 + 416) = 0;
  }
  v81 = *(_QWORD *)(a1 + 424);
  if ( v81 )
  {
    *(_QWORD *)(a1 + 432) = 0;
    qfree(v81);
    *(_QWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 440) = 0;
  }
  clear_tinfo_t(a1 + 448);
  clear_tinfo_t(a1 + 456);
  if ( !v18 )
  {
LABEL_8:
    if ( *(_BYTE *)(v8 + 320) && (unsigned __int8)sub_1A2A70((_QWORD *)a1, a2, v12, v13, v14, v15) )
    {
      v18 = 1;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(a1 + 184) == -1 || (v16 = *(_DWORD *)(a1 + 208), v16 == -1) )
    {
      v18 = 0;
      goto LABEL_19;
    }
    v17 = *(_QWORD *)(a1 + 200);
    v18 = 0;
    if ( v17 != -1 )
    {
      if ( *(_BYTE *)(a1 + 468) )
      {
LABEL_13:
        v19 = *a2;
        if ( *a2 )
        {
          a2[1] = 0;
          qfree(v19);
          *a2 = 0;
          a2[2] = 0;
        }
        v20 = a2[7];
        if ( v20 )
        {
          a2[8] = 0;
          qfree(v20);
          a2[7] = 0;
          a2[9] = 0;
        }
        *(_DWORD *)(a1 + 208) = -1;
        *(_DWORD *)(a1 + 184) = -1;
        goto LABEL_19;
      }
      v100 = *(char *)(v126 + 13);
      v101 = *(_QWORD *)(a1 + 16);
      v102 = *(_QWORD *)(v101 + 48);
      v103 = sub_D21A0(v8);
      v18 = sub_198E60((__int64)v103, v17, (_QWORD *)(v101 + 120), v16, v102, v100);
    }
    v104 = *(_QWORD *)(a1 + 176);
    if ( v104 != -1 && !*(_BYTE *)(a1 + 468) )
    {
      v105 = *(_QWORD *)(a1 + 16);
      v106 = *(_QWORD *)(v105 + 24);
      v107 = *(char *)(v126 + 12);
      na = *(_DWORD *)(a1 + 184);
      v108 = sub_D21A0(v8);
      v18 += sub_198E60((__int64)v108, v104, (_QWORD *)(v105 + 96), na, v106, v107);
    }
    goto LABEL_13;
  }
  v82 = sub_D21A0(v8);
  v83 = *(char *)(v126 + 12);
  *(_OWORD *)&v152[8] = 0;
  v84 = *(_DWORD *)(a1 + 184);
  v85 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 104LL);
  if ( v85 )
  {
    v123 = *(_QWORD *)(a1 + 16);
    v116 = (void *)qalloc_or_throw(4 * v85);
    *(_QWORD *)&v152[16] = v85;
    memcpy(v116, *(const void **)(v123 + 96), 4 * v85);
    *(_QWORD *)&v152[8] = v85;
    *(_QWORD *)v152 = v116;
    sub_196810((__int64)v82, v152, v84, v83);
    if ( v116 )
      qfree(v116);
  }
  else
  {
    *(_QWORD *)v152 = 0;
    sub_196810((__int64)v82, v152, v84, v83);
  }
  v86 = *(char *)(v126 + 13);
  *(_OWORD *)&v152[8] = 0;
  v87 = *(_QWORD *)(a1 + 16);
  v88 = *(_DWORD *)(a1 + 208);
  v89 = *(_QWORD *)(v87 + 128);
  v118 = v88;
  if ( v89 )
  {
    v115 = (void *)qalloc_or_throw(4 * v89);
    *(_QWORD *)&v152[16] = v89;
    memcpy(v115, *(const void **)(v87 + 120), 4 * v89);
    *(_QWORD *)&v152[8] = v89;
    *(_QWORD *)v152 = v115;
    sub_196810((__int64)v82, v152, v118, v86);
    if ( v115 )
      qfree(v115);
  }
  else
  {
    *(_QWORD *)v152 = 0;
    sub_196810((__int64)v82, v152, v88, v86);
  }
  sub_A2520((__int64)v82, (__int64)"spoiled ellipsis regs");
LABEL_19:
  if ( v140 )
  {
    *(_QWORD *)&v141 = 0;
    qfree(v140);
  }
  if ( v138 )
  {
    *(_QWORD *)&v139 = 0;
    qfree(v138);
  }
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
  v21 = v132;
  if ( !v132 )
    return v18;
  v22 = *v132;
  if ( v133 )
  {
    v109 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
    v110 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v110 & 2) != 0 )
    {
LABEL_151:
      *v21 = v22 & 3 | (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFFCLL;
      v113 = v132;
      v114 = (__m128i)(unsigned __int64)v132;
      *v132 &= ~1uLL;
      *(__m128i *)(v113 + 1) = _mm_unpacklo_epi64(v114, v114);
      *v132 |= 2u;
      v133 = 0;
      goto LABEL_28;
    }
    v111 = (__int64 *)v109[1];
    if ( (*(_BYTE *)v111 & 2) != 0 )
    {
      v112 = (__int64 *)v109[2];
      if ( (*(_BYTE *)v112 & 2) != 0 )
        goto LABEL_155;
    }
    else
    {
      sub_196450(v111);
      v112 = (__int64 *)v109[2];
      if ( (*(_BYTE *)v112 & 2) != 0 )
        goto LABEL_147;
    }
    sub_196450(v112);
LABEL_147:
    v110 = *v109;
    if ( (*v109 & 2) != 0 )
    {
LABEL_148:
      if ( v22 > 3 )
        qfree(v22 & 0xFFFFFFFFFFFFFFFCLL);
      v21 = v132;
      v22 = *v132;
      goto LABEL_151;
    }
LABEL_155:
    *v109 = v110 | 2;
    goto LABEL_148;
  }
  *v132 = *v132 & 3 | (unsigned __int64)v132 & 0xFFFFFFFFFFFFFFFCLL;
  v23 = v132;
  v24 = (__m128i)(unsigned __int64)v132;
  *v132 &= ~1uLL;
  *(__m128i *)(v23 + 1) = _mm_unpacklo_epi64(v24, v24);
  *v132 |= 2u;
LABEL_28:
  if ( v132 )
    qfree(v132);
  return v18;
}
