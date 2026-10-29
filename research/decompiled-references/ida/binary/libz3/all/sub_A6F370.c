__int64 __fastcall sub_A6F370(
        int a1,
        unsigned __int8 *a2,
        _QWORD ***a3,
        __int64 a4,
        __int64 *a5,
        char **a6,
        __m128i **a7)
{
  char **v7; // rbx
  char **exception; // r12
  unsigned int v9; // r13d
  unsigned int v12; // r15d
  _QWORD *v13; // r11
  __int64 v14; // rbp
  size_t v16; // rdx
  char **v17; // r14
  __int64 *v18; // rcx
  int v19; // esi
  unsigned int v20; // eax
  size_t v21; // r8
  __int64 v22; // rdx
  __int64 *v23; // r11
  __int64 v24; // rax
  __int64 *v25; // r9
  __int64 *j; // rax
  _QWORD **v27; // r13
  _QWORD **v28; // r14
  __int64 *v29; // r12
  __int64 v30; // rbx
  _QWORD *v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rcx
  int v34; // edi
  unsigned int v35; // edx
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  _QWORD *v38; // r10
  _QWORD *v39; // rax
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rax
  _QWORD **v43; // rcx
  __int64 v44; // r8
  int v45; // edx
  _QWORD **v46; // rsi
  _QWORD **i; // rdx
  _QWORD **v48; // r9
  _QWORD *v49; // rax
  __int64 v50; // rdi
  __m128i *v51; // r14
  __m128i *v52; // r15
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r10
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  int v59; // esi
  __int64 v60; // rcx
  __int64 v61; // r9
  __int64 v62; // rax
  int v63; // ecx
  __m128i *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __m128i *v68; // rcx
  int v70; // eax
  __int64 v71; // rax
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  int v74; // esi
  unsigned int v75; // ecx
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rcx
  __int64 v79; // r9
  int v80; // ecx
  int v81; // eax
  unsigned int v82; // r13d
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rdx
  int v87; // r10d
  unsigned int v88; // r12d
  char *v89; // rbx
  size_t v90; // r13
  unsigned int v91; // r9d
  __int64 v92; // rcx
  int v93; // edi
  __int64 v94; // r9
  char *v95; // r8
  char *v96; // rax
  char *v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // rax
  _DWORD **v100; // r9
  __int64 v101; // rcx
  __int64 v102; // rdx
  unsigned int v103; // eax
  unsigned int v104; // eax
  int v105; // edi
  unsigned int v106; // eax
  __int64 v107; // rsi
  __int64 v108; // rax
  __int64 v109; // r10
  __int64 k; // rax
  int v111; // ecx
  __m128i *v112; // rax
  unsigned int v113; // edx
  __int64 v114; // rcx
  int v115; // edx
  __m128i *v116; // rcx
  int v117; // eax
  unsigned int v118; // r15d
  unsigned int v119; // ecx
  __int64 v120; // rax
  _DWORD *v121; // rdx
  __int64 v122; // rcx
  char *v123; // rax
  char *v124; // r10
  char *v125; // r13
  char *v126; // rbx
  __int64 v127; // rax
  char *v128; // rdx
  char *v129; // rax
  _QWORD *v130; // rax
  unsigned __int8 v131; // [rsp+0h] [rbp-198h]
  _DWORD **v132; // [rsp+0h] [rbp-198h]
  _DWORD **v133; // [rsp+0h] [rbp-198h]
  char **v134; // [rsp+8h] [rbp-190h]
  __int64 v135; // [rsp+8h] [rbp-190h]
  __int64 v136[4]; // [rsp+30h] [rbp-168h] BYREF
  void *v137; // [rsp+50h] [rbp-148h] BYREF
  __int64 v138; // [rsp+58h] [rbp-140h]
  _BYTE v139[312]; // [rsp+60h] [rbp-138h] BYREF

  v12 = *a2;
  v13 = *((_QWORD **)a2 + 1);
  if ( !(_BYTE)v12 )
  {
    v42 = *(unsigned int *)(a4 + 8);
    v43 = *(_QWORD ***)a4;
    v44 = *(unsigned int *)(*v13 + 12LL);
    v45 = v42 - 1;
    v42 *= 16;
    v46 = (_QWORD **)((char *)v43 + v42);
    i = (_QWORD **)(16LL * ((unsigned int)v44 & v45));
    v48 = (_QWORD **)((char *)i + (_QWORD)v43);
    if ( i != (_QWORD **)v42 )
    {
      for ( i = (_QWORD **)((char *)i + (_QWORD)v43); v46 != i; i += 2 )
      {
        v49 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(*v49 + 12LL) == (_DWORD)v44 && v49 == v13 )
          {
            v49 = i;
            goto LABEL_36;
          }
        }
        else if ( !v49 )
        {
          goto LABEL_36;
        }
      }
    }
    if ( v43 == v48 )
    {
LABEL_80:
      v49 = nullptr;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v49 = *v43;
          if ( (unsigned __int64)*v43 > 1 )
            break;
          if ( !v49 )
            goto LABEL_36;
          v43 += 2;
          if ( v48 == v43 )
            goto LABEL_80;
        }
        i = (_QWORD **)*v49;
        if ( *(_DWORD *)(*v49 + 12LL) == (_DWORD)v44 && v49 == v13 )
          break;
        v43 += 2;
        if ( v48 == v43 )
          goto LABEL_80;
      }
      v49 = v43;
    }
LABEL_36:
    v50 = v49[1];
    v137 = v139;
    v138 = 0x1000000000LL;
    (*(void (__fastcall **)(__int64, void **, _QWORD **, _QWORD **, __int64, _QWORD **))(*(_QWORD *)v50 + 16LL))(
      v50,
      &v137,
      i,
      v43,
      v44,
      v48);
    v51 = (__m128i *)v137;
    v9 = 1;
    v52 = (__m128i *)((char *)v137 + 16 * (unsigned int)v138);
    if ( v52 == v137 )
    {
LABEL_53:
      if ( v51 != (__m128i *)v139 && v51 )
        sub_186B220(v51);
      return v9;
    }
LABEL_37:
    v53 = v51->m128i_i64[1];
    v54 = *a5;
    v55 = *((unsigned int *)a5 + 2);
    if ( v51->m128i_i8[0] )
    {
      v56 = 32LL * (unsigned int)v55;
      v57 = 33
          * ((4097 * *(_DWORD *)(v53 + 16) + 2127912214)
           ^ ((unsigned int)(4097 * *(_DWORD *)(v53 + 16) + 2127912214) >> 19)
           ^ 0xC761C23C);
      v58 = (((9 * (((v57 + 374761393) << 9) ^ (v57 - 369570787)) - 42973499)
            ^ ((9 * (((v57 + 374761393) << 9) ^ (v57 - 369570787)) - 42973499) >> 16)
            ^ 0xB55A4F09)
           - 1725461304)
          ^ 0xD8733800;
      v59 = (v58 + (v58 ^ ((1725461304 - v58) << 16)) - 1725461304) ^ ((1725461304 - v58) << 10);
      v60 = 32LL * (v59 & (unsigned int)(v55 - 1));
      v61 = v54 + v60;
      v62 = v54 + v60;
      if ( v56 != v60 )
      {
        do
        {
          v63 = *(_DWORD *)(v62 + 4);
          if ( v63 == 2 )
          {
            if ( *(_DWORD *)v62 == v59
              && *(_BYTE *)(v62 + 8)
              && *(_DWORD *)(*(_QWORD *)(v62 + 16) + 16LL) == *(_DWORD *)(v53 + 16) )
            {
              goto LABEL_46;
            }
          }
          else if ( !v63 )
          {
            goto LABEL_47;
          }
          v62 += 32;
        }
        while ( v62 != v54 + v56 );
      }
      while ( v54 != v61 )
      {
        v70 = *(_DWORD *)(v54 + 4);
        if ( v70 == 2 )
        {
          if ( *(_DWORD *)v54 == v59
            && *(_BYTE *)(v54 + 8)
            && *(_DWORD *)(*(_QWORD *)(v54 + 16) + 16LL) == *(_DWORD *)(v53 + 16) )
          {
            goto LABEL_64;
          }
        }
        else if ( !v70 )
        {
          break;
        }
        v54 += 32;
      }
LABEL_47:
      v64 = *a7;
      if ( *a7 )
      {
        v65 = v64[-1].m128i_u32[3];
        if ( v65 == v64[-1].m128i_i32[2] )
        {
          v82 = (3 * v65 + 1) >> 1;
          v83 = 16 * v82 + 8;
          if ( 16 * v65 + 8 >= v83 || v65 >= v82 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v136, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v136);
            sub_233E40((__int64)v136);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v84 = (unsigned int *)sub_186B300(&v64[-1].m128i_u64[1], v83);
          v85 = v84[1];
          v64 = (__m128i *)(v84 + 2);
          *v84 = v82;
          *a7 = (__m128i *)(v84 + 2);
          LODWORD(v84) = v85;
          v68 = &v64[v85];
          v67 = (_DWORD)v84 + 1;
        }
        else
        {
          v66 = v65;
          v67 = v65 + 1;
          v68 = &v64[v66];
        }
      }
      else
      {
        v86 = (_QWORD *)sub_186B270(0x28u);
        *v86 = 2;
        v67 = 1;
        v64 = (__m128i *)(v86 + 1);
        *a7 = v64;
        v68 = v64;
      }
      v9 = 0;
      *v68 = _mm_loadu_si128(v51);
      v64[-1].m128i_i32[3] = v67;
      goto LABEL_51;
    }
    v72 = 33
        * ((4097 * **(_DWORD **)v53 + 2127912214)
         ^ ((unsigned int)(4097 * **(_DWORD **)v53 + 2127912214) >> 19)
         ^ 0xC761C23C);
    v73 = (((9 * (((v72 + 374761393) << 9) ^ (v72 - 369570787)) - 42973499)
          ^ ((9 * (((v72 + 374761393) << 9) ^ (v72 - 369570787)) - 42973499) >> 16)
          ^ 0xB55A4F09)
         + 1978921976)
        ^ 0xC0C0800;
    v74 = (v73 + (v73 ^ ((-1978921976 - v73) << 16)) + 1978921976) ^ ((-1978921976 - v73) << 10);
    v75 = v55 - 1;
    v76 = 32 * v55;
    v77 = v54 + v76;
    v78 = 32LL * (v74 & v75);
    v79 = v54 + v78;
    if ( v78 == v76 )
    {
LABEL_90:
      if ( v54 != v79 )
      {
        while ( 1 )
        {
          v81 = *(_DWORD *)(v54 + 4);
          if ( v81 == 2 )
          {
            if ( v74 == *(_DWORD *)v54 && !*(_BYTE *)(v54 + 8) && v53 == *(_QWORD *)(v54 + 16) )
            {
LABEL_64:
              v62 = v54;
              goto LABEL_46;
            }
          }
          else if ( !v81 )
          {
            goto LABEL_47;
          }
          v54 += 32;
          if ( v54 == v79 )
            goto LABEL_47;
        }
      }
      goto LABEL_47;
    }
    v62 = v54 + v78;
    while ( 1 )
    {
      v80 = *(_DWORD *)(v62 + 4);
      if ( v80 != 2 )
        break;
      if ( v74 != *(_DWORD *)v62 || *(_BYTE *)(v62 + 8) )
      {
LABEL_84:
        v62 += 32;
        if ( v62 == v77 )
          goto LABEL_90;
      }
      else
      {
        if ( v53 == *(_QWORD *)(v62 + 16) )
        {
LABEL_46:
          if ( !*(_DWORD *)(v62 + 24) )
            goto LABEL_47;
LABEL_51:
          if ( v52 == ++v51 )
          {
            v51 = (__m128i *)v137;
            goto LABEL_53;
          }
          goto LABEL_37;
        }
        v62 += 32;
        if ( v62 == v77 )
          goto LABEL_90;
      }
    }
    if ( !v80 )
      goto LABEL_47;
    goto LABEL_84;
  }
  v14 = v13[1];
  v16 = *((unsigned int *)a6 + 2);
  v17 = a6;
  v18 = (__int64 *)*a6;
  v19 = *(_DWORD *)(v14 + 12);
  v20 = v16 - 1;
  v21 = v16;
  v22 = 8 * v16;
  v23 = (__int64 *)&(*a6)[v22];
  v24 = 8LL * (v19 & v20);
  v25 = (__int64 *)&(*a6)[v24];
  if ( v24 != v22 )
  {
    for ( j = v25; v23 != j; ++j )
    {
      v22 = *j;
      if ( (unsigned __int64)*j > 1 )
      {
        LOBYTE(v9) = v14 == v22 && *(_DWORD *)(v22 + 12) == v19;
        if ( (_BYTE)v9 )
          return v9;
      }
      else if ( !v22 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v25 != v18; ++v18 )
  {
    v71 = *v18;
    if ( (unsigned __int64)*v18 > 1 )
    {
      LOBYTE(v22) = v14 == v71 && *(_DWORD *)(v71 + 12) == v19;
      if ( (_BYTE)v22 )
        return (unsigned int)v22;
    }
    else if ( !v71 )
    {
      break;
    }
  }
LABEL_8:
  v27 = *a3;
  if ( *a3 && &v27[*((unsigned int *)v27 - 1)] != v27 )
  {
    v134 = v17;
    v28 = &v27[*((unsigned int *)v27 - 1)];
    v29 = a5;
    v30 = a4;
    v131 = v12;
    do
    {
      v31 = *v27;
      if ( v14 != sub_15D1F10(**v27) )
        goto LABEL_11;
      v32 = *(unsigned int *)(v30 + 8);
      v33 = *(_QWORD **)v30;
      v34 = *(_DWORD *)(*v31 + 12LL);
      v35 = v32 - 1;
      v32 *= 16;
      v36 = (_QWORD *)(*(_QWORD *)v30 + v32);
      v37 = 16LL * (v34 & v35);
      v38 = (_QWORD *)(*(_QWORD *)v30 + v37);
      if ( v37 == v32 )
      {
LABEL_21:
        while ( v38 != v33 )
        {
          v41 = (_QWORD *)*v33;
          if ( *v33 > 1u )
          {
            if ( *(_DWORD *)(*v41 + 12LL) == v34 && v31 == v41 )
            {
              v39 = v33;
              goto LABEL_122;
            }
          }
          else if ( !v41 )
          {
            break;
          }
          v33 += 2;
        }
LABEL_187:
        BUG();
      }
      v39 = (_QWORD *)(*(_QWORD *)v30 + v37);
      while ( 1 )
      {
        while ( 1 )
        {
          v40 = (_QWORD *)*v39;
          if ( *v39 > 1u )
            break;
          if ( !v40 )
            goto LABEL_187;
          v39 += 2;
          if ( v36 == v39 )
            goto LABEL_21;
        }
        if ( *(_DWORD *)(*v40 + 12LL) == v34 && v31 == v40 )
          break;
        v39 += 2;
        if ( v36 == v39 )
          goto LABEL_21;
      }
LABEL_122:
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v39[1] + 32LL))(v39[1], v36) )
        goto LABEL_11;
      v100 = (_DWORD **)v31[1];
      v101 = *((unsigned int *)v29 + 2);
      v102 = *v29;
      v103 = 33 * ((4097 * **v100 + 2127912214) ^ ((unsigned int)(4097 * **v100 + 2127912214) >> 19) ^ 0xC761C23C);
      v104 = (((9 * (((v103 + 374761393) << 9) ^ (v103 - 369570787)) - 42973499)
             ^ ((9 * (((v103 + 374761393) << 9) ^ (v103 - 369570787)) - 42973499) >> 16)
             ^ 0xB55A4F09)
            + 1978921976)
           ^ 0xC0C0800;
      v105 = (v104 + (v104 ^ ((-1978921976 - v104) << 16)) + 1978921976) ^ ((-1978921976 - v104) << 10);
      v106 = v101 - 1;
      v101 *= 32;
      v107 = *v29 + v101;
      v108 = 32LL * (v105 & v106);
      v109 = *v29 + v108;
      if ( v108 != v101 )
      {
        for ( k = *v29 + v108; v107 != k; k += 32 )
        {
          v111 = *(_DWORD *)(k + 4);
          if ( v111 == 2 )
          {
            if ( *(_DWORD *)k == v105 && !*(_BYTE *)(k + 8) && v100 == *(_DWORD ***)(k + 16) )
            {
              v102 = k;
LABEL_132:
              if ( !*(_DWORD *)(v102 + 24) )
                goto LABEL_133;
              goto LABEL_11;
            }
          }
          else if ( !v111 )
          {
            goto LABEL_133;
          }
        }
      }
      for ( ; v109 != v102; v102 += 32 )
      {
        v117 = *(_DWORD *)(v102 + 4);
        if ( v117 == 2 )
        {
          if ( *(_DWORD *)v102 == v105 && !*(_BYTE *)(v102 + 8) && v100 == *(_DWORD ***)(v102 + 16) )
            goto LABEL_132;
        }
        else if ( !v117 )
        {
          break;
        }
      }
LABEL_133:
      v112 = *a7;
      if ( *a7 )
      {
        v113 = v112[-1].m128i_u32[3];
        if ( v113 == v112[-1].m128i_i32[2] )
        {
          v118 = (3 * v113 + 1) >> 1;
          v119 = 16 * v118 + 8;
          if ( 16 * v113 + 8 >= v119 || v113 >= v118 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v137, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v137);
            sub_233E40((__int64)&v137);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v132 = v100;
          v120 = sub_186B300(&v112[-1].m128i_u64[1], v119);
          v100 = v132;
          v121 = (_DWORD *)v120;
          v112 = (__m128i *)(v120 + 8);
          v122 = (unsigned int)v121[1];
          *v121 = v118;
          *a7 = v112;
          LODWORD(v121) = v122;
          v116 = &v112[v122];
          v115 = (_DWORD)v121 + 1;
        }
        else
        {
          v114 = v113;
          v115 = v113 + 1;
          v116 = &v112[v114];
        }
      }
      else
      {
        v133 = (_DWORD **)v31[1];
        v130 = (_QWORD *)sub_186B270(0x28u);
        v100 = v133;
        v115 = 1;
        *v130 = 2;
        v112 = (__m128i *)(v130 + 1);
        *a7 = v112;
        v116 = v112;
      }
      v116->m128i_i8[0] = 0;
      v116->m128i_i64[1] = (__int64)v100;
      v131 = 0;
      v112[-1].m128i_i32[3] = v115;
LABEL_11:
      ++v27;
    }
    while ( v28 != v27 );
    v17 = v134;
    v12 = v131;
    v21 = *((unsigned int *)v134 + 2);
  }
  v87 = *((_DWORD *)v17 + 4);
  v88 = 2 * v21;
  if ( 3 * (int)v21 < (unsigned int)(4 * (v87 + *((_DWORD *)v17 + 3))) )
  {
    v90 = 8LL * v88;
    v123 = (char *)sub_186B270(v90);
    v89 = v123;
    if ( v88 )
      memset(v123, 0, 8LL * v88);
    v91 = v88 - 1;
    v92 = (__int64)&v89[v90];
    v124 = &(*v17)[8 * *((unsigned int *)v17 + 2)];
    if ( *v17 != v124 )
    {
      v125 = v89;
      v126 = *v17;
      do
      {
        if ( *(_QWORD *)v126 > 1u )
        {
          v127 = 8LL * (*(_DWORD *)(*(_QWORD *)v126 + 12LL) & v91);
          v128 = &v125[v127];
          if ( 8LL * v88 == v127 )
          {
LABEL_162:
            if ( v125 == v128 )
            {
LABEL_179:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v129 = v125;
            while ( *(_QWORD *)v129 )
            {
              v129 += 8;
              if ( v128 == v129 )
                goto LABEL_179;
            }
          }
          else
          {
            v129 = &v125[v127];
            while ( *(_QWORD *)v129 )
            {
              v129 += 8;
              if ( (char *)v92 == v129 )
                goto LABEL_162;
            }
          }
          *(_QWORD *)v129 = *(_QWORD *)v126;
        }
        v126 += 8;
      }
      while ( v124 != v126 );
      v89 = v125;
      v90 = 8LL * v88;
      v12 = (unsigned __int8)v12;
      v124 = *v17;
    }
    if ( v124 )
    {
      v135 = v92;
      sub_186B220(v124);
      v92 = v135;
      v91 = v88 - 1;
    }
    *v17 = v89;
    v87 = 0;
    *((_DWORD *)v17 + 2) = v88;
    *((_DWORD *)v17 + 4) = 0;
  }
  else
  {
    v89 = *v17;
    v90 = 8 * v21;
    v91 = v21 - 1;
    v92 = (__int64)&(*v17)[8 * v21];
  }
  v93 = *(_DWORD *)(v14 + 12);
  v94 = v93 & v91;
  v95 = &v89[8 * v94];
  if ( 8 * v94 != v90 )
  {
    v96 = &v89[8 * v94];
    v97 = nullptr;
    while ( 1 )
    {
      v98 = *(_QWORD *)v96;
      if ( *(_QWORD *)v96 > 1u )
      {
        if ( *(_DWORD *)(v98 + 12) == v93 && v14 == v98 )
        {
          *(_QWORD *)v96 = v14;
          return v12;
        }
      }
      else
      {
        if ( !v98 )
        {
          if ( v97 )
            goto LABEL_173;
          v97 = v96;
          goto LABEL_174;
        }
        v97 = v96;
      }
      v96 += 8;
      if ( v96 == (char *)v92 )
        goto LABEL_117;
    }
  }
  v97 = nullptr;
  while ( 1 )
  {
LABEL_117:
    if ( v95 == v89 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v99 = *(_QWORD *)v89;
    if ( *(_QWORD *)v89 <= 1u )
      break;
    if ( *(_DWORD *)(v99 + 12) == v93 && v14 == v99 )
    {
      *(_QWORD *)v89 = v14;
      return v12;
    }
LABEL_116:
    v89 += 8;
  }
  if ( v99 )
  {
    v97 = v89;
    goto LABEL_116;
  }
  if ( v97 )
LABEL_173:
    *((_DWORD *)v17 + 4) = v87 - 1;
  else
    v97 = v89;
LABEL_174:
  *(_QWORD *)v97 = v14;
  ++*((_DWORD *)v17 + 3);
  return v12;
}

