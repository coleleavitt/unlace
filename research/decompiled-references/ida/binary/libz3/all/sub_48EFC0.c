void __fastcall sub_48EFC0(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r13
  __int64 *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rbp
  int *v8; // rbx
  int *v9; // r14
  int v10; // r13d
  _DWORD *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ecx
  size_t v16; // rsi
  unsigned int v17; // ebp
  unsigned int *v18; // rax
  __int64 v19; // rax
  __int64 *v20; // r13
  __int64 v21; // rax
  int *v22; // rdx
  __int64 i; // r9
  int v24; // ecx
  unsigned int v25; // r14d
  __int64 *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r13
  unsigned int v29; // r12d
  int v30; // r11d
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  int v34; // ecx
  __int64 v35; // r15
  int *v36; // rdx
  unsigned int v37; // ebx
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rsi
  unsigned int v41; // eax
  __int64 v42; // rcx
  int *v43; // rdi
  unsigned int v44; // r9d
  __int64 v45; // rbx
  __int64 v46; // r10
  int *v47; // rax
  int v48; // r8d
  int v49; // esi
  int *v50; // rdx
  int v51; // ecx
  __int64 v52; // r11
  __int64 v53; // rcx
  char v54; // r12
  char v55; // r12
  __int64 v56; // r11
  __int64 v57; // rcx
  char v58; // r12
  char v59; // r12
  __int64 v60; // r11
  unsigned int v61; // r13d
  __int64 v62; // rax
  int *v63; // r12
  __int64 v64; // rax
  __int64 v65; // r14
  unsigned int v66; // r15d
  int v67; // ecx
  __int64 v68; // rdi
  __int64 v69; // r14
  int v70; // eax
  __int64 v71; // rdi
  __int64 v72; // rdx
  int v73; // ecx
  __int64 v74; // rsi
  int *v75; // r15
  __int64 v76; // rdi
  int v77; // edx
  int *v78; // r10
  int v79; // eax
  __int64 v80; // rdi
  _QWORD *v81; // rax
  unsigned __int64 v82; // xmm0_8
  char v83; // al
  char v84; // al
  int *v85; // rdx
  int v86; // eax
  _QWORD *v87; // rax
  int *v88; // rcx
  __int64 j; // rdx
  int v90; // esi
  unsigned int v91; // r14d
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // r10
  unsigned int v95; // r12d
  int v96; // r11d
  __int64 v97; // rdi
  __int64 v98; // rbx
  int v99; // ecx
  __int64 v100; // rcx
  int v101; // esi
  unsigned int v102; // r12d
  int *v103; // rax
  __int64 v104; // rbx
  __int64 v105; // rdi
  int v106; // eax
  int v107; // eax
  _QWORD *v108; // rax
  unsigned int v109; // r12d
  int *v110; // rax
  __int64 v111; // rbx
  __int64 v112; // rdi
  int v113; // eax
  int v114; // eax
  _QWORD *v115; // rax
  char v116; // dl
  char v117; // dl
  int v118; // edx
  char **exception; // rbx
  __int64 *v121; // [rsp+0h] [rbp-A8h]
  int v122; // [rsp+0h] [rbp-A8h]
  __int64 v123; // [rsp+8h] [rbp-A0h]
  int v124; // [rsp+8h] [rbp-A0h]
  int v125; // [rsp+8h] [rbp-A0h]
  int *v126; // [rsp+10h] [rbp-98h]
  __int64 v127; // [rsp+10h] [rbp-98h]
  __int64 v128; // [rsp+10h] [rbp-98h]
  __int64 v129; // [rsp+10h] [rbp-98h]
  __int64 v130; // [rsp+10h] [rbp-98h]
  __int64 v131; // [rsp+10h] [rbp-98h]
  __int64 v132; // [rsp+10h] [rbp-98h]
  int v134; // [rsp+20h] [rbp-88h]
  __int64 v135; // [rsp+20h] [rbp-88h]
  __int64 v136; // [rsp+20h] [rbp-88h]
  __int64 v137; // [rsp+20h] [rbp-88h]
  __int64 v138; // [rsp+20h] [rbp-88h]
  __int64 v139; // [rsp+28h] [rbp-80h]
  __int64 v140; // [rsp+28h] [rbp-80h]
  int *v141; // [rsp+28h] [rbp-80h]
  __int64 v142; // [rsp+28h] [rbp-80h]
  __int64 v143; // [rsp+28h] [rbp-80h]
  __int64 v144; // [rsp+28h] [rbp-80h]
  unsigned int v145; // [rsp+38h] [rbp-70h] BYREF
  int v146; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v147; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v148[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v149[10]; // [rsp+58h] [rbp-50h] BYREF

  if ( !*(_DWORD *)a3 )
    return;
  v4 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(a1 + 48);
  v5 = (__int64 *)a1;
  v6 = a4;
  v7 = v4 + 16LL * a2;
  v8 = *(int **)v7;
  if ( *(_QWORD *)v7 )
  {
    v9 = &v8[10 * *(v8 - 1)];
    if ( v8 != v9 )
    {
      v123 = v4 + 16LL * a2;
      v10 = 0;
      do
      {
        v12 = (unsigned int)v8[8];
        if ( (_DWORD)v12 != -1 )
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v12) = v10;
          v13 = *(_QWORD **)(a1 + 40);
          if ( v13 )
          {
            v14 = *((unsigned int *)v13 - 1);
            if ( (_DWORD)v14 == *((_DWORD *)v13 - 2) )
            {
              v15 = (unsigned int)(3 * v14 + 1) >> 1;
              v16 = 4 * v15 + 8;
              v17 = v15;
              if ( 4 * (int)v14 + 8 >= (unsigned int)v16 || (unsigned int)v14 >= v15 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v147, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &v147);
                sub_233E40((__int64)&v147);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v18 = (unsigned int *)sub_186B300(v13 - 1, v16);
              v13 = v18 + 2;
              *v18 = v17;
              v19 = v18[1];
              *(_QWORD *)(a1 + 40) = v13;
              v11 = (_DWORD *)v13 + v19;
            }
            else
            {
              v11 = (_DWORD *)v13 + v14;
            }
          }
          else
          {
            v87 = (_QWORD *)sub_186B270(0x10u);
            v13 = v87 + 1;
            *v87 = 2;
            *(_QWORD *)(a1 + 40) = v87 + 1;
            v11 = v87 + 1;
          }
          *v11 = v8[8];
          ++*((_DWORD *)v13 - 1);
        }
        v8 += 10;
        ++v10;
      }
      while ( v9 != v8 );
      v7 = v123;
      v4 = *(_QWORD *)(a1 + 8);
    }
  }
  v20 = (__int64 *)(16 * v6 + v4);
  v21 = *v20;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    goto LABEL_41;
  if ( *(_DWORD *)a3 != 1 )
  {
    if ( *(_DWORD *)a3 == -1 && (*(_BYTE *)(a3 + 20) & 1) == 0 && *(_DWORD *)(a3 + 16) == 1 )
    {
      if ( v21 )
      {
        v22 = (int *)(v21 + 32);
        for ( i = 0; *(_DWORD *)(v21 - 4) != (_DWORD)i; i = v25 )
        {
          v24 = *v22;
          v25 = i + 1;
          v22 += 10;
          if ( v24 != -1 )
          {
            v124 = *(_DWORD *)(v21 - 4);
            v26 = (__int64 *)a1;
            v121 = v20;
            while ( 1 )
            {
              v27 = v21 + 40 * i;
              v28 = *(unsigned int *)(v27 + 32);
              v29 = *(_DWORD *)(v26[4] + 4 * v28);
              v30 = *(_DWORD *)(v27 + 32);
              if ( v29 == -1 )
              {
                v109 = *(_DWORD *)(v7 + 12);
                ++*(_DWORD *)(v7 + 8);
                v135 = 40 * i;
                if ( v109 == -1 )
                {
                  v110 = sub_48D4A0((int **)v7, &v146);
                  v109 = v146;
                  v111 = (__int64)v110;
                  v30 = v28;
                  v27 = *v121 + v135;
                }
                else
                {
                  v146 = v109;
                  v111 = *(_QWORD *)v7 + 40LL * v109;
                  *(_DWORD *)(v7 + 12) = *(_DWORD *)(v111 + 36);
                }
                *(_DWORD *)(v111 + 32) = v30;
                v112 = *v26;
                if ( (*(_BYTE *)(v27 + 4) & 1) != 0 )
                {
                  v144 = v27;
                  sub_182EA00(v112, v111, v27);
                  v27 = v144;
                }
                else
                {
                  v113 = *(_DWORD *)v27;
                  *(_BYTE *)(v111 + 4) &= ~1u;
                  *(_DWORD *)v111 = v113;
                }
                if ( (*(_BYTE *)(v27 + 20) & 1) != 0 )
                {
                  sub_182EA00(v112, v111 + 16, v27 + 16);
                }
                else
                {
                  v114 = *(_DWORD *)(v27 + 16);
                  *(_BYTE *)(v111 + 20) &= ~1u;
                  *(_DWORD *)(v111 + 16) = v114;
                }
                sub_1839100(*v26, v111);
                v115 = sub_48ED90(v26[3] + 24 * v28, &v147);
                *(_DWORD *)(v111 + 36) = v147;
                *v115 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v109)).m128i_u64[0];
              }
              else
              {
                v31 = *v26;
                v32 = *(_QWORD *)v7 + 40LL * v29;
                if ( (*(_BYTE *)(v32 + 20) & 1) != 0
                  || *(_DWORD *)(v32 + 16) != 1
                  || (*(_BYTE *)(v27 + 20) & 1) != 0
                  || *(_DWORD *)(v27 + 16) != 1 )
                {
                  sub_1854300(v31, *(_QWORD *)v7 + 40LL * v29, v27, *(_QWORD *)v7 + 40LL * v29);
                }
                else
                {
                  v137 = *v26;
                  sub_183A580(v31, *(_QWORD *)v7 + 40LL * v29, v27, *(_QWORD *)v7 + 40LL * v29);
                  sub_182EF00(v137, v32 + 16);
                  *(_BYTE *)(v32 + 20) &= ~1u;
                  *(_DWORD *)(v32 + 16) = 1;
                }
                if ( !*(_DWORD *)v32 )
                  sub_48EED0((__int64)v26, v7, v29);
              }
              i = v25;
              v21 = *v121;
              if ( *v121 )
              {
                v33 = v21 + 40LL * v25;
                while ( v25 < *(_DWORD *)(v21 - 4) )
                {
                  v34 = *(_DWORD *)(v33 + 32);
                  ++v25;
                  v33 += 40;
                  if ( v34 != -1 )
                    break;
                  i = v25;
                }
              }
              if ( (_DWORD)i == v124 )
                break;
              v25 = i + 1;
            }
            goto LABEL_156;
          }
        }
      }
      goto LABEL_47;
    }
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 || *(_DWORD *)(a3 + 16) != 1 )
  {
LABEL_41:
    v148[0] = 0;
    v35 = *(_QWORD *)a1;
    v148[1] = 0;
    v147 = v35;
    v149[0] = 1;
    v149[1] = 0;
    if ( !v21 )
      goto LABEL_46;
    v36 = (int *)(v21 + 32);
    v37 = 0;
    v125 = *(_DWORD *)(v21 - 4);
    while ( 1 )
    {
      if ( *(_DWORD *)(v21 - 4) == v37 )
        goto LABEL_46;
      v38 = *v36;
      v36 += 10;
      if ( v38 != -1 )
        break;
      ++v37;
    }
    while ( 1 )
    {
      v64 = 40LL * v37 + v21;
      v65 = *(unsigned int *)(v64 + 32);
      v66 = *(_DWORD *)(v5[4] + 4 * v65);
      v67 = *(_DWORD *)(v64 + 32);
      if ( v66 != -1 )
      {
        v68 = *v5;
        v69 = *(_QWORD *)v7 + 40LL * v66;
        if ( (*(_BYTE *)(v64 + 20) & 1) != 0
          || *(_DWORD *)(v64 + 16) != 1
          || (*(_BYTE *)(a3 + 20) & 1) != 0
          || *(_DWORD *)(a3 + 16) != 1 )
        {
          sub_184C880(v68, v64, a3, v148);
        }
        else
        {
          v140 = *v5;
          sub_1839230(v68, v64, a3, v148);
          sub_182EF00(v140, v149);
          BYTE4(v149[0]) &= ~1u;
          LODWORD(v149[0]) = 1;
        }
        v70 = v148[0];
        v71 = *v5;
        if ( LODWORD(v148[0]) )
        {
          if ( *(_DWORD *)v69 )
          {
            if ( (*(_BYTE *)(v69 + 20) & 1) != 0
              || *(_DWORD *)(v69 + 16) != 1
              || (v149[0] & 0x100000000LL) != 0
              || LODWORD(v149[0]) != 1 )
            {
              sub_18540F0(v71, v69, v148, v69);
            }
            else
            {
              sub_1839610(v71, v69, v148);
              sub_182EF00(v71, v69 + 16);
              *(_BYTE *)(v69 + 20) &= ~1u;
              *(_DWORD *)(v69 + 16) = 1;
            }
          }
          else
          {
            if ( (v148[0] & 0x100000000LL) != 0 )
            {
              v128 = *v5;
              sub_182EA00(v71, v69, v148);
              v71 = v128;
            }
            else
            {
              *(_BYTE *)(v69 + 4) &= ~1u;
              *(_DWORD *)v69 = v70;
            }
            if ( (v149[0] & 0x100000000LL) != 0 )
            {
              sub_182EA00(v71, v69 + 16, v149);
            }
            else
            {
              v86 = v149[0];
              *(_BYTE *)(v69 + 20) &= ~1u;
              *(_DWORD *)(v69 + 16) = v86;
            }
          }
        }
        else
        {
          v83 = *(_BYTE *)(v69 + 4);
          if ( (v83 & 1) != 0 )
          {
            v127 = *v5;
            sub_182EA00(v71, v69, v69);
            v71 = v127;
          }
          else
          {
            *(_BYTE *)(v69 + 4) = v83 & 0xFE;
          }
          v84 = *(_BYTE *)(v69 + 20);
          if ( (v84 & 1) != 0 )
            sub_182EA00(v71, v69 + 16, v69 + 16);
          else
            *(_BYTE *)(v69 + 20) = v84 & 0xFE;
        }
        if ( !*(_DWORD *)v69 )
          sub_48EED0((__int64)v5, v7, v66);
        goto LABEL_75;
      }
      v74 = *(unsigned int *)(v7 + 12);
      ++*(_DWORD *)(v7 + 8);
      if ( (_DWORD)v74 == -1 )
      {
        v75 = sub_48D4A0((int **)v7, &v145);
        v64 = *v20 + 40LL * v37;
        v76 = *v5;
        v75[8] = v65;
        if ( (*(_BYTE *)(v64 + 4) & 1) == 0 )
          goto LABEL_84;
      }
      else
      {
        v85 = *(int **)v7;
        v76 = *v5;
        v145 = v74;
        v75 = &v85[10 * v74];
        *(_DWORD *)(v7 + 12) = v75[9];
        v75[8] = v67;
        if ( (*(_BYTE *)(v64 + 4) & 1) == 0 )
        {
LABEL_84:
          v77 = *(_DWORD *)v64;
          v78 = v75 + 4;
          *((_BYTE *)v75 + 4) &= ~1u;
          *v75 = v77;
          if ( (*(_BYTE *)(v64 + 20) & 1) == 0 )
            goto LABEL_85;
          goto LABEL_96;
        }
      }
      v139 = v64;
      sub_182EA00(v76, v75, v64);
      v64 = v139;
      v78 = v75 + 4;
      if ( (*(_BYTE *)(v139 + 20) & 1) == 0 )
      {
LABEL_85:
        v79 = *(_DWORD *)(v64 + 16);
        *((_BYTE *)v75 + 20) &= ~1u;
        v75[4] = v79;
        goto LABEL_86;
      }
LABEL_96:
      v126 = v78;
      sub_182EA00(v76, v78, v64 + 16);
      v78 = v126;
LABEL_86:
      v80 = *v5;
      if ( (v75[5] & 1) != 0 || v75[4] != 1 || (*(_BYTE *)(a3 + 20) & 1) != 0 || *(_DWORD *)(a3 + 16) != 1 )
      {
        sub_184C880(v80, v75, a3, v75);
      }
      else
      {
        v141 = v78;
        sub_1839230(v80, v75, a3, v75);
        sub_182EF00(v80, v141);
        *((_BYTE *)v75 + 20) &= ~1u;
        v75[4] = 1;
      }
      v81 = sub_48ED90(v5[3] + 24 * v65, &v146);
      v82 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v145)).m128i_u64[0];
      v75[9] = v146;
      *v81 = v82;
LABEL_75:
      v21 = *v20;
      ++v37;
      if ( *v20 )
      {
        v72 = v21 + 40LL * v37;
        while ( v37 < *(_DWORD *)(v21 - 4) )
        {
          v73 = *(_DWORD *)(v72 + 32);
          v72 += 40;
          if ( v73 != -1 )
            break;
          ++v37;
        }
      }
      if ( v37 == v125 )
      {
        v35 = v147;
LABEL_46:
        sub_182EF00(v35, v148);
        sub_182EF00(v35, v149);
        goto LABEL_47;
      }
    }
  }
  if ( v21 )
  {
    v88 = (int *)(v21 + 32);
    for ( j = 0; ; j = v91 )
    {
      if ( *(_DWORD *)(v21 - 4) == (_DWORD)j )
        goto LABEL_47;
      v90 = *v88;
      v91 = j + 1;
      v88 += 10;
      if ( v90 != -1 )
        break;
    }
    v122 = *(_DWORD *)(v21 - 4);
    v26 = (__int64 *)a1;
    while ( 1 )
    {
      v92 = 40 * j;
      v93 = v21 + 40 * j;
      v94 = *(unsigned int *)(v93 + 32);
      v95 = *(_DWORD *)(v26[4] + 4 * v94);
      v96 = *(_DWORD *)(v93 + 32);
      if ( v95 == -1 )
      {
        v102 = *(_DWORD *)(v7 + 12);
        ++*(_DWORD *)(v7 + 8);
        v129 = v92;
        if ( v102 == -1 )
        {
          v142 = v94;
          v134 = v94;
          v103 = sub_48D4A0((int **)v7, &v146);
          v102 = v146;
          v96 = v134;
          v104 = (__int64)v103;
          v94 = v142;
          v93 = *v20 + v129;
        }
        else
        {
          v146 = v102;
          v104 = *(_QWORD *)v7 + 40LL * v102;
          *(_DWORD *)(v7 + 12) = *(_DWORD *)(v104 + 36);
        }
        *(_DWORD *)(v104 + 32) = v96;
        v105 = *v26;
        if ( (*(_BYTE *)(v93 + 4) & 1) != 0 )
        {
          v143 = v94;
          v136 = v93;
          sub_182EA00(v105, v104, v93);
          v94 = v143;
          v93 = v136;
        }
        else
        {
          v106 = *(_DWORD *)v93;
          *(_BYTE *)(v104 + 4) &= ~1u;
          *(_DWORD *)v104 = v106;
        }
        if ( (*(_BYTE *)(v93 + 20) & 1) != 0 )
        {
          v130 = v94;
          sub_182EA00(v105, v104 + 16, v93 + 16);
          v94 = v130;
        }
        else
        {
          v107 = *(_DWORD *)(v93 + 16);
          *(_BYTE *)(v104 + 20) &= ~1u;
          *(_DWORD *)(v104 + 16) = v107;
        }
        v108 = sub_48ED90(v26[3] + 24 * v94, &v147);
        *(_DWORD *)(v104 + 36) = v147;
        *v108 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v102)).m128i_u64[0];
      }
      else
      {
        v97 = *v26;
        v98 = *(_QWORD *)v7 + 40LL * v95;
        v99 = *(_DWORD *)v93;
        if ( *(_DWORD *)v93 )
        {
          if ( *(_DWORD *)v98 )
          {
            if ( (*(_BYTE *)(v98 + 20) & 1) != 0
              || *(_DWORD *)(v98 + 16) != 1
              || (*(_BYTE *)(v93 + 20) & 1) != 0
              || *(_DWORD *)(v93 + 16) != 1 )
            {
              sub_18540F0(v97, *(_QWORD *)v7 + 40LL * v95, v93, *(_QWORD *)v7 + 40LL * v95);
            }
            else
            {
              v132 = *v26;
              sub_1839610(v97, *(_QWORD *)v7 + 40LL * v95, v93);
              sub_182EF00(v132, v98 + 16);
              *(_BYTE *)(v98 + 20) &= ~1u;
              *(_DWORD *)(v98 + 16) = 1;
            }
          }
          else
          {
            if ( (*(_BYTE *)(v93 + 4) & 1) != 0 )
            {
              v138 = v93;
              sub_182EA00(v97, *(_QWORD *)v7 + 40LL * v95, v93);
              v93 = v138;
            }
            else
            {
              *(_BYTE *)(v98 + 4) &= ~1u;
              *(_DWORD *)v98 = v99;
            }
            if ( (*(_BYTE *)(v93 + 20) & 1) != 0 )
            {
              sub_182EA00(v97, v98 + 16, v93 + 16);
            }
            else
            {
              v118 = *(_DWORD *)(v93 + 16);
              *(_BYTE *)(v98 + 20) &= ~1u;
              *(_DWORD *)(v98 + 16) = v118;
            }
          }
        }
        else
        {
          v116 = *(_BYTE *)(v98 + 4);
          if ( (v116 & 1) != 0 )
          {
            v131 = *v26;
            sub_182EA00(v97, *(_QWORD *)v7 + 40LL * v95, *(_QWORD *)v7 + 40LL * v95);
            v97 = v131;
          }
          else
          {
            *(_BYTE *)(v98 + 4) = v116 & 0xFE;
          }
          v117 = *(_BYTE *)(v98 + 20);
          if ( (v117 & 1) != 0 )
            sub_182EA00(v97, v98 + 16, v98 + 16);
          else
            *(_BYTE *)(v98 + 20) = v117 & 0xFE;
        }
        if ( !*(_DWORD *)v98 )
          sub_48EED0((__int64)v26, v7, v95);
      }
      v21 = *v20;
      j = v91;
      if ( *v20 )
      {
        v100 = v21 + 40LL * v91;
        while ( v91 < *(_DWORD *)(v21 - 4) )
        {
          v101 = *(_DWORD *)(v100 + 32);
          ++v91;
          v100 += 40;
          if ( v101 != -1 )
            break;
          j = v91;
        }
      }
      if ( v122 == (_DWORD)j )
        break;
      v91 = j + 1;
    }
LABEL_156:
    v5 = v26;
  }
LABEL_47:
  v39 = v5[5];
  if ( v39 )
  {
    if ( *(_DWORD *)(v39 - 4) )
    {
      v40 = v5[4];
      v41 = 0;
      do
      {
        v42 = v41++;
        *(_DWORD *)(v40 + 4LL * *(unsigned int *)(v39 + 4 * v42)) = -1;
      }
      while ( v41 < *(_DWORD *)(v39 - 4) );
    }
    *(_DWORD *)(v39 - 4) = 0;
  }
  v43 = *(int **)v7;
  if ( *(_QWORD *)v7 )
  {
    v44 = *(v43 - 1);
    if ( 2 * *(_DWORD *)(v7 + 8) < v44 )
    {
      v45 = *v5;
      v46 = v5[3];
      v47 = *(int **)v7;
      v48 = 0;
      v49 = 0;
      do
      {
        if ( v47[8] != -1 )
        {
          if ( v49 != v48 )
          {
            v50 = &v43[10 * v48];
            v51 = *v50;
            *v50 = *v47;
            v52 = *((_QWORD *)v47 + 1);
            *v47 = v51;
            v53 = *((_QWORD *)v50 + 1);
            *((_QWORD *)v50 + 1) = v52;
            v54 = *((_BYTE *)v47 + 4);
            *((_QWORD *)v47 + 1) = v53;
            LOBYTE(v52) = *((_BYTE *)v50 + 4);
            *((_BYTE *)v50 + 4) = v54 & 2 | v52 & 0xFD;
            LOBYTE(v53) = v52 & 2 | v47[1] & 0xFD;
            *((_BYTE *)v47 + 4) = v53;
            v55 = *((_BYTE *)v50 + 4);
            *((_BYTE *)v50 + 4) = v53 & 1 | v55 & 0xFE;
            LODWORD(v52) = v47[4];
            *((_BYTE *)v47 + 4) = v55 & 1 | v47[1] & 0xFE;
            LODWORD(v53) = v50[4];
            v50[4] = v52;
            v56 = *((_QWORD *)v47 + 3);
            v47[4] = v53;
            v57 = *((_QWORD *)v50 + 3);
            *((_QWORD *)v50 + 3) = v56;
            v58 = *((_BYTE *)v47 + 20);
            *((_QWORD *)v47 + 3) = v57;
            LOBYTE(v56) = *((_BYTE *)v50 + 20);
            *((_BYTE *)v50 + 20) = v58 & 2 | v56 & 0xFD;
            LOBYTE(v57) = v56 & 2 | v47[5] & 0xFD;
            *((_BYTE *)v47 + 20) = v57;
            v59 = v50[5] & 1;
            *((_BYTE *)v50 + 20) = v57 & 1 | v50[5] & 0xFE;
            *((_BYTE *)v47 + 20) = v59 | v47[5] & 0xFE;
            LODWORD(v57) = v47[8];
            v50[8] = v57;
            v60 = (unsigned int)v47[9];
            v50[9] = v60;
            *(_DWORD *)(*(_QWORD *)(v46 + 24LL * (unsigned int)v57) + 8 * v60 + 4) = v48;
          }
          ++v48;
        }
        ++v49;
        v47 += 10;
      }
      while ( v44 != v49 );
      v61 = *(_DWORD *)(v7 + 8);
      while ( v61 < *(v43 - 1) )
      {
        v62 = v61++;
        v63 = &v43[10 * v62];
        sub_182F200(v45, v63);
        sub_182EF00(v45, v63 + 4);
        v43 = *(int **)v7;
        *((_BYTE *)v63 + 20) &= ~1u;
        v63[4] = 1;
        if ( !v43 )
          goto LABEL_63;
      }
      *(v43 - 1) = *(_DWORD *)(v7 + 8);
LABEL_63:
      *(_DWORD *)(v7 + 12) = -1;
    }
  }
}

