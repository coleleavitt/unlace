__int64 __fastcall sub_4B0A40(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, _BYTE *a5)
{
  char **exception; // rbx
  char **v6; // rax
  char **v7; // rbx
  void *v8; // r14
  _QWORD *v9; // rsi
  char **v10; // rbx
  void *v11; // rbp
  _QWORD *v12; // rsi
  __m128 *v16; // r14
  _QWORD *v17; // r12
  _QWORD *v18; // r15
  __int64 v20; // rsi
  __int64 v21; // rdi
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __m128 *v28; // rdx
  char v29; // si
  __int64 v30; // rax
  __int64 *v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r15
  __int16 v34; // cx
  __int16 v35; // cx
  __int64 v36; // rdi
  __int64 v37; // rdx
  _DWORD *v38; // rsi
  _DWORD *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rcx
  _DWORD *v42; // rdi
  __int64 v43; // rdi
  _DWORD *v44; // rsi
  __int64 v45; // rdi
  int v46; // edx
  unsigned int v48; // r12d
  size_t v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  _DWORD *v52; // r15
  __int64 v53; // rdx
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __m128 *v56; // rdx
  _QWORD *v57; // rax
  _DWORD *v58; // rax
  _DWORD *v59; // rax
  void *v60; // rbx
  void *v61; // rbx
  __int64 v62; // r15
  __int64 v63; // rsi
  char v64; // al
  int *v65; // rdi
  int *v66; // rdi
  int v67; // eax
  void *v68; // r15
  __int64 v69; // rax
  char v70; // dl
  int v71; // edx
  __int64 v72; // rdx
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  __int64 v76; // r15
  bool v77; // dl
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // r14
  _QWORD *v81; // rdx
  unsigned int v82; // eax
  __int64 v83; // rcx
  int v84; // eax
  __int64 *v85; // rcx
  __int64 v86; // rsi
  __int64 v87; // r8
  _DWORD *v88; // rax
  __int64 v89; // rax
  _DWORD *v90; // rdx
  void *v91; // r14
  void *v92; // r12
  char *v93; // rcx
  __m128 si128; // xmm1
  __int64 v95; // rdx
  unsigned int v96; // eax
  unsigned int v97; // r13d
  unsigned int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rdi
  int *v101; // rsi
  __int64 v102; // rdx
  unsigned __int64 v103; // rax
  __int64 v104; // rdx
  unsigned int v105; // ecx
  size_t v106; // rsi
  __int64 v107; // rax
  int v108; // ecx
  __int64 v109; // rcx
  _DWORD *v110; // rsi
  _QWORD *v111; // rax
  _QWORD *v112; // r14
  int v113; // eax
  __m128 *v114; // rdx
  _QWORD *v115; // rdx
  _DWORD *v116; // r8
  void *v117[2]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE *v118; // [rsp+10h] [rbp-E8h]
  void *v119; // [rsp+18h] [rbp-E0h]
  int *v120; // [rsp+20h] [rbp-D8h]
  __int64 v121; // [rsp+28h] [rbp-D0h]
  int *v122; // [rsp+30h] [rbp-C8h]
  void *v123; // [rsp+38h] [rbp-C0h]
  __int64 v124; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v125; // [rsp+48h] [rbp-B0h]
  __int64 v126; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v127; // [rsp+58h] [rbp-A0h]
  _QWORD v128[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v129[2]; // [rsp+70h] [rbp-88h] BYREF
  int v130; // [rsp+80h] [rbp-78h] BYREF
  char v131; // [rsp+84h] [rbp-74h]
  __int64 v132; // [rsp+88h] [rbp-70h]
  int v133; // [rsp+90h] [rbp-68h] BYREF
  char v134; // [rsp+94h] [rbp-64h]
  __int64 v135; // [rsp+98h] [rbp-60h]
  __int64 v136[2]; // [rsp+A0h] [rbp-58h] BYREF
  _QWORD v137[9]; // [rsp+B0h] [rbp-48h] BYREF

  v16 = (__m128 *)a1[6];
  v118 = a5;
  if ( !v16 )
  {
    v17 = (_QWORD *)a1[4];
    if ( v17 )
    {
      v18 = &v17[*((unsigned int *)v17 - 1)];
      if ( v17 < v18 )
        goto LABEL_6;
      *((_DWORD *)v17 - 1) = 0;
    }
    a1[5] = a4;
    goto LABEL_63;
  }
  v17 = (_QWORD *)a1[4];
  v16[-1].m128_i32[3] = 0;
  if ( !v17 )
  {
LABEL_79:
    a1[5] = a4;
LABEL_12:
    v25 = v16[-1].m128_u32[3];
    if ( v25 == v16[-1].m128_i32[2] )
    {
      v48 = (3 * v25 + 1) >> 1;
      v49 = 16 * v48 + 8;
      if ( 16 * v25 + 8 >= (unsigned int)v49 || v25 >= v48 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v136, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v136);
        sub_233E40((__int64)v136);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v50 = sub_186B270(v49);
      v51 = a1[6];
      v52 = (_DWORD *)v50;
      v16 = (__m128 *)(v50 + 8);
      if ( v51 )
      {
        v53 = *(unsigned int *)(v51 - 4);
        *(_DWORD *)(v50 + 4) = v53;
        v54 = 0;
        v55 = 16 * v53;
        if ( v55 )
        {
          do
          {
            *(__m128i *)&v52[v54 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v51 + v54));
            v54 += 16LL;
          }
          while ( v55 != v54 );
        }
        sub_186B220((void *)(v51 - 8));
        v56 = &v16[v52[1]];
        v27 = v52[1] + 1;
      }
      else
      {
        *(_DWORD *)(v50 + 4) = 0;
        v56 = (__m128 *)(v50 + 8);
        v27 = 1;
      }
      a1[6] = (__int64)v16;
      *v52 = v48;
      v56->m128_u64[0] = a2;
      v56->m128_u64[1] = a3;
      v52[1] = v27;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v16[v26];
      v28->m128_u64[0] = a2;
      v28->m128_u64[1] = a3;
      v16[-1].m128_i32[3] = v27;
    }
    goto LABEL_14;
  }
  v18 = &v17[*((unsigned int *)v17 - 1)];
  if ( v17 >= v18 )
  {
    *((_DWORD *)v17 - 1) = 0;
    goto LABEL_79;
  }
  do
  {
LABEL_6:
    while ( 1 )
    {
      v20 = *v17;
      if ( *v17 )
      {
        v21 = a1[3];
        v22 = (*(_DWORD *)(v20 + 8))-- == 1;
        if ( v22 )
          break;
      }
      if ( ++v17 >= v18 )
        goto LABEL_9;
    }
    sub_15D7BC0(v21, v20);
    ++v17;
  }
  while ( v17 < v18 );
LABEL_9:
  v23 = a1[4];
  v24 = a4;
  v16 = (__m128 *)a1[6];
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  a1[5] = v24;
  if ( v16 )
    goto LABEL_12;
LABEL_63:
  v57 = (_QWORD *)sub_186B270(0x28u);
  v16 = (__m128 *)(v57 + 1);
  v57[1] = a2;
  v57[2] = a3;
  *v57 = 0x100000002LL;
  v27 = 1;
  a1[6] = (__int64)v16;
LABEL_14:
  v29 = 1;
  *v118 = 1;
  while ( 1 )
  {
    if ( !v27 )
      return 1;
    v30 = (unsigned int)(v27 - 1);
    v31 = (__int64 *)&v16[v30];
    v32 = *v31;
    v33 = v31[1];
    v34 = *(_WORD *)(*v31 + 4);
    if ( v34 != 1 )
      break;
    if ( !(unsigned __int8)sub_4B07E0(a1, v32, v31[1]) )
      return 0;
    v16 = (__m128 *)a1[6];
    --v16[-1].m128_i32[3];
LABEL_82:
    v27 = v16[-1].m128_i32[3];
    v29 = 0;
  }
  v35 = *(_WORD *)(v33 + 4) | v34;
  if ( v35 )
    return 0;
  v36 = *(_QWORD *)(v33 + 16);
  if ( !v29 )
  {
LABEL_19:
    v37 = *(_QWORD *)(v32 + 16);
    if ( v37 != v36 )
    {
      v35 = *(_WORD *)(v32 + 4);
LABEL_21:
      v38 = *(_DWORD **)(v36 + 24);
      goto LABEL_22;
    }
LABEL_48:
    v46 = *(_DWORD *)(v32 + 24);
    if ( *(_DWORD *)(v33 + 24) != v46 )
      return 0;
    v16[-1].m128_i32[3] = v30;
    v16 = (__m128 *)a1[6];
    if ( v46 )
    {
      v93 = (char *)(8LL * (unsigned int)(v46 - 1));
      si128 = _mm_loadh_ps((const double *)&v93[v33 + 32]);
      if ( !v16 )
      {
        v119 = (void *)(8LL * (unsigned int)(v46 - 1));
        *(__m128 *)v117 = si128;
        v111 = (_QWORD *)sub_186B270(0x28u);
        si128 = (__m128)_mm_load_si128((const __m128i *)v117);
        v93 = (char *)v119;
        v112 = v111;
        *v111 = 2;
        v113 = 1;
        v16 = (__m128 *)(v112 + 1);
        a1[6] = (__int64)v16;
        v114 = v16;
        goto LABEL_136;
      }
      while ( 1 )
      {
        v96 = v16[-1].m128_u32[3];
        if ( v96 == v16[-1].m128_i32[2] )
        {
          v97 = (3 * v96 + 1) >> 1;
          v98 = 16 * v97 + 8;
          if ( 16 * v96 + 8 >= v98 || v96 >= v97 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            v119 = v136;
            v7 = v6;
            sub_24ABB0(v136, "Overflow encountered when expanding vector");
            v8 = v119;
            v9 = v119;
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v9);
            sub_233E40((__int64)v8);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v119 = v93;
          *(__m128 *)v117 = si128;
          v99 = sub_186B270(v98);
          v100 = a1[6];
          si128 = (__m128)_mm_load_si128((const __m128i *)v117);
          v93 = (char *)v119;
          v101 = (int *)v99;
          v16 = (__m128 *)(v99 + 8);
          if ( v100 )
          {
            v102 = *(unsigned int *)(v100 - 4);
            *(_DWORD *)(v99 + 4) = v102;
            v103 = 0;
            v104 = 16 * v102;
            if ( v104 )
            {
              do
              {
                *(__m128i *)&v101[v103 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v100 + v103));
                v103 += 16LL;
              }
              while ( v104 != v103 );
            }
            v120 = v101;
            v119 = v93;
            *(__m128 *)v117 = si128;
            sub_186B220((void *)(v100 - 8));
            v101 = v120;
            si128 = (__m128)_mm_load_si128((const __m128i *)v117);
            v93 = (char *)v119;
            v114 = &v16[v120[1]];
            v113 = v120[1] + 1;
          }
          else
          {
            *(_DWORD *)(v99 + 4) = 0;
            v114 = (__m128 *)(v99 + 8);
            v113 = 1;
          }
          a1[6] = (__int64)v16;
          *v101 = v97;
        }
        else
        {
          v95 = v96;
          v113 = v96 + 1;
          v114 = &v16[v95];
        }
LABEL_136:
        v93 -= 8;
        *v114 = si128;
        v16[-1].m128_i32[3] = v113;
        if ( v93 == (char *)-8LL )
          break;
        si128 = _mm_loadh_ps((const double *)&v93[v33 + 32]);
      }
      goto LABEL_82;
    }
    goto LABEL_50;
  }
  v37 = *(_QWORD *)(v32 + 16);
  if ( v37 == v36 )
    goto LABEL_48;
  v44 = *(_DWORD **)(v37 + 24);
  if ( v44 && !*v44 && v44[1] == 8 )
  {
    if ( *(_DWORD *)(v32 + 24) != 1 )
      goto LABEL_21;
    v38 = *(_DWORD **)(v36 + 24);
    v87 = *(_QWORD *)(v32 + 32);
    if ( (!v38 || *v38 || v38[1] != 8) && !*(_WORD *)(v87 + 4) )
    {
      v35 = 0;
      if ( *(_QWORD *)(v87 + 16) == v36 )
      {
        v32 = a2;
        *v118 = 0;
        goto LABEL_19;
      }
    }
  }
  else
  {
    v38 = *(_DWORD **)(v36 + 24);
    if ( v38 )
    {
      if ( !*v38 && v38[1] == 8 && *(_DWORD *)(v33 + 24) == 1 )
      {
        v45 = *(_QWORD *)(v33 + 32);
        if ( !*(_WORD *)(v45 + 4) )
        {
          v35 = 0;
          if ( *(_QWORD *)(v45 + 16) == v37 )
          {
            v33 = *(_QWORD *)(v33 + 32);
            *v118 = 0;
            goto LABEL_48;
          }
        }
      }
    }
  }
LABEL_22:
  v124 = 0;
  v125 = 0;
  v126 = 1;
  v127 = 0;
  v128[0] = 0;
  v128[1] = 0;
  v129[0] = 1;
  v129[1] = 0;
  if ( v35 )
  {
    if ( !v38 || *v38 != 5 )
      goto LABEL_72;
  }
  else
  {
    v39 = *(_DWORD **)(v37 + 24);
    if ( v39 && *v39 == 5 && v39[1] == 2 )
    {
      if ( !v38 )
        goto LABEL_68;
      if ( *v38 )
      {
        if ( *v38 == 5 && v38[1] == 2 )
          goto LABEL_28;
LABEL_68:
        if ( !v39 )
          goto LABEL_70;
        goto LABEL_69;
      }
      if ( v38[1] != 8 )
        goto LABEL_68;
      if ( *(_DWORD *)(v33 + 24) != 1 )
        goto LABEL_68;
      v43 = *(_QWORD *)(v33 + 32);
      if ( *(_WORD *)(v43 + 4) )
        goto LABEL_68;
      v116 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
      if ( v116 && *v116 == 5 && v116[1] == 5 )
      {
        v41 = v37;
        v40 = v32;
        goto LABEL_37;
      }
    }
    else if ( !v38 )
    {
      goto LABEL_68;
    }
    if ( *v38 != 5 )
      goto LABEL_68;
  }
  if ( v38[1] != 2 )
  {
    if ( v35 )
      goto LABEL_72;
    v39 = *(_DWORD **)(v37 + 24);
    goto LABEL_68;
  }
  if ( v35 )
    goto LABEL_72;
  v39 = *(_DWORD **)(v37 + 24);
LABEL_28:
  if ( !v39 )
    goto LABEL_68;
  if ( *v39 )
    goto LABEL_68;
  if ( v39[1] != 8 )
    goto LABEL_68;
  if ( *(_DWORD *)(v32 + 24) != 1 )
    goto LABEL_68;
  v40 = *(_QWORD *)(v32 + 32);
  if ( *(_WORD *)(v40 + 4) )
    goto LABEL_68;
  v41 = *(_QWORD *)(v40 + 16);
  v42 = *(_DWORD **)(v41 + 24);
  if ( !v42 || *v42 != 5 || v42[1] != 5 )
    goto LABEL_68;
  v43 = v33;
LABEL_37:
  v39 = *(_DWORD **)(v41 + 24);
  v32 = v40;
  v33 = v43;
  v37 = v41;
LABEL_69:
  if ( *v39 == 5 && v39[1] == 3 )
  {
    v58 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
    if ( !v58 )
      goto LABEL_72;
    if ( !*v58 )
    {
      if ( v58[1] != 8 )
        goto LABEL_72;
      if ( *(_DWORD *)(v33 + 24) != 1 )
        goto LABEL_72;
      v109 = *(_QWORD *)(v33 + 32);
      if ( *(_WORD *)(v109 + 4) )
        goto LABEL_72;
      v110 = *(_DWORD **)(*(_QWORD *)(v109 + 16) + 24LL);
      if ( v110 && *v110 == 5 && v110[1] == 4 )
      {
        v33 = *(_QWORD *)(v33 + 32);
        goto LABEL_72;
      }
    }
    goto LABEL_71;
  }
LABEL_70:
  v58 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL);
  if ( !v58 )
    goto LABEL_72;
LABEL_71:
  if ( *v58 == 5 && v58[1] == 3 )
  {
    v88 = *(_DWORD **)(v37 + 24);
    if ( v88 )
    {
      if ( !*v88 && v88[1] == 8 && *(_DWORD *)(v32 + 24) == 1 )
      {
        v89 = *(_QWORD *)(v32 + 32);
        if ( !*(_WORD *)(v89 + 4) )
        {
          v90 = *(_DWORD **)(*(_QWORD *)(v89 + 16) + 24LL);
          if ( v90 )
          {
            if ( *v90 == 5 && v90[1] == 4 )
              v32 = *(_QWORD *)(v32 + 32);
          }
        }
      }
    }
  }
LABEL_72:
  v117[0] = v128;
  v120 = &v130;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 1, v33, v128, &v130) )
    goto LABEL_76;
  if ( *(_WORD *)(v32 + 4) )
    goto LABEL_76;
  v59 = *(_DWORD **)(*(_QWORD *)(v32 + 16) + 24LL);
  if ( !v59 )
    goto LABEL_76;
  if ( *v59 != 5 )
    goto LABEL_76;
  if ( v59[1] != 6 )
    goto LABEL_76;
  if ( *(_DWORD *)(v32 + 24) != 2 )
    goto LABEL_76;
  v62 = *(_QWORD *)(v32 + 32);
  v63 = *(_QWORD *)(v32 + 40);
  v119 = v136;
  v121 = v62;
  v64 = sub_1666AE0(a1 + 1, v63, &v124, v136);
  v65 = (int *)qword_1C7F2C0;
  if ( !v64 || *(_WORD *)(v62 + 4) != 1 )
    goto LABEL_76;
  v136[0] = 0;
  v136[1] = 0;
  v137[0] = 1;
  v137[1] = 0;
  if ( (v128[0] & 0x100000000LL) != 0 )
  {
    v122 = (int *)qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v119, v117[0]);
    v65 = v122;
  }
  else
  {
    LODWORD(v136[0]) = v128[0];
  }
  if ( (v129[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v65, v137, v129);
  }
  else
  {
    BYTE4(v137[0]) &= ~1u;
    LODWORD(v137[0]) = v129[0];
  }
  if ( (v137[0] & 0x100000000LL) != 0 || LODWORD(v137[0]) != 1 || (v126 & 0x100000000LL) != 0 || (_DWORD)v126 != 1 )
  {
    sub_1852000(qword_1C7F2C0, v119, &v124);
  }
  else
  {
    v122 = (int *)qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v119, &v124);
    sub_182CBA0(v122, v137);
    BYTE4(v137[0]) &= ~1u;
    LODWORD(v137[0]) = 1;
  }
  v131 &= 0xFCu;
  v66 = (int *)qword_1C7F2C0;
  v134 &= 0xFCu;
  v130 = 0;
  v132 = 0;
  v133 = 1;
  v135 = 0;
  if ( (v136[0] & 0x100000000LL) != 0 )
  {
    v122 = (int *)qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v120, v119);
    v66 = v122;
  }
  else
  {
    v130 = v136[0];
  }
  if ( (v137[0] & 0x100000000LL) != 0 )
  {
    v122 = &v133;
    sub_182C690(v66, &v133, v137);
  }
  else
  {
    v134 &= ~1u;
    v133 = v137[0];
    v122 = &v133;
  }
  v123 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v119);
  sub_182CBA0(v123, v137);
  v67 = v124;
  v68 = qword_1C7F2C0;
  LODWORD(v124) = v130;
  v130 = v67;
  v69 = v125;
  v125 = v132;
  v132 = v69;
  v70 = BYTE4(v124) & 0xFC | v131 & 2 | v131 & 1;
  v131 = BYTE4(v124) & 1 | v131 & 0xFC | BYTE4(v124) & 2;
  BYTE4(v124) = v70;
  v71 = v133;
  v133 = v126;
  LODWORD(v126) = v71;
  v72 = v135;
  v135 = v127;
  v127 = v72;
  LOBYTE(v72) = BYTE4(v126) & 0xFC | v134 & 2 | v134 & 1;
  v134 = BYTE4(v126) & 1 | v134 & 0xFC | BYTE4(v126) & 2;
  BYTE4(v126) = v72;
  sub_182CBA0(qword_1C7F2C0, v120);
  sub_182CBA0(v68, v122);
  v76 = *a1;
  v77 = (v126 & 0x100000000LL) == 0;
  if ( (v126 & 0x100000000LL) == 0 )
    v77 = (_DWORD)v126 == 1;
  v78 = a1[2];
  if ( !v78 )
  {
    LOBYTE(v122) = v77;
    sub_16669E0(a1 + 1);
    v78 = a1[2];
    v77 = (char)v122;
  }
  v79 = sub_166A700(v78, (unsigned int)&v124, v77, v73, v74, v75);
  v80 = v79;
  if ( v79 )
    *(_DWORD *)(v79 + 8) += 2;
  v81 = (_QWORD *)a1[4];
  if ( v81 )
  {
    v82 = *((_DWORD *)v81 - 1);
    if ( v82 == *((_DWORD *)v81 - 2) )
    {
      v105 = (3 * v82 + 1) >> 1;
      v106 = 8 * v105 + 8;
      if ( 8 * v82 + 8 >= (unsigned int)v106 || v82 >= v105 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v119, "Overflow encountered when expanding vector");
        v11 = v119;
        v12 = v119;
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v12);
        sub_233E40((__int64)v11);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      LODWORD(v119) = (3 * v82 + 1) >> 1;
      v107 = sub_186B300(v81 - 1, v106);
      v108 = (int)v119;
      v81 = (_QWORD *)(v107 + 8);
      a1[4] = v107 + 8;
      *(_DWORD *)v107 = v108;
      LODWORD(v107) = *(_DWORD *)(v107 + 4);
      v85 = &v81[(unsigned int)v107];
      v84 = v107 + 1;
    }
    else
    {
      v83 = v82;
      v84 = v82 + 1;
      v85 = &v81[v83];
    }
  }
  else
  {
    v115 = (_QWORD *)sub_186B270(0x18u);
    *v115 = 2;
    v84 = 1;
    v81 = v115 + 1;
    a1[4] = (__int64)v81;
    v85 = v81;
  }
  *v85 = v80;
  v86 = v121;
  *((_DWORD *)v81 - 1) = v84;
  if ( (unsigned __int8)sub_4B07E0(a1, v86, v80) )
  {
    --*(_DWORD *)(a1[6] - 4);
    if ( v80 )
    {
      v22 = (*(_DWORD *)(v80 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(v76, v80);
    }
    v91 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v117[0]);
    sub_182CBA0(v91, v129);
    v92 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v124);
    sub_182CBA0(v92, &v126);
    v16 = (__m128 *)a1[6];
LABEL_50:
    if ( !v16 )
      return 1;
    goto LABEL_82;
  }
  if ( v80 )
  {
    v22 = (*(_DWORD *)(v80 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v76, v80);
  }
LABEL_76:
  v60 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v117[0]);
  sub_182CBA0(v60, v129);
  v61 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v124);
  sub_182CBA0(v61, &v126);
  return 0;
}

