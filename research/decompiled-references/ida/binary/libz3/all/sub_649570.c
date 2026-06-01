void __fastcall sub_649570(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _QWORD *a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10)
{
  char **v10; // rbx
  char **v11; // rbx
  char **exception; // rbx
  char **v13; // r14
  char **v14; // r14
  __int64 v15; // rbx
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 *v21; // rbp
  __int64 v22; // rax
  _QWORD *v23; // rdi
  unsigned int v24; // edx
  __int64 v25; // r15
  unsigned int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  _QWORD *v29; // rsi
  unsigned int v30; // edx
  __int64 v31; // rax
  __int64 *v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rsi
  _QWORD *v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rbp
  unsigned int v38; // eax
  __int64 v39; // rdi
  int v40; // eax
  _QWORD *v41; // rdi
  __int64 v42; // r13
  int v43; // ebp
  __int64 v44; // rax
  _DWORD *v45; // rdi
  _QWORD *v46; // r12
  __int64 v47; // r13
  unsigned int v48; // eax
  unsigned int v49; // r14d
  unsigned int v50; // edx
  unsigned int *v51; // rax
  __int64 v52; // r13
  int v53; // r8d
  __int64 v54; // rax
  _DWORD *v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 *v59; // r13
  unsigned __int64 v60; // r15
  __int64 v61; // rsi
  bool v62; // zf
  __int64 v63; // rax
  __int64 *v64; // rbp
  __int64 v65; // rax
  __int64 v66; // r12
  __int64 *v67; // rbx
  __int64 *v68; // r13
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  unsigned int v73; // r8d
  size_t v74; // rsi
  _DWORD *v75; // rax
  __int64 v76; // rsi
  unsigned int v77; // r9d
  size_t v78; // rsi
  _DWORD *v79; // rax
  __int64 v80; // rsi
  unsigned int v81; // eax
  __int64 *v82; // r15
  unsigned int *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rsi
  __int64 *v86; // rax
  __int64 *v87; // r8
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 *v90; // r14
  __int64 *v91; // rbx
  unsigned int *v92; // r15
  __int64 *v93; // rbp
  __int64 *v94; // r12
  __int64 v95; // rsi
  __int64 v96; // rdi
  unsigned int v97; // r14d
  unsigned int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rcx
  _DWORD *v101; // r15
  __int64 v102; // rsi
  unsigned __int64 v103; // rax
  __int64 v104; // rsi
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rax
  int v108[2]; // [rsp+0h] [rbp-C8h]
  __int64 v109; // [rsp+8h] [rbp-C0h]
  __int64 v110; // [rsp+10h] [rbp-B8h]
  unsigned int *v111; // [rsp+18h] [rbp-B0h]
  __int64 v112; // [rsp+18h] [rbp-B0h]
  __int64 *v113; // [rsp+20h] [rbp-A8h]
  _QWORD *v114; // [rsp+28h] [rbp-A0h]
  int v115; // [rsp+30h] [rbp-98h]
  int v116; // [rsp+38h] [rbp-90h]
  int v117[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v118; // [rsp+48h] [rbp-80h] BYREF
  int v119[2]; // [rsp+50h] [rbp-78h] BYREF
  int v120[2]; // [rsp+58h] [rbp-70h]
  int v121[2]; // [rsp+60h] [rbp-68h]
  __int64 v122; // [rsp+68h] [rbp-60h]
  __int64 v123[2]; // [rsp+70h] [rbp-58h] BYREF
  char v124; // [rsp+80h] [rbp-48h]
  __int64 v125; // [rsp+88h] [rbp-40h]
  char v126; // [rsp+90h] [rbp-38h]

  *(_QWORD *)v108 = a3;
  HIDWORD(v109) = a4;
  if ( !*(_QWORD *)(a2 + 48) || !*(_QWORD *)(a3 + 48) )
    return;
  v15 = *a5;
  *(_QWORD *)v119 = 0;
  *(_QWORD *)v120 = v15;
  sub_62E310(a1, a10, (__int64 *)v119, a7, a8, a9);
  *(_QWORD *)v117 = 0;
  v118 = 0;
  v19 = sub_186B270(0x28u);
  v20 = a5[1];
  v21 = (__int64 *)(v19 + 8);
  *(_QWORD *)(v19 + 16) = 0;
  *(_QWORD *)v19 = 2;
  v22 = *a5;
  *(_QWORD *)v117 = v19 + 8;
  *(_QWORD *)(v19 + 8) = v22;
  if ( v20 )
  {
    v23 = nullptr;
    v24 = 0;
    do
    {
      if ( v24 >= *(_DWORD *)(v20 - 4) )
        break;
      v25 = *(_QWORD *)(v20 + 8LL * v24);
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v23 )
      {
        v26 = *((_DWORD *)v23 - 1);
        if ( v26 == *((_DWORD *)v23 - 2) )
        {
          v77 = (3 * v26 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v26 + 8 >= (unsigned int)v78 || v26 >= v77 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v123, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v123);
            sub_233E40((__int64)v123);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v113) = (3 * v26 + 1) >> 1;
          LODWORD(v111) = v24;
          v110 = v19;
          v79 = (_DWORD *)sub_186B300(v23 - 1, v78);
          v80 = (unsigned int)v79[1];
          v23 = v79 + 2;
          v19 = v110;
          v24 = (unsigned int)v111;
          *v79 = (_DWORD)v113;
          LODWORD(v79) = v80;
          v20 = a5[1];
          v29 = &v23[v80];
          *(_QWORD *)(v110 + 16) = v23;
          v28 = (_DWORD)v79 + 1;
        }
        else
        {
          v27 = v26;
          v28 = v26 + 1;
          v29 = &v23[v27];
        }
      }
      else
      {
        LODWORD(v111) = v24;
        v110 = v19;
        v106 = (_QWORD *)sub_186B270(0x18u);
        v23 = v106 + 1;
        v20 = a5[1];
        v24 = (unsigned int)v111;
        v29 = v23;
        *v106 = 2;
        v19 = v110;
        v28 = 1;
        *(_QWORD *)(v110 + 16) = v23;
      }
      *v29 = v25;
      ++v24;
      *((_DWORD *)v23 - 1) = v28;
    }
    while ( v20 );
    v21 = *(__int64 **)v117;
    v30 = *(_DWORD *)(*(_QWORD *)v117 - 8LL);
    LODWORD(v31) = *(_DWORD *)(*(_QWORD *)v117 - 4LL) + 1;
    *(_DWORD *)(*(_QWORD *)v117 - 4LL) = v31;
    if ( v30 == (_DWORD)v31 )
    {
      LODWORD(v110) = (3 * v30 + 1) >> 1;
      v81 = 16 * v110 + 8;
      if ( 16 * v30 + 8 >= v81 || v30 >= (3 * v30 + 1) >> 1 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v123, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v123);
        sub_233E40((__int64)v123);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v31 = sub_186B270(v81);
      v82 = *(__int64 **)v117;
      v83 = (unsigned int *)v31;
      v21 = (__int64 *)(v31 + 8);
      if ( *(_QWORD *)v117 )
      {
        v84 = *(unsigned int *)(*(_QWORD *)v117 - 4LL);
        v85 = v31 + 8;
        *(_DWORD *)(v31 + 4) = v84;
        v86 = v82;
        v87 = &v82[2 * v84];
        if ( v82 != v87 )
        {
          do
          {
            v88 = *v86;
            v86 += 2;
            v85 += 16;
            *(_QWORD *)(v85 - 16) = v88;
            v89 = *(v86 - 1);
            *(v86 - 1) = 0;
            *(_QWORD *)(v85 - 8) = v89;
          }
          while ( v86 != v87 );
        }
        v90 = &v82[2 * v84];
        if ( (_DWORD)v84 )
        {
          v113 = v21;
          v114 = a6;
          v112 = v15;
          v91 = v82;
          v92 = v83;
          do
          {
            v93 = (__int64 *)v91[1];
            if ( v93 )
            {
              v94 = &v93[*((unsigned int *)v93 - 1)];
              if ( v93 >= v94 )
                goto LABEL_86;
              do
              {
                while ( 1 )
                {
                  v95 = *v93;
                  if ( *v93 )
                  {
                    v96 = *v91;
                    v62 = (*(_DWORD *)(v95 + 8))-- == 1;
                    if ( v62 )
                      break;
                  }
                  if ( ++v93 >= v94 )
                    goto LABEL_85;
                }
                sub_15D7BC0(v96, v95);
                ++v93;
              }
              while ( v93 < v94 );
LABEL_85:
              v93 = (__int64 *)v91[1];
              if ( v93 )
LABEL_86:
                sub_186B220(v93 - 1);
            }
            v91 += 2;
          }
          while ( v91 != v90 );
          v83 = v92;
          v15 = v112;
          v21 = v113;
          a6 = v114;
          v82 = *(__int64 **)v117;
        }
        v111 = v83;
        sub_186B220(v82 - 1);
        v83 = v111;
        v31 = v111[1];
        v32 = &v21[2 * v31];
      }
      else
      {
        *(_DWORD *)(v31 + 4) = 0;
        v32 = (__int64 *)(v31 + 8);
        LODWORD(v31) = 0;
      }
      *(_QWORD *)v117 = v21;
      *v83 = v110;
      goto LABEL_14;
    }
  }
  else
  {
    *(_DWORD *)(v19 + 4) = 1;
    LODWORD(v31) = 1;
  }
  v32 = &v21[2 * (unsigned int)v31];
LABEL_14:
  v33 = *a6;
  v32[1] = 0;
  v34 = a6[1];
  *v32 = v33;
  if ( v34 )
  {
    v35 = nullptr;
    v36 = 0;
    do
    {
      if ( v36 >= *(_DWORD *)(v34 - 4) )
        break;
      v37 = *(_QWORD *)(v34 + 8LL * v36);
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      if ( v35 )
      {
        v38 = *((_DWORD *)v35 - 1);
        if ( v38 == *((_DWORD *)v35 - 2) )
        {
          v73 = (3 * v38 + 1) >> 1;
          v74 = 8 * v73 + 8;
          if ( 8 * v38 + 8 >= (unsigned int)v74 || v38 >= v73 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v123, "Overflow encountered when expanding vector");
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v123);
            sub_233E40((__int64)v123);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          LODWORD(v111) = (3 * v38 + 1) >> 1;
          LODWORD(v110) = v36;
          v75 = (_DWORD *)sub_186B300(v35 - 1, v74);
          v76 = (unsigned int)v75[1];
          v35 = v75 + 2;
          v32[1] = (__int64)(v75 + 2);
          v36 = v110;
          *v75 = (_DWORD)v111;
          LODWORD(v75) = v76;
          v41 = &v35[v76];
          v34 = a6[1];
          v40 = (_DWORD)v75 + 1;
        }
        else
        {
          v39 = v38;
          v40 = v38 + 1;
          v41 = &v35[v39];
        }
      }
      else
      {
        LODWORD(v110) = v36;
        v105 = (_QWORD *)sub_186B270(0x18u);
        v35 = v105 + 1;
        v41 = v35;
        *v105 = 2;
        v36 = v110;
        v40 = 1;
        v32[1] = (__int64)v35;
        v34 = a6[1];
      }
      *v41 = v37;
      ++v36;
      *((_DWORD *)v35 - 1) = v40;
    }
    while ( v34 );
    v21 = *(__int64 **)v117;
    LODWORD(v31) = *(_DWORD *)(*(_QWORD *)v117 - 4LL);
  }
  v42 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)v121 = v15;
  *((_DWORD *)v21 - 1) = v31 + 1;
  v43 = *(_DWORD *)(v15 + 712);
  *(_DWORD *)(v15 + 712) = 1;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v44 = sub_186B270(0x18u);
  *(_QWORD *)(v44 + 8) = v42;
  v45 = (_DWORD *)v44;
  v46 = (_QWORD *)(v44 + 8);
  *(_QWORD *)v44 = 0x100000002LL;
  v47 = *(_QWORD *)(*(_QWORD *)v108 + 48LL);
  if ( v47 )
  {
    ++*(_DWORD *)(v47 + 8);
    v48 = *(_DWORD *)(v44 + 4);
    if ( v48 == *v45 )
    {
      v49 = (3 * v48 + 1) >> 1;
      v50 = 8 * v49 + 8;
      if ( 8 * v48 + 8 >= v50 || v48 >= v49 )
      {
        v13 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v123, "Overflow encountered when expanding vector");
        *v13 = (char *)off_1C63128;
        sub_2333C0(v13 + 1, v123);
        sub_233E40((__int64)v123);
        __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v51 = (unsigned int *)sub_186B300(v45, v50);
      *v51 = v49;
      v46 = v51 + 2;
      v48 = v51[1];
    }
  }
  else
  {
    v48 = 1;
  }
  v46[v48] = v47;
  v52 = v118;
  *((_DWORD *)v46 - 1) = v48 + 1;
  v53 = HIDWORD(v109) + 1;
  if ( v52 )
  {
    v54 = *(unsigned int *)(v52 - 4);
    if ( (_DWORD)v54 == *(_DWORD *)(v52 - 8) )
    {
      v97 = (unsigned int)(3 * v54 + 1) >> 1;
      v98 = 8 * v97 + 8;
      if ( 8 * (int)v54 + 8 >= v98 || (unsigned int)v54 >= v97 )
      {
        v14 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v123, "Overflow encountered when expanding vector");
        *v14 = (char *)off_1C63128;
        sub_2333C0(v14 + 1, v123);
        sub_233E40((__int64)v123);
        __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v108[0] = HIDWORD(v109) + 1;
      v99 = sub_186B270(v98);
      v100 = v118;
      v53 = HIDWORD(v109) + 1;
      v101 = (_DWORD *)v99;
      v52 = v99 + 8;
      if ( v118 )
      {
        v102 = *(unsigned int *)(v118 - 4);
        *(_DWORD *)(v99 + 4) = v102;
        v103 = 0;
        v104 = 8 * v102;
        if ( v104 )
        {
          do
          {
            *(_QWORD *)&v101[v103 / 4 + 2] = *(_QWORD *)(v100 + v103);
            v103 += 8LL;
          }
          while ( v104 != v103 );
        }
        sub_186B220((void *)(v100 - 8));
        v53 = HIDWORD(v109) + 1;
        v55 = (_DWORD *)(v52 + 8LL * (unsigned int)v101[1]);
      }
      else
      {
        *(_DWORD *)(v99 + 4) = 0;
        v55 = (_DWORD *)(v99 + 8);
      }
      v118 = v52;
      *v101 = v97;
    }
    else
    {
      v55 = (_DWORD *)(v52 + 8 * v54);
    }
  }
  else
  {
    v108[0] = HIDWORD(v109) + 1;
    v107 = (_QWORD *)sub_186B270(0x18u);
    v53 = HIDWORD(v109) + 1;
    v52 = (__int64)(v107 + 1);
    *v107 = 2;
    v55 = (_DWORD *)v52;
    v118 = v52;
  }
  *v55 = v53;
  v56 = v119[0];
  v55[1] = 0;
  ++*(_DWORD *)(v52 - 4);
  v57 = sub_15E9440(
          v15,
          2,
          (int)v46,
          v56,
          (int)&v118,
          (int)v117,
          v108[0],
          v109,
          v110,
          v111,
          (int)v113,
          (int)v114,
          v115,
          v116,
          v117[0],
          v118,
          v119[0],
          v120[0],
          v121[0],
          v122,
          v123[0],
          v123[1],
          v124,
          v125,
          v126);
  v58 = v57;
  if ( v57 )
    ++*(_DWORD *)(v57 + 8);
  sub_62A430(a10, v15, v57);
  v59 = v46;
  v60 = (unsigned __int64)&v46[*((unsigned int *)v46 - 1)];
  if ( (unsigned __int64)v46 < v60 )
  {
    do
    {
      while ( 1 )
      {
        v61 = *v59;
        if ( *v59 )
        {
          v62 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( v62 )
            break;
        }
        if ( (unsigned __int64)++v59 >= v60 )
          goto LABEL_42;
      }
      ++v59;
      sub_15D7BC0(v15, v61);
    }
    while ( (unsigned __int64)v59 < v60 );
  }
LABEL_42:
  sub_186B220(v46 - 1);
  if ( v58 )
  {
    v62 = (*(_DWORD *)(v58 + 8))-- == 1;
    if ( v62 )
      sub_15D7BC0(v15, v58);
  }
  v63 = v118;
  *(_DWORD *)(v15 + 712) = v43;
  if ( v63 )
    sub_186B220((void *)(v63 - 8));
  v64 = *(__int64 **)v117;
  if ( *(_QWORD *)v117 )
  {
    v65 = *(unsigned int *)(*(_QWORD *)v117 - 4LL);
    if ( (_DWORD)v65 )
    {
      v66 = *(_QWORD *)v117 + 16 * v65;
      do
      {
        v67 = (__int64 *)v64[1];
        if ( v67 )
        {
          v68 = &v67[*((unsigned int *)v67 - 1)];
          if ( v67 >= v68 )
            goto LABEL_58;
          do
          {
            while ( 1 )
            {
              v69 = *v67;
              if ( *v67 )
              {
                v70 = *v64;
                v62 = (*(_DWORD *)(v69 + 8))-- == 1;
                if ( v62 )
                  break;
              }
              if ( ++v67 >= v68 )
                goto LABEL_57;
            }
            sub_15D7BC0(v70, v69);
            ++v67;
          }
          while ( v67 < v68 );
LABEL_57:
          v67 = (__int64 *)v64[1];
          if ( v67 )
LABEL_58:
            sub_186B220(v67 - 1);
        }
        v64 += 2;
      }
      while ( v64 != (__int64 *)v66 );
      v64 = *(__int64 **)v117;
    }
    sub_186B220(v64 - 1);
  }
  v71 = *(_QWORD *)v119;
  if ( *(_QWORD *)v119 )
  {
    v72 = *(_QWORD *)v120;
    v62 = (*(_DWORD *)(*(_QWORD *)v119 + 8LL))-- == 1;
    if ( v62 )
      sub_15D7BC0(v72, v71);
  }
}

