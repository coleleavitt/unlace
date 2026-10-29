__int64 __fastcall sub_674840(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdi
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  __int64 v19; // rbp
  __int64 *v20; // r13
  __int64 *v21; // rbx
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // r14
  _DWORD *v26; // rax
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r15d
  size_t v30; // rsi
  _DWORD *v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 *v34; // r9
  __int64 *v35; // r14
  unsigned int v36; // ebp
  __int64 v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 *v41; // rcx
  __int64 v42; // rax
  int v43; // esi
  unsigned int v44; // edx
  __int64 *v45; // r9
  __int64 v46; // rdx
  __int64 *v47; // rdi
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  unsigned int v53; // r15d
  size_t v54; // rsi
  __int64 v55; // rcx
  _DWORD *v56; // rdx
  __int64 *v57; // rbx
  void *v58; // r13
  __int64 *v59; // rbx
  unsigned __int64 v60; // rbp
  __int64 v61; // rsi
  __int64 *v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // rsi
  __int64 v66; // r13
  _DWORD *v67; // rsi
  __int64 v68; // rax
  int v69; // r9d
  __int64 v70; // r10
  __int64 *v71; // rcx
  __int64 v72; // rax
  int v73; // edi
  unsigned int v74; // edx
  __int64 *v75; // rsi
  __int64 v76; // rdx
  __int64 *v77; // r8
  __int64 *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rax
  unsigned int v81; // eax
  int v82; // r8d
  int v83; // r9d
  int v84; // r8d
  int v85; // r9d
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 *v89; // rcx
  __int64 v90; // rsi
  _QWORD *v91; // rdx
  char **exception; // rbp
  __int64 v93; // rdx
  char **v94; // rbp
  __int64 v95; // rdx
  int v96; // [rsp+0h] [rbp-148h]
  int v97; // [rsp+0h] [rbp-148h]
  struct _Unwind_Exception *v98; // [rsp+8h] [rbp-140h]
  int v99; // [rsp+8h] [rbp-140h]
  __int64 *v100; // [rsp+10h] [rbp-138h]
  int v101; // [rsp+10h] [rbp-138h]
  __int64 v102; // [rsp+18h] [rbp-130h]
  __int64 *v103; // [rsp+18h] [rbp-130h]
  int v104; // [rsp+18h] [rbp-130h]
  __int64 v105; // [rsp+20h] [rbp-128h]
  __int64 *v106; // [rsp+20h] [rbp-128h]
  int v107; // [rsp+20h] [rbp-128h]
  __int64 *v108; // [rsp+28h] [rbp-120h]
  char v109; // [rsp+28h] [rbp-120h]
  int v110; // [rsp+30h] [rbp-118h]
  int v111; // [rsp+30h] [rbp-118h]
  unsigned int v112; // [rsp+34h] [rbp-114h]
  _BYTE *v113; // [rsp+38h] [rbp-110h]
  int v114; // [rsp+38h] [rbp-110h]
  _BYTE *v115; // [rsp+40h] [rbp-108h]
  int v116; // [rsp+40h] [rbp-108h]
  void *ptr; // [rsp+48h] [rbp-100h]
  void *ptra; // [rsp+48h] [rbp-100h]
  unsigned int ptrc; // [rsp+48h] [rbp-100h]
  void *ptrd; // [rsp+48h] [rbp-100h]
  void *ptre; // [rsp+48h] [rbp-100h]
  int ptrf; // [rsp+48h] [rbp-100h]
  _DWORD *ptrb; // [rsp+48h] [rbp-100h]
  int v124; // [rsp+50h] [rbp-F8h]
  __int64 v125; // [rsp+50h] [rbp-F8h]
  int v126[2]; // [rsp+58h] [rbp-F0h]
  int v127[2]; // [rsp+58h] [rbp-F0h]
  __int64 v128; // [rsp+60h] [rbp-E8h]
  _QWORD *v129; // [rsp+68h] [rbp-E0h]
  __int64 v130; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v131; // [rsp+78h] [rbp-D0h]
  __int64 v132; // [rsp+80h] [rbp-C8h]
  __int64 v133; // [rsp+88h] [rbp-C0h]
  __int64 v134; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD *v135; // [rsp+98h] [rbp-B0h]
  __int64 v136; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v137; // [rsp+A8h] [rbp-A0h]
  _BYTE v138[32]; // [rsp+B0h] [rbp-98h] BYREF
  _BYTE v139[32]; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v140; // [rsp+F0h] [rbp-58h] BYREF
  __int64 v141; // [rsp+F8h] [rbp-50h]
  _QWORD v142[9]; // [rsp+100h] [rbp-48h] BYREF

  v105 = a2;
  v102 = a3;
  v108 = a4;
  v115 = v138;
  sub_15F01E0(v138, *(_QWORD *)(a1 + 120));
  v113 = v139;
  sub_16744A0(v139, *(_QWORD *)(a1 + 120));
  v6 = *(_QWORD *)(a1 + 120);
  v7 = *(_QWORD *)(a3 + 8);
  v131 = nullptr;
  v133 = 0;
  v130 = v6;
  v132 = v6;
  v134 = v6;
  v135 = nullptr;
  if ( v7 )
  {
    v8 = v7 + 8LL * *(unsigned int *)(v7 - 4);
    if ( v7 != v8 )
    {
      while ( 1 )
      {
        v12 = sub_15E1B70(v6);
        v136 = v12;
        v13 = v12;
        v137 = v6;
        if ( v12 )
          ++*(_DWORD *)(v12 + 8);
        v14 = *(_QWORD *)(a1 + 120);
        v140 = 0;
        v141 = v14;
        v98 = (struct _Unwind_Exception *)(a1 + 136);
        sub_14CE740(a1 + 136, v13, &v136, &v140);
        v15 = v140;
        if ( v140 )
        {
          v16 = v141;
          v11 = (*(_DWORD *)(v140 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v16, v15);
        }
        v9 = v136;
        if ( v136 && (v10 = v137, v11 = *(_DWORD *)(v136 + 8) == 1, --*(_DWORD *)(v136 + 8), v11) )
        {
          sub_15D7BC0(v10, v9);
          v7 += 8;
          if ( v8 == v7 )
            goto LABEL_14;
        }
        else
        {
          v7 += 8;
          if ( v8 == v7 )
            goto LABEL_14;
        }
        v6 = *(_QWORD *)(a1 + 120);
      }
    }
  }
  v98 = (struct _Unwind_Exception *)(a1 + 136);
LABEL_14:
  v100 = &v134;
  sub_14CDEA0(v98, &v134);
  v17 = v135;
  if ( v135 )
  {
    v18 = &v135[*((unsigned int *)v135 - 1)];
    if ( v135 != v18 )
    {
      v19 = *(_QWORD *)(a1 + 128);
      do
        sub_E5EBF0(v19, *v17++);
      while ( v18 != v17 );
    }
  }
  v20 = *(__int64 **)(v102 + 8);
  if ( !v20 )
    goto LABEL_33;
  v21 = &v20[*((unsigned int *)v20 - 1)];
  if ( v20 == v21 )
    goto LABEL_33;
LABEL_23:
  while ( 2 )
  {
    v25 = *v20;
    if ( !*(_WORD *)(*v20 + 4) && !*(_DWORD *)(v25 + 24) )
    {
      v26 = *(_DWORD **)(*(_QWORD *)(v25 + 16) + 24LL);
      if ( !v26 || *v26 == -1 )
      {
        v39 = sub_14CD4C0(v98);
        v40 = *(_QWORD *)(v25 + 16);
        v41 = *(__int64 **)v39;
        v42 = *(unsigned int *)(v39 + 8);
        v43 = *(_DWORD *)(v40 + 12);
        v44 = v42 - 1;
        v42 *= 16;
        v45 = (__int64 *)((char *)v41 + v42);
        v46 = 16LL * (v43 & v44);
        v47 = &v41[(unsigned __int64)v46 / 8];
        if ( v46 != v42 )
        {
          v48 = &v41[(unsigned __int64)v46 / 8];
          while ( 1 )
          {
            while ( 1 )
            {
              v49 = *v48;
              if ( (unsigned __int64)*v48 > 1 )
                break;
              if ( !v49 )
                goto LABEL_27;
              v48 += 2;
              if ( v45 == v48 )
                goto LABEL_48;
            }
            if ( *(_DWORD *)(v49 + 12) == v43 && v40 == v49 )
              break;
            v48 += 2;
            if ( v45 == v48 )
              goto LABEL_48;
          }
LABEL_58:
          v52 = sub_15DC610(
                  *(_QWORD *)(a1 + 120),
                  v48[1],
                  0,
                  0,
                  v40,
                  (int)v45,
                  v96,
                  (int)v98,
                  (int)v100,
                  v102,
                  v105,
                  (char)v108,
                  v110,
                  (int)v113,
                  (int)v115,
                  ptr);
          v25 = v52;
          if ( v52 )
            ++*(_DWORD *)(v52 + 8);
          v27 = v131;
          if ( !v131 )
          {
            v91 = (_QWORD *)sub_186B270(0x18u);
            *v91 = 2;
            v23 = 1;
            v27 = v91 + 1;
            v131 = v27;
            v24 = v27;
            goto LABEL_22;
          }
          v28 = *((_DWORD *)v131 - 1);
          if ( v28 == *((_DWORD *)v131 - 2) )
          {
            v53 = (3 * v28 + 1) >> 1;
            v54 = 8 * v53 + 8;
            if ( 8 * v28 + 8 >= (unsigned int)v54 || v28 >= v53 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_107E52(&v140, "Overflow encountered when expanding vector", v93);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v140);
              sub_233E40((__int64)&v140);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v102) = (3 * v28 + 1) >> 1;
            v31 = (_DWORD *)sub_186B300(v131 - 1, v54);
            goto LABEL_32;
          }
LABEL_21:
          v22 = v28;
          v23 = v28 + 1;
          v24 = &v27[v22];
          goto LABEL_22;
        }
LABEL_48:
        if ( v41 == v47 )
          goto LABEL_27;
        do
        {
          v50 = *v41;
          if ( (unsigned __int64)*v41 > 1 )
          {
            if ( *(_DWORD *)(v50 + 12) == v43 && v40 == v50 )
            {
              v48 = v41;
              goto LABEL_58;
            }
          }
          else if ( !v50 )
          {
            v27 = v131;
            ++*(_DWORD *)(v25 + 8);
            if ( v27 )
              goto LABEL_28;
LABEL_56:
            v51 = (_QWORD *)sub_186B270(0x18u);
            v27 = v51 + 1;
            *v51 = 2;
            v23 = 1;
            v131 = v27;
            v24 = v27;
LABEL_22:
            ++v20;
            *v24 = v25;
            *((_DWORD *)v27 - 1) = v23;
            if ( v21 == v20 )
              goto LABEL_33;
            goto LABEL_23;
          }
          v41 += 2;
        }
        while ( v47 != v41 );
      }
    }
LABEL_27:
    v27 = v131;
    ++*(_DWORD *)(v25 + 8);
    if ( !v27 )
      goto LABEL_56;
LABEL_28:
    v28 = *((_DWORD *)v27 - 1);
    if ( v28 != *((_DWORD *)v27 - 2) )
      goto LABEL_21;
    v29 = (3 * v28 + 1) >> 1;
    v30 = 8 * v29 + 8;
    if ( 8 * v28 + 8 >= (unsigned int)v30 || v28 >= v29 )
    {
      v94 = (char **)__cxa_allocate_exception(0x28u);
      sub_107E52(&v140, "Overflow encountered when expanding vector", v95);
      *v94 = (char *)off_1C63128;
      sub_2333C0(v94 + 1, &v140);
      sub_233E40((__int64)&v140);
      __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    LODWORD(v102) = (3 * v28 + 1) >> 1;
    v31 = (_DWORD *)sub_186B300(v27 - 1, v30);
LABEL_32:
    v32 = (unsigned int)v31[1];
    ++v20;
    v131 = v31 + 2;
    *v31 = v102;
    *(_QWORD *)&v31[2 * v32 + 2] = v25;
    v31[1] = v32 + 1;
    if ( v21 != v20 )
      continue;
    break;
  }
LABEL_33:
  v33 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64 *))(**(_QWORD **)(a1 + 128) + 264LL))(
          *(_QWORD *)(a1 + 128),
          v105,
          &v130,
          v108);
  v34 = (__int64 *)v108[1];
  v112 = v33;
  if ( v34 )
  {
    v103 = &v34[*((unsigned int *)v34 - 1)];
    if ( v103 != v34 )
    {
      v35 = (__int64 *)v108[1];
      v36 = 0;
      v106 = &v140;
      do
      {
        v37 = *v35;
        v140 = 0;
        v142[0] = 1;
        v11 = *(_WORD *)(v37 + 4) == 0;
        v141 = 0;
        v142[1] = 0;
        if ( !v11
          || (v38 = *(_QWORD **)(*(_QWORD *)(v37 + 16) + 24LL)) == nullptr
          || *v38 != 0x900000000LL
          || *(_DWORD *)(v37 + 24) != 2 )
        {
          sub_1872CE0("");
          sub_1873130(114, 175);
        }
        v55 = *(_QWORD *)(v37 + 40);
        if ( *(_WORD *)(v55 + 4) )
          goto LABEL_69;
        v56 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL);
        if ( !v56 || *v56 )
          goto LABEL_69;
        if ( v56[1] != 2 || *(_DWORD *)(v55 + 24) != 2 )
          goto LABEL_91;
        v66 = *(_QWORD *)(v55 + 32);
        if ( *(_WORD *)(v66 + 4) )
        {
LABEL_69:
          v57 = v106;
        }
        else
        {
          if ( *(_DWORD *)(v66 + 24) )
            goto LABEL_91;
          v67 = *(_DWORD **)(*(_QWORD *)(v66 + 16) + 24LL);
          if ( v67 )
          {
            if ( *v67 != -1 )
              goto LABEL_91;
          }
          ptra = *(void **)(v55 + 40);
          v68 = sub_14CD4D0(v98);
          v70 = *(_QWORD *)(v66 + 16);
          v71 = *(__int64 **)v68;
          v72 = *(unsigned int *)(v68 + 8);
          v73 = *(_DWORD *)(v70 + 12);
          v74 = v72 - 1;
          v72 *= 16;
          v75 = (__int64 *)((char *)v71 + v72);
          v76 = 16LL * (v73 & v74);
          v77 = &v71[(unsigned __int64)v76 / 8];
          if ( v76 != v72 )
          {
            v78 = &v71[(unsigned __int64)v76 / 8];
            do
            {
              while ( 1 )
              {
                v79 = *v78;
                if ( (unsigned __int64)*v78 <= 1 )
                  break;
                if ( *(_DWORD *)(v79 + 12) == v73 && v70 == v79 )
                  goto LABEL_114;
                v78 += 2;
                if ( v75 == v78 )
                  goto LABEL_105;
              }
              if ( !v79 )
                goto LABEL_91;
              v78 += 2;
            }
            while ( v75 != v78 );
          }
LABEL_105:
          if ( v71 == v77 )
            goto LABEL_91;
          v80 = *v71;
          if ( (unsigned __int64)*v71 <= 1 )
            goto LABEL_111;
          while ( *(_DWORD *)(v80 + 12) != v73 || v70 != v80 )
          {
            while ( 1 )
            {
              v71 += 2;
              if ( v77 == v71 )
              {
LABEL_91:
                v57 = &v140;
                goto LABEL_70;
              }
              v80 = *v71;
              if ( (unsigned __int64)*v71 > 1 )
                break;
LABEL_111:
              if ( !v80 )
                goto LABEL_91;
            }
          }
          v78 = v71;
LABEL_114:
          v57 = &v140;
          *(_QWORD *)v126 = v78[1];
          if ( (unsigned __int8)sub_1673B50(
                                  (_DWORD)v113,
                                  (_DWORD)ptra,
                                  (unsigned int)&v140,
                                  (unsigned int)&v136,
                                  (_DWORD)v77,
                                  v69) )
          {
            v128 = *(_QWORD *)(a1 + 120);
            v129 = (_QWORD *)sub_15F6BE0(v115, *(_QWORD *)(*(_QWORD *)v126 + 40LL));
            if ( *v129 )
            {
              ptrc = *(_DWORD *)(*v129 - 4LL);
              if ( ptrc > (unsigned int)sub_182D020(qword_1C7F2C0, &v140) )
              {
                ptrd = *(void **)(a1 + 120);
                v81 = sub_182D020(qword_1C7F2C0, &v140);
                sub_15DC610(
                  (int)ptrd,
                  *(_QWORD *)(*v129 + 8LL * v81),
                  0,
                  0,
                  v82,
                  v83,
                  v96,
                  (int)v98,
                  (int)v100,
                  (int)v103,
                  (int)v106,
                  (char)v108,
                  v110,
                  (int)v113,
                  (int)v115,
                  ptrd);
                sub_15DC610(
                  *(_QWORD *)(a1 + 120),
                  v126[0],
                  0,
                  0,
                  v84,
                  v85,
                  v97,
                  v99,
                  v101,
                  v104,
                  v107,
                  v109,
                  v111,
                  v114,
                  v116,
                  ptre);
                v86 = sub_15E1B70(ptrf);
                ptrb = (_DWORD *)v86;
                if ( v86 )
                  ++*(_DWORD *)(v86 + 8);
                v87 = sub_15E1B70(*(_QWORD *)(a1 + 120));
                v88 = *v108;
                v89 = (__int64 *)(v108[1] + 8LL * v36);
                if ( v87 )
                  ++*(_DWORD *)(v87 + 8);
                v90 = *v89;
                if ( *v89 )
                {
                  v11 = (*(_DWORD *)(v90 + 8))-- == 1;
                  if ( v11 )
                  {
                    *(_QWORD *)v127 = v89;
                    v125 = v87;
                    sub_15D7BC0(v88, v90);
                    v89 = *(__int64 **)v127;
                    v87 = v125;
                  }
                }
                *v89 = v87;
                if ( ptrb )
                {
                  v124 = ptrb[2];
                  ptrb[2] = v124 - 1;
                  if ( v124 == 1 )
                    sub_15D7BC0(v128, ptrb);
                }
              }
            }
            else
            {
              sub_182D020(qword_1C7F2C0, &v140);
            }
          }
        }
LABEL_70:
        v58 = qword_1C7F2C0;
        ++v36;
        ++v35;
        sub_182CBA0(qword_1C7F2C0, v57);
        sub_182CBA0(v58, v142);
      }
      while ( v103 != v35 );
    }
  }
  v59 = v135;
  if ( v135 )
  {
    v60 = (unsigned __int64)&v135[*((unsigned int *)v135 - 1)];
    if ( (unsigned __int64)v135 >= v60 )
      goto LABEL_79;
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v11 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v59 >= v60 )
          goto LABEL_78;
      }
      sub_15D7BC0(v134, v61);
      ++v59;
    }
    while ( (unsigned __int64)v59 < v60 );
LABEL_78:
    v59 = v135;
    if ( v135 )
LABEL_79:
      sub_186B220(v59 - 1);
  }
  v62 = v131;
  if ( v131 )
  {
    v63 = (unsigned __int64)&v131[*((unsigned int *)v131 - 1)];
    if ( (unsigned __int64)v131 >= v63 )
      goto LABEL_88;
    do
    {
      while ( 1 )
      {
        v64 = *v62;
        if ( *v62 )
        {
          v11 = (*(_DWORD *)(v64 + 8))-- == 1;
          if ( v11 )
            break;
        }
        if ( (unsigned __int64)++v62 >= v63 )
          goto LABEL_87;
      }
      sub_15D7BC0(v130, v64);
      ++v62;
    }
    while ( (unsigned __int64)v62 < v63 );
LABEL_87:
    v62 = v131;
    if ( v131 )
LABEL_88:
      sub_186B220(v62 - 1);
  }
  return v112;
}

