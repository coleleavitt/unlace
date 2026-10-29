__int64 __fastcall sub_845EB0(__int64 a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 result; // rax
  _DWORD *v5; // r12
  _DWORD *v8; // r14
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned int v11; // esi
  _QWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  _QWORD *v16; // rcx
  int v17; // r8d
  int v18; // r9d
  char *v19; // rdi
  int v20; // ecx
  __int64 v21; // rsi
  char *v22; // rax
  char *v23; // rdx
  __int64 **v24; // r13
  __int64 *v25; // r15
  void *v26; // rdi
  void *v27; // rdi
  __int64 *v28; // r12
  __int64 *v29; // r14
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  _OWORD *v35; // rax
  _DWORD *v36; // rax
  _OWORD *v37; // rax
  _OWORD *v38; // rax
  _OWORD *v39; // rax
  _OWORD *v40; // rax
  _OWORD *v41; // rax
  _OWORD *v42; // rax
  _OWORD *v43; // rax
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rax
  int v47; // r8d
  int v48; // r9d
  __int64 v49; // rcx
  unsigned int i; // r12d
  _QWORD *v51; // rdx
  _QWORD *v52; // r15
  unsigned int v53; // eax
  __int64 v54; // rsi
  int v55; // eax
  _QWORD *v56; // rdi
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rax
  int v60; // ecx
  __int64 v61; // r12
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 *v64; // rcx
  int v65; // edi
  unsigned int v66; // edx
  __int64 *v67; // r8
  __int64 *v68; // rax
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r13
  __int64 v74; // rax
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  int v79; // edx
  int v80; // ecx
  int v81; // r8d
  int v82; // r9d
  unsigned int v83; // ecx
  size_t v84; // rsi
  unsigned int *v85; // rax
  _QWORD *v86; // rax
  unsigned int v87; // r12d
  __int64 v88; // r13
  __int64 v89; // rcx
  _QWORD *v90; // rax
  _QWORD *v91; // rdx
  __int64 v92; // rax
  _QWORD *v93; // rdx
  unsigned int v94; // esi
  __int64 **v95; // [rsp+0h] [rbp-228h]
  int v96; // [rsp+0h] [rbp-228h]
  int v97; // [rsp+0h] [rbp-228h]
  unsigned int v98; // [rsp+0h] [rbp-228h]
  __int64 v99; // [rsp+8h] [rbp-220h]
  __int64 v100; // [rsp+8h] [rbp-220h]
  __int64 v101; // [rsp+20h] [rbp-208h] BYREF
  __int64 v102; // [rsp+28h] [rbp-200h] BYREF
  _QWORD v103[4]; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v104[4]; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD v105[5]; // [rsp+70h] [rbp-1B8h] BYREF
  int v106; // [rsp+98h] [rbp-190h]
  __int64 v107[4]; // [rsp+A0h] [rbp-188h] BYREF
  void *v108; // [rsp+C0h] [rbp-168h]
  __int64 v109; // [rsp+C8h] [rbp-160h]
  int v110; // [rsp+D0h] [rbp-158h]
  void *v111; // [rsp+D8h] [rbp-150h]
  __int64 v112; // [rsp+E0h] [rbp-148h]
  int v113; // [rsp+E8h] [rbp-140h]
  __int64 v114; // [rsp+F0h] [rbp-138h]
  void *v115; // [rsp+F8h] [rbp-130h]
  __int64 v116; // [rsp+100h] [rbp-128h]
  int v117; // [rsp+108h] [rbp-120h]
  __int64 v118; // [rsp+110h] [rbp-118h]
  void *v119; // [rsp+118h] [rbp-110h]
  __int64 v120; // [rsp+120h] [rbp-108h]
  int v121; // [rsp+128h] [rbp-100h]
  void *v122; // [rsp+130h] [rbp-F8h]
  __int64 v123; // [rsp+138h] [rbp-F0h]
  int v124; // [rsp+140h] [rbp-E8h]
  void *v125; // [rsp+148h] [rbp-E0h]
  __int64 v126; // [rsp+150h] [rbp-D8h]
  int v127; // [rsp+158h] [rbp-D0h]
  __int128 v128; // [rsp+160h] [rbp-C8h]
  __int64 *v129; // [rsp+170h] [rbp-B8h]
  void *v130; // [rsp+178h] [rbp-B0h]
  __int64 v131; // [rsp+180h] [rbp-A8h]
  int v132; // [rsp+188h] [rbp-A0h]
  __int128 v133; // [rsp+190h] [rbp-98h]
  void *v134; // [rsp+1A0h] [rbp-88h]
  __int64 v135; // [rsp+1A8h] [rbp-80h]
  int v136; // [rsp+1B0h] [rbp-78h]
  __int64 v137; // [rsp+1C0h] [rbp-68h]
  void *v138; // [rsp+1C8h] [rbp-60h]
  void *v139; // [rsp+1D0h] [rbp-58h]
  __int64 v140; // [rsp+1D8h] [rbp-50h]
  int v141; // [rsp+1E0h] [rbp-48h]

  result = *(_QWORD *)(a1 + 16);
  v101 = 0;
  v5 = *(_DWORD **)(result + 3112);
  if ( !v5 )
    return result;
  result = (unsigned int)*(v5 - 1);
  v8 = &v5[result];
  if ( v5 == v8 )
    return result;
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 8);
      v10 = *(_QWORD *)(v9 + 2328);
      v11 = *v5 >> 1;
      if ( v10 )
      {
        if ( v11 >= *(_DWORD *)(v10 - 4) )
          v10 = 0;
        else
          v10 = *(_QWORD *)(v10 + 8LL * v11);
      }
      if ( (unsigned __int8)sub_7CB810(v9, v11) )
        break;
      if ( v8 == ++v5 )
        goto LABEL_13;
    }
    v12 = (_QWORD *)v101;
    if ( v101 )
    {
      v13 = *(_DWORD *)(v101 - 4);
      if ( v13 == *(_DWORD *)(v101 - 8) )
      {
        v69 = (3 * v13 + 1) >> 1;
        v70 = 8 * v69 + 8;
        if ( 8 * v13 + 8 >= (unsigned int)v70 || v13 >= v69 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v107, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v107);
          sub_233E40((__int64)v107);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v71 = (unsigned int *)sub_186B300((void *)(v101 - 8), v70);
        v72 = v71[1];
        v12 = v71 + 2;
        *v71 = v69;
        v101 = (__int64)v12;
        LODWORD(v71) = v72;
        v16 = &v12[v72];
        v15 = (_DWORD)v71 + 1;
      }
      else
      {
        v14 = v13;
        v15 = v13 + 1;
        v16 = (_QWORD *)(v101 + 8 * v14);
      }
    }
    else
    {
      v86 = (_QWORD *)sub_186B270((size_t)&qword_18);
      v12 = v86 + 1;
      *v86 = 2;
      v15 = 1;
      v101 = (__int64)v12;
      v16 = v12;
    }
    ++v5;
    *v16 = v10;
    *((_DWORD *)v12 - 1) = v15;
  }
  while ( v8 != v5 );
LABEL_13:
  result = v101;
  if ( !v101 )
    return result;
  if ( !*(_DWORD *)(v101 - 4) )
    return sub_186B220((void *)(v101 - 8));
  sub_1600000(a1 + 56);
  if ( !*(_DWORD *)(a1 + 124) )
  {
    v18 = *(_DWORD *)(a1 + 128);
    if ( !v18 )
      goto LABEL_23;
  }
  v19 = *(char **)(a1 + 112);
  v20 = 0;
  v21 = *(unsigned int *)(a1 + 120);
  v22 = v19;
  v23 = &v19[32 * v21];
  if ( v19 != v23 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *((_DWORD *)v22 + 1);
        if ( !v17 )
          break;
        *((_DWORD *)v22 + 1) = 0;
        v22 += 32;
        if ( v23 == v22 )
          goto LABEL_21;
      }
      v22 += 32;
      ++v20;
    }
    while ( v23 != v22 );
LABEL_21:
    if ( (unsigned int)v21 > 0x10 && 3 * (int)v21 < (unsigned int)(4 * v20) )
    {
      if ( v19 )
      {
        sub_186B220(v19);
        v87 = *(_DWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = 0;
        v87 >>= 1;
        v88 = v87;
        *(_DWORD *)(a1 + 120) = v87;
        v89 = sub_186B270(32LL * v87);
        if ( !v87 )
        {
LABEL_130:
          *(_QWORD *)(a1 + 112) = v89;
          goto LABEL_22;
        }
      }
      else
      {
        v94 = (unsigned int)v21 >> 1;
        *(_QWORD *)(a1 + 112) = 0;
        v88 = v94;
        *(_DWORD *)(a1 + 120) = v94;
        v89 = sub_186B270(32LL * v94);
      }
      v90 = (_QWORD *)v89;
      v91 = (_QWORD *)(v89 + 32 * v88);
      do
      {
        *v90 = 0;
        v90 += 4;
        *(v90 - 3) = 0;
      }
      while ( v91 != v90 );
      v92 = v89;
      if ( ((32 * (_BYTE)v88) & 0x20) == 0 || (v92 = v89 + 32, *(_DWORD *)(v89 + 16) = 0, (_QWORD *)(v89 + 32) != v91) )
      {
        do
        {
          *(_DWORD *)(v92 + 16) = 0;
          v92 += 64;
          *(_DWORD *)(v92 - 16) = 0;
        }
        while ( (_QWORD *)v92 != v91 );
      }
      goto LABEL_130;
    }
  }
LABEL_22:
  *(_QWORD *)(a1 + 124) = 0;
LABEL_23:
  v24 = *(__int64 ***)(a1 + 136);
  if ( v24 )
  {
    v95 = &v24[*((unsigned int *)v24 - 1)];
    if ( v24 == v95 )
      goto LABEL_42;
    do
    {
      v25 = *v24;
      if ( *v24 )
      {
        v26 = (void *)v25[5];
        if ( v26 )
          sub_186B220(v26);
        v27 = (void *)v25[2];
        if ( v27 )
          sub_186B220(v27);
        v28 = (__int64 *)v25[1];
        if ( v28 )
        {
          v29 = &v28[*((unsigned int *)v28 - 1)];
          if ( v28 >= v29 )
            goto LABEL_38;
          do
          {
            while ( 1 )
            {
              v30 = *v28;
              if ( *v28 )
              {
                v31 = *v25;
                if ( (*(_DWORD *)(v30 + 8))-- == 1 )
                  break;
              }
              if ( ++v28 >= v29 )
                goto LABEL_37;
            }
            sub_15D7BC0(v31, v30);
            ++v28;
          }
          while ( v28 < v29 );
LABEL_37:
          v28 = (__int64 *)v25[1];
          if ( v28 )
LABEL_38:
            sub_186B220(v28 - 1);
        }
        sub_186B220(v25);
      }
      ++v24;
    }
    while ( v95 != v24 );
    v95 = *(__int64 ***)(a1 + 136);
    if ( v95 )
LABEL_42:
      *((_DWORD *)v95 - 1) = 0;
  }
  v33 = *(_QWORD *)(a1 + 24);
  v103[2] = a1;
  v103[1] = v33;
  v102 = 0;
  v103[3] = 0;
  v103[0] = off_1C610F8;
  sub_1352AB0((unsigned int)v103, a2, (unsigned int)&v101, (unsigned int)&v102, v17, v18, (_DWORD)v95, a1 + 56);
  v34 = *(_QWORD *)(a1 + 24);
  v107[2] = a1;
  v107[3] = 0;
  v107[1] = v34;
  v107[0] = (__int64)off_1C61120;
  v35 = (_OWORD *)sub_186B270(0x80u);
  v108 = v35;
  *v35 = 0;
  v35[1] = 0;
  v35[2] = 0;
  v35[3] = 0;
  v35[4] = 0;
  v35[5] = 0;
  v35[6] = 0;
  v35[7] = 0;
  v109 = 8;
  v110 = 0;
  v36 = (_DWORD *)sub_186B270(0x100u);
  v36[6] = 0;
  v36[14] = 0;
  v36[22] = 0;
  v36[30] = 0;
  v36[38] = 0;
  v36[46] = 0;
  v36[54] = 0;
  v36[62] = 0;
  *(_OWORD *)v36 = 0;
  *((_OWORD *)v36 + 2) = 0;
  *((_OWORD *)v36 + 4) = 0;
  *((_OWORD *)v36 + 6) = 0;
  *((_OWORD *)v36 + 8) = 0;
  *((_OWORD *)v36 + 10) = 0;
  *((_OWORD *)v36 + 12) = 0;
  *((_OWORD *)v36 + 14) = 0;
  v111 = v36;
  v112 = 8;
  v113 = 0;
  v114 = 0;
  v37 = (_OWORD *)sub_186B270(0x80u);
  v115 = v37;
  *v37 = 0;
  v37[1] = 0;
  v37[2] = 0;
  v37[3] = 0;
  v37[4] = 0;
  v37[5] = 0;
  v37[6] = 0;
  v37[7] = 0;
  v116 = 8;
  v117 = 0;
  v118 = 0;
  v38 = (_OWORD *)sub_186B270(0x40u);
  v119 = v38;
  *v38 = 0;
  v38[1] = 0;
  v38[2] = 0;
  v38[3] = 0;
  v120 = 8;
  v121 = 0;
  v39 = (_OWORD *)sub_186B270(0x40u);
  v122 = v39;
  *v39 = 0;
  v39[1] = 0;
  v39[2] = 0;
  v39[3] = 0;
  v123 = 8;
  v124 = 0;
  v40 = (_OWORD *)sub_186B270(0x40u);
  v125 = v40;
  *v40 = 0;
  v40[1] = 0;
  v40[2] = 0;
  v40[3] = 0;
  v126 = 8;
  v127 = 0;
  v129 = v107;
  v128 = 0;
  v41 = (_OWORD *)sub_186B270(0x40u);
  v130 = v41;
  *v41 = 0;
  v41[1] = 0;
  v41[2] = 0;
  v41[3] = 0;
  v131 = 8;
  v132 = 0;
  v133 = 0;
  v42 = (_OWORD *)sub_186B270(0x80u);
  v134 = v42;
  *v42 = 0;
  v42[1] = 0;
  v42[2] = 0;
  v42[3] = 0;
  v42[4] = 0;
  v42[5] = 0;
  v42[6] = 0;
  v42[7] = 0;
  v135 = 8;
  v136 = 0;
  v137 = 0;
  v138 = nullptr;
  v43 = (_OWORD *)sub_186B270(0x40u);
  *v43 = 0;
  v43[1] = 0;
  v43[2] = 0;
  v43[3] = 0;
  v139 = v43;
  v140 = 8;
  v141 = 0;
  sub_1352AB0((unsigned int)v107, a2, (unsigned int)&v101, (unsigned int)&v102, v44, v45, v96, v99);
  v46 = *(_QWORD *)(a1 + 24);
  v105[2] = a1;
  v105[1] = v46;
  v105[3] = 0;
  v105[0] = &off_1C61148;
  v105[4] = v100;
  v106 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1064LL);
  sub_1352AB0((unsigned int)v105, a2, (unsigned int)&v101, (unsigned int)&v102, v47, v48, v97, v100);
  v49 = v102;
  for ( i = 0; v49; *((_DWORD *)v51 - 1) = v55 )
  {
    if ( i >= *(_DWORD *)(v49 - 4) )
      break;
    v51 = (_QWORD *)v101;
    v52 = (_QWORD *)(v49 + 8LL * i);
    if ( v101 )
    {
      v53 = *(_DWORD *)(v101 - 4);
      if ( v53 == *(_DWORD *)(v101 - 8) )
      {
        v83 = (3 * v53 + 1) >> 1;
        v84 = 8 * v83 + 8;
        if ( 8 * v53 + 8 >= (unsigned int)v84 || v53 >= v83 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v104, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v104);
          sub_233E40((__int64)v104);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v98 = (3 * v53 + 1) >> 1;
        v85 = (unsigned int *)sub_186B300((void *)(v101 - 8), v84);
        v51 = v85 + 2;
        v101 = (__int64)(v85 + 2);
        *v85 = v98;
        LODWORD(v85) = v85[1];
        v56 = &v51[(unsigned int)v85];
        v49 = v102;
        v55 = (_DWORD)v85 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = (_QWORD *)(v101 + 8 * v54);
      }
    }
    else
    {
      v93 = (_QWORD *)sub_186B270(0x18u);
      *v93 = 2;
      v49 = v102;
      v55 = 1;
      v51 = v93 + 1;
      v101 = (__int64)v51;
      v56 = v51;
    }
    ++i;
    *v56 = *v52;
  }
  v57 = a2;
  sub_845DB0((const double *)a1, a2, &v101);
  v59 = *(_QWORD *)(a2 + 88);
  if ( !v59 )
    goto LABEL_80;
  v60 = *(_DWORD *)(v59 - 4);
  v58 = (unsigned int)(v60 - 1);
  if ( !v60 )
    goto LABEL_80;
  v61 = 8 * v58;
  while ( 2 )
  {
    v62 = *(_QWORD *)(v59 + v61);
    v63 = *(unsigned int *)(a2 + 56);
    v64 = *(__int64 **)(a2 + 48);
    v65 = *(_DWORD *)(v62 + 12);
    v66 = v63 - 1;
    v63 *= 16;
    v57 = (__int64)v64 + v63;
    v58 = 16LL * (v65 & v66);
    v67 = (__int64 *)((char *)v64 + v58);
    if ( v58 == v63 )
    {
LABEL_70:
      while ( v67 != v64 )
      {
        v74 = *v64;
        if ( (unsigned __int64)*v64 > 1 )
        {
          if ( *(_DWORD *)(v74 + 12) == v65 && v62 == v74 )
          {
            v68 = v64;
            goto LABEL_67;
          }
        }
        else if ( !v74 )
        {
          break;
        }
        v64 += 2;
      }
LABEL_59:
      BUG();
    }
    v68 = (__int64 *)((char *)v64 + v58);
    while ( 1 )
    {
      v58 = *v68;
      if ( (unsigned __int64)*v68 > 1 )
        break;
      if ( !v58 )
        goto LABEL_59;
LABEL_56:
      v68 += 2;
      if ( (__int64 *)v57 == v68 )
        goto LABEL_70;
    }
    if ( *(_DWORD *)(v58 + 12) != v65 || v62 != v58 )
      goto LABEL_56;
LABEL_67:
    v73 = v68[1];
    if ( *(_QWORD *)(v73 + 24)
      || (v57 = sub_1347E10(v68[1], v57, v58, v64, v67), sub_1349280(v73, v57, v75, v76, v77, v78),
                                                         *(_QWORD *)(v73 + 24)) )
    {
      v61 -= 8;
      if ( v61 != -8 )
        goto LABEL_69;
    }
    else
    {
      v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, *(_QWORD *)(v62 + 40));
      sub_1349280(v73, v57, v79, v80, v81, v82);
      v61 -= 8;
      if ( v61 != -8 )
      {
LABEL_69:
        v59 = *(_QWORD *)(a2 + 88);
        continue;
      }
    }
    break;
  }
LABEL_80:
  v107[0] = (__int64)off_1C61120;
  sub_13548A0(v107, v57, v58);
  if ( v139 )
    sub_186B220(v139);
  if ( v138 )
    sub_186B220(v138);
  if ( v134 )
    sub_186B220(v134);
  if ( *((_QWORD *)&v133 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v133 + 1) - 8LL));
  if ( (_QWORD)v133 )
    sub_186B220((void *)(v133 - 8));
  if ( v130 )
    sub_186B220(v130);
  if ( *((_QWORD *)&v128 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v128 + 1) - 8LL));
  if ( (_QWORD)v128 )
    sub_186B220((void *)(v128 - 8));
  if ( v125 )
    sub_186B220(v125);
  if ( v122 )
    sub_186B220(v122);
  if ( v119 )
    sub_186B220(v119);
  if ( v118 )
    sub_186B220((void *)(v118 - 8));
  if ( v115 )
    sub_186B220(v115);
  if ( v114 )
    sub_186B220((void *)(v114 - 8));
  if ( v111 )
    sub_186B220(v111);
  if ( v108 )
    sub_186B220(v108);
  if ( v102 )
    sub_186B220((void *)(v102 - 8));
  result = v101;
  if ( v101 )
    return sub_186B220((void *)(v101 - 8));
  return result;
}

