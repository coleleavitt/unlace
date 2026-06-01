__int64 __fastcall sub_10C99E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _BYTE *a5,
        signed __int64 a6,
        __int64 a7)
{
  __int64 v7; // r12
  int v8; // eax
  void **v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 i; // rbx
  __int64 v14; // r13
  unsigned int v15; // ebx
  void *v16; // rbp
  __int64 v17; // rdi
  int v18; // eax
  int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // ebp
  __int64 *v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // r10
  char *v26; // r14
  __int64 *v27; // r15
  __int64 *v28; // r12
  __int64 *v29; // r14
  __int64 v30; // rax
  bool v31; // zf
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  char *v36; // rbx
  _QWORD *v38; // r9
  char *v39; // rbx
  char *v40; // r15
  char *v41; // rsi
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rdx
  __m128i *v47; // rcx
  const __m128i *v48; // rax
  void *v49; // r13
  char *v50; // rsi
  int v51; // eax
  __int64 *v52; // rbp
  __int64 *v53; // rbx
  int v54; // r12d
  __int64 v55; // r13
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rax
  int v60; // r14d
  __int64 v61; // r13
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  int v64; // eax
  int v65; // esi
  unsigned __int64 v66; // rbx
  int v67; // ebp
  unsigned __int64 v68; // rax
  char *v69; // rdx
  __int64 v70; // rax
  char *v71; // rdi
  __int64 v72; // rsi
  char *v73; // rcx
  void **p_ptr; // rbp
  __int64 v75; // rdx
  __int64 v76; // rbp
  __int64 *v77; // r13
  __int64 *v78; // r12
  __int64 *v79; // rbx
  __int64 v80; // r14
  int v81; // ecx
  void *v82; // rdi
  char *v83; // rax
  unsigned __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rbx
  unsigned __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rbx
  unsigned __int64 v91; // rax
  char *v92; // rax
  __int64 v93; // rdx
  char *v94; // rdi
  __int64 v95; // rdx
  char *v96; // rdx
  __int64 v97; // rdx
  unsigned int v98; // [rsp+8h] [rbp-370h]
  char *v99; // [rsp+8h] [rbp-370h]
  void **v100; // [rsp+8h] [rbp-370h]
  __int64 v101; // [rsp+10h] [rbp-368h]
  void **v104; // [rsp+30h] [rbp-348h]
  char *v105; // [rsp+30h] [rbp-348h]
  __int64 v108; // [rsp+48h] [rbp-330h]
  __int64 *v109; // [rsp+48h] [rbp-330h]
  void **v110; // [rsp+60h] [rbp-318h]
  __int64 v111; // [rsp+60h] [rbp-318h]
  void **v112; // [rsp+70h] [rbp-308h]
  void **v113; // [rsp+78h] [rbp-300h]
  unsigned int v114; // [rsp+80h] [rbp-2F8h]
  __int64 *v115; // [rsp+80h] [rbp-2F8h]
  __int64 v116; // [rsp+98h] [rbp-2E0h]
  char v118; // [rsp+B7h] [rbp-2C1h]
  __int64 v119; // [rsp+C8h] [rbp-2B0h]
  __int64 v120; // [rsp+C8h] [rbp-2B0h]
  __int64 v121; // [rsp+C8h] [rbp-2B0h]
  __int64 v122; // [rsp+D8h] [rbp-2A0h] BYREF
  __m128i si128; // [rsp+E0h] [rbp-298h] BYREF
  void *v124; // [rsp+F0h] [rbp-288h] BYREF
  __int64 v125; // [rsp+F8h] [rbp-280h]
  _BYTE v126[16]; // [rsp+100h] [rbp-278h] BYREF
  __int64 v127[3]; // [rsp+110h] [rbp-268h] BYREF
  int v128; // [rsp+128h] [rbp-250h]
  void *v129; // [rsp+130h] [rbp-248h] BYREF
  __int64 v130; // [rsp+138h] [rbp-240h]
  _BYTE v131[32]; // [rsp+140h] [rbp-238h] BYREF
  void *v132; // [rsp+160h] [rbp-218h] BYREF
  __int64 v133; // [rsp+168h] [rbp-210h]
  _BYTE v134[32]; // [rsp+170h] [rbp-208h] BYREF
  void *v135; // [rsp+190h] [rbp-1E8h] BYREF
  __int64 v136; // [rsp+198h] [rbp-1E0h]
  __int64 v137; // [rsp+1A0h] [rbp-1D8h]
  __m128 v138; // [rsp+1C0h] [rbp-1B8h] BYREF
  _BYTE v139[48]; // [rsp+1D0h] [rbp-1A8h] BYREF
  char *v140; // [rsp+200h] [rbp-178h] BYREF
  __int64 v141; // [rsp+208h] [rbp-170h] BYREF
  char v142; // [rsp+210h] [rbp-168h] BYREF
  char *v143; // [rsp+228h] [rbp-150h]
  __int64 v144; // [rsp+230h] [rbp-148h]
  char v145; // [rsp+238h] [rbp-140h] BYREF
  char *v146; // [rsp+250h] [rbp-128h]
  __int64 v147; // [rsp+258h] [rbp-120h]
  char v148; // [rsp+260h] [rbp-118h] BYREF
  char *v149; // [rsp+278h] [rbp-100h]
  __int64 v150; // [rsp+280h] [rbp-F8h]
  char v151; // [rsp+288h] [rbp-F0h] BYREF
  void *ptr; // [rsp+2A0h] [rbp-D8h] BYREF
  __int64 v153; // [rsp+2A8h] [rbp-D0h]
  _QWORD v154[3]; // [rsp+2B0h] [rbp-C8h] BYREF
  void *v155; // [rsp+2C8h] [rbp-B0h]
  __int64 v156; // [rsp+2D0h] [rbp-A8h]
  _BYTE v157[24]; // [rsp+2D8h] [rbp-A0h] BYREF
  void *v158; // [rsp+2F0h] [rbp-88h]
  __int64 v159; // [rsp+2F8h] [rbp-80h]
  _BYTE v160[24]; // [rsp+300h] [rbp-78h] BYREF
  void *v161; // [rsp+318h] [rbp-60h]
  __int64 v162; // [rsp+320h] [rbp-58h]
  _BYTE v163[80]; // [rsp+328h] [rbp-50h] BYREF

  if ( *(_DWORD *)(a1 + 28) == 1 )
    return a7;
  v7 = a2;
  if ( !(unsigned __int8)sub_12A8FB0(*a4) )
    return a7;
  if ( (*(_BYTE *)(a2 + 16) & 8) != 0 )
  {
    v118 = sub_2193B10(a3, 825, 1164, 0) ^ 1;
    v8 = *(_DWORD *)(a7 + 8);
    if ( v8 == 9 )
    {
LABEL_157:
      if ( v118 && *(_DWORD *)(a1 + 28) != 2 )
      {
        v140 = (char *)a7;
        ptr = v154;
        v153 = 0x300000000LL;
        sub_10BC1E0((__int64)&ptr, &v140, &v141);
        v36 = (char *)operator new(0x58u);
        sub_10AEED0((__int64)v36, (__int64)&ptr, 58);
        v140 = v36;
        sub_10C7210(a2 + 88, (__int64 *)&v140);
        if ( v140 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v140 + 8LL))(v140);
        sub_10AE1D0((__int64)v36, *(_DWORD *)(a2 + 16), 0);
        v82 = ptr;
        if ( ptr != v154 )
          goto LABEL_153;
        return (__int64)v36;
      }
LABEL_44:
      if ( !(unsigned int)sub_10BAA90(a1, a3, nullptr) )
        goto LABEL_7;
      return a7;
    }
  }
  else
  {
    v118 = 0;
    v8 = *(_DWORD *)(a7 + 8);
    if ( v8 == 9 )
      goto LABEL_44;
  }
  if ( v8 == 8 )
  {
    if ( *(_DWORD *)(a7 + 12) != 46 )
      goto LABEL_44;
    goto LABEL_157;
  }
  if ( v8 != 7 )
    goto LABEL_44;
LABEL_7:
  v129 = v131;
  v9 = &v135;
  v130 = 0x300000000LL;
  v141 = 0x300000000LL;
  v144 = 0x300000000LL;
  v147 = 0x300000000LL;
  v150 = 0x300000000LL;
  v116 = a2 + 24;
  v112 = (void **)&si128;
  v140 = &v142;
  v143 = &v145;
  v146 = &v148;
  v149 = &v151;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23857D0);
  while ( 1 )
  {
    v114 = *(_DWORD *)v112;
    v125 = 0x200000000LL;
    LODWORD(ptr) = v114;
    v124 = v126;
    v132 = v134;
    v133 = 0x300000000LL;
    v10 = sub_10BCAF0(v116, (int *)&ptr);
    v11 = (unsigned int)v125;
    for ( i = v12; i != v10; v10 = std::_Rb_tree_increment() )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v10 + 40);
        if ( v11 + 1 > (unsigned __int64)HIDWORD(v125) )
          break;
        *((_QWORD *)v124 + v11) = v14;
        v11 = (unsigned int)(v125 + 1);
        LODWORD(v125) = v125 + 1;
        v10 = std::_Rb_tree_increment();
        if ( v10 == i )
          goto LABEL_13;
      }
      sub_22134E0(&v124, v126, v11 + 1, 8);
      *((_QWORD *)v124 + (unsigned int)v125) = v14;
      v11 = (unsigned int)(v125 + 1);
      LODWORD(v125) = v125 + 1;
    }
LABEL_13:
    if ( !(_DWORD)v11 )
      goto LABEL_98;
    v15 = *a4;
    v98 = *a4;
    v101 = *((_QWORD *)a4 + 1);
    if ( v114 == 2 )
      break;
    if ( v114 != 8 )
      goto LABEL_16;
    if ( (unsigned __int8)sub_12A8F90(v15) )
    {
      v11 = (unsigned int)v125;
      goto LABEL_16;
    }
LABEL_98:
    if ( v132 != v134 )
      free(v132);
    if ( v124 != v126 )
      free(v124);
    v112 = (void **)((char *)v112 + 4);
    if ( &v124 == v112 )
    {
      v64 = *(_DWORD *)(a1 + 28);
      if ( !v118 )
      {
        if ( v64 != 2 )
        {
LABEL_105:
          v65 = v130;
          goto LABEL_106;
        }
LABEL_151:
        v36 = (char *)sub_10C7250(v7, (__int64)&v140, 67);
        goto LABEL_152;
      }
      v65 = v130;
      if ( v64 != 2 )
      {
LABEL_106:
        v36 = (char *)a7;
        if ( !v65 )
          goto LABEL_152;
        v155 = v157;
        ptr = v154;
        v158 = v160;
        v153 = 0x300000000LL;
        v156 = 0x300000000LL;
        v159 = 0x300000000LL;
        v161 = v163;
        v162 = 0x300000000LL;
        if ( (*(_BYTE *)(v7 + 16) & 2) == 0 || (unsigned __int8)sub_2193B10(a3, 825, 1164, 0) )
        {
          if ( v118 && *(_DWORD *)(a1 + 28) == 2 )
          {
            v89 = sub_10C77F0(v7, (__int64)&v129, 64);
            v138.m128_i32[0] = 8;
            v90 = v89;
            v91 = sub_10BCAF0(v116, (int *)&v138);
            sub_10AE5F0((__int64)&ptr, v90, *(_QWORD *)(v91 + 40), 0, 8);
          }
          else
          {
            v66 = operator new(0x58u);
            sub_10AEE10(v66, (__int64)&v129, 60);
            v138.m128_u64[0] = v66;
            sub_10C7210(v7 + 88, (__int64 *)&v138);
            if ( v138.m128_u64[0] )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v138.m128_u64[0] + 8LL))(v138.m128_u64[0]);
            v67 = *(_DWORD *)(v7 + 16);
            v68 = sub_10BCDC0(v7);
            sub_10AE700((__int64)&ptr, v66, *(_QWORD *)(v68 + 40), 0, v67);
          }
        }
        else
        {
          v86 = sub_10C77F0(v7, (__int64)&v129, 63);
          v138.m128_i32[0] = 2;
          v87 = v86;
          v88 = sub_10BCAF0(v116, (int *)&v138);
          sub_10AE5F0((__int64)&ptr, v87, *(_QWORD *)(v88 + 40), 0, 2);
        }
        if ( *(_DWORD *)(a1 + 28) == 2 )
        {
          v36 = (char *)sub_10C7250(v7, (__int64)&ptr, 67);
LABEL_167:
          sub_10B76C0((__int64)&ptr);
          goto LABEL_152;
        }
        v69 = (char *)v129;
        v70 = 8LL * (unsigned int)v130;
        v71 = (char *)v129 + v70;
        v72 = v70 >> 3;
        if ( v70 >> 5 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v129 + 12LL) == 67 )
          {
            v83 = (char *)v129;
          }
          else if ( *(_DWORD *)(*((_QWORD *)v129 + 1) + 12LL) == 67 )
          {
            v83 = (char *)v129 + 8;
          }
          else if ( *(_DWORD *)(*((_QWORD *)v129 + 2) + 12LL) == 67 )
          {
            v83 = (char *)v129 + 16;
          }
          else
          {
            v73 = (char *)v129 + 32 * (v70 >> 5);
            if ( *(_DWORD *)(*((_QWORD *)v129 + 3) + 12LL) == 67 )
            {
              v83 = (char *)v129 + 24;
            }
            else
            {
              while ( 1 )
              {
                v83 = v69 + 32;
                if ( v73 == v69 + 32 )
                {
                  v72 = (v71 - v83) >> 3;
                  goto LABEL_127;
                }
                if ( *(_DWORD *)(*((_QWORD *)v69 + 4) + 12LL) == 67 )
                  goto LABEL_163;
                if ( *(_DWORD *)(*((_QWORD *)v69 + 5) + 12LL) == 67 )
                  break;
                if ( *(_DWORD *)(*((_QWORD *)v69 + 6) + 12LL) == 67 )
                {
                  v83 = v69 + 48;
                  goto LABEL_163;
                }
                if ( *(_DWORD *)(*((_QWORD *)v69 + 7) + 12LL) == 67 )
                {
                  v83 = v69 + 56;
                  goto LABEL_163;
                }
                v69 += 32;
              }
              v83 = v69 + 40;
            }
          }
LABEL_163:
          if ( v71 != v83 )
            goto LABEL_164;
          goto LABEL_130;
        }
        v83 = (char *)v129;
LABEL_127:
        if ( v72 != 2 )
        {
          if ( v72 != 3 )
          {
            if ( v72 != 1 )
              goto LABEL_130;
            goto LABEL_192;
          }
          if ( *(_DWORD *)(*(_QWORD *)v83 + 12LL) == 67 )
            goto LABEL_163;
          v83 += 8;
        }
        if ( *(_DWORD *)(*(_QWORD *)v83 + 12LL) == 67 )
          goto LABEL_163;
        v83 += 8;
LABEL_192:
        if ( *(_DWORD *)(*(_QWORD *)v83 + 12LL) == 67 )
          goto LABEL_163;
LABEL_130:
        if ( *(_DWORD *)(a7 + 8) == 7 )
        {
          p_ptr = &ptr;
          v75 = *(_QWORD *)(sub_10BCDC0(v7) + 40);
          goto LABEL_165;
        }
LABEL_164:
        p_ptr = (void **)&v140;
        v75 = *(_QWORD *)(sub_10BCDC0(v7) + 40);
LABEL_165:
        sub_10AE950(&v138, a7, v75, 0, (__int64)p_ptr);
        v36 = (char *)operator new(0x88u);
        sub_10AFC60((__int64)v36, &v138, (__int64)p_ptr);
        v135 = v36;
        sub_10C7210(v7 + 88, (__int64 *)&v135);
        if ( v135 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v135 + 8LL))(v135);
        goto LABEL_167;
      }
      if ( !(unsigned __int8)sub_2193B10(a3, 2053, 3006, 1) )
      {
        if ( *(_DWORD *)(a1 + 28) != 2 )
          goto LABEL_105;
        goto LABEL_151;
      }
      v92 = (char *)v129;
      v65 = v130;
      v93 = 8LL * (unsigned int)v130;
      v94 = (char *)v129 + v93;
      v95 = v93 >> 5;
      if ( v95 )
      {
        if ( *(_DWORD *)(*(_QWORD *)v129 + 12LL) == 60 )
        {
          if ( *(_DWORD *)(*((_QWORD *)v129 + 1) + 12LL) == 60 )
          {
            if ( *(_DWORD *)(*((_QWORD *)v129 + 2) + 12LL) == 60 )
            {
              v96 = (char *)v129 + 32 * v95;
              if ( *(_DWORD *)(*((_QWORD *)v129 + 3) + 12LL) == 60 )
              {
                while ( 1 )
                {
                  if ( v92 + 32 == v96 )
                  {
                    v92 = v96;
                    goto LABEL_207;
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v92 + 4) + 12LL) != 60 )
                    break;
                  if ( *(_DWORD *)(*((_QWORD *)v92 + 5) + 12LL) != 60 )
                  {
                    v92 += 40;
                    goto LABEL_211;
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v92 + 6) + 12LL) != 60 )
                  {
                    v92 += 48;
                    goto LABEL_211;
                  }
                  if ( *(_DWORD *)(*((_QWORD *)v92 + 7) + 12LL) != 60 )
                  {
                    v92 += 56;
                    goto LABEL_211;
                  }
                  v92 += 32;
                }
                v92 += 32;
              }
              else
              {
                v92 = (char *)v129 + 24;
              }
            }
            else
            {
              v92 = (char *)v129 + 16;
            }
          }
          else
          {
            v92 = (char *)v129 + 8;
          }
        }
LABEL_211:
        if ( v94 != v92 && *(_DWORD *)(a1 + 28) == 2 )
          goto LABEL_151;
        goto LABEL_106;
      }
LABEL_207:
      v97 = (v94 - v92) >> 3;
      if ( v97 != 2 )
      {
        if ( v97 != 3 )
        {
          if ( v97 != 1 )
            goto LABEL_106;
          goto LABEL_210;
        }
        if ( *(_DWORD *)(*(_QWORD *)v92 + 12LL) != 60 )
          goto LABEL_211;
        v92 += 8;
      }
      if ( *(_DWORD *)(*(_QWORD *)v92 + 12LL) != 60 )
        goto LABEL_211;
      v92 += 8;
LABEL_210:
      if ( *(_DWORD *)(*(_QWORD *)v92 + 12LL) == 60 )
        goto LABEL_106;
      goto LABEL_211;
    }
  }
  if ( !(unsigned __int8)sub_12A8F80(v15) )
    goto LABEL_98;
  v11 = (unsigned int)v125;
LABEL_16:
  v138.m128_u64[0] = (unsigned __int64)v139;
  v138.m128_u64[1] = 0x200000000LL;
  v104 = (void **)v124;
  v110 = (void **)((char *)v124 + 8 * v11);
  if ( v110 != v124 )
  {
    while ( 1 )
    {
      v16 = *v104;
      v17 = *(_QWORD *)(a1 + 1200);
      v18 = *(_DWORD *)(a1 + 1216);
      if ( !v18 )
        goto LABEL_20;
      v19 = v18 - 1;
      v20 = (v18 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
      v21 = v17 + 72LL * v20;
      if ( v16 == *(void **)v21 )
        goto LABEL_19;
      if ( *(_QWORD *)v21 == -4096 )
      {
LABEL_20:
        if ( v110 == ++v104 )
          break;
      }
      else
      {
        v81 = 1;
        while ( 1 )
        {
          v20 = v19 & (v81 + v20);
          v21 = v17 + 72LL * v20;
          if ( v16 == *(void **)v21 )
            break;
          ++v81;
          if ( *(_QWORD *)v21 == -4096 )
            goto LABEL_20;
        }
LABEL_19:
        ptr = v154;
        v153 = 0x300000000LL;
        if ( !*(_DWORD *)(v21 + 16) )
          goto LABEL_20;
        sub_E180E0((__int64 *)&ptr, (__int64 *)(v21 + 8));
        v38 = ptr;
        v39 = (char *)ptr + 16 * (unsigned int)v153;
        if ( v39 != ptr )
        {
          v40 = (char *)ptr;
          do
          {
            while ( 1 )
            {
              v43 = *((_QWORD *)v40 + 1);
              v44 = *(_QWORD *)v40;
              v135 = v16;
              v45 = v138.m128_u64[0];
              v137 = v43;
              v136 = v44;
              v46 = v138.m128_u32[2] + 1LL;
              v47 = (__m128i *)(v138.m128_u64[0] + 24LL * v138.m128_u32[2]);
              v48 = (const __m128i *)v9;
              if ( v46 > v138.m128_u32[3] )
              {
                if ( v138.m128_u64[0] > (unsigned __int64)v9 || v47 <= (__m128i *)v9 )
                {
                  sub_22134E0(&v138, v139, v46, 24);
                  v47 = (__m128i *)(v138.m128_u64[0] + 24LL * v138.m128_u32[2]);
                  v48 = (const __m128i *)v9;
                }
                else
                {
                  sub_22134E0(&v138, v139, v46, 24);
                  v48 = (const __m128i *)((char *)v9 + v138.m128_u64[0] - v45);
                  v47 = (__m128i *)(v138.m128_u64[0] + 24LL * v138.m128_u32[2]);
                }
              }
              *v47 = _mm_loadu_si128(v48);
              v47[1].m128i_i64[0] = v48[1].m128i_i64[0];
              ++v138.m128_i32[2];
              v49 = (void *)operator new(0x80u);
              sub_10AE2B0((__int64)v49, v101, v98, a5, a6);
              v135 = v49;
              v50 = *(char **)(v7 + 96);
              if ( v50 == *(char **)(v7 + 104) )
              {
                sub_10C6F70(v7 + 88, v50, v9);
              }
              else
              {
                v135 = nullptr;
                v41 = v50 + 8;
                *((_QWORD *)v41 - 1) = v49;
                *(_QWORD *)(v7 + 96) = v41;
              }
              if ( v135 )
                (*(void (__fastcall **)(void *))(*(_QWORD *)v135 + 8LL))(v135);
              v42 = (unsigned int)v133 + 1LL;
              if ( v42 > HIDWORD(v133) )
                break;
              v40 += 16;
              *((_QWORD *)v132 + (unsigned int)v133) = v49;
              LODWORD(v133) = v133 + 1;
              if ( v39 == v40 )
                goto LABEL_58;
            }
            v40 += 16;
            sub_22134E0(&v132, v134, v42, 8);
            *((_QWORD *)v132 + (unsigned int)v133) = v49;
            LODWORD(v133) = v133 + 1;
          }
          while ( v39 != v40 );
LABEL_58:
          v38 = ptr;
        }
        if ( v38 == v154 )
          goto LABEL_20;
        free(v38);
        if ( v110 == ++v104 )
          break;
      }
    }
  }
  if ( (_DWORD)v133 )
  {
    if ( *(_DWORD *)(a7 + 8) == 7 && v114 == 16 && *(_DWORD *)(a7 + 12) != 67 )
    {
      v84 = *(unsigned int *)(*(_QWORD *)(sub_10BCDC0(v7) + 40) + 60LL);
      if ( (unsigned int)v84 <= 0x1F )
      {
        v85 = 4160750114LL;
        if ( _bittest64(&v85, v84) )
          *(_BYTE *)(a7 + 56) = 0;
      }
    }
    sub_12A9820(v9, a1, a3, v98);
    v99 = (char *)v135 + 4 * (unsigned int)v136;
    if ( v135 == v99 )
    {
      v23 = (__int64 *)v132;
      v27 = (__int64 *)((char *)v132 + 8 * (unsigned int)v133);
    }
    else
    {
      v22 = *(_DWORD *)v135;
      v23 = (__int64 *)v132;
      v24 = (unsigned int)v133;
      if ( *(_DWORD *)v135 != 5 )
      {
        v113 = v9;
        v25 = (__int64 *)v132;
        v26 = (char *)v135 + 4;
        v108 = v7;
        while ( 1 )
        {
          v27 = &v25[v24];
          if ( v22 == 4 && v114 == 16 || (v28 = (__int64 *)v138.m128_u64[0], v27 == v25) )
          {
            if ( v99 == v26 )
              goto LABEL_67;
          }
          else
          {
            v105 = v26;
            v29 = v25;
            do
            {
              if ( *(_DWORD *)(*v29 + 12) != 67 )
              {
                sub_10AE130(*v29, v114, v28[1], *v28);
                v30 = sub_10C7A90(a1, v108, a3, v22, *v29, v114);
                v31 = *(_DWORD *)(v30 + 8) == 7;
                *v29 = v30;
                if ( v31 && *(_DWORD *)(a7 + 8) == 7 && v114 == 4 && *(_DWORD *)(a7 + 12) != 67 )
                {
                  *(_BYTE *)(a7 + 56) = 0;
                  v119 = v28[1];
                  v32 = sub_10BCDC0(v108);
                  v33 = *v28;
                  v34 = *(_QWORD *)(v32 + 40);
                  v128 = 4;
                  v127[1] = v34;
                  v127[0] = a7;
                  ptr = v154;
                  v155 = v157;
                  v158 = v160;
                  v127[2] = v119;
                  v161 = v163;
                  v35 = *v29;
                  v153 = 0x300000000LL;
                  v156 = 0x300000000LL;
                  v159 = 0x300000000LL;
                  v162 = 0x300000000LL;
                  sub_10AE5F0((__int64)&ptr, v35, v33, v28[1], 4);
                  v120 = operator new(0x88u);
                  sub_10AFC60(v120, v127, (__int64)&ptr);
                  v122 = v120;
                  sub_10C7210(v108 + 88, &v122);
                  if ( v122 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v122 + 8LL))(v122);
                  *v29 = v120;
                  sub_10B76C0((__int64)&ptr);
                }
                v28 += 3;
              }
              ++v29;
            }
            while ( v27 != v29 );
            v25 = (__int64 *)v132;
            v24 = (unsigned int)v133;
            v26 = v105;
            v27 = (__int64 *)((char *)v132 + 8 * (unsigned int)v133);
            if ( v99 == v105 )
            {
LABEL_67:
              v9 = v113;
              v7 = v108;
              v23 = v25;
              goto LABEL_68;
            }
          }
          v26 += 4;
          v22 = *((_DWORD *)v26 - 1);
          if ( v22 == 5 )
            goto LABEL_67;
        }
      }
      v27 = (__int64 *)((char *)v132 + 8 * (unsigned int)v133);
    }
LABEL_68:
    if ( v23 != v27 )
    {
      v100 = v9;
      do
      {
        while ( 1 )
        {
          v51 = *(_DWORD *)(*v23 + 12);
          if ( v51 == 46 || v51 == 58 )
          {
            if ( v118 )
            {
              if ( *(_DWORD *)(a1 + 28) == 2 )
              {
                v154[0] = *v23;
                v153 = 0x300000001LL;
                ptr = v154;
                *v23 = sub_10C77F0(v7, (__int64)&ptr, 60);
                if ( ptr != v154 )
                  break;
              }
            }
          }
          if ( v27 == ++v23 )
            goto LABEL_77;
        }
        free(ptr);
        ++v23;
      }
      while ( v27 != v23 );
LABEL_77:
      v52 = (__int64 *)v132;
      v53 = (__int64 *)v138.m128_u64[0];
      v109 = (__int64 *)((char *)v132 + 8 * (unsigned int)v133);
      if ( v132 != v109 )
      {
        v111 = v7 + 88;
        v121 = v7;
        v54 = v114;
        do
        {
          while ( 1 )
          {
            v55 = *v52;
            sub_10AE5F0((__int64)&v140, *v52, *v53, v53[1], v54);
            v155 = v157;
            v158 = v160;
            ptr = v154;
            v161 = v163;
            v56 = v53[1];
            v57 = *v53;
            v153 = 0x300000000LL;
            v156 = 0x300000000LL;
            v159 = 0x300000000LL;
            v162 = 0x300000000LL;
            sub_10AE5F0((__int64)&ptr, v55, v57, v56, v54);
            v58 = *(_QWORD *)(v55 + 16);
            v59 = *(unsigned int *)(v55 + 24);
            v60 = *(_DWORD *)(v55 + 12);
            if ( v58 != v58 + 8 * v59 && v54 == 2 )
            {
              v115 = v52;
              v76 = v55;
              v77 = *(__int64 **)(v55 + 16);
              v78 = v53;
              v79 = (__int64 *)(v58 + 8 * v59);
              do
              {
                while ( v60 != 58 )
                {
                  if ( v79 == ++v77 )
                    goto LABEL_140;
                }
                v80 = *v77;
                if ( !(unsigned __int8)sub_2193B10(a3, 825, 1164, 0) )
                  sub_10AE5F0((__int64)&ptr, v80, *v78, v78[1], 2);
                ++v77;
                v60 = *(_DWORD *)(v76 + 12);
              }
              while ( v79 != v77 );
LABEL_140:
              v53 = v78;
              v52 = v115;
              v54 = 2;
            }
            v61 = operator new(0x88u);
            sub_10AFA70(v61, (__int64)&ptr, v60);
            v127[0] = v61;
            sub_10C7210(v111, v127);
            if ( v127[0] )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v127[0] + 8LL))(v127[0]);
            v62 = (unsigned int)v130;
            v63 = (unsigned int)v130 + 1LL;
            if ( v63 > HIDWORD(v130) )
            {
              sub_22134E0(&v129, v131, v63, 8);
              v62 = (unsigned int)v130;
            }
            v53 += 3;
            *((_QWORD *)v129 + v62) = v61;
            LODWORD(v130) = v130 + 1;
            if ( v161 != v163 )
              free(v161);
            if ( v158 != v160 )
              free(v158);
            if ( v155 != v157 )
              free(v155);
            if ( ptr == v154 )
              break;
            free(ptr);
            if ( v109 == ++v52 )
            {
              v9 = v100;
              v7 = v121;
              goto LABEL_94;
            }
          }
          ++v52;
        }
        while ( v109 != v52 );
        v9 = v100;
        v7 = v121;
      }
    }
LABEL_94:
    if ( v135 != v9 + 2 )
      free(v135);
    if ( (_BYTE *)v138.m128_u64[0] != v139 )
      free((void *)v138.m128_u64[0]);
    goto LABEL_98;
  }
  if ( (_BYTE *)v138.m128_u64[0] != v139 )
    free((void *)v138.m128_u64[0]);
  if ( v132 != v134 )
    free(v132);
  if ( v124 != v126 )
    free(v124);
  v36 = (char *)a7;
LABEL_152:
  sub_10B76C0((__int64)&v140);
  v82 = v129;
  if ( v129 != v131 )
LABEL_153:
    free(v82);
  return (__int64)v36;
}

