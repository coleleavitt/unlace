__int64 __fastcall sub_719980(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rsi
  char v8; // r15
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  _QWORD *v18; // r14
  _DWORD *v19; // rdx
  unsigned int v20; // r13d
  __int64 v21; // r12
  unsigned int v22; // eax
  _QWORD *v23; // rbp
  __int64 v24; // rsi
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // edx
  _QWORD *v28; // rbp
  _QWORD *v29; // rcx
  _QWORD *v30; // rdx
  unsigned int v31; // r14d
  __int64 v32; // r12
  unsigned int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  _QWORD *v36; // rsi
  _QWORD *v37; // rbp
  _QWORD *v38; // r12
  __int64 v39; // rsi
  _QWORD *v40; // rbp
  __int64 v41; // rax
  _QWORD *v42; // r12
  _QWORD *v43; // rcx
  _QWORD *v44; // rdx
  unsigned int v45; // r14d
  __int64 v46; // rbp
  unsigned int v47; // eax
  __int64 v48; // rsi
  int v49; // eax
  _QWORD *v50; // rsi
  unsigned int v51; // r14d
  size_t v52; // rsi
  unsigned int *v53; // rax
  __int64 v54; // rsi
  unsigned int v55; // ecx
  size_t v56; // rsi
  unsigned int v57; // r13d
  unsigned int *v58; // rax
  __int64 v59; // rcx
  size_t v60; // rdi
  __int64 *v61; // r13
  __int64 v62; // r12
  __int64 v63; // rdx
  int v64; // r8d
  __int64 *v65; // rax
  __int64 *v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 *v69; // r12
  __int64 *v70; // r15
  __int64 *v71; // r14
  __int64 v72; // rsi
  __int64 v73; // rdi
  __int64 v74; // rcx
  unsigned int v75; // r12d
  int v76; // r14d
  int v77; // r15d
  __int64 v78; // rbp
  __int64 v79; // rax
  unsigned int v80; // r13d
  __int64 v81; // rax
  unsigned __int64 v82; // rbx
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 v86; // rsi
  __int64 v87; // rdi
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 result; // rax
  __int64 v91; // rsi
  __int64 v92; // rdi
  _QWORD *v93; // rax
  unsigned int v94; // r15d
  unsigned int v95; // ecx
  unsigned int *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  _QWORD *v101; // rdx
  char **exception; // rbx
  __int64 v103; // rdx
  char **v104; // rbp
  __int64 v105; // rdx
  char **v106; // r12
  __int64 v107; // rdx
  char **v108; // r12
  __int64 v109; // rdx
  char **v110; // rbp
  __int64 v111; // rdx
  __int64 *v112; // [rsp+8h] [rbp-2D0h]
  unsigned __int8 v113; // [rsp+8h] [rbp-2D0h]
  _DWORD *v115; // [rsp+20h] [rbp-2B8h]
  unsigned int v116; // [rsp+2Ch] [rbp-2ACh]
  int v117; // [rsp+38h] [rbp-2A0h] BYREF
  int v118[2]; // [rsp+40h] [rbp-298h] BYREF
  __int64 v119; // [rsp+48h] [rbp-290h]
  int v120[2]; // [rsp+50h] [rbp-288h] BYREF
  _QWORD *v121; // [rsp+58h] [rbp-280h]
  __m128i v122[2]; // [rsp+60h] [rbp-278h] BYREF
  __int64 v123; // [rsp+80h] [rbp-258h] BYREF
  __int64 (__fastcall **v124)(); // [rsp+88h] [rbp-250h] BYREF
  __int64 v125; // [rsp+128h] [rbp-1B0h]
  int *v126; // [rsp+130h] [rbp-1A8h] BYREF
  int *v127; // [rsp+1D0h] [rbp-108h] BYREF
  __int64 v128; // [rsp+268h] [rbp-70h]
  __int64 v129; // [rsp+270h] [rbp-68h]
  __int64 v130; // [rsp+278h] [rbp-60h]
  __int64 v131; // [rsp+280h] [rbp-58h]
  __int64 v132; // [rsp+288h] [rbp-50h]
  __int64 v133; // [rsp+290h] [rbp-48h]
  __int64 v134; // [rsp+298h] [rbp-40h]

  if ( (unsigned __int8)sub_6AA810(*(_QWORD *)(a1 + 16), (_DWORD *)*a2, a3, a4, a5, a6) )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_109F38(&v123, "formula contains uninterpreted functions", v103);
    *exception = (char *)off_1C63670;
    sub_2333C0(exception + 1, &v123);
    sub_233E40((__int64)&v123);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 0;
  *(_QWORD *)v118 = 0;
  v119 = v7;
  sub_14405A0(&v123, v7);
  sub_1440730((unsigned int)&v123, (_DWORD)a2, (unsigned int)v118, v9, v10, v11);
  sub_1580DB0(&v117, *(_QWORD *)(a1 + 16));
  v12 = *(_QWORD *)(a1 + 16);
  v13 = *a2;
  v121 = nullptr;
  *(_QWORD *)v120 = v12;
  sub_7137E0(a1 + 144, v13, (__int64)v120);
  v112 = (__int64 *)(a1 + 392);
  v14 = *(_QWORD *)(a1 + 392);
  if ( !v14 || (v15 = *(_DWORD *)(v14 - 4), v15 == *(_DWORD *)(v14 - 8)) )
  {
    sub_719740(v112);
    v14 = *(_QWORD *)(a1 + 392);
    v15 = *(_DWORD *)(v14 - 4);
  }
  v16 = *(_QWORD *)v120;
  v17 = (_QWORD *)(v14 + 16LL * v15);
  v17[1] = 0;
  v18 = v121;
  *v17 = v16;
  if ( v18 )
  {
    v19 = nullptr;
    v20 = 0;
    while ( 2 )
    {
      if ( v20 >= *((_DWORD *)v18 - 1) )
      {
LABEL_12:
        ++*(_DWORD *)(*(_QWORD *)(a1 + 392) - 4LL);
        v23 = &v18[*((unsigned int *)v18 - 1)];
        if ( v18 >= v23 )
          goto LABEL_19;
        do
        {
          while ( 1 )
          {
            v24 = *v18;
            if ( *v18 )
            {
              v25 = (*(_DWORD *)(v24 + 8))-- == 1;
              if ( v25 )
                break;
            }
            if ( ++v18 >= v23 )
              goto LABEL_18;
          }
          sub_15D7BC0(*(_QWORD *)v120, v24);
          ++v18;
        }
        while ( v18 < v23 );
LABEL_18:
        v18 = v121;
        if ( v121 )
LABEL_19:
          *((_DWORD *)v18 - 1) = 0;
      }
      else
      {
        while ( 1 )
        {
          v21 = v18[v20];
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          if ( !v19 )
            break;
          v22 = *(v19 - 1);
          if ( v22 == *(v19 - 2) )
          {
            v51 = (3 * v22 + 1) >> 1;
            v52 = 8 * v51 + 8;
            if ( 8 * v22 + 8 >= (unsigned int)v52 || v22 >= v51 )
            {
              v106 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v122[0].m128i_i64, "Overflow encountered when expanding vector", v107);
              *v106 = (char *)off_1C63128;
              sub_2333C0(v106 + 1, v122);
              sub_233E40((__int64)v122);
              __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v53 = (unsigned int *)sub_186B300(v19 - 2, v52);
            v54 = v53[1];
            v19 = v53 + 2;
            v17[1] = v53 + 2;
            *v53 = v51;
            v18 = v121;
            *(_QWORD *)&v53[2 * v54 + 2] = v21;
            v53[1] = v54 + 1;
            if ( v18 )
              goto LABEL_61;
            goto LABEL_136;
          }
          ++v20;
          *(_QWORD *)&v19[2 * v22] = v21;
          *(v19 - 1) = v22 + 1;
          if ( v20 >= *((_DWORD *)v18 - 1) )
            goto LABEL_12;
        }
        v100 = sub_186B270(0x18u);
        *(_QWORD *)v100 = 2;
        v19 = (_DWORD *)(v100 + 8);
        v17[1] = v100 + 8;
        v18 = v121;
        *(_QWORD *)(v100 + 8) = v21;
        *(_DWORD *)(v100 + 4) = 1;
        if ( v18 )
        {
LABEL_61:
          ++v20;
          continue;
        }
LABEL_136:
        ++*(_DWORD *)(*(_QWORD *)(a1 + 392) - 4LL);
      }
      break;
    }
  }
  else
  {
    *(_DWORD *)(v14 - 4) = v15 + 1;
  }
  if ( *(_DWORD *)(a1 + 416) == 2 )
  {
    sub_1580ED0(&v117, 0, a2, v120, 1, 1);
    v98 = *(_QWORD *)(a1 + 392);
    v99 = 0xFFFFFFFF0LL;
    if ( v98 )
      v99 = 16LL * (unsigned int)(*(_DWORD *)(v98 - 4) - 1);
    sub_3EE030(v98 + v99, (__int64)v120);
    sub_717BE0(a1, (__int64)v120);
  }
  else
  {
    sub_1580ED0(&v117, 1, a2, v120, 1, 1);
    v26 = *(_QWORD *)(a1 + 392);
    if ( !v26 || (v27 = *(_DWORD *)(v26 - 4), v27 == *(_DWORD *)(v26 - 8)) )
    {
      sub_719740(v112);
      v26 = *(_QWORD *)(a1 + 392);
      v27 = *(_DWORD *)(v26 - 4);
    }
    v28 = (_QWORD *)(v26 + 16LL * v27);
    *v28 = *(_QWORD *)v120;
    v28[1] = 0;
    v29 = v121;
    if ( v121 )
    {
      v30 = nullptr;
      v31 = 0;
      do
      {
        if ( v31 >= *((_DWORD *)v29 - 1) )
          break;
        v32 = v29[v31];
        if ( v32 )
          ++*(_DWORD *)(v32 + 8);
        if ( v30 )
        {
          v33 = *((_DWORD *)v30 - 1);
          if ( v33 == *((_DWORD *)v30 - 2) )
          {
            v94 = (3 * v33 + 1) >> 1;
            v95 = 8 * v94 + 8;
            if ( 8 * v33 + 8 >= v95 || v33 >= v94 )
            {
              v108 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v122[0].m128i_i64, "Overflow encountered when expanding vector", v109);
              *v108 = (char *)off_1C63128;
              sub_2333C0(v108 + 1, v122);
              sub_233E40((__int64)v122);
              __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v96 = (unsigned int *)sub_186B300(v30 - 1, v95);
            v97 = v96[1];
            v30 = v96 + 2;
            v28[1] = v96 + 2;
            *v96 = v94;
            LODWORD(v96) = v97;
            v36 = &v30[v97];
            v29 = v121;
            v35 = (_DWORD)v96 + 1;
          }
          else
          {
            v34 = v33;
            v35 = v33 + 1;
            v36 = &v30[v34];
          }
        }
        else
        {
          v101 = (_QWORD *)sub_186B270(0x18u);
          *v101 = 2;
          v35 = 1;
          v30 = v101 + 1;
          v28[1] = v30;
          v36 = v30;
          v29 = v121;
        }
        *v36 = v32;
        ++v31;
        *((_DWORD *)v30 - 1) = v35;
      }
      while ( v29 );
      v26 = *(_QWORD *)(a1 + 392);
      v27 = *(_DWORD *)(v26 - 4);
    }
    *(_DWORD *)(v26 - 4) = v27 + 1;
    sub_717BE0(a1, (__int64)v120);
    v8 = 1;
  }
  v37 = v121;
  v113 = v8 ^ 1;
  if ( !v121 )
    goto LABEL_43;
  while ( 1 )
  {
    v38 = &v37[*((unsigned int *)v37 - 1)];
    if ( v37 >= v38 )
      goto LABEL_42;
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          v25 = (*(_DWORD *)(v39 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v37 >= v38 )
          goto LABEL_41;
      }
      sub_15D7BC0(*(_QWORD *)v120, v39);
      ++v37;
    }
    while ( v37 < v38 );
LABEL_41:
    v37 = v121;
    if ( v121 )
LABEL_42:
      *((_DWORD *)v37 - 1) = 0;
LABEL_43:
    sub_1580ED0(&v117, v113, a2, v120, 1, 1);
    v40 = *(_QWORD **)(a1 + 392);
    if ( v40 )
    {
      LODWORD(v41) = *((_DWORD *)v40 - 1);
      v42 = &v40[2 * (unsigned int)v41];
      if ( (_DWORD)v41 == *((_DWORD *)v40 - 2) )
      {
        v116 = (unsigned int)(3 * v41 + 1) >> 1;
        v60 = 16 * v116 + 8;
        if ( 16 * (int)v41 + 8 >= (unsigned int)v60 || (unsigned int)v41 >= (unsigned int)(3 * v41 + 1) >> 1 )
        {
          v104 = (char **)__cxa_allocate_exception(0x28u);
          sub_109F38(v122[0].m128i_i64, "Overflow encountered when expanding vector", v105);
          *v104 = (char *)off_1C63128;
          sub_2333C0(v104 + 1, v122);
          sub_233E40((__int64)v122);
          __cxa_throw(v104, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = sub_186B270(v60);
        v61 = *(__int64 **)(a1 + 392);
        v115 = (_DWORD *)v41;
        v40 = (_QWORD *)(v41 + 8);
        if ( v61 )
        {
          v62 = *((unsigned int *)v61 - 1);
          v63 = v41 + 8;
          *(_DWORD *)(v41 + 4) = v62;
          v64 = v62;
          v65 = v61;
          v66 = &v61[2 * v62];
          if ( v61 != v66 )
          {
            do
            {
              v67 = *v65;
              v65 += 2;
              v63 += 16;
              *(_QWORD *)(v63 - 16) = v67;
              v68 = *(v65 - 1);
              *(v65 - 1) = 0;
              *(_QWORD *)(v63 - 8) = v68;
            }
            while ( v66 != v65 );
          }
          v69 = &v61[2 * v62];
          if ( v64 )
          {
            do
            {
              v70 = (__int64 *)v61[1];
              if ( v70 )
              {
                v71 = &v70[*((unsigned int *)v70 - 1)];
                if ( v70 >= v71 )
                  goto LABEL_79;
                do
                {
                  while ( 1 )
                  {
                    v72 = *v70;
                    if ( *v70 )
                    {
                      v73 = *v61;
                      v25 = (*(_DWORD *)(v72 + 8))-- == 1;
                      if ( v25 )
                        break;
                    }
                    if ( ++v70 >= v71 )
                      goto LABEL_78;
                  }
                  sub_15D7BC0(v73, v72);
                  ++v70;
                }
                while ( v70 < v71 );
LABEL_78:
                v70 = (__int64 *)v61[1];
                if ( v70 )
LABEL_79:
                  sub_186B220(v70 - 1);
              }
              v61 += 2;
            }
            while ( v61 != v69 );
            v61 = *(__int64 **)(a1 + 392);
          }
          sub_186B220(v61 - 1);
          v41 = (unsigned int)v115[1];
          v42 = &v40[2 * v41];
        }
        else
        {
          *(_DWORD *)(v41 + 4) = 0;
          v42 = (_QWORD *)(v41 + 8);
          LODWORD(v41) = 0;
        }
        *(_QWORD *)(a1 + 392) = v40;
        *v115 = v116;
      }
    }
    else
    {
      v41 = sub_186B270(0x28u);
      v40 = (_QWORD *)(v41 + 8);
      *(_QWORD *)v41 = 2;
      LODWORD(v41) = 0;
      *(_QWORD *)(a1 + 392) = v40;
      v42 = v40;
    }
    v42[1] = 0;
    v43 = v121;
    *v42 = *(_QWORD *)v120;
    if ( v43 )
    {
      v44 = nullptr;
      v45 = 0;
      do
      {
        if ( v45 >= *((_DWORD *)v43 - 1) )
          break;
        v46 = v43[v45];
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        if ( v44 )
        {
          v47 = *((_DWORD *)v44 - 1);
          if ( v47 == *((_DWORD *)v44 - 2) )
          {
            v55 = (3 * v47 + 1) >> 1;
            v56 = 8 * v55 + 8;
            v57 = v55;
            if ( 8 * v47 + 8 >= (unsigned int)v56 || v47 >= v55 )
            {
              v110 = (char **)__cxa_allocate_exception(0x28u);
              sub_109F38(v122[0].m128i_i64, "Overflow encountered when expanding vector", v111);
              *v110 = (char *)off_1C63128;
              sub_2333C0(v110 + 1, v122);
              sub_233E40((__int64)v122);
              __cxa_throw(v110, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v58 = (unsigned int *)sub_186B300(v44 - 1, v56);
            v59 = v58[1];
            v44 = v58 + 2;
            v42[1] = v58 + 2;
            *v58 = v57;
            LODWORD(v58) = v59;
            v50 = &v44[v59];
            v43 = v121;
            v49 = (_DWORD)v58 + 1;
          }
          else
          {
            v48 = v47;
            v49 = v47 + 1;
            v50 = &v44[v48];
          }
        }
        else
        {
          v93 = (_QWORD *)sub_186B270(0x18u);
          v44 = v93 + 1;
          *v93 = 2;
          v49 = 1;
          v42[1] = v44;
          v50 = v44;
          v43 = v121;
        }
        *v50 = v46;
        ++v45;
        *((_DWORD *)v44 - 1) = v49;
      }
      while ( v43 );
      v40 = *(_QWORD **)(a1 + 392);
      LODWORD(v41) = *((_DWORD *)v40 - 1);
    }
    *((_DWORD *)v40 - 1) = v41 + 1;
    sub_717BE0(a1, (__int64)v120);
    v37 = v121;
    if ( !v121 )
    {
      v74 = *(_QWORD *)(a1 + 392);
      if ( v74 )
        goto LABEL_85;
      goto LABEL_103;
    }
    if ( !*((_DWORD *)v121 - 1) )
      break;
    v113 ^= 1u;
  }
  v74 = *(_QWORD *)(a1 + 392);
  if ( !v74 )
  {
LABEL_102:
    sub_186B220(v37 - 1);
    goto LABEL_103;
  }
LABEL_85:
  v75 = 0;
  while ( v75 < *(_DWORD *)(v74 - 4) )
  {
    if ( (v75 & 1) != 0 )
    {
      v77 = v75;
      v76 = -1;
    }
    else
    {
      v76 = v75;
      v77 = -1;
    }
    v78 = 16LL * v75;
    v79 = *(_QWORD *)(v74 + v78 + 8);
    if ( v79 )
    {
      v80 = 0;
      do
      {
        if ( v80 >= *(_DWORD *)(v79 - 4) )
          break;
        v81 = *(_QWORD *)(v79 + 8LL * v80);
        v122[0].m128i_i64[1] = __PAIR64__(v77, v76);
        v122[0].m128i_i64[0] = v81;
        sub_7183C0(a1 + 312, v122);
        v74 = *(_QWORD *)(a1 + 392);
        ++v80;
        v79 = *(_QWORD *)(v74 + v78 + 8);
      }
      while ( v79 );
      ++v75;
      if ( !v74 )
        break;
    }
    else
    {
      ++v75;
    }
  }
  v37 = v121;
  if ( v121 )
  {
    v82 = (unsigned __int64)&v121[*((unsigned int *)v121 - 1)];
    if ( (unsigned __int64)v121 >= v82 )
      goto LABEL_102;
    do
    {
      while ( 1 )
      {
        v83 = *v37;
        if ( *v37 )
        {
          v25 = (*(_DWORD *)(v83 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v37 >= v82 )
          goto LABEL_101;
      }
      sub_15D7BC0(*(_QWORD *)v120, v83);
      ++v37;
    }
    while ( (unsigned __int64)v37 < v82 );
LABEL_101:
    v37 = v121;
    if ( v121 )
      goto LABEL_102;
  }
LABEL_103:
  sub_1580D10(&v117);
  v124 = &off_1C529E0;
  if ( v134 )
    sub_186B220((void *)(v134 - 8));
  v84 = v132;
  if ( v132 )
  {
    v85 = v133;
    v25 = (*(_DWORD *)(v132 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v85, v84);
  }
  v86 = v130;
  if ( v130 )
  {
    v87 = v131;
    v25 = (*(_DWORD *)(v130 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v87, v86);
  }
  v88 = v128;
  if ( v128 )
  {
    v89 = v129;
    v25 = (*(_DWORD *)(v128 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v89, v88);
  }
  v127 = &qword_1C637E8;
  sub_15841B0(&v127);
  v126 = &qword_1C637E8;
  sub_15841B0(&v126);
  if ( v125 )
    sub_186B220((void *)(v125 - 8));
  result = sub_15841B0(&v124);
  v91 = *(_QWORD *)v118;
  if ( *(_QWORD *)v118 )
  {
    v92 = v119;
    v25 = (*(_DWORD *)(*(_QWORD *)v118 + 8LL))-- == 1;
    if ( v25 )
      return sub_15D7BC0(v92, v91);
  }
  return result;
}

