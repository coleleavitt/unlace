void *__fastcall sub_D94A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char **exception; // r12
  char **v5; // r14
  __int64 v9; // rax
  __int64 *v10; // rdx
  __int64 v11; // rax
  int v12; // esi
  unsigned int v13; // r9d
  __int64 *v14; // rcx
  __int64 v15; // r9
  __int64 *v16; // rdi
  __int64 *i; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r15
  _QWORD *v23; // rcx
  int v24; // edx
  __int64 v25; // r8
  char *v26; // rax
  char *v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  __int64 exception_cleanup; // rax
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // r8d
  int v35; // ecx
  __int64 v36; // rsi
  _DWORD *v37; // rdx
  __int64 v38; // rdi
  bool v39; // zf
  char *v40; // r13
  char *v41; // rdi
  char *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdi
  int v45; // r11d
  unsigned __int64 v46; // r13
  unsigned int v47; // r15d
  __int64 v48; // rdi
  __int64 v49; // rsi
  int v50; // eax
  _QWORD *v51; // rsi
  __int64 v52; // rax
  struct _Unwind_Exception *v53; // rdx
  unsigned int v54; // eax
  unsigned int v55; // r8d
  size_t v56; // rsi
  _DWORD *v57; // rax
  __int64 v58; // rsi
  unsigned __int64 v59; // rax
  __int64 v60; // r10
  int *v62; // rax
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r8
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rsi
  void *v71; // rdi
  __int64 *v72; // rbx
  unsigned __int64 v73; // r12
  __int64 v74; // rsi
  int v75; // edx
  __int64 v76; // r14
  int v77; // r9d
  __int64 v78; // rbx
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // r15
  int v82; // edx
  __int64 v83; // rax
  int v84; // edx
  int v85; // ecx
  int v86; // r8d
  int v87; // r9d
  __int64 v88; // r12
  _QWORD *v89; // rax
  int v90; // edx
  int v91; // r9d
  __int64 v92; // rax
  int v93; // r9d
  __int64 v94; // r15
  int v95; // edx
  __int64 v96; // rax
  int v97; // edx
  int v98; // ecx
  int v99; // r8d
  int v100; // r9d
  __int64 v101; // r12
  int v102; // r9d
  __int64 v103; // rax
  int v104; // r8d
  int v105; // r9d
  __int64 v106; // r15
  int v107; // edx
  __int64 v108; // rax
  int v109; // edx
  int v110; // ecx
  int v111; // r8d
  int v112; // r9d
  __int64 v113; // r12
  int v114; // [rsp-8h] [rbp-1C8h]
  __int64 *v115; // [rsp+0h] [rbp-1C0h]
  __int64 v116; // [rsp+8h] [rbp-1B8h]
  void *ptr; // [rsp+10h] [rbp-1B0h]
  _QWORD *v118; // [rsp+18h] [rbp-1A8h]
  unsigned int v119; // [rsp+20h] [rbp-1A0h]
  unsigned int v120; // [rsp+24h] [rbp-19Ch]
  char *v121; // [rsp+28h] [rbp-198h]
  __int64 v122; // [rsp+30h] [rbp-190h]
  __int64 v123; // [rsp+30h] [rbp-190h]
  __int64 v124; // [rsp+38h] [rbp-188h]
  int v125; // [rsp+38h] [rbp-188h]
  __int64 v126; // [rsp+40h] [rbp-180h]
  void *v127; // [rsp+48h] [rbp-178h]
  __int64 v128; // [rsp+50h] [rbp-170h]
  struct _Unwind_Exception *v129; // [rsp+58h] [rbp-168h]
  int v130; // [rsp+58h] [rbp-168h]
  struct _Unwind_Exception *v131; // [rsp+58h] [rbp-168h]
  struct _Unwind_Exception *v132; // [rsp+58h] [rbp-168h]
  __int64 v133[2]; // [rsp+70h] [rbp-150h] BYREF
  __int64 v134; // [rsp+80h] [rbp-140h] BYREF
  char v135[80]; // [rsp+A0h] [rbp-120h] BYREF
  __int64 v136; // [rsp+F0h] [rbp-D0h] BYREF
  void *v137; // [rsp+F8h] [rbp-C8h]
  __int64 v138; // [rsp+100h] [rbp-C0h]
  char v139; // [rsp+108h] [rbp-B8h] BYREF

  v9 = *(_QWORD *)(a3 + 40);
  v127 = (void *)a2;
  v10 = *(__int64 **)(a2 + 48);
  v116 = v9;
  v119 = *(_DWORD *)(a4 + 32);
  v11 = *(unsigned int *)(a2 + 56);
  v12 = *(_DWORD *)(a4 + 12);
  v13 = v11 - 1;
  v11 *= 16;
  v14 = (__int64 *)((char *)v10 + v11);
  v15 = 16LL * (v12 & v13);
  v16 = &v10[(unsigned __int64)v15 / 8];
  if ( v15 != v11 )
  {
    for ( i = &v10[(unsigned __int64)v15 / 8]; v14 != i; i += 2 )
    {
      v18 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v18 + 12) == v12 && a4 == v18 )
          goto LABEL_89;
      }
      else if ( !v18 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v10 == v16 )
  {
LABEL_98:
    v18 = 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v18 = *v10;
        if ( (unsigned __int64)*v10 > 1 )
          break;
        if ( !v18 )
          goto LABEL_8;
        v10 += 2;
        if ( v16 == v10 )
          goto LABEL_98;
      }
      if ( *(_DWORD *)(v18 + 12) == v12 && a4 == v18 )
        break;
      v10 += 2;
      if ( v16 == v10 )
        goto LABEL_98;
    }
    i = v10;
LABEL_89:
    v18 = i[1];
  }
LABEL_8:
  ptr = (void *)sub_186B270(0x38u);
  sub_13478B0(ptr, *(_QWORD *)(a1 + 8), v119);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 8);
    v136 = 0;
    v115 = &v136;
    sub_1498450(v135, v19, &v136);
    sub_18572D0(&v136);
    v21 = *(_QWORD *)(v18 + 16);
    if ( v21 )
    {
      v120 = 0;
      v126 = a1 + 104;
      v124 = 8LL * v119;
      v121 = &v139;
      while ( 1 )
      {
        v128 = *(_QWORD *)(a1 + 8);
        v122 = v128;
        if ( v120 >= *(_DWORD *)(v21 - 4) )
          break;
        v129 = *(struct _Unwind_Exception **)(v21 + 8LL * v120);
        v136 = *(_QWORD *)(a1 + 8);
        v137 = v121;
        v138 = 0x1000000000LL;
        if ( v119 )
        {
          v22 = 0;
          do
          {
            sub_D94690(
              &v134,
              a1,
              (__int64)v127,
              *(_QWORD *)(a3 + v22 + 48),
              *(_Unwind_Word *)((char *)&v129->private_1 + v22),
              v20);
            sub_14B9B80(v126, &v134);
            v24 = v138;
            v25 = v134;
            if ( (unsigned int)v138 < HIDWORD(v138) )
            {
              v23 = v137;
            }
            else
            {
              v123 = v134;
              LODWORD(v128) = 2 * HIDWORD(v138);
              v26 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v138)));
              v24 = v138;
              v27 = (char *)v137;
              v23 = v26;
              v25 = v123;
              if ( (_DWORD)v138 )
              {
                if ( (unsigned int)(v138 - 1) <= 2 || v26 == (char *)v137 + 8 )
                {
                  v59 = 0;
                  v60 = 8LL * (unsigned int)v138;
                  do
                  {
                    v23[v59 / 8] = *(_QWORD *)&v27[v59];
                    v59 += 8LL;
                  }
                  while ( v60 != v59 );
                }
                else
                {
                  v20 = v128;
                  v28 = 0;
                  v29 = 16LL * ((unsigned int)v138 >> 1);
                  do
                  {
                    *(__m128i *)&v23[v28 / 8] = _mm_loadu_si128((const __m128i *)&v27[v28]);
                    v28 += 16LL;
                  }
                  while ( v28 != v29 );
                  if ( (v24 & 1) != 0 )
                    v23[v24 & 0xFFFFFFFE] = *(_QWORD *)&v27[8 * (v24 & 0xFFFFFFFE)];
                }
              }
              if ( v27 != v121 && v27 )
              {
                v118 = v23;
                sub_186B220(v27);
                v24 = v138;
                v23 = v118;
                v25 = v123;
              }
              v137 = v23;
              HIDWORD(v138) = v128;
            }
            v22 += 8;
            v23[v24] = v25;
            LODWORD(v138) = v24 + 1;
          }
          while ( v22 != v124 );
          v122 = *(_QWORD *)(a1 + 8);
        }
        exception_cleanup = (__int64)v129->exception_cleanup;
        v31 = exception_cleanup;
        if ( exception_cleanup )
          ++*(_DWORD *)(exception_cleanup + 8);
        sub_D94690(v133, a1, (__int64)v127, v116, exception_cleanup, v20);
        sub_14B9B80(v126, v133);
        v33 = sub_1347AE0(ptr, v137, v32);
        v35 = *(_DWORD *)(a1 + 32);
        if ( v33 )
        {
          v36 = v133[0];
          v37 = *(_DWORD **)(v116 + 24);
          if ( v37 )
          {
            if ( *v37 == v35 )
            {
              v20 = v37[1];
              if ( !v20 && *(_QWORD *)(v33 + 8) != v133[0] )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v134, "BUG: UF function entries disagree with each other");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v134);
                sub_233E40((__int64)&v134);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
            }
          }
        }
        else
        {
          v62 = *(int **)(a3 + 24);
          if ( v62 )
            v63 = *v62;
          else
            v63 = -1;
          if ( v63 != v35
            || (unsigned __int8)sub_15C5830(
                                  (int)a1 + 16,
                                  a3,
                                  v138,
                                  (_DWORD)v137,
                                  v34,
                                  v20,
                                  (__int64)v115,
                                  v116,
                                  (_DWORD)ptr,
                                  (_DWORD)v118,
                                  v119,
                                  (_DWORD)v121,
                                  v122,
                                  v124,
                                  v126,
                                  (__int64)v127,
                                  v128,
                                  (char)v129) )
          {
            sub_1348F50(ptr, v137, v133[0]);
          }
          v36 = v133[0];
        }
        if ( v36 )
        {
          v38 = v133[1];
          v39 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v39 )
            sub_15D7BC0(v38, v36);
        }
        if ( v31 )
        {
          v130 = *(_DWORD *)(v31 + 8);
          *(_DWORD *)(v31 + 8) = v130 - 1;
          if ( v130 == 1 )
            sub_15D7BC0(v122, v31);
        }
        v40 = (char *)v137 + 8 * (unsigned int)v138;
        v41 = (char *)v137;
        if ( v137 < v40 )
        {
          v42 = (char *)v137;
          do
          {
            while ( 1 )
            {
              v43 = *(_QWORD *)v42;
              if ( *(_QWORD *)v42 )
              {
                v44 = v136;
                v39 = (*(_DWORD *)(v43 + 8))-- == 1;
                if ( v39 )
                  break;
              }
              v42 += 8;
              if ( v42 >= v40 )
                goto LABEL_46;
            }
            sub_15D7BC0(v44, v43);
            v42 += 8;
          }
          while ( v42 < v40 );
LABEL_46:
          v41 = (char *)v137;
        }
        if ( v41 == v121 || !v41 )
        {
          v21 = *(_QWORD *)(v18 + 16);
          ++v120;
          if ( !v21 )
            goto LABEL_50;
        }
        else
        {
          sub_186B220(v41);
          v21 = *(_QWORD *)(v18 + 16);
          ++v120;
          if ( !v21 )
            goto LABEL_50;
        }
      }
    }
    else
    {
LABEL_50:
      v128 = *(_QWORD *)(a1 + 8);
    }
    v45 = *(_DWORD *)(a3 + 32);
    v46 = 0;
    v47 = 0;
    v125 = *(_DWORD *)(a1 + 32);
    v134 = v128;
    v48 = v128;
    if ( v45 )
    {
      while ( 1 )
      {
        v52 = sub_15DB5C0(v48, v47, *(_QWORD *)(a3 + 8LL * v47 + 48));
        v53 = (struct _Unwind_Exception *)v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        if ( v46 )
        {
          v54 = *(_DWORD *)(v46 - 4);
          if ( v54 == *(_DWORD *)(v46 - 8) )
          {
            v55 = (3 * v54 + 1) >> 1;
            v56 = 8 * v55 + 8;
            if ( 8 * v54 + 8 >= (unsigned int)v56 || v54 >= v55 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v115, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v115);
              sub_233E40((__int64)v115);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            LODWORD(v126) = (3 * v54 + 1) >> 1;
            v131 = v53;
            v57 = (_DWORD *)sub_186B300((void *)(v46 - 8), v56);
            v58 = (unsigned int)v57[1];
            v46 = (unsigned __int64)(v57 + 2);
            v53 = v131;
            *v57 = v126;
            LODWORD(v57) = v58;
            v51 = (_QWORD *)(v46 + 8 * v58);
            v50 = (_DWORD)v57 + 1;
          }
          else
          {
            v49 = v54;
            v50 = v54 + 1;
            v51 = (_QWORD *)(v46 + 8 * v49);
          }
        }
        else
        {
          v132 = (struct _Unwind_Exception *)v52;
          v89 = (_QWORD *)sub_186B270(0x18u);
          v46 = (unsigned __int64)(v89 + 1);
          *v89 = 2;
          v53 = v132;
          v50 = 1;
          v51 = (_QWORD *)v46;
        }
        *v51 = v53;
        ++v47;
        *(_DWORD *)(v46 - 4) = v50;
        if ( v47 >= *(_DWORD *)(a3 + 32) )
          break;
        v48 = *(_QWORD *)(a1 + 8);
      }
    }
    v64 = *(_QWORD *)(a3 + 24);
    if ( !v64 || *(_DWORD *)v64 != *(_DWORD *)(a1 + 32) )
      goto LABEL_77;
    v75 = *(_DWORD *)(v64 + 4);
    if ( v75 == 41 )
    {
      v90 = 44;
    }
    else
    {
      if ( v75 != 40 )
      {
        if ( v75 == 42 )
        {
          v76 = *(_QWORD *)(a1 + 8);
          if ( v46 )
            v102 = *(_DWORD *)(v46 - 4);
          else
            v102 = 0;
          v103 = sub_15D2D60(v76, v125, 43, 0, 0, v102, v46, 0);
          v78 = v103;
          if ( v103 )
            ++*(_DWORD *)(v103 + 8);
          v106 = *(_QWORD *)(a1 + 8);
          if ( v46 )
            v107 = *(_DWORD *)(v46 - 4);
          else
            v107 = 0;
          v108 = sub_15DC610(
                   *(_QWORD *)(a1 + 8),
                   v103,
                   v107,
                   v46,
                   v104,
                   v105,
                   (int)v115,
                   v116,
                   (int)ptr,
                   (int)v118,
                   v119,
                   (char)v121,
                   v122,
                   v125,
                   v126,
                   v127);
          v113 = v108;
          if ( v108 )
          {
            ++*(_DWORD *)(v108 + 8);
            sub_1349280((_DWORD)ptr, v108, v109, v110, v111, v112);
            v39 = (*(_DWORD *)(v113 + 8))-- == 1;
            if ( v39 )
              sub_15D7BC0(v106, v113);
          }
          else
          {
            sub_1349280((_DWORD)ptr, 0, v109, v110, v111, v112);
          }
          if ( !v78 )
            goto LABEL_81;
          v39 = (*(_DWORD *)(v78 + 8))-- == 1;
          if ( !v39 )
            goto LABEL_81;
        }
        else
        {
          if ( v75 != 46 )
          {
LABEL_77:
            v65 = *(_QWORD *)(v18 + 24);
            if ( v65 )
            {
              sub_D94690(v115, a1, (__int64)v127, v116, v65, v20);
              sub_14B9B80(a1 + 104, v115);
              sub_1349280((_DWORD)ptr, v136, v66, v67, v68, v69);
              v70 = v136;
              if ( v136 )
              {
                v71 = v137;
                v39 = (*(_DWORD *)(v136 + 8))-- == 1;
                if ( v39 )
                  sub_15D7BC0(v71, v70);
              }
            }
            goto LABEL_81;
          }
          v76 = *(_QWORD *)(a1 + 8);
          if ( v46 )
            v77 = *(_DWORD *)(v46 - 4);
          else
            v77 = 0;
          v78 = sub_15D2D60(v76, v125, 47, 0, 0, v77, v46, 0);
          if ( v78 )
            ++*(_DWORD *)(v78 + 8);
          v81 = *(_QWORD *)(a1 + 8);
          if ( v46 )
            v82 = *(_DWORD *)(v46 - 4);
          else
            v82 = 0;
          v83 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v78,
                  v82,
                  v46,
                  v79,
                  v80,
                  (int)v115,
                  v116,
                  (int)ptr,
                  (int)v118,
                  v119,
                  (char)v121,
                  v122,
                  v125,
                  v126,
                  v127);
          v88 = v83;
          if ( v83 )
          {
            ++*(_DWORD *)(v83 + 8);
            sub_1349280((_DWORD)ptr, v83, v84, v85, v86, v87);
            v39 = (*(_DWORD *)(v88 + 8))-- == 1;
            if ( v39 )
              sub_15D7BC0(v81, v88);
          }
          else
          {
            sub_1349280((_DWORD)ptr, 0, v84, v85, v86, v87);
          }
          if ( !v78 )
            goto LABEL_81;
          v39 = (*(_DWORD *)(v78 + 8))-- == 1;
          if ( !v39 )
            goto LABEL_81;
        }
LABEL_146:
        sub_15D7BC0(v76, v78);
LABEL_81:
        if ( v46 )
        {
          v72 = (__int64 *)v46;
          v73 = v46 + 8LL * *(unsigned int *)(v46 - 4);
          if ( v46 < v73 )
          {
            do
            {
              v74 = *v72;
              if ( *v72 )
              {
                v39 = (*(_DWORD *)(v74 + 8))-- == 1;
                if ( v39 )
                  sub_15D7BC0(v128, v74);
              }
              ++v72;
            }
            while ( (unsigned __int64)v72 < v73 );
          }
          sub_186B220((void *)(v46 - 8));
        }
        return ptr;
      }
      v90 = 45;
    }
    v76 = *(_QWORD *)(a1 + 8);
    if ( v46 )
      v91 = *(_DWORD *)(v46 - 4);
    else
      v91 = 0;
    v92 = sub_15D2D60(v76, v125, v90, 1, *(_QWORD *)(v64 + 8), v91, v46, 0);
    v78 = v92;
    if ( v92 )
      ++*(_DWORD *)(v92 + 8);
    v94 = *(_QWORD *)(a1 + 8);
    if ( v46 )
      v95 = *(_DWORD *)(v46 - 4);
    else
      v95 = 0;
    v96 = sub_15DC610(
            *(_QWORD *)(a1 + 8),
            v92,
            v95,
            v46,
            v114,
            v93,
            (int)v115,
            v116,
            (int)ptr,
            (int)v118,
            v119,
            (char)v121,
            v122,
            v125,
            v126,
            v127);
    v101 = v96;
    if ( v96 )
    {
      ++*(_DWORD *)(v96 + 8);
      sub_1349280((_DWORD)ptr, v96, v97, v98, v99, v100);
      v39 = (*(_DWORD *)(v101 + 8))-- == 1;
      if ( v39 )
        sub_15D7BC0(v94, v101);
    }
    else
    {
      sub_1349280((_DWORD)ptr, 0, v97, v98, v99, v100);
    }
    if ( !v78 )
      goto LABEL_81;
    v39 = (*(_DWORD *)(v78 + 8))-- == 1;
    if ( !v39 )
      goto LABEL_81;
    goto LABEL_146;
  }
  return ptr;
}

