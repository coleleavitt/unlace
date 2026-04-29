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
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // r15d
  __int64 v18; // r13
  unsigned int v19; // ebp
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  int v31; // eax
  unsigned int v32; // eax
  _QWORD *v33; // rbp
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // r13
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // r12
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // r12
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r14d
  __int64 v52; // rax
  __int64 v53; // r13
  __int64 v54; // rsi
  unsigned int v55; // eax
  __int64 v56; // rdx
  unsigned int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 **v60; // rdi
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  int v64; // ebp
  __int64 v65; // rax
  __int64 *v66; // rdx
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
  __int64 v84; // rcx
  int v85; // r13d
  __int64 v86; // r15
  __int64 v87; // rcx
  unsigned int v88; // r13d
  __int64 v89; // rsi
  int v90; // edx
  __int64 v91; // rbx
  __int64 v92; // rax
  unsigned __int64 v93; // r15
  unsigned __int64 v94; // rbx
  __int64 *v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned int v99; // r12d
  __int64 v100; // r14
  __int64 v101; // rbp
  __m128i *v102; // rax
  __int64 v103; // r14
  __int64 v104; // r15
  __int64 v105; // r12
  unsigned int v106; // r13d
  __m128i *v107; // rax
  __int64 *v108; // r12
  __int64 v109; // rdx
  __int64 *v110; // rdi
  __int64 *v111; // rdi
  __int64 v112; // rax
  __m128i v113; // xmm0
  void *v114; // r14
  void *v115; // rbx
  int v117; // [rsp+0h] [rbp-250h]
  int n; // [rsp+10h] [rbp-240h]
  unsigned int na; // [rsp+10h] [rbp-240h]
  _QWORD *v120; // [rsp+18h] [rbp-238h]
  int v121; // [rsp+18h] [rbp-238h]
  __int64 v122; // [rsp+18h] [rbp-238h]
  __int64 v123; // [rsp+20h] [rbp-230h]
  __int64 v124; // [rsp+38h] [rbp-218h]
  unsigned __int64 v126; // [rsp+58h] [rbp-1F8h] BYREF
  __int128 v127; // [rsp+60h] [rbp-1F0h]
  __int64 v128; // [rsp+78h] [rbp-1D8h] BYREF
  __int64 v129; // [rsp+80h] [rbp-1D0h]
  __int64 v130; // [rsp+88h] [rbp-1C8h]
  __int64 v131; // [rsp+90h] [rbp-1C0h]
  __int128 v132; // [rsp+98h] [rbp-1B8h]
  _QWORD *v133; // [rsp+A8h] [rbp-1A8h]
  __int64 v134; // [rsp+B0h] [rbp-1A0h]
  __int64 v135; // [rsp+B8h] [rbp-198h]
  __int128 v136; // [rsp+C0h] [rbp-190h]
  __int64 v137; // [rsp+D0h] [rbp-180h]
  __int128 v138; // [rsp+D8h] [rbp-178h]
  _BYTE v139[24]; // [rsp+178h] [rbp-D8h] BYREF
  char v140; // [rsp+190h] [rbp-C0h]
  unsigned __int64 *v141; // [rsp+198h] [rbp-B8h]
  __int64 v142; // [rsp+1A0h] [rbp-B0h]
  __int128 v143; // [rsp+1A8h] [rbp-A8h]
  unsigned __int64 v144; // [rsp+210h] [rbp-40h]

  v144 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(a1 + 16);
  v132 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v134 = 0;
  v135 = 0;
  v3 = v2[35];
  v133 = v2;
  v137 = 0;
  v4 = *(_QWORD *)(v3 + 1496);
  v136 = 0;
  v138 = 0;
  v128 = v4;
  v5 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(*v2 + 56LL);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v2 + 32LL))(v2);
  v5(v2, a1 + 144, v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 184) > *(_DWORD *)(v7 + 24) || *(_DWORD *)(a1 + 208) > *(_DWORD *)(v7 + 48) )
  {
    if ( !under_debugger )
      sub_383060(51506);
    goto LABEL_157;
  }
  v8 = *(_QWORD *)(v7 + 280);
  v9 = 8;
  v10 = 1;
  if ( *(int *)(v8 + 64) > 1 )
  {
    while ( 1 )
    {
      sub_1A9050(a1, &v128, *(_QWORD *)(*(_QWORD *)(v8 + 528) + v9));
      v11 = *(_DWORD *)(v8 + 64);
      if ( (int)v11 <= (int)++v10 )
        break;
      v9 += 8;
      if ( v10 >= v11 )
      {
        if ( !under_debugger )
          sub_383060(52719);
        goto LABEL_157;
      }
    }
  }
  sub_19C970(a1, &v128);
  v12 = v8;
  v124 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  if ( !(unsigned __int8)sub_1A5C40(a1, v8) )
  {
LABEL_8:
    if ( *(_BYTE *)(v8 + 320) )
    {
      v12 = (__int64)a2;
      if ( (unsigned __int8)sub_1A2A70((_QWORD *)a1, a2, v13, v14, v15, v16) )
      {
        v19 = 1;
        goto LABEL_19;
      }
    }
    if ( *(_DWORD *)(a1 + 184) == -1 || (v17 = *(_DWORD *)(a1 + 208), v17 == -1) )
    {
      v19 = 0;
      goto LABEL_19;
    }
    v18 = *(_QWORD *)(a1 + 200);
    v19 = 0;
    if ( v18 != -1 )
    {
      if ( *(_BYTE *)(a1 + 468) )
      {
LABEL_13:
        v20 = *a2;
        if ( *a2 )
        {
          a2[1] = 0;
          qfree(v20);
          *a2 = 0;
          a2[2] = 0;
        }
        v21 = a2[7];
        if ( v21 )
        {
          a2[8] = 0;
          qfree(v21);
          a2[7] = 0;
          a2[9] = 0;
        }
        *(_DWORD *)(a1 + 208) = -1;
        *(_DWORD *)(a1 + 184) = -1;
        goto LABEL_19;
      }
      v99 = *(char *)(v124 + 13);
      v100 = *(_QWORD *)(a1 + 16);
      v101 = *(_QWORD *)(v100 + 48);
      v102 = sub_D21A0(v8, v12, v13, v14);
      v19 = sub_198E60((__int64)v102, v18, (_QWORD *)(v100 + 120), v17, v101, v99);
    }
    v103 = *(_QWORD *)(a1 + 176);
    if ( v103 != -1 && !*(_BYTE *)(a1 + 468) )
    {
      v104 = *(_QWORD *)(a1 + 16);
      v105 = *(_QWORD *)(v104 + 24);
      v106 = *(char *)(v124 + 12);
      na = *(_DWORD *)(a1 + 184);
      v107 = sub_D21A0(v8, v124, v13, na);
      v19 += sub_198E60((__int64)v107, v103, (_QWORD *)(v104 + 96), na, v105, v106);
    }
    goto LABEL_13;
  }
  sub_19C2D0(a1, v124);
  v31 = *(_DWORD *)(v8 + 72);
  if ( v31 == 128
    || (v32 = v31 & 0xFFFFFFF0, v32 != 64) && v32 != 208 && (*(_BYTE *)(v8 + 320) || (*(_BYTE *)(v8 + 4) & 0x20) != 0) )
  {
    n = 0;
  }
  else
  {
    v126 = 0;
    v127 = 0;
    v33 = *(_QWORD **)(a1 + 120);
    n = 0;
    v120 = &v33[16 * *(_QWORD *)(a1 + 128)];
    if ( v120 == v33 )
      goto LABEL_94;
    do
    {
      sub_1CFD50(v8, v33[9]);
      get_func();
      tinfo_get_func_frame();
      v34 = sub_1A15A0((__int64)v33, 0);
      if ( (unsigned int)sub_1A1640((_QWORD *)v8, (__int64)v33, v34) == -1 )
      {
        if ( !under_debugger )
          sub_383060(51307);
        goto LABEL_157;
      }
      if ( !*v33 )
      {
        if ( !under_debugger )
          sub_383060(51371);
        goto LABEL_157;
      }
      v35 = v127;
      v36 = *(int *)(*v33 + 72LL);
      v37 = v126;
      v38 = v126;
      if ( (int)v36 > (int)v127 - 1 )
      {
        v39 = (int)v36 + 1;
        if ( (_QWORD)v127 != v39 )
        {
          memset(v139, 0, sizeof(v139));
          if ( v39 < (unsigned __int64)v127 )
          {
            v123 = v8;
            v93 = (int)v36 + 1;
            v94 = v127;
            do
            {
              v95 = (__int64 *)(v37 + 24 * v93);
              v96 = *v95;
              if ( *v95 )
              {
                v95[1] = 0;
                qfree(v96);
                v37 = v126;
              }
              ++v93;
            }
            while ( v93 < v94 );
            *(_QWORD *)&v127 = (int)v36 + 1;
            v8 = v123;
            v38 = v37;
          }
          else
          {
            if ( (unsigned __int64)v139 < v126 || (unsigned __int64)v139 >= v126 + 24LL * *((_QWORD *)&v127 + 1) )
            {
              if ( *((_QWORD *)&v127 + 1) < v39 )
              {
                v38 = qvector_reserve((__int64)&v126, v126, v39, 24);
                v35 = v127;
                v39 = (int)v36 + 1;
                v126 = v38;
              }
              if ( v35 < v39 )
              {
                v97 = 24 * v35;
                do
                {
                  v98 = v97 + v38;
                  ++v35;
                  v97 += 24;
                  *(_QWORD *)v98 = 0;
                  *(_OWORD *)(v98 + 8) = 0;
                  v38 = v126;
                }
                while ( v39 != v35 );
              }
            }
            else
            {
              if ( *((_QWORD *)&v127 + 1) < v39 )
              {
                v38 = qvector_reserve((__int64)&v126, v126, v39, 24);
                v35 = v127;
                v39 = (int)v36 + 1;
                v126 = v38;
              }
              if ( v35 < v39 )
              {
                v40 = 24 * v35;
                do
                {
                  v41 = v40 + v38;
                  ++v35;
                  v40 += 24;
                  *(_QWORD *)v41 = 0;
                  *(_OWORD *)(v41 + 8) = 0;
                  v38 = v126;
                }
                while ( v39 != v35 );
              }
            }
            *(_QWORD *)&v127 = v39;
          }
        }
      }
      v42 = (__int64 *)(v38 + 24 * v36);
      v43 = v42[1];
      v44 = *v42;
      if ( v42[2] < (unsigned __int64)(v43 + 1) )
      {
        v92 = qvector_reserve((__int64)v42, v44, v43 + 1, 8);
        *v42 = v92;
        v44 = v92;
        v43 = v42[1];
      }
      *(_QWORD *)(v44 + 8 * v43) = v33;
      v33 += 16;
      ++v42[1];
      ++n;
      clear_tinfo_t();
    }
    while ( v120 != v33 );
    v28 = 0;
    v121 = 0;
    v45 = v126;
    if ( (_QWORD)v127 )
    {
      do
      {
        v46 = v45 + 24 * v28;
        if ( *(_QWORD *)(v46 + 8) > 1u )
        {
          memset(v139, 0, sizeof(v139));
          v47 = ***(_QWORD ***)v46;
          if ( !v47 )
            sub_195160(0.0);
          v48 = *(_QWORD *)(v47 + 48);
          v49 = *(_QWORD *)(v46 + 8);
          v50 = 0;
          if ( v48 )
          {
            while ( 1 )
            {
              v51 = 0;
              v52 = 0;
              if ( v49 )
                break;
LABEL_70:
              v48 = *(_QWORD *)(v48 + 8);
              if ( !v48 )
              {
                v50 = *(_QWORD *)&v139[8];
                goto LABEL_72;
              }
            }
            while ( 1 )
            {
              v53 = *(_QWORD *)(*(_QWORD *)v46 + 8 * v52);
              if ( !*(_QWORD *)(v53 + 104) )
                break;
              if ( **(_QWORD **)(v53 + 96) == v48 )
              {
                v54 = *(_QWORD *)v139;
                v55 = *(_DWORD *)&v139[8] - 1;
                if ( *(_DWORD *)&v139[8] - 1 < 0 )
                {
LABEL_106:
                  v57 = *(_DWORD *)(v53 + 8) & 0xFFFFFFFA;
                }
                else
                {
                  v56 = *(_QWORD *)v139 + 8LL * v55;
                  while ( *(_QWORD *)(v53 + 72) != *(_QWORD *)(*(_QWORD *)v56 + 72LL) )
                  {
                    --v55;
                    v56 -= 8;
                    if ( v55 == -1 )
                      goto LABEL_106;
                  }
                  v57 = *(_DWORD *)(v53 + 8) | 5;
                }
                *(_DWORD *)(v53 + 8) = v57;
                v58 = *(_QWORD *)&v139[8];
                if ( *(_QWORD *)&v139[16] < (unsigned __int64)(*(_QWORD *)&v139[8] + 1LL) )
                {
                  *(_QWORD *)v139 = qvector_reserve((__int64)v139, v54, *(_QWORD *)&v139[8] + 1LL, 8);
                  v58 = *(_QWORD *)&v139[8];
                  v54 = *(_QWORD *)v139;
                }
                *(_QWORD *)(v54 + 8 * v58) = v53;
                ++v51;
                ++*(_QWORD *)&v139[8];
                v49 = *(_QWORD *)(v46 + 8);
                v52 = v51;
                if ( v51 >= v49 )
                  goto LABEL_70;
              }
              else
              {
                v52 = ++v51;
                if ( v51 >= v49 )
                  goto LABEL_70;
              }
            }
            if ( !under_debugger )
              sub_383060(51196);
LABEL_157:
            BUG();
          }
LABEL_72:
          if ( v49 != v50 )
          {
            if ( !under_debugger )
              sub_383060(51384);
            goto LABEL_157;
          }
          v59 = *(_QWORD *)v139;
          v60 = *(__int64 ***)v46;
          *(_QWORD *)(v46 + 8) = v49;
          v61 = *(_QWORD *)(v46 + 16);
          *(_QWORD *)v46 = v59;
          *(_QWORD *)(v46 + 16) = *(_QWORD *)&v139[16];
          *(_QWORD *)v139 = v60;
          *(_QWORD *)&v139[16] = v61;
          if ( v60 )
          {
            *(_QWORD *)&v139[8] = 0;
            qfree((__int64)v60);
          }
          v45 = v126;
        }
        ++v121;
        v62 = v127;
        v28 = v121;
        v63 = v127;
      }
      while ( v121 < (unsigned __int64)v127 );
      if ( (unsigned __int64)v127 > 1 )
      {
        v28 = 1;
        v64 = 1;
        do
        {
          v65 = v45 + 24 * v28;
          if ( *(_QWORD *)(v65 + 8) )
          {
            v66 = **(__int64 ***)v65;
            v67 = *v66;
            if ( !*v66 )
              sub_195160(0.0);
            *(_QWORD *)&v139[16] = 0;
            v140 = 0;
            v142 = v45 + 24 * v28;
            v68 = *(__int64 ***)v65;
            *(_OWORD *)v139 = (unsigned __int64)&off_4DE208;
            v69 = *v68;
            v141 = &v126;
            v70 = *v69;
            if ( !v70 )
              sub_195160(0.0);
            LODWORD(v143) = *(_DWORD *)(v70 + 72);
            v71 = (__int64 *)sub_670E0(*(_QWORD **)(v67 + 64), v45, (__int64)v66, v28);
            sub_6F590((__int64 *)v139, v71, *(_DWORD *)(v67 + 72), 1);
            *(_QWORD *)v139 = off_4DBB18;
            qfree(*(__int64 *)&v139[8]);
            v45 = v126;
            v62 = v127;
          }
          ++v64;
          v63 = v62;
          v28 = v64;
        }
        while ( v64 < v62 );
      }
      v27 = (unsigned int)(v63 - 1);
      if ( (int)v27 >= 0 )
      {
        v72 = 0;
        do
        {
          sub_1A2060(a1, (_QWORD *)(v45 + 24LL * v72));
          v63 = v127;
          ++v72;
          v45 = v126;
          v27 = (unsigned int)(v127 - 1);
        }
        while ( v72 <= (int)v27 );
      }
      if ( v45 )
      {
        if ( v63 )
        {
          v73 = 0;
          v74 = v63;
          do
          {
            v75 = (__int64 *)(v45 + 24 * v73);
            v76 = *v75;
            if ( *v75 )
            {
              v75[1] = 0;
              qfree(v76);
              v45 = v126;
            }
            ++v73;
          }
          while ( v73 != v74 );
        }
        goto LABEL_93;
      }
    }
    else if ( v126 )
    {
LABEL_93:
      *(_QWORD *)&v127 = 0;
      qfree(v45);
    }
  }
LABEL_94:
  v12 = (__int64)a2;
  v19 = n + (unsigned __int8)sub_1A2A70((_QWORD *)a1, a2, v27, v28, v29, v30);
  sub_19C0B0(a1);
  v77 = *(_QWORD **)(a1 + 120);
  for ( i = &v77[16 * *(_QWORD *)(a1 + 128)]; i != v77; v77 += 16 )
  {
    *((_QWORD *)&v79 + 1) = v77;
    *(_QWORD *)&v79 = a1;
    sub_1A46A0(v79);
    v12 = *(unsigned int *)(a1 + 464);
    sub_1A1220(v77, v12);
  }
  sub_190300(v8, (const __m128i *)v12);
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
  clear_tinfo_t();
  clear_tinfo_t();
  if ( !v19 )
    goto LABEL_8;
  v82 = sub_D21A0(v8, v12, v13, v14);
  v83 = *(char *)(v124 + 12);
  *(_OWORD *)&v139[8] = 0;
  v84 = *(_QWORD *)(a1 + 16);
  v85 = *(_DWORD *)(a1 + 184);
  v86 = *(_QWORD *)(v84 + 104);
  if ( v86 )
  {
    v122 = *(_QWORD *)(a1 + 16);
    v115 = (void *)qalloc_or_throw(4 * v86, v12, 4 * v86, v84);
    *(_QWORD *)&v139[16] = v86;
    memcpy(v115, *(const void **)(v122 + 96), 4 * v86);
    *(_QWORD *)&v139[8] = v86;
    *(_QWORD *)v139 = v115;
    sub_196810((__int64)v82, (__int64)v139, v85, v83);
    if ( v115 )
      qfree((__int64)v115);
  }
  else
  {
    *(_QWORD *)v139 = 0;
    sub_196810((__int64)v82, (__int64)v139, v85, v83);
  }
  v88 = *(char *)(v124 + 13);
  *(_OWORD *)&v139[8] = 0;
  v89 = *(_QWORD *)(a1 + 16);
  v90 = *(_DWORD *)(a1 + 208);
  v91 = *(_QWORD *)(v89 + 128);
  v117 = v90;
  if ( v91 )
  {
    v114 = (void *)qalloc_or_throw(4 * v91, v89, 4 * v91, v87);
    *(_QWORD *)&v139[16] = v91;
    memcpy(v114, *(const void **)(v89 + 120), 4 * v91);
    *(_QWORD *)&v139[8] = v91;
    *(_QWORD *)v139 = v114;
    sub_196810((__int64)v82, (__int64)v139, v117, v88);
    if ( v114 )
      qfree((__int64)v114);
  }
  else
  {
    *(_QWORD *)v139 = 0;
    sub_196810((__int64)v82, (__int64)v139, v90, v88);
  }
  sub_A2520((__int64)v82, (__int64)"spoiled ellipsis regs");
LABEL_19:
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  if ( v135 )
  {
    *(_QWORD *)&v136 = 0;
    qfree(v135);
  }
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  v22 = v129;
  if ( v129 )
  {
    v23 = *(_QWORD *)v129;
    if ( !v130 )
    {
      *(_QWORD *)v129 = *(_QWORD *)v129 & 3LL | v129 & 0xFFFFFFFFFFFFFFFCLL;
      v24 = v129;
      v25 = (__m128i)(unsigned __int64)v129;
      *(_QWORD *)v129 &= ~1uLL;
      *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v25, v25);
      *(_QWORD *)v129 |= 2uLL;
      goto LABEL_28;
    }
    v108 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
    v109 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v109 & 2) != 0 )
    {
LABEL_133:
      *(_QWORD *)v22 = v23 & 3 | v22 & 0xFFFFFFFFFFFFFFFCLL;
      v112 = v129;
      v113 = (__m128i)(unsigned __int64)v129;
      *(_QWORD *)v129 &= ~1uLL;
      *(__m128i *)(v112 + 8) = _mm_unpacklo_epi64(v113, v113);
      *(_QWORD *)v129 |= 2uLL;
      v130 = 0;
LABEL_28:
      if ( v129 )
        qfree(v129);
      return v19;
    }
    v110 = (__int64 *)v108[1];
    if ( (*(_BYTE *)v110 & 2) != 0 )
    {
      v111 = (__int64 *)v108[2];
      if ( (*(_BYTE *)v111 & 2) != 0 )
        goto LABEL_137;
    }
    else
    {
      sub_196450(v110);
      v111 = (__int64 *)v108[2];
      if ( (*(_BYTE *)v111 & 2) != 0 )
        goto LABEL_129;
    }
    sub_196450(v111);
LABEL_129:
    v109 = *v108;
    if ( (*v108 & 2) != 0 )
    {
LABEL_130:
      if ( v23 > 3 )
        qfree(v23 & 0xFFFFFFFFFFFFFFFCLL);
      v22 = v129;
      v23 = *(_QWORD *)v129;
      goto LABEL_133;
    }
LABEL_137:
    *v108 = v109 | 2;
    goto LABEL_130;
  }
  return v19;
}
