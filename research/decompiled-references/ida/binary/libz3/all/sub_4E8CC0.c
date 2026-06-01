_QWORD *__fastcall sub_4E8CC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int32 *a5, int *a6)
{
  char **v6; // r12
  char **v7; // r12
  char **v8; // r12
  char **exception; // rbx
  char **v10; // r12
  char **v11; // r12
  __int64 v14; // r14
  _QWORD *v16; // rax
  __int32 *v17; // r13
  _QWORD *v18; // rax
  _DWORD *v19; // rdx
  __int32 *v20; // r15
  _QWORD *v21; // rax
  int v22; // ecx
  int v23; // edi
  __int64 v24; // rdx
  unsigned int v25; // ecx
  unsigned int v27; // r8d
  size_t v28; // rsi
  unsigned int *v29; // rdx
  __int64 v30; // rdx
  _DWORD *v31; // rax
  int *v32; // r15
  int *v33; // r8
  _DWORD *v34; // rdx
  int v35; // esi
  int v36; // r9d
  __int64 v37; // rax
  unsigned int v38; // edi
  unsigned int v39; // r13d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rax
  _QWORD *v43; // r15
  __int64 v44; // r13
  __int64 v45; // r13
  _QWORD *v46; // rax
  _QWORD *v47; // rsi
  __int64 v48; // rcx
  _QWORD *v49; // rdx
  unsigned int v50; // eax
  __int64 v51; // rsi
  unsigned int v52; // r9d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rsi
  _QWORD *v56; // r13
  __int64 v57; // rcx
  __int64 v58; // r15
  __int64 i; // rbx
  __int64 v60; // rsi
  int v61; // eax
  _QWORD *v62; // rsi
  unsigned int v63; // eax
  unsigned int v64; // r8d
  size_t v65; // rsi
  unsigned int *v66; // rax
  __int64 v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rdi
  _QWORD *v71; // rax
  __int8 v72; // dl
  const __m128i *v73; // rbx
  __int32 *v74; // r13
  __m128i *v75; // rax
  __int32 v76; // eax
  __int64 v77; // rax
  __int32 v78; // eax
  __int64 v79; // rax
  unsigned int v80; // r14d
  size_t v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // r8
  _DWORD *v85; // rsi
  __m128i *v86; // rdx
  const __m128i *v87; // rax
  const __m128i *v88; // rcx
  bool v89; // zf
  __int64 v90; // r12
  __int64 v91; // r15
  const __m128i *v92; // r12
  const __m128i *v93; // rdi
  __int64 v94; // rax
  unsigned int v95; // r14d
  size_t v96; // rdi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r15
  _DWORD *v100; // rsi
  __m128i *v101; // rdx
  const __m128i *v102; // rax
  const __m128i *v103; // rcx
  __int64 v104; // r12
  const __m128i *v105; // r12
  const __m128i *v106; // rdi
  __m128i v107; // xmm0
  __int32 v108; // eax
  __int32 v109; // ecx
  __int64 v110; // rax
  __int64 v111; // rax
  const __m128i *v112; // r12
  const __m128i *v113; // rax
  const __m128i *v114; // r14
  __int64 v115; // rax
  _QWORD *v116; // rax
  int v117; // [rsp+Ch] [rbp-C4h]
  int v118; // [rsp+10h] [rbp-C0h]
  __int64 *v119; // [rsp+18h] [rbp-B8h]
  __int64 *v120; // [rsp+20h] [rbp-B0h]
  const __m128i *v121; // [rsp+28h] [rbp-A8h]
  const __m128i *v122; // [rsp+28h] [rbp-A8h]
  const __m128i *v125; // [rsp+38h] [rbp-98h]
  __int32 *v126; // [rsp+40h] [rbp-90h]
  __int32 *v127; // [rsp+40h] [rbp-90h]
  __int64 v128; // [rsp+48h] [rbp-88h]
  unsigned int v129; // [rsp+48h] [rbp-88h]
  _QWORD *v130; // [rsp+50h] [rbp-80h]
  unsigned int v131; // [rsp+58h] [rbp-78h]
  int *v132; // [rsp+58h] [rbp-78h]
  __int64 v133; // [rsp+58h] [rbp-78h]
  unsigned int v134; // [rsp+58h] [rbp-78h]
  __int32 *v135; // [rsp+58h] [rbp-78h]
  __m128i v136; // [rsp+70h] [rbp-60h] BYREF
  __int64 v137[10]; // [rsp+80h] [rbp-50h] BYREF

  v126 = a5;
  if ( a1 != *(_QWORD *)(a2 + 8) || a1 != *(_QWORD *)(a3 + 8) )
    return nullptr;
  v14 = a4;
  v16 = (_QWORD *)sub_186B270(0x48u);
  v120 = (__int64 *)(a3 + 16);
  v119 = (__int64 *)(a2 + 16);
  *v16 = qword_1C666F0;
  v16[1] = 0;
  v130 = v16;
  v16[2] = 0;
  if ( (_DWORD)v14 )
  {
    v17 = a5;
    v18 = (_QWORD *)sub_186B270(0x10u);
    v126 = a5;
    v19 = v18 + 1;
    v128 = (unsigned int)v14;
    v20 = &a5[v128];
    *v18 = 2;
    v130[2] = v18 + 1;
    v21 = v18 + 1;
    while ( 1 )
    {
      v22 = *v17++;
      *v19 = v22;
      v23 = *((_DWORD *)v21 - 1);
      v24 = (unsigned int)(v23 + 1);
      *((_DWORD *)v21 - 1) = v24;
      if ( v20 == v17 )
        break;
      v25 = *((_DWORD *)v21 - 2);
      if ( v25 == (_DWORD)v24 )
      {
        v27 = (3 * v25 + 1) >> 1;
        v28 = 4 * v27 + 8;
        if ( 4 * v23 + 12 >= (unsigned int)v28 || v25 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v131 = (3 * v25 + 1) >> 1;
        v29 = (unsigned int *)sub_186B300(v21 - 1, v28);
        v21 = v29 + 2;
        *v29 = v131;
        v30 = v29[1];
        v130[2] = v21;
        v19 = (_DWORD *)v21 + v30;
      }
      else
      {
        v19 = (_DWORD *)v21 + v24;
      }
    }
    v130[3] = 0;
    v31 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v32 = a6;
    v33 = &a6[v128];
    *((_QWORD *)v31 - 1) = 2;
    v34 = v31;
    v130[3] = v31;
    while ( 1 )
    {
      v35 = *v32++;
      *v31 = v35;
      v36 = *(v34 - 1);
      v37 = (unsigned int)(v36 + 1);
      *(v34 - 1) = v37;
      if ( v33 == v32 )
        break;
      v38 = *(v34 - 2);
      if ( v38 == (_DWORD)v37 )
      {
        v39 = (3 * v38 + 1) >> 1;
        v40 = 4 * v39 + 8;
        if ( 4 * v36 + 12 >= (unsigned int)v40 || v38 >= v39 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v132 = v33;
        v41 = (unsigned int *)sub_186B300(v34 - 2, v40);
        v34 = v41 + 2;
        v33 = v132;
        *v41 = v39;
        v42 = v41[1];
        v130[3] = v34;
        v31 = &v34[v42];
      }
      else
      {
        v31 = &v34[v37];
      }
    }
  }
  else
  {
    v16[3] = 0;
  }
  v43 = *(_QWORD **)(a2 + 16);
  if ( v43 && (v44 = *((unsigned int *)v43 - 1), (_DWORD)v44) )
  {
    v45 = 8 * v44;
    v46 = (_QWORD *)sub_186B270(0x18u);
    v47 = v46 + 1;
    *v46 = 2;
    v48 = 0;
    v49 = v46 + 1;
    v130[1] = v46 + 1;
    v50 = 1;
    while ( 1 )
    {
      v48 += 8;
      *v47 = *v43;
      *((_DWORD *)v49 - 1) = v50;
      if ( v45 == v48 )
        break;
      v43 = (_QWORD *)(v48 + *(_QWORD *)(a2 + 16));
      if ( *((_DWORD *)v49 - 2) == v50 )
      {
        v52 = (3 * v50 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v50 + 8 >= (unsigned int)v53 || v50 >= v52 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v129 = (3 * v50 + 1) >> 1;
        v133 = v48;
        v54 = (unsigned int *)sub_186B300(v49 - 1, v53);
        v55 = v54[1];
        v49 = v54 + 2;
        *v54 = v129;
        LODWORD(v54) = v55;
        v47 = &v49[v55];
        v130[1] = v49;
        v50 = (_DWORD)v54 + 1;
        v48 = v133;
      }
      else
      {
        v51 = v50++;
        v47 = &v49[v51];
      }
    }
    v56 = *(_QWORD **)(a3 + 16);
    if ( v56 )
    {
      v57 = *((unsigned int *)v56 - 1);
      if ( (_DWORD)v57 )
      {
        v58 = 8 * v57;
        for ( i = 0; ; v56 = (_QWORD *)(i + *(_QWORD *)(a3 + 16)) )
        {
          v63 = *((_DWORD *)v49 - 1);
          if ( v63 == *((_DWORD *)v49 - 2) )
          {
            v64 = (3 * v63 + 1) >> 1;
            v65 = 8 * v64 + 8;
            if ( 8 * v63 + 8 >= (unsigned int)v65 || v63 >= v64 )
            {
              v11 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v137, "Overflow encountered when expanding vector");
              *v11 = (char *)off_1C63128;
              sub_2333C0(v11 + 1, v137);
              sub_233E40((__int64)v137);
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134 = (3 * v63 + 1) >> 1;
            v66 = (unsigned int *)sub_186B300(v49 - 1, v65);
            v49 = v66 + 2;
            v130[1] = v66 + 2;
            v67 = v66[1];
            *v66 = v134;
            LODWORD(v66) = v67;
            v62 = &v49[v67];
            v61 = (_DWORD)v66 + 1;
          }
          else
          {
            v60 = v63;
            v61 = v63 + 1;
            v62 = &v49[v60];
          }
LABEL_34:
          i += 8;
          *v62 = *v56;
          *((_DWORD *)v49 - 1) = v61;
          if ( i == v58 )
            break;
        }
      }
    }
  }
  else
  {
    v56 = *(_QWORD **)(a3 + 16);
    if ( v56 )
    {
      v115 = *((unsigned int *)v56 - 1);
      if ( (_DWORD)v115 )
      {
        v58 = 8 * v115;
        v116 = (_QWORD *)sub_186B270(0x18u);
        v49 = v116 + 1;
        *v116 = 2;
        i = 0;
        v62 = v116 + 1;
        v130[1] = v116 + 1;
        v61 = 1;
        goto LABEL_34;
      }
    }
  }
  *v130 = &off_1C4FB20;
  v68 = *(_QWORD *)(a1 + 24);
  v130[4] = a1;
  v69 = sub_4D6490(v68);
  v130[5] = 0;
  v70 = *(_QWORD *)(a1 + 24);
  v130[6] = v69;
  v118 = sub_4D6490(v70);
  v117 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 16LL))(*(_QWORD *)(a1 + 40));
  if ( (_DWORD)v14 )
  {
    v136.m128i_i8[8] = 0;
    v136.m128i_i32[0] = *v126;
    v71 = (_QWORD *)sub_186B270(0x28u);
    v135 = v126;
    v72 = 0;
    v127 = &v126[v14];
    v73 = (const __m128i *)(v71 + 1);
    v74 = a6;
    *v71 = 2;
    v75 = (__m128i *)(v71 + 1);
LABEL_42:
    *v75 = _mm_load_si128(&v136);
    if ( v72 )
    {
      v136.m128i_i32[0] = 0;
      v136.m128i_i8[8] = 0;
      goto LABEL_44;
    }
    while ( 1 )
    {
      v136.m128i_i32[0] = 0;
LABEL_44:
      ++v73[-1].m128i_i32[3];
      sub_15D0DF0(&v136);
      v76 = *v74;
      v136.m128i_i8[8] = 0;
      v136.m128i_i32[0] = v76;
      v77 = v73[-1].m128i_u32[3];
      if ( (_DWORD)v77 != v73[-1].m128i_i32[2] )
        break;
      v95 = (unsigned int)(3 * v77 + 1) >> 1;
      v96 = 16 * v95 + 8;
      if ( 16 * (int)v77 + 8 >= (unsigned int)v96 || (unsigned int)v77 >= v95 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v137, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, v137);
        sub_233E40((__int64)v137);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v97 = sub_186B270(v96);
      v98 = v73[-1].m128i_u32[3];
      v99 = v97 + 8;
      v100 = (_DWORD *)v97;
      v101 = (__m128i *)(v97 + 8);
      *(_DWORD *)(v97 + 4) = v98;
      v102 = v73;
      v103 = &v73[v98];
      if ( v73 != v103 )
      {
        do
        {
          v89 = v102->m128i_i8[8] == 0;
          *v101 = _mm_loadu_si128(v102);
          v102->m128i_i32[0] = 0;
          if ( !v89 )
            v102->m128i_i8[8] = 0;
          ++v102;
          ++v101;
        }
        while ( v102 != v103 );
      }
      v104 = v73[-1].m128i_u32[3];
      if ( (_DWORD)v104 )
      {
        v122 = v73;
        v105 = &v73[v104];
        do
        {
          v106 = v73++;
          sub_15D0DF0(v106);
        }
        while ( v73 != v105 );
        v73 = v122;
      }
      sub_186B220(&v73[-1].m128i_u64[1]);
      v107 = _mm_load_si128(&v136);
      *v100 = v95;
      v89 = v136.m128i_i8[8] == 0;
      *(__m128i *)(v99 + 16LL * (unsigned int)v100[1]) = v107;
      if ( v89 )
      {
        v73 = (const __m128i *)v99;
        goto LABEL_46;
      }
      ++v100[1];
      ++v74;
      v136.m128i_i32[0] = 0;
      v136.m128i_i8[8] = 0;
      sub_15D0DF0(&v136);
      if ( v127 == ++v135 )
      {
        v73 = (const __m128i *)v99;
        goto LABEL_76;
      }
      v108 = *v135;
      v136.m128i_i8[8] = 0;
      v73 = (const __m128i *)v99;
      v136.m128i_i32[0] = v108;
LABEL_48:
      v79 = v73[-1].m128i_u32[3];
      if ( (_DWORD)v79 == v73[-1].m128i_i32[2] )
      {
        v80 = (unsigned int)(3 * v79 + 1) >> 1;
        v81 = 16 * v80 + 8;
        if ( 16 * (int)v79 + 8 >= (unsigned int)v81 || (unsigned int)v79 >= v80 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v137, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v82 = sub_186B270(v81);
        v83 = v73[-1].m128i_u32[3];
        v84 = v82 + 8;
        v85 = (_DWORD *)v82;
        v86 = (__m128i *)(v82 + 8);
        *(_DWORD *)(v82 + 4) = v83;
        v87 = v73;
        v88 = &v73[v83];
        if ( v88 != v73 )
        {
          do
          {
            v89 = v87->m128i_i8[8] == 0;
            *v86 = _mm_loadu_si128(v87);
            v87->m128i_i32[0] = 0;
            if ( !v89 )
              v87->m128i_i8[8] = 0;
            ++v87;
            ++v86;
          }
          while ( v87 != v88 );
        }
        v90 = v73[-1].m128i_u32[3];
        if ( (_DWORD)v90 )
        {
          v125 = v73;
          v91 = v84;
          v92 = &v73[v90];
          do
          {
            v93 = v73++;
            sub_15D0DF0(v93);
          }
          while ( v73 != v92 );
          v73 = v125;
          v84 = v91;
        }
        v121 = (const __m128i *)v84;
        sub_186B220(&v73[-1].m128i_u64[1]);
        v72 = v136.m128i_i8[8];
        v94 = (unsigned int)v85[1];
        *v85 = v80;
        v73 = v121;
        v75 = (__m128i *)&v121[v94];
        goto LABEL_42;
      }
      v73[v79] = _mm_load_si128(&v136);
    }
    v73[v77] = _mm_load_si128(&v136);
LABEL_46:
    ++v73[-1].m128i_i32[3];
    ++v74;
    v136.m128i_i32[0] = 0;
    sub_15D0DF0(&v136);
    if ( v127 == ++v135 )
      goto LABEL_76;
    v78 = *v135;
    v136.m128i_i8[8] = 0;
    v136.m128i_i32[0] = v78;
    goto LABEL_48;
  }
  v73 = nullptr;
LABEL_76:
  v137[0] = sub_4E8870(a1, v119);
  v137[1] = sub_4E8870(a1, v120);
  if ( v73 )
    v109 = v73[-1].m128i_i32[3];
  else
    v109 = 0;
  v110 = sub_15D2D10(v118, v117, 3, v109, (_DWORD)v73, 2, (__int64)v137, 0);
  if ( v110 )
    ++*(_DWORD *)(v110 + 8);
  v130[5] = v110;
  if ( v73 )
  {
    v111 = v73[-1].m128i_u32[3];
    if ( (_DWORD)v111 )
    {
      v112 = &v73[v111];
      v113 = v73;
      do
      {
        v114 = v113;
        sub_15D0DF0(v113);
        v113 = v114 + 1;
      }
      while ( &v114[1] != v112 );
    }
    sub_186B220(&v73[-1].m128i_u64[1]);
  }
  return v130;
}

