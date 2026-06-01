__int64 __fastcall sub_D230C0(const __m128i *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _QWORD *v11; // rdi
  int v12; // ecx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int32 v16; // r12d
  size_t v17; // rbp
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  _OWORD *v20; // rdx
  _QWORD *v21; // rbp
  _QWORD *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  unsigned int **v26; // rbp
  unsigned int **v27; // r14
  unsigned int *v28; // r12
  _QWORD *v29; // rcx
  unsigned int v30; // eax
  _DWORD *v31; // rdx
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rax
  __int64 v35; // r12
  unsigned int v36; // edi
  _DWORD *v37; // r8
  unsigned int v38; // eax
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  _QWORD *v41; // rbp
  _QWORD *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rbp
  _QWORD *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  __m128i *v50; // rbp
  __m128i v51; // xmm0
  void (__fastcall ***v52)(void *); // r12
  __int64 v53; // r14
  __int64 v54; // rdx
  char v55; // al
  __int64 v56; // rax
  __int64 *v57; // rcx
  __int64 v58; // rbp
  unsigned int v59; // r12d
  __int64 v60; // rsi
  char v61; // dl
  unsigned int v62; // edx
  int v63; // edx
  char v64; // di
  __int64 v65; // rax
  int v66; // edx
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rax
  int v71; // esi
  __int64 *v72; // rax
  __int64 v73; // rax
  __int64 v74; // r12
  __int64 v75; // r12
  __int64 v76; // r14
  __int64 v77; // rsi
  char v78; // al
  int v79; // edx
  _QWORD *v80; // rcx
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // r12
  unsigned int v84; // edx
  unsigned int v85; // ebx
  _QWORD *v86; // rbp
  _Unwind_Exception *v87; // rdi
  __int64 v88; // rax
  _Unwind_Exception *v89; // rcx
  _Unwind_Exception *j; // rax
  _Unwind_Exception_Class exception_class; // rdx
  __int64 v93; // rbp
  char *v94; // rax
  _Unwind_Exception *v95; // rdi
  unsigned __int64 v96; // rax
  __int64 v97; // r10
  _DWORD *v98; // rbp
  __int64 v99; // rsi
  __int64 v100; // rdi
  unsigned int v101; // r8d
  size_t v102; // rsi
  _DWORD *v103; // rax
  __int64 v104; // rdi
  __int64 v105; // rbx
  __int64 v106; // rax
  _QWORD *v107; // rdi
  __int64 v108; // rax
  unsigned __int64 v109; // rax
  __int64 v110; // r11
  __int64 v111; // r12
  __int64 v112; // rax
  __int64 v113; // rbp
  void (__fastcall ***v114)(void *); // r15
  _QWORD *v115; // rsi
  __int64 v116; // rax
  int v117; // edi
  _QWORD *v118; // rax
  _DWORD *v119; // rdx
  int v120; // eax
  unsigned int v121; // esi
  __int64 v122; // rax
  __int64 i; // rax
  unsigned int v124; // r10d
  unsigned int v125; // eax
  unsigned int *v126; // rax
  unsigned int v127; // r8d
  unsigned int *v128; // rax
  __int64 v129; // rax
  _QWORD *v130; // rax
  char **exception; // rbp
  __int64 v132; // rdx
  char **v133; // rbp
  __int64 v134; // rdx
  _QWORD *v135; // [rsp+0h] [rbp-F8h]
  _Unwind_Exception *v136; // [rsp+0h] [rbp-F8h]
  _QWORD *v137; // [rsp+0h] [rbp-F8h]
  _QWORD *v138; // [rsp+0h] [rbp-F8h]
  _QWORD *v139; // [rsp+0h] [rbp-F8h]
  __int64 v140; // [rsp+0h] [rbp-F8h]
  unsigned int v141; // [rsp+0h] [rbp-F8h]
  _QWORD *v142; // [rsp+0h] [rbp-F8h]
  _QWORD *v143; // [rsp+8h] [rbp-F0h]
  char *v144; // [rsp+10h] [rbp-E8h]
  __int64 v145; // [rsp+18h] [rbp-E0h]
  __int64 v146; // [rsp+20h] [rbp-D8h]
  char v147[8]; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v149; // [rsp+38h] [rbp-C0h]
  _BYTE v150[184]; // [rsp+40h] [rbp-B8h] BYREF

  v144 = v147;
  sub_EE4940(v147, "tseitin-cnf", *a2);
  sub_EE4F60("tseitin-cnf");
  v6 = *a2;
  a1[23].m128i_i8[8] = (*(_BYTE *)(*a2 + 123LL) & 4) != 0;
  a1[23].m128i_i8[9] = (*(_BYTE *)(v6 + 123) & 0x10) != 0;
  sub_EE0DD0((_DWORD)a1 + 56, v6, v7, v8, v9, v10);
  if ( !a1[1].m128i_i32[3] && !a1[2].m128i_i32[0] )
    goto LABEL_17;
  v11 = (_QWORD *)a1[1].m128i_i64[0];
  v12 = 0;
  v13 = a1[1].m128i_u32[2];
  v14 = v11;
  v15 = &v11[2 * v13];
  if ( v11 != v15 )
  {
    do
    {
      while ( *v14 )
      {
        *v14 = 0;
        v14 += 2;
        if ( v15 == v14 )
          goto LABEL_8;
      }
      v14 += 2;
      ++v12;
    }
    while ( v15 != v14 );
LABEL_8:
    if ( (unsigned int)v13 > 0x10 && 3 * (int)v13 < (unsigned int)(4 * v12) )
    {
      if ( v11 )
      {
        sub_186B220(v11);
        v16 = a1[1].m128i_u32[2];
        a1[1].m128i_i64[0] = 0;
        v16 >>= 1;
        a1[1].m128i_i32[2] = v16;
        v17 = 16LL * v16;
        v18 = (_OWORD *)sub_186B270(v17);
        if ( !v16 )
        {
LABEL_15:
          a1[1].m128i_i64[0] = (__int64)v18;
          goto LABEL_16;
        }
      }
      else
      {
        v121 = (unsigned int)v13 >> 1;
        a1[1].m128i_i64[0] = 0;
        a1[1].m128i_i32[2] = v121;
        v17 = 16LL * v121;
        v18 = (_OWORD *)sub_186B270(v17);
      }
      v19 = &v18[v17 / 0x10];
      v20 = v18;
      if ( (v17 & 0x10) == 0 || (v20 = v18 + 1, *v18 = 0, v18 + 1 != v19) )
      {
        do
        {
          *v20 = 0;
          v20 += 2;
          *(v20 - 1) = 0;
        }
        while ( v20 != v19 );
      }
      goto LABEL_15;
    }
  }
LABEL_16:
  *(__int64 *)((char *)&a1[1].m128i_i64[1] + 4) = 0;
LABEL_17:
  v21 = (_QWORD *)a1[3].m128i_i64[0];
  if ( v21 )
  {
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 >= v22 )
      goto LABEL_25;
    do
    {
      while ( 1 )
      {
        v23 = *v21;
        if ( *v21 )
        {
          v24 = a1[2].m128i_i64[1];
          v25 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v21 >= v22 )
          goto LABEL_24;
      }
      sub_15D7BC0(v24, v23);
      ++v21;
    }
    while ( v21 < v22 );
LABEL_24:
    v21 = (_QWORD *)a1[3].m128i_i64[0];
    if ( v21 )
LABEL_25:
      *((_DWORD *)v21 - 1) = 0;
  }
  v26 = (unsigned int **)a1[9].m128i_i64[0];
  if ( v26 )
  {
    v27 = &v26[*((unsigned int *)v26 - 1)];
    if ( v26 >= v27 )
      goto LABEL_43;
    do
    {
      v28 = *v26;
      if ( *v26 )
      {
        v29 = (_QWORD *)a1[8].m128i_i64[1];
        v30 = (*v28 + 0x3FFFFFFF) & 0x3FFFFFFF | *v28 & 0xC0000000;
        *v28 = v30;
        if ( (v30 & 0x3FFFFFFF) == 0 )
        {
          v31 = (_DWORD *)v29[83];
          if ( v31 )
          {
            v32 = (unsigned int)*(v31 - 1);
            if ( (_DWORD)v32 == *(v31 - 2) )
            {
              v101 = (unsigned int)(3 * v32 + 1) >> 1;
              v102 = 8 * v101 + 8;
              if ( 8 * (int)v32 + 8 >= (unsigned int)v102 || (unsigned int)v32 >= v101 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_166874((__int64 *)&ptr, "Overflow encountered when expanding vector", v132);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &ptr);
                sub_233E40((__int64)&ptr);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              LODWORD(v143) = (unsigned int)(3 * v32 + 1) >> 1;
              v138 = v29;
              v103 = (_DWORD *)sub_186B300(v31 - 2, v102);
              v104 = (unsigned int)v103[1];
              v29 = v138;
              v31 = v103 + 2;
              v33 = v104 + 1;
              v138[83] = v103 + 2;
              *v103 = (_DWORD)v143;
              *(_QWORD *)&v103[2 * v104 + 2] = v28;
              v103[1] = v104 + 1;
            }
            else
            {
              v33 = v32 + 1;
              *(_QWORD *)&v31[2 * v32] = v28;
              *(v31 - 1) = v32 + 1;
            }
          }
          else
          {
            v139 = v29;
            v122 = sub_186B270(0x18u);
            v29 = v139;
            v31 = (_DWORD *)(v122 + 8);
            v33 = 1;
            *(_QWORD *)v122 = 2;
            v139[83] = v122 + 8;
            *(_QWORD *)(v122 + 8) = v28;
            *(_DWORD *)(v122 + 4) = 1;
          }
          while ( v33 )
          {
            v34 = (unsigned int)(v33 - 1);
            v35 = *(_QWORD *)&v31[2 * v34];
            v36 = v33 - 1;
            *(v31 - 1) = v34;
            if ( *(char *)(v35 + 3) < 0 )
            {
              v99 = *(_QWORD *)(v35 + 8);
              if ( v99 )
              {
                v100 = v29[81];
                v25 = (*(_DWORD *)(v99 + 8))-- == 1;
                if ( v25 )
                {
                  v137 = v29;
                  sub_15D7BC0(v100, v99);
                  v29 = v137;
                }
              }
              v135 = v29;
              sub_17E9C40(v29[82], 16, v35);
            }
            else
            {
              v37 = *(_DWORD **)(v35 + 8);
              v38 = (*v37 + 0x3FFFFFFF) & 0x3FFFFFFF | *v37 & 0xC0000000;
              *v37 = v38;
              if ( (v38 & 0x3FFFFFFF) == 0 )
              {
                if ( v36 == *(v31 - 2) )
                {
                  v145 = (__int64)v37;
                  v124 = (3 * v36 + 1) >> 1;
                  v143 = v29;
                  v125 = 8 * v124 + 8;
                  if ( 8 * v33 >= v125 || v36 >= v124 )
                  {
LABEL_207:
                    v133 = (char **)__cxa_allocate_exception(0x28u);
                    sub_166874((__int64 *)&ptr, "Overflow encountered when expanding vector", v134);
                    *v133 = (char *)off_1C63128;
                    sub_2333C0(v133 + 1, &ptr);
                    sub_233E40((__int64)&ptr);
                    __cxa_throw(
                      v133,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v126 = (unsigned int *)sub_186B300(v31 - 2, v125);
                  v29 = v143;
                  v119 = v126 + 2;
                  v37 = (_DWORD *)v145;
                  v143[83] = v126 + 2;
                  *v126 = (3 * v36 + 1) >> 1;
                }
                else
                {
                  v119 = (_DWORD *)v29[83];
                }
                v120 = *(v119 - 1);
                *(_QWORD *)&v119[2 * v120] = v37;
                *(v119 - 1) = v120 + 1;
              }
              v39 = *(_DWORD **)(v35 + 16);
              v40 = (*v39 + 0x3FFFFFFF) & 0x3FFFFFFF | *v39 & 0xC0000000;
              *v39 = v40;
              if ( (v40 & 0x3FFFFFFF) == 0 )
              {
                v115 = (_QWORD *)v29[83];
                if ( v115 )
                {
                  v116 = *((unsigned int *)v115 - 1);
                  if ( (_DWORD)v116 == *((_DWORD *)v115 - 2) )
                  {
                    v145 = (__int64)v39;
                    v127 = (unsigned int)(3 * v116 + 1) >> 1;
                    v143 = v29;
                    if ( 8 * (int)v116 + 8 >= 8 * v127 + 8 )
                      goto LABEL_207;
                    v141 = (unsigned int)(3 * v116 + 1) >> 1;
                    if ( (unsigned int)v116 >= v127 )
                      goto LABEL_207;
                    v128 = (unsigned int *)sub_186B300(v115 - 1, 8 * v127 + 8);
                    v29 = v143;
                    v115 = v128 + 2;
                    v39 = (_DWORD *)v145;
                    v143[83] = v128 + 2;
                    *v128 = v141;
                    v129 = v128[1];
                    v117 = v129 + 1;
                    v118 = &v115[v129];
                  }
                  else
                  {
                    v117 = v116 + 1;
                    v118 = &v115[v116];
                  }
                }
                else
                {
                  v143 = v39;
                  v142 = v29;
                  v130 = (_QWORD *)sub_186B270(0x18u);
                  v29 = v142;
                  v39 = v143;
                  *v130 = 2;
                  v115 = v130 + 1;
                  v117 = 1;
                  v142[83] = v130 + 1;
                  v118 = v130 + 1;
                }
                *v118 = v39;
                *((_DWORD *)v115 - 1) = v117;
              }
              v135 = v29;
              sub_17E9C40(v29[82], 24, v35);
            }
            v29 = v135;
            v31 = (_DWORD *)v135[83];
            if ( !v31 )
              break;
            v33 = *(v31 - 1);
          }
        }
      }
      ++v26;
    }
    while ( v26 < v27 );
    v26 = (unsigned int **)a1[9].m128i_i64[0];
    if ( v26 )
LABEL_43:
      *((_DWORD *)v26 - 1) = 0;
  }
  v41 = (_QWORD *)a1[6].m128i_i64[1];
  if ( v41 )
  {
    v42 = &v41[*((unsigned int *)v41 - 1)];
    if ( v41 >= v42 )
      goto LABEL_52;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = a1[6].m128i_i64[0];
          v25 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v41 >= v42 )
          goto LABEL_51;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v42 );
LABEL_51:
    v41 = (_QWORD *)a1[6].m128i_i64[1];
    if ( v41 )
LABEL_52:
      *((_DWORD *)v41 - 1) = 0;
  }
  v45 = a1->m128i_i64[1];
  if ( v45 )
    *(_DWORD *)(v45 - 4) = 0;
  v46 = (_QWORD *)a1[8].m128i_i64[0];
  if ( v46 )
  {
    v47 = &v46[*((unsigned int *)v46 - 1)];
    if ( v46 >= v47 )
      goto LABEL_63;
    do
    {
      while ( 1 )
      {
        v48 = *v46;
        if ( *v46 )
        {
          v49 = a1[7].m128i_i64[1];
          v25 = (*(_DWORD *)(v48 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v46 >= v47 )
          goto LABEL_62;
      }
      sub_15D7BC0(v49, v48);
      ++v46;
    }
    while ( v46 < v47 );
LABEL_62:
    v46 = (_QWORD *)a1[8].m128i_i64[0];
    if ( v46 )
LABEL_63:
      *((_DWORD *)v46 - 1) = 0;
  }
  if ( a1[23].m128i_i8[8] )
  {
    v50 = (__m128i *)sub_186B270(0x50u);
    v51 = _mm_loadl_epi64(a1);
    v52 = (void (__fastcall ***)(void *))a1[7].m128i_i64[0];
    v50[1].m128i_i8[8] = 1;
    v50[1].m128i_i64[0] = 0;
    strcpy(&v50[3].m128i_i8[8], "tseitin");
    v50->m128i_i64[0] = (__int64)&off_1C60CE8;
    v50[3].m128i_i64[0] = 7;
    v50[4].m128i_i64[1] = 0;
    v50->m128i_i32[2] = 1;
    v50[2] = _mm_unpacklo_epi64(v51, (__m128i)(unsigned __int64)&v50[3].m128i_u64[1]);
    if ( v52 )
    {
      v25 = (*((_DWORD *)v52 + 2))-- == 1;
      if ( v25 )
      {
        (**v52)(v52);
        sub_186B220(v52);
      }
    }
  }
  else
  {
    v98 = (_DWORD *)a1[7].m128i_i64[0];
    if ( v98 && (v25 = v98[2] == 1, --v98[2], v25) )
    {
      (**(void (__fastcall ***)(_DWORD *))v98)(v98);
      sub_186B220(v98);
      v50 = nullptr;
    }
    else
    {
      v50 = nullptr;
    }
  }
  v53 = *a2;
  a1[7].m128i_i64[0] = (__int64)v50;
  v54 = *(_QWORD *)(v53 + 72);
  if ( !v54 )
    goto LABEL_110;
  v55 = *(_BYTE *)(v54 + 3) >> 6;
  if ( v55 )
  {
    if ( v55 != 1 )
    {
LABEL_71:
      if ( v55 == 2 )
        LODWORD(v143) = *(_DWORD *)(v54 + 4) - 1;
      else
        LODWORD(v143) = *(_DWORD *)(v54 + 4);
      goto LABEL_73;
    }
  }
  else
  {
    do
    {
      v54 = *(_QWORD *)(v54 + 16);
      v55 = *(_BYTE *)(v54 + 3) >> 6;
    }
    while ( !v55 );
    if ( v55 != 1 )
      goto LABEL_71;
  }
  LODWORD(v143) = *(_DWORD *)(v54 + 4) + 1;
LABEL_73:
  if ( !(_DWORD)v143 )
    goto LABEL_110;
  v56 = *(_QWORD *)(v53 + 88);
  v57 = *(__int64 **)v53;
  v58 = 0;
  v59 = 0;
  if ( !v56 )
    goto LABEL_83;
  v60 = *(_QWORD *)(v53 + 88);
  v61 = *(_BYTE *)(v56 + 3) >> 6;
  if ( !v61 )
    goto LABEL_93;
LABEL_76:
  if ( v61 == 1 )
    goto LABEL_95;
LABEL_77:
  v62 = v61 == 2 ? *(_DWORD *)(v60 + 4) - 1 : *(_DWORD *)(v60 + 4);
  while ( 2 )
  {
    if ( v59 < v62 )
    {
      v63 = 17;
      do
      {
        if ( *(char *)(v56 + 3) >= 0 )
        {
          if ( v59 == *(_DWORD *)(v56 + 4) )
            goto LABEL_83;
        }
        else if ( *(_BYTE *)(v56 + 3) >> 6 != 2 )
        {
          goto LABEL_83;
        }
        v56 = *(_QWORD *)(v56 + 16);
        --v63;
      }
      while ( v63 );
      sub_233F80(v57 + 77, (_DWORD *)(v53 + 88));
      v64 = *(_BYTE *)(v53 + 123);
      v57 = *(__int64 **)v53;
      if ( (v64 & 0x10) == 0 )
      {
LABEL_99:
        v68 = 0;
        if ( (v64 & 0x20) != 0 )
          goto LABEL_89;
        goto LABEL_100;
      }
    }
    else
    {
LABEL_83:
      v64 = *(_BYTE *)(v53 + 123);
      if ( (v64 & 0x10) == 0 )
        goto LABEL_99;
    }
    v65 = *(_QWORD *)(v53 + 104);
    v66 = 17;
    while ( 1 )
    {
      if ( *(char *)(v65 + 3) < 0 )
      {
        if ( *(_BYTE *)(v65 + 3) >> 6 != 2 )
        {
          v67 = (__int64 *)(v58 + *(_QWORD *)(v65 + 16));
          goto LABEL_88;
        }
        goto LABEL_107;
      }
      if ( v59 == *(_DWORD *)(v65 + 4) )
        break;
LABEL_107:
      v65 = *(_QWORD *)(v65 + 16);
      if ( !--v66 )
      {
        sub_236900(v57 + 84, (__int64 *)(v53 + 104));
        v64 = *(_BYTE *)(v53 + 123);
        v67 = (__int64 *)(v58 + *(_QWORD *)(*(_QWORD *)(v53 + 104) + 16LL));
        v57 = *(__int64 **)v53;
        goto LABEL_88;
      }
    }
    v67 = (__int64 *)(v65 + 8);
LABEL_88:
    v68 = *v67;
    if ( (v64 & 0x20) != 0 )
    {
LABEL_89:
      v69 = v57[108];
      goto LABEL_90;
    }
LABEL_100:
    v70 = *(_QWORD *)(v53 + 72);
    v71 = 18;
    while ( 2 )
    {
      if ( !--v71 )
      {
        v140 = v68;
        sub_233F80(v57 + 77, (_DWORD *)(v53 + 72));
        v68 = v140;
        v72 = (__int64 *)(v58 + *(_QWORD *)(*(_QWORD *)(v53 + 72) + 16LL));
        goto LABEL_105;
      }
      if ( *(char *)(v70 + 3) < 0 )
      {
        if ( *(_BYTE *)(v70 + 3) >> 6 != 2 )
        {
          v72 = (__int64 *)(v58 + *(_QWORD *)(v70 + 16));
          goto LABEL_105;
        }
        goto LABEL_146;
      }
      if ( v59 != *(_DWORD *)(v70 + 4) )
      {
LABEL_146:
        v70 = *(_QWORD *)(v70 + 16);
        continue;
      }
      break;
    }
    v72 = (__int64 *)(v70 + 8);
LABEL_105:
    v69 = *v72;
LABEL_90:
    sub_D22980(a1, v69, v68);
    sub_EDBFA0(*a2);
    v58 += 8;
    if ( v59 + 1 != (_DWORD)v143 )
    {
      ++v59;
      v56 = *(_QWORD *)(v53 + 88);
      v57 = *(__int64 **)v53;
      if ( v56 )
      {
        v60 = *(_QWORD *)(v53 + 88);
        v61 = *(_BYTE *)(v56 + 3) >> 6;
        if ( !v61 )
        {
          do
          {
LABEL_93:
            v60 = *(_QWORD *)(v60 + 16);
            v61 = *(_BYTE *)(v60 + 3) >> 6;
          }
          while ( !v61 );
          if ( v61 == 1 )
          {
LABEL_95:
            v62 = *(_DWORD *)(v60 + 4) + 1;
            continue;
          }
          goto LABEL_77;
        }
        goto LABEL_76;
      }
      goto LABEL_83;
    }
    break;
  }
  v53 = *a2;
LABEL_110:
  sub_ED2DA0(v53);
  v73 = a1[8].m128i_i64[0];
  if ( v73 )
  {
    v74 = *(unsigned int *)(v73 - 4);
    v136 = (_Unwind_Exception *)v150;
    ptr = v150;
    v149 = 0x1000000000LL;
    if ( (_DWORD)v74 )
    {
      v75 = 8 * v74;
      v76 = 0;
      while ( 1 )
      {
        v77 = *(_QWORD *)(v73 + v76);
        v78 = *(_BYTE *)(v77 + 6);
        if ( (v78 & 1) != 0 )
          goto LABEL_114;
        *(_BYTE *)(v77 + 6) = v78 | 1;
        v79 = v149;
        if ( (unsigned int)v149 >= HIDWORD(v149) )
        {
          LODWORD(v143) = v77;
          v93 = (unsigned int)(2 * HIDWORD(v149));
          v94 = (char *)sub_186B270(8 * v93);
          v79 = v149;
          v95 = (_Unwind_Exception *)ptr;
          v80 = v94;
          if ( (_DWORD)v149 )
          {
            if ( (unsigned int)(v149 - 1) <= 2 || v94 == (char *)ptr + 8 )
            {
              v109 = 0;
              v110 = 8LL * (unsigned int)v149;
              do
              {
                v80[v109 / 8] = *(_Unwind_Exception_Class *)((char *)&v95->exception_class + v109);
                v109 += 8LL;
              }
              while ( v110 != v109 );
            }
            else
            {
              v96 = 0;
              v97 = 16LL * ((unsigned int)v149 >> 1);
              do
              {
                *(__m128i *)&v80[v96 / 8] = _mm_loadu_si128((const __m128i *)((char *)v95 + v96));
                v96 += 16LL;
              }
              while ( v96 != v97 );
              if ( (v79 & 1) != 0 )
                v80[v79 & 0xFFFFFFFE] = *(&v95->exception_class + (v79 & 0xFFFFFFFE));
            }
          }
          if ( v95 != v136 && v95 )
          {
            v145 = (__int64)v80;
            LODWORD(v143) = v77;
            sub_186B220(v95);
            v79 = v149;
            v80 = (_QWORD *)v145;
          }
          ptr = v80;
          HIDWORD(v149) = v93;
        }
        else
        {
          v80 = ptr;
        }
        v25 = a1[23].m128i_i8[9] == 0;
        v81 = *a2;
        v80[v79] = v77;
        LODWORD(v149) = v79 + 1;
        if ( !v25 )
          break;
        sub_EDBA20(v81, v77, 0, v136, (int)v143, (int)v144, v145, v146);
        v76 += 8;
        if ( v76 == v75 )
          goto LABEL_121;
LABEL_115:
        v73 = a1[8].m128i_i64[0];
      }
      sub_EDB570(v81, v77, 0, *(_QWORD *)(a1[9].m128i_i64[0] + v76));
LABEL_114:
      v76 += 8;
      if ( v76 == v75 )
        goto LABEL_121;
      goto LABEL_115;
    }
  }
  else
  {
    v136 = (_Unwind_Exception *)v150;
    ptr = v150;
    v149 = 0x1000000000LL;
  }
LABEL_121:
  if ( a1[23].m128i_i8[8] )
  {
    v82 = a1[6].m128i_i64[1];
    if ( v82 )
    {
      if ( *(_DWORD *)(v82 - 4) )
      {
        v111 = *a2;
        v112 = sub_1336AB0(*(_QWORD *)(*a2 + 8LL), a1[7].m128i_i64[0]);
        v113 = v112;
        if ( v112 )
          ++*(_DWORD *)(v112 + 8);
        v114 = *(void (__fastcall ****)(void *))(v111 + 8);
        if ( v114 )
        {
          v25 = (*((_DWORD *)v114 + 2))-- == 1;
          if ( v25 )
          {
            (**v114)(v114);
            sub_186B220(v114);
          }
        }
        *(_QWORD *)(v111 + 8) = v113;
      }
    }
  }
  *(_DWORD *)(*a2 + 120LL) = (*(_DWORD *)(*a2 + 120LL) + 1) & 0x3FFFFFF | *(_DWORD *)(*a2 + 120LL) & 0xFC000000;
  v83 = *a2;
  if ( *a2 )
    ++*(_DWORD *)(v83 + 32);
  v84 = *(_DWORD *)(a3 + 8);
  v85 = *(_DWORD *)(a3 + 12);
  if ( v84 >= v85 )
  {
    v105 = 2 * v85;
    v106 = sub_186B270(8 * v105);
    v84 = *(_DWORD *)(a3 + 8);
    v107 = *(_QWORD **)a3;
    v86 = (_QWORD *)v106;
    if ( v84 )
    {
      if ( v84 - 1 <= 2 || (_QWORD *)v106 == v107 + 1 )
      {
        for ( i = 0; i != v84; ++i )
          v86[i] = v107[i];
      }
      else
      {
        v108 = 0;
        do
        {
          *(__m128i *)&v86[v108] = _mm_loadu_si128((const __m128i *)&v107[v108]);
          v108 += 2;
        }
        while ( 2LL * (v84 >> 1) != v108 );
        if ( (v84 & 1) != 0 )
          v86[v84 & 0xFFFFFFFE] = v107[v84 & 0xFFFFFFFE];
      }
    }
    if ( v107 != (_QWORD *)(a3 + 16) && v107 )
    {
      sub_186B220(v107);
      v84 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v86;
    *(_DWORD *)(a3 + 12) = v105;
  }
  else
  {
    v86 = *(_QWORD **)a3;
  }
  v87 = (_Unwind_Exception *)ptr;
  v86[v84] = v83;
  v88 = (unsigned int)v149;
  *(_DWORD *)(a3 + 8) = v84 + 1;
  v89 = (_Unwind_Exception *)((char *)v87 + 8 * v88);
  for ( j = v87; v89 != j; *(_BYTE *)(exception_class + 6) &= ~1u )
  {
    exception_class = j->exception_class;
    j = (_Unwind_Exception *)((char *)j + 8);
  }
  LODWORD(v149) = 0;
  if ( v87 != v136 && v87 )
    sub_186B220(v87);
  return sub_EE4A00(v144);
}

