__int64 __fastcall sub_3F9520(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4, __int64 a5)
{
  __int64 v7; // rbp
  char *v9; // rdi
  int v10; // ecx
  __int64 v11; // rsi
  char *v12; // rax
  char *v13; // rdx
  unsigned int v14; // r15d
  size_t v15; // r14
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  _OWORD *v18; // rdx
  __int64 *v19; // r15
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 *v22; // rdi
  __int64 *v23; // r15
  __int64 v24; // rax
  __int64 *v25; // r14
  __int64 *v26; // rdi
  _QWORD *v27; // r14
  _QWORD *v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  bool v31; // zf
  void (__fastcall ***v32)(void *); // r14
  __int64 v33; // r14
  void (__fastcall ***v34)(void *); // r15
  __int64 v35; // rax
  unsigned int v36; // r13d
  __int64 v37; // rdx
  __int64 v38; // r15
  _QWORD *v39; // rax
  unsigned int *v40; // rcx
  int v41; // eax
  _QWORD *v42; // r14
  _QWORD *v43; // r15
  _QWORD *v44; // rax
  __int64 (__fastcall **v45)(); // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r15
  _QWORD *v49; // rbx
  _QWORD *v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 result; // rax
  _QWORD *v54; // rbx
  _QWORD *v55; // r12
  _QWORD *v56; // r13
  __int64 v57; // rsi
  void *v58; // rdi
  __int64 v59; // rdx
  int v60; // ecx
  unsigned int v61; // r12d
  size_t v62; // rbx
  _OWORD *v63; // rcx
  _OWORD *v64; // rdx
  unsigned int v65; // r13d
  __int64 v66; // rbx
  _QWORD *v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __m128i *v72; // r14
  __int32 v73; // r11d
  __int64 v74; // rcx
  __m128i *v75; // r15
  int v76; // esi
  __int64 v77; // r11
  __m128i *v78; // rdi
  __m128i *v79; // rax
  __m128i *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  __int32 v84; // edx
  size_t v85; // r9
  const __m128i *v86; // rbp
  __int64 v87; // rdi
  __m128i *v88; // r10
  __int64 v89; // rax
  __m128i *v90; // rbx
  _QWORD *v91; // r9
  const __m128i *v92; // r12
  __int32 v93; // r10d
  __int64 v94; // rdx
  __m128i *v95; // rsi
  __m128i *v96; // rdx
  __m128i v97; // xmm1
  __int64 v98; // rax
  __int64 *v99; // r15
  __int64 v100; // rcx
  int v101; // eax
  _DWORD *v102; // rax
  __int64 v103; // rsi
  size_t v104; // rsi
  __int64 v105; // r15
  __int64 v106; // rax
  int v107; // ecx
  __int64 *v108; // rdx
  unsigned int v109; // edi
  __int64 *v110; // r8
  __int64 v111; // rdi
  __int64 *v112; // rsi
  __int64 *i; // rax
  unsigned __int64 v114; // rdi
  unsigned __int64 v115; // rdx
  __int64 v116; // [rsp+8h] [rbp-100h]
  unsigned int *v117; // [rsp+10h] [rbp-F8h]
  size_t v118; // [rsp+10h] [rbp-F8h]
  __int64 v119; // [rsp+10h] [rbp-F8h]
  __m128i v120; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v121; // [rsp+30h] [rbp-D8h] BYREF
  __int64 *v122; // [rsp+40h] [rbp-C8h]
  __int64 v123; // [rsp+48h] [rbp-C0h]
  __int64 v124; // [rsp+50h] [rbp-B8h]
  __int64 v125; // [rsp+58h] [rbp-B0h]
  _QWORD *v126; // [rsp+60h] [rbp-A8h]
  __int32 v127; // [rsp+6Ch] [rbp-9Ch]
  __int64 v128; // [rsp+70h] [rbp-98h]
  __int64 *v129; // [rsp+78h] [rbp-90h]
  unsigned int *v130; // [rsp+80h] [rbp-88h] BYREF
  __int64 v131; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall **v132)(); // [rsp+90h] [rbp-78h] BYREF
  unsigned int *v133[2]; // [rsp+98h] [rbp-70h] BYREF
  void *v134; // [rsp+A8h] [rbp-60h]
  __int64 v135; // [rsp+B8h] [rbp-50h]
  void *ptr; // [rsp+C0h] [rbp-48h]

  v7 = a1;
  v124 = a5;
  if ( *(_DWORD *)(a1 + 52) || *(_DWORD *)(a1 + 56) )
  {
    v9 = *(char **)(a1 + 40);
    v10 = 0;
    v11 = *(unsigned int *)(v7 + 48);
    v12 = v9;
    v13 = &v9[16 * v11];
    if ( v9 == v13 )
      goto LABEL_16;
    do
    {
      while ( *(_QWORD *)v12 )
      {
        *(_QWORD *)v12 = 0;
        v12 += 16;
        if ( v13 == v12 )
          goto LABEL_8;
      }
      v12 += 16;
      ++v10;
    }
    while ( v13 != v12 );
LABEL_8:
    if ( (unsigned int)v11 <= 0x10 || 3 * (int)v11 >= (unsigned int)(4 * v10) )
      goto LABEL_16;
    if ( v9 )
    {
      sub_186B220(v9);
      v14 = *(_DWORD *)(v7 + 48);
      *(_QWORD *)(v7 + 40) = 0;
      v14 >>= 1;
      *(_DWORD *)(v7 + 48) = v14;
      v15 = v14;
      v16 = (_OWORD *)sub_186B270(v15 * 16);
      if ( !v14 )
      {
LABEL_15:
        *(_QWORD *)(v7 + 40) = v16;
LABEL_16:
        *(_QWORD *)(v7 + 52) = 0;
        goto LABEL_17;
      }
    }
    else
    {
      v104 = (unsigned int)v11 >> 1;
      *(_QWORD *)(v7 + 40) = 0;
      *(_DWORD *)(v7 + 48) = v104;
      v15 = v104;
      v16 = (_OWORD *)sub_186B270(16 * v104);
    }
    v17 = &v16[v15];
    v18 = v16;
    if ( ((v15 * 16) & 0x10) == 0 || (v18 = v16 + 1, *v16 = 0, v17 != v16 + 1) )
    {
      do
      {
        *v18 = 0;
        v18 += 2;
        *(v18 - 1) = 0;
      }
      while ( v17 != v18 );
    }
    goto LABEL_15;
  }
LABEL_17:
  v19 = *(__int64 **)(v7 + 64);
  if ( v19 )
  {
    v20 = *((unsigned int *)v19 - 1);
    if ( (_DWORD)v20 )
    {
      v21 = &v19[2 * v20];
      do
      {
        v22 = v19;
        v19 += 2;
        sub_2334C0(v22);
      }
      while ( v19 != v21 );
      v19 = *(__int64 **)(v7 + 64);
    }
    *((_DWORD *)v19 - 1) = 0;
  }
  v23 = *(__int64 **)(v7 + 72);
  if ( v23 )
  {
    v24 = *((unsigned int *)v23 - 1);
    if ( (_DWORD)v24 )
    {
      v25 = &v23[2 * v24];
      do
      {
        v26 = v23;
        v23 += 2;
        sub_2334C0(v26);
      }
      while ( v25 != v23 );
      v23 = *(__int64 **)(v7 + 72);
    }
    *((_DWORD *)v23 - 1) = 0;
  }
  v27 = *(_QWORD **)(v7 + 88);
  if ( v27 )
  {
    v28 = &v27[*((unsigned int *)v27 - 1)];
    if ( v27 >= v28 )
      goto LABEL_37;
    do
    {
      while ( 1 )
      {
        v29 = *v27;
        if ( *v27 )
        {
          v30 = *(_QWORD *)(v7 + 80);
          v31 = (*(_DWORD *)(v29 + 8))-- == 1;
          if ( v31 )
            break;
        }
        if ( ++v27 >= v28 )
          goto LABEL_36;
      }
      sub_15D7BC0(v30, v29);
      ++v27;
    }
    while ( v27 < v28 );
LABEL_36:
    v27 = *(_QWORD **)(v7 + 88);
    if ( v27 )
LABEL_37:
      *((_DWORD *)v27 - 1) = 0;
  }
  v116 = v7 + 96;
  sub_2FCDE0((__int64 *)(v7 + 96));
  v32 = *(void (__fastcall ****)(void *))(v7 + 112);
  if ( v32 )
  {
    v31 = (*((_DWORD *)v32 + 4))-- == 1;
    if ( v31 )
    {
      (**v32)(v32);
      sub_186B220(v32);
    }
  }
  *(_QWORD *)(v7 + 112) = 0;
  v33 = v7 + 280;
  v123 = v7 + 144;
  sub_14E9CE0(v7 + 144);
  sub_15D08E0(v7 + 280);
  v34 = *(void (__fastcall ****)(void *))(v7 + 112);
  ++*(_DWORD *)(a2 + 16);
  if ( v34 )
  {
    v31 = (*((_DWORD *)v34 + 4))-- == 1;
    if ( v31 )
    {
      (**v34)(v34);
      sub_186B220(v34);
    }
  }
  v35 = a3[1];
  *(_QWORD *)(v7 + 112) = a2;
  v36 = 0;
  if ( v35 )
  {
    while ( v36 < *(_DWORD *)(v35 - 4) )
    {
      v37 = v36++;
      sub_15D0A90(v7 + 280, *(_QWORD *)(v35 + 8 * v37), 1);
      v35 = a3[1];
      if ( !v35 )
        goto LABEL_47;
    }
    v128 = v7 + 280;
    v65 = 0;
    v129 = a4;
    v66 = v7;
    while ( 1 )
    {
      if ( v65 >= *(_DWORD *)(v35 - 4) )
        goto LABEL_130;
      v67 = (_QWORD *)sub_186B270(8u);
      v68 = a3[1];
      *v67 = 0;
      v69 = *(_QWORD *)(v68 + 8LL * v65);
      v70 = *(unsigned int *)(v66 + 48);
      v71 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v69, (__m128i)(unsigned __int64)v67);
      if ( 3 * (int)v70 < (unsigned int)(4 * (*(_DWORD *)(v66 + 52) + *(_DWORD *)(v66 + 56))) )
      {
        v122 = (__int64 *)v69;
        v120.m128i_i32[0] = 2 * v70;
        v118 = 16LL * (unsigned int)(2 * v70);
        v121 = v71;
        v83 = sub_186B270(v118);
        v84 = v120.m128i_i32[0];
        v74 = v118;
        v69 = (__int64)v122;
        v71 = _mm_load_si128(&v121);
        v72 = (__m128i *)v83;
        v85 = v83 + v118;
        if ( v120.m128i_i32[0] )
        {
          if ( (v118 & 0x10) == 0 || (v83 += 16, *(_OWORD *)(v83 - 16) = 0, v83 != v85) )
          {
            do
            {
              v83 += 32;
              *(_OWORD *)(v83 - 32) = 0;
              *(_OWORD *)(v83 - 16) = 0;
            }
            while ( v83 != v85 );
          }
        }
        v86 = *(const __m128i **)(v66 + 40);
        v73 = v84 - 1;
        v75 = (__m128i *)v85;
        v87 = *(unsigned int *)(v66 + 48);
        v88 = (__m128i *)&v86[v87];
        if ( v86 != &v86[v87] )
        {
          v89 = v66;
          v90 = (__m128i *)v85;
          v91 = a3;
          v92 = &v86[v87];
          v93 = v84;
          do
          {
            while ( v86->m128i_i64[0] <= 1uLL )
            {
              if ( v92 == ++v86 )
                goto LABEL_144;
            }
            v94 = 16LL * (*(_DWORD *)(v86->m128i_i64[0] + 12) & (unsigned int)v73);
            v95 = &v72[(unsigned __int64)v94 / 0x10];
            if ( v118 == v94 )
            {
LABEL_148:
              if ( v72 == v95 )
              {
LABEL_156:
                v127 = v93;
                v126 = v91;
                v125 = v89;
                v121.m128i_i64[0] = v118;
                LODWORD(v122) = v73;
                v120.m128i_i64[0] = v69;
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v96 = v72;
              while ( v96->m128i_i64[0] )
              {
                if ( v95 == ++v96 )
                  goto LABEL_156;
              }
            }
            else
            {
              v96 = &v72[(unsigned __int64)v94 / 0x10];
              while ( v96->m128i_i64[0] )
              {
                if ( v90 == ++v96 )
                  goto LABEL_148;
              }
            }
            v97 = _mm_loadu_si128(v86++);
            *v96 = v97;
          }
          while ( v92 != v86 );
LABEL_144:
          v84 = v93;
          v88 = *(__m128i **)(v89 + 40);
          v66 = v89;
          a3 = v91;
        }
        if ( v88 )
        {
          LODWORD(v125) = v84;
          v121.m128i_i64[0] = v118;
          LODWORD(v122) = v73;
          v119 = v69;
          v120 = v71;
          sub_186B220(v88);
          v84 = v125;
          v74 = v121.m128i_i64[0];
          v73 = (int)v122;
          v71 = _mm_load_si128(&v120);
          v69 = v119;
        }
        *(_QWORD *)(v66 + 40) = v72;
        *(_DWORD *)(v66 + 48) = v84;
        *(_DWORD *)(v66 + 56) = 0;
      }
      else
      {
        v72 = *(__m128i **)(v66 + 40);
        v73 = v70 - 1;
        v74 = 16 * v70;
        v75 = (__m128i *)((char *)v72 + v74);
      }
      v76 = *(_DWORD *)(v69 + 12);
      v77 = 16LL * (v76 & (unsigned int)v73);
      v78 = &v72[(unsigned __int64)v77 / 0x10];
      if ( v77 != v74 )
      {
        v79 = &v72[(unsigned __int64)v77 / 0x10];
        v80 = nullptr;
        while ( 1 )
        {
          v81 = v79->m128i_i64[0];
          if ( v79->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v81 + 12) == v76 && v69 == v81 )
            {
              *v79 = v71;
              goto LABEL_129;
            }
          }
          else
          {
            if ( !v81 )
            {
              if ( v80 )
                goto LABEL_154;
              v80 = v79;
              goto LABEL_155;
            }
            v80 = v79;
          }
          if ( ++v79 == v75 )
            goto LABEL_124;
        }
      }
      v80 = nullptr;
      while ( 1 )
      {
LABEL_124:
        if ( v78 == v72 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v82 = v72->m128i_i64[0];
        if ( v72->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v82 + 12) == v76 && v69 == v82 )
        {
          *v72 = v71;
          goto LABEL_129;
        }
LABEL_123:
        ++v72;
      }
      if ( v82 )
        break;
      if ( v80 )
LABEL_154:
        --*(_DWORD *)(v66 + 56);
      else
        v80 = v72;
LABEL_155:
      *v80 = v71;
      ++*(_DWORD *)(v66 + 52);
LABEL_129:
      v35 = a3[1];
      ++v65;
      if ( !v35 )
      {
LABEL_130:
        v7 = v66;
        v33 = v128;
        a4 = v129;
        goto LABEL_47;
      }
    }
    v80 = v72;
    goto LABEL_123;
  }
LABEL_47:
  v38 = *a4;
  if ( *(_WORD *)(*a4 + 4) )
    goto LABEL_57;
  v133[1] = nullptr;
  v134 = nullptr;
  v135 = 0;
  v132 = &off_1C62200;
  ptr = nullptr;
  v39 = (_QWORD *)sub_186B270(0x18u);
  v40 = (unsigned int *)(v39 + 1);
  v39[1] = v38;
  v117 = (unsigned int *)(v39 + 1);
  *v39 = 0x100000002LL;
  v41 = 1;
  while ( 1 )
  {
    v121.m128i_i64[0] = *(_QWORD *)&v40[2 * (v41 - 1)];
    v131 = v121.m128i_i64[0];
    if ( (unsigned __int8)sub_15D37A0(&v132, v121.m128i_i64[0]) )
    {
      --*(v117 - 1);
      goto LABEL_51;
    }
    v98 = 8LL * *(unsigned int *)(v121.m128i_i64[0] + 24);
    v122 = (__int64 *)(v121.m128i_i64[0] + 32 + v98);
    if ( !v98 )
      goto LABEL_171;
    LOBYTE(v125) = 1;
    v99 = (__int64 *)(v121.m128i_i64[0] + 32);
    do
    {
      while ( 1 )
      {
        v120.m128i_i64[0] = *v99;
        if ( !(unsigned __int8)sub_15D37A0(&v132, v120.m128i_i64[0]) )
        {
          v100 = v120.m128i_i64[0];
          if ( !*(_WORD *)(v120.m128i_i64[0] + 4) )
            break;
        }
        if ( v122 == ++v99 )
          goto LABEL_170;
      }
      if ( !v117 || (v101 = *(v117 - 1), v101 == *(v117 - 2)) )
      {
        v130 = v117;
        sub_3A6B20(&v130);
        v100 = v120.m128i_i64[0];
        v117 = v130;
        v101 = *(v130 - 1);
      }
      LOBYTE(v125) = 0;
      ++v99;
      *(_QWORD *)&v117[2 * v101] = v100;
      *(v117 - 1) = v101 + 1;
    }
    while ( v122 != v99 );
LABEL_170:
    if ( (_BYTE)v125 )
    {
LABEL_171:
      --*(v117 - 1);
      if ( *(_WORD *)(v121.m128i_i64[0] + 4) )
      {
        sub_15D0A90(&v132, v121.m128i_i64[0], 1);
        goto LABEL_51;
      }
      v102 = *(_DWORD **)(*(_QWORD *)(v121.m128i_i64[0] + 16) + 24LL);
      if ( v102 )
      {
        if ( *(_DWORD *)(v7 + 8) == *v102 && v102[1] == 1 )
        {
          v105 = *(_QWORD *)(v121.m128i_i64[0] + 32);
          if ( (unsigned __int8)sub_15D37A0(v33, v105) )
          {
            v106 = *(unsigned int *)(v7 + 48);
            v107 = *(_DWORD *)(v105 + 12);
            v108 = *(__int64 **)(v7 + 40);
            v109 = v106 - 1;
            v106 *= 16;
            v110 = (__int64 *)((char *)v108 + v106);
            v111 = 16LL * (v107 & v109);
            v112 = &v108[(unsigned __int64)v111 / 8];
            if ( v111 == v106 )
            {
LABEL_197:
              if ( v108 != v112 )
              {
                for ( i = *(__int64 **)(v7 + 40); v112 != i; i += 2 )
                {
                  v115 = *i;
                  if ( (unsigned __int64)*i > 1 )
                  {
                    if ( *(_DWORD *)(v115 + 12) == v107 && v105 == v115 )
                      goto LABEL_196;
                  }
                  else if ( !v115 )
                  {
                    i = nullptr;
                    goto LABEL_196;
                  }
                }
              }
LABEL_195:
              i = nullptr;
              goto LABEL_196;
            }
            i = &v108[(unsigned __int64)v111 / 8];
            while ( 1 )
            {
              v114 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v114 + 12) == v107 && v105 == v114 )
                {
LABEL_196:
                  sub_3E6540((_QWORD *)i[1], &v131);
                  break;
                }
              }
              else if ( !v114 )
              {
                goto LABEL_195;
              }
              i += 2;
              if ( v110 == i )
                goto LABEL_197;
            }
          }
        }
      }
      sub_15D0A90(&v132, v121.m128i_i64[0], 1);
    }
    if ( !v117 )
      goto LABEL_53;
LABEL_51:
    v41 = *(v117 - 1);
    if ( !v41 )
      break;
    v40 = v117;
  }
  sub_186B220(v117 - 2);
LABEL_53:
  v132 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v134 )
    sub_186B220(v134);
LABEL_57:
  v42 = *(_QWORD **)(v7 + 40);
  v43 = &v42[2 * *(unsigned int *)(v7 + 48)];
  if ( v42 != v43 )
  {
    while ( *v42 <= 1u )
    {
      v42 += 2;
      if ( v43 == v42 )
        goto LABEL_65;
    }
    while ( v43 != v42 )
    {
      sub_3F7A00(v7, (__int64 *)v42[1]);
      v44 = v42 + 2;
      if ( v43 == v42 + 2 )
        break;
      while ( 1 )
      {
        v42 = v44;
        if ( *v44 > 1u )
          break;
        v44 += 2;
        if ( v43 == v44 )
          goto LABEL_65;
      }
    }
  }
LABEL_65:
  v45 = *(__int64 (__fastcall ***)())v7;
  v133[0] = nullptr;
  v132 = v45;
  sub_2FD290((__int64)&v132, v116);
  v46 = *a4;
  v131 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  sub_3E6950(v133, &v131);
  v47 = sub_15E1AF0(*(_QWORD *)v7);
  v48 = v47;
  if ( v47 )
    ++*(_DWORD *)(v47 + 8);
  sub_3E5D20(*a4, a4[1]);
  *a4 = v48;
  sub_14EA2A0(v123, v48, a4);
  sub_2334C0((__int64 *)&v132);
  sub_3EE030(v124, v7 + 80);
  v49 = (_QWORD *)a3[1];
  if ( v49 )
  {
    v50 = &v49[*((unsigned int *)v49 - 1)];
    if ( v49 >= v50 )
      goto LABEL_77;
    do
    {
      while ( 1 )
      {
        v51 = *v49;
        if ( *v49 )
        {
          v52 = *a3;
          v31 = (*(_DWORD *)(v51 + 8))-- == 1;
          if ( v31 )
            break;
        }
        if ( ++v49 >= v50 )
          goto LABEL_76;
      }
      sub_15D7BC0(v52, v51);
      ++v49;
    }
    while ( v49 < v50 );
LABEL_76:
    v49 = (_QWORD *)a3[1];
    if ( v49 )
LABEL_77:
      *((_DWORD *)v49 - 1) = 0;
  }
  result = *(_QWORD *)(v7 + 40);
  v54 = (_QWORD *)result;
  v55 = (_QWORD *)(result + 16LL * *(unsigned int *)(v7 + 48));
  if ( (_QWORD *)result == v55 )
  {
    result = *(unsigned int *)(v7 + 52);
    if ( (_DWORD)result )
      goto LABEL_107;
  }
  else
  {
    while ( *v54 <= 1u )
    {
      v54 += 2;
      if ( v55 == v54 )
        goto LABEL_183;
    }
    if ( v54 == v55 )
    {
LABEL_183:
      if ( !*(_DWORD *)(v7 + 52) )
        goto LABEL_93;
      v58 = *(void **)(v7 + 40);
      v57 = *(unsigned int *)(v7 + 48);
      v59 = result + 16 * v57;
      goto LABEL_95;
    }
    do
    {
      v56 = (_QWORD *)v54[1];
      if ( v56 )
      {
        if ( *v56 )
          sub_186B220((void *)(*v56 - 8LL));
        sub_186B220(v56);
      }
      result = (__int64)(v54 + 2);
      if ( v55 == v54 + 2 )
        break;
      while ( 1 )
      {
        v54 = (_QWORD *)result;
        if ( *(_QWORD *)result > 1u )
          break;
        result += 16;
        if ( v55 == (_QWORD *)result )
          goto LABEL_92;
      }
    }
    while ( (_QWORD *)result != v55 );
LABEL_92:
    if ( *(_DWORD *)(v7 + 52) )
      goto LABEL_94;
  }
LABEL_93:
  if ( *(_DWORD *)(v7 + 56) )
  {
LABEL_94:
    result = *(_QWORD *)(v7 + 40);
    v57 = *(unsigned int *)(v7 + 48);
    v58 = (void *)result;
    v59 = result + 16 * v57;
    if ( result == v59 )
      goto LABEL_107;
LABEL_95:
    v60 = 0;
    do
    {
      while ( *(_QWORD *)result )
      {
        *(_QWORD *)result = 0;
        result += 16;
        if ( result == v59 )
          goto LABEL_99;
      }
      result += 16;
      ++v60;
    }
    while ( result != v59 );
LABEL_99:
    if ( (unsigned int)v57 > 0x10 )
    {
      result = (unsigned int)(3 * v57);
      if ( (unsigned int)result < 4 * v60 )
      {
        if ( v58 )
        {
          sub_186B220(v58);
          v61 = *(_DWORD *)(v7 + 48);
          *(_QWORD *)(v7 + 40) = 0;
          v61 >>= 1;
          *(_DWORD *)(v7 + 48) = v61;
          v62 = 16LL * v61;
          result = sub_186B270(v62);
          if ( v61 )
            goto LABEL_103;
        }
        else
        {
          v103 = (unsigned int)v57 >> 1;
          *(_QWORD *)(v7 + 40) = 0;
          *(_DWORD *)(v7 + 48) = v103;
          v62 = 16 * v103;
          result = sub_186B270(16 * v103);
LABEL_103:
          v63 = (_OWORD *)(result + v62);
          v64 = (_OWORD *)result;
          if ( (v62 & 0x10) == 0
            || (v64 = (_OWORD *)(result + 16), *(_OWORD *)result = 0, (_OWORD *)(result + 16) != v63) )
          {
            do
            {
              *v64 = 0;
              v64 += 2;
              *(v64 - 1) = 0;
            }
            while ( v64 != v63 );
          }
        }
        *(_QWORD *)(v7 + 40) = result;
      }
    }
LABEL_107:
    *(_QWORD *)(v7 + 52) = 0;
  }
  return result;
}

