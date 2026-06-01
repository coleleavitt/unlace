__int64 __fastcall sub_1FA4B80(unsigned int *a1, _DWORD **a2, __int64 *a3, __int64 *a4)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  __int64 **v7; // r15
  __int64 **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r15
  __int64 *v13; // rbp
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // r10
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edx
  __int64 v28; // rbp
  char *v29; // r13
  __int64 *v30; // r15
  int v31; // r12d
  char *v32; // r13
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int *j; // rbx
  int v37; // ecx
  __int64 v38; // rdx
  __int64 v39; // r13
  __int64 v40; // rsi
  char v41; // al
  int v42; // r13d
  char *v43; // rdx
  unsigned __int64 v44; // r13
  unsigned __int8 v45; // si
  unsigned __int8 v46; // al
  char *v47; // rax
  __int32 v48; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int32 v52; // edx
  __int64 v53; // r13
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int32 *v62; // rax
  unsigned int v63; // r13d
  __int64 v64; // rdx
  __int64 v65; // rdx
  _DWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rax
  int v69; // ebx
  unsigned __int64 v70; // rbp
  unsigned int v71; // ebp
  __int32 *v72; // rax
  char *v74; // rdi
  char *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rsi
  char *v78; // rax
  __int64 *v79; // r15
  int v80; // ebp
  __int64 v81; // rbx
  int v82; // r12d
  int v83; // eax
  __int64 v84; // rcx
  unsigned __int64 v85; // rdx
  int v86; // r8d
  __int64 v87; // rax
  int v88; // eax
  __int64 v89; // r9
  int v90; // ecx
  __int64 v91; // rax
  __int64 *v92; // rax
  int v93; // r11d
  int v94; // edx
  bool v95; // zf
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rdx
  unsigned __int64 v99; // rbx
  __int64 v100; // rax
  unsigned __int64 v101; // r8
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // r12
  unsigned int v104; // ebp
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // r12
  unsigned __int64 v109; // r12
  __int64 v110; // rax
  unsigned __int64 v111; // rax
  _QWORD *v112; // rbx
  _QWORD *v113; // rcx
  __int64 v114; // rax
  __int64 i; // rax
  __int64 *v117; // [rsp+8h] [rbp-178h]
  __int32 v118; // [rsp+8h] [rbp-178h]
  int v119; // [rsp+8h] [rbp-178h]
  __int64 *v120; // [rsp+8h] [rbp-178h]
  unsigned int v122; // [rsp+10h] [rbp-170h]
  __int64 v123; // [rsp+10h] [rbp-170h]
  __int32 v124; // [rsp+10h] [rbp-170h]
  __int64 **v125; // [rsp+18h] [rbp-168h]
  int v126; // [rsp+20h] [rbp-160h]
  int v127; // [rsp+20h] [rbp-160h]
  int v128; // [rsp+20h] [rbp-160h]
  int v129; // [rsp+20h] [rbp-160h]
  int v130; // [rsp+28h] [rbp-158h]
  __int64 v131; // [rsp+28h] [rbp-158h]
  int v133; // [rsp+54h] [rbp-12Ch] BYREF
  __int64 v134[2]; // [rsp+58h] [rbp-128h] BYREF
  int v135; // [rsp+68h] [rbp-118h]
  __int64 (__fastcall **v136)(); // [rsp+78h] [rbp-108h] BYREF
  int v137; // [rsp+80h] [rbp-100h]
  __int128 v138; // [rsp+88h] [rbp-F8h]
  char *v139; // [rsp+98h] [rbp-E8h]
  char v140; // [rsp+A0h] [rbp-E0h]
  int v141; // [rsp+A4h] [rbp-DCh]
  _DWORD **v142; // [rsp+A8h] [rbp-D8h]
  __m128 ptr; // [rsp+B8h] [rbp-C8h] BYREF
  _BYTE v144[184]; // [rsp+C8h] [rbp-B8h] BYREF

  v142 = a2;
  v137 = 2;
  v140 = 0;
  v141 = 1;
  v139 = nullptr;
  v138 = 0;
  v136 = &off_2BEBEE0;
  sub_227B8B0(&v136, 0, 0, 0);
  v133 = 0;
  sub_227BF10(&v136, &v133, 4);
  if ( !a4 )
    goto LABEL_18;
  v5 = *a4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*a4 & 2) == 0 )
  {
    if ( v5 )
      goto LABEL_5;
LABEL_18:
    LODWORD(v134[0]) = 0;
    sub_227BF10(&v136, v134, 4);
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(v5 + 8) )
    goto LABEL_18;
  a4 = *(__int64 **)v5;
LABEL_5:
  v6 = *a4;
  if ( !*a4 )
    goto LABEL_18;
  if ( (v6 & 4) == 0 )
    goto LABEL_18;
  v7 = (__int64 **)(v6 & 0xFFFFFFFFFFFFFFF8LL);
  v8 = v7;
  v125 = v7;
  if ( !v7 )
    goto LABEL_18;
  ptr.m128_i32[0] = v7[1] - *v7;
  sub_227BF10(&v136, &ptr, 4);
  v12 = v7[1];
  v13 = *v8;
  if ( *v8 != v12 )
  {
    v117 = v12;
    while ( 1 )
    {
      v18 = *a3;
      v19 = *v13;
      v20 = *(unsigned int *)(*a3 + 1264);
      v134[0] = *v13;
      v21 = v18 + 1248;
      if ( !(_DWORD)v20 )
        break;
      v14 = *(_QWORD *)(v18 + 1248);
      v15 = (v20 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v16 = (__int64 *)(v14 + 8LL * v15);
      v17 = *v16;
      if ( v19 != *v16 )
      {
        v93 = 1;
        v11 = 0;
        if ( v17 == -4096 )
        {
LABEL_87:
          v94 = *(_DWORD *)(v18 + 1256);
          v10 = (unsigned int)(3 * v20);
          ptr.m128_u64[0] = (unsigned __int64)v16;
          v9 = (unsigned int)(v94 + 1);
          if ( 4 * (int)v9 < (unsigned int)v10 )
          {
            v23 = v19;
            v10 = (unsigned int)(v20 - *(_DWORD *)(v18 + 1260) - v9);
            if ( (unsigned int)v10 > (unsigned int)v20 >> 3 )
              goto LABEL_89;
            v22 = v20;
LABEL_16:
            sub_1F00150(v18 + 1248, v22, v9, v21, v10, v11);
            sub_1F7DE00((__int64 *)(v18 + 1248), v134, &ptr);
            v23 = v134[0];
            v14 = *(_QWORD *)(v18 + 1248);
            v20 = *(unsigned int *)(v18 + 1264);
            LODWORD(v9) = *(_DWORD *)(v18 + 1256) + 1;
            v16 = (__int64 *)ptr.m128_u64[0];
            v21 = v18 + 1248;
LABEL_89:
            v95 = *v16 == -4096;
            *(_DWORD *)(v18 + 1256) = v9;
            if ( !v95 )
              --*(_DWORD *)(v18 + 1260);
            *v16 = v23;
            sub_1F000E0(&ptr, v16, (_QWORD *)(v14 + 8 * v20), v21, 1);
            v96 = *(unsigned int *)(v18 + 1280);
            v97 = v134[0];
            if ( v96 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 1284) )
            {
              v131 = v134[0];
              sub_2237220(v18 + 1272, v18 + 1288, v96 + 1, 8);
              v96 = *(unsigned int *)(v18 + 1280);
              v97 = v131;
            }
            *(_QWORD *)(*(_QWORD *)(v18 + 1272) + 8 * v96) = v97;
            ++*(_DWORD *)(v18 + 1280);
            goto LABEL_12;
          }
LABEL_15:
          v22 = 2 * v20;
          goto LABEL_16;
        }
        while ( 1 )
        {
          if ( !v11 && v17 == -8192 )
            v11 = (__int64)v16;
          v15 = (v20 - 1) & (v93 + v15);
          v16 = (__int64 *)(v14 + 8LL * v15);
          v17 = *v16;
          if ( v19 == *v16 )
            break;
          if ( v17 == -4096 )
          {
            if ( v11 )
              v16 = (__int64 *)v11;
            goto LABEL_87;
          }
          ++v93;
        }
      }
      sub_1F000E0(&ptr, v16, (_QWORD *)(v14 + 8 * v20), v21, 1);
LABEL_12:
      ++v13;
      ptr.m128_i32[0] = sub_1EAC240(*(_QWORD *)(*a3 + 48), v19);
      sub_227BF10(&v136, &ptr, 4);
      if ( v117 == v13 )
        goto LABEL_68;
    }
    ptr.m128_u64[0] = 0;
    goto LABEL_15;
  }
LABEL_68:
  if ( !*((_DWORD *)v125 + 8) )
    goto LABEL_19;
  v79 = v125[3];
  v120 = &v79[9 * *((unsigned int *)v125 + 10)];
  if ( v79 == v120 )
    goto LABEL_19;
  while ( 1 )
  {
    if ( *(_DWORD *)v79 != -1 )
      goto LABEL_71;
    v114 = v79[1];
    if ( v114 != 1 )
      break;
    if ( *((_DWORD *)v79 + 4) != -1 )
      goto LABEL_119;
LABEL_122:
    v79 += 9;
    if ( v120 == v79 )
      goto LABEL_19;
  }
  if ( v114 == 2 && *((_DWORD *)v79 + 4) == -2 )
    goto LABEL_122;
LABEL_119:
  if ( v120 != v79 )
  {
LABEL_71:
    v80 = *(_DWORD *)v79;
    v81 = v79[1];
    v82 = *((_DWORD *)v79 + 4);
    ptr.m128_u64[0] = (unsigned __int64)v144;
    LODWORD(v134[0]) = v80;
    v134[1] = v81;
    v135 = v82;
    ptr.m128_u64[1] = 0x2000000000LL;
    v83 = sub_1EADE10((__int64)v134);
    v84 = ptr.m128_u32[2];
    v85 = ptr.m128_u32[2] + 1LL;
    if ( v85 > ptr.m128_u32[3] )
    {
      v128 = v83;
      sub_2237220(&ptr, v144, v85, 4);
      v84 = ptr.m128_u32[2];
      v83 = v128;
    }
    *(_DWORD *)(ptr.m128_u64[0] + 4 * v84) = v83;
    v86 = v135;
    ++ptr.m128_i32[2];
    v87 = ptr.m128_u32[2];
    if ( (unsigned __int64)ptr.m128_u32[2] + 1 > ptr.m128_u32[3] )
    {
      v127 = v135;
      sub_2237220(&ptr, v144, ptr.m128_u32[2] + 1LL, 4);
      v87 = ptr.m128_u32[2];
      v86 = v127;
    }
    *(_DWORD *)(ptr.m128_u64[0] + 4 * v87) = v86;
    ++ptr.m128_i32[2];
    v88 = sub_2287CD0(ptr.m128_u64[0], 4LL * ptr.m128_u32[2]);
    v90 = v88;
    if ( (_BYTE *)ptr.m128_u64[0] != v144 )
    {
      v130 = v88;
      v126 = v88;
      free((void *)ptr.m128_u64[0]);
      v90 = v130;
      v88 = v126;
    }
    v91 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL * (v88 & (*a1 - 1)) + 8);
    if ( v91 )
    {
      while ( *(_DWORD *)(v91 + 40) != v90
           || *(_QWORD *)(v91 + 8) != v81
           || *(_DWORD *)v91 != v80
           || *(_DWORD *)(v91 + 16) != v82 )
      {
        v91 = *(_QWORD *)(v91 + 32);
        if ( !v91 )
          goto LABEL_101;
      }
    }
    else
    {
LABEL_101:
      v99 = v79[3];
      v100 = *((unsigned int *)v79 + 8);
      v101 = *((unsigned int *)a3 + 4);
      v102 = *((unsigned int *)a3 + 5);
      v103 = v99 + 8 * v100;
      v104 = *((_DWORD *)a3 + 4);
      if ( v99 == v103 )
      {
        LODWORD(v106) = *((_DWORD *)a3 + 4);
        if ( v102 < v101 )
        {
          sub_2237220(a3 + 1, a3 + 3, *((unsigned int *)a3 + 4), 8);
          LODWORD(v106) = *((_DWORD *)a3 + 4);
        }
      }
      else
      {
        v105 = ((unsigned __int64)(8 * v100 - 8) >> 3) + 1;
        v106 = v101 + v105;
        if ( v102 < v101 + v105 )
        {
          v129 = v105;
          sub_2237220(a3 + 1, a3 + 3, v106, 8);
          v106 = *((unsigned int *)a3 + 4);
          v107 = a3[1] + 8 * v106;
          LODWORD(v106) = v129 + v106;
        }
        else
        {
          v107 = a3[1] + 8 * v101;
        }
        v108 = (-8LL - v99 + v103) >> 3;
        if ( (v99 >= v107 + 16 || v107 >= v99 + 16) && (v108 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
        {
          v109 = v108 + 1;
          v110 = 0;
          do
          {
            *(__m128i *)(v107 + v110) = _mm_loadu_si128((const __m128i *)(v99 + v110));
            v110 += 16;
          }
          while ( 16 * (v109 >> 1) != v110 );
          v111 = 8 * (v109 & 0xFFFFFFFFFFFFFFFELL);
          v112 = (_QWORD *)(v111 + v99);
          v113 = (_QWORD *)(v111 + v107);
          if ( (v109 & 0xFFFFFFFFFFFFFFFELL) != v109 )
            *v113 = *v112;
        }
        else
        {
          for ( i = 0; ; ++i )
          {
            *(_QWORD *)(v107 + 8 * i) = *(_QWORD *)(v99 + 8 * i);
            if ( v108 == i )
              break;
          }
        }
      }
      ptr.m128_u64[0] = __PAIR64__(v106, v104);
      *((_DWORD *)a3 + 4) = v106;
      sub_1F752E0(a1, *(_DWORD *)v79, v79[1], *((_DWORD *)v79 + 4), (__int64 *)&ptr, v89);
    }
    v92 = v79 + 9;
    if ( v79 + 9 == v120 )
      goto LABEL_19;
    if ( *((_DWORD *)v79 + 18) != -1 )
      goto LABEL_85;
    while ( 1 )
    {
      v98 = v92[1];
      if ( v98 == 1 )
      {
        if ( *((_DWORD *)v92 + 4) != -1 )
          goto LABEL_99;
      }
      else if ( v98 != 2 || *((_DWORD *)v92 + 4) != -2 )
      {
LABEL_99:
        if ( v120 == v92 )
          break;
LABEL_85:
        v79 = v92;
        goto LABEL_71;
      }
      v92 += 9;
      if ( v120 == v92 )
        break;
      if ( *(_DWORD *)v92 != -1 )
        goto LABEL_85;
    }
  }
LABEL_19:
  v24 = 1;
  v25 = a1[1];
  if ( v25 > 2 )
  {
    v26 = 4 * v25;
    if ( v26 > 2 )
    {
      _BitScanReverse(&v27, v26 / 3);
      v24 = 1 << (32 - (v27 ^ 0x1F));
    }
  }
  v28 = *a1;
  if ( (_DWORD)v28 == v24 )
  {
    v29 = *((char **)a1 + 13);
  }
  else
  {
    v29 = (char *)calloc(v24, 0x10u);
    if ( !v29 )
      sub_2221CE0("Allocation failed");
    v74 = *((char **)a1 + 13);
    v75 = v74;
    if ( v28 )
    {
      do
      {
        v76 = *((_QWORD *)v75 + 1);
        if ( v76 )
        {
          do
          {
            v77 = *(_QWORD *)(v76 + 32);
            v78 = &v29[16 * (*(_DWORD *)(v76 + 40) & (v24 - 1))];
            *(_QWORD *)(v76 + 32) = *((_QWORD *)v78 + 1);
            *((_QWORD *)v78 + 1) = v76;
            v76 = v77;
            ++*((_DWORD *)v78 + 1);
          }
          while ( v77 );
        }
        v75 += 16;
      }
      while ( v75 != &v74[16 * v28] );
    }
    free(v74);
    *a1 = v24;
    *((_QWORD *)a1 + 13) = v29;
  }
  v30 = a3;
  v31 = 0;
  while ( 1 )
  {
    v32 = &v29[16 * v31];
    if ( *((_QWORD *)v32 + 1) )
    {
      v33 = sub_227AEE0(&v136);
      v34 = v33 + (_DWORD)v139 - v138;
      v35 = *((_DWORD *)v32 + 1);
      *(_DWORD *)v32 = v34;
      ptr.m128_i16[0] = v35;
      sub_227BF10(&v136, &ptr, 2);
      for ( j = *((int **)v32 + 1); j; j = *((int **)j + 4) )
      {
        ptr.m128_i32[0] = j[10];
        sub_227BF10(&v136, &ptr, 4);
        v37 = *j;
        LODWORD(v38) = j[6];
        LODWORD(v39) = j[7];
        if ( (unsigned int)*j > 0xB )
        {
LABEL_42:
          v40 = 5;
          v41 = 5;
        }
        else if ( ((1LL << v37) & 0x806) != 0 )
        {
          v40 = 9;
          v41 = 9;
        }
        else if ( ((1LL << v37) & 0x301) != 0 )
        {
          v40 = 13;
          v41 = 13;
        }
        else
        {
          v40 = 6 - (unsigned int)(((1LL << v37) & 0x40) == 0);
          v41 = 6 - (((1LL << v37) & 0x40) == 0);
        }
        v42 = v39 - v38;
        v43 = v139;
        v44 = (unsigned int)(8 * v42);
        if ( (unsigned __int64)v139 >= *((_QWORD *)&v138 + 1) )
        {
          sub_227BA10(&v136, v40);
        }
        else
        {
          ++v139;
          *v43 = v41;
        }
        do
        {
          while ( 1 )
          {
            v45 = v44 & 0x7F;
            v46 = v44 & 0x7F | 0x80;
            v44 >>= 7;
            if ( v44 )
              v45 = v46;
            v47 = v139;
            if ( (unsigned __int64)v139 >= *((_QWORD *)&v138 + 1) )
              break;
            ++v139;
            *v47 = v45;
            if ( !v44 )
              goto LABEL_38;
          }
          sub_227BA10(&v136, v45);
        }
        while ( v44 );
LABEL_38:
        v48 = j[4];
        v39 = *((_QWORD *)j + 1);
        v122 = *j;
        ptr.m128_i8[0] = *j;
        v118 = v48;
        sub_227BF10(&v136, &ptr, 1);
        switch ( v122 )
        {
          case 0u:
          case 8u:
          case 9u:
            ptr.m128_u64[0] = sub_1F80CA0(*v30, v39, v38, v122, v49, v50);
            sub_227BF10(&v136, &ptr, 8);
            break;
          case 1u:
          case 2u:
          case 7u:
          case 0xBu:
            v51 = *v30;
            ptr.m128_u64[0] = v39;
            v52 = 0;
            if ( v39 )
            {
              v53 = v51 + 1096;
              v123 = v51;
              v52 = *(_DWORD *)sub_1F90240(v51 + 1096, (__int64 *)&ptr, 0, v51, v49, v50);
              if ( !v52 )
              {
                v56 = v123;
                v57 = *(_QWORD *)(v123 + 48);
                if ( !v57
                  || (sub_1EAC1E0(v57),
                      v62 = (__int32 *)sub_1F90240(v53, (__int64 *)&ptr, v58, v59, v60, v61),
                      v56 = v123,
                      (v52 = *v62) == 0) )
                {
                  v65 = *(unsigned int *)(v56 + 1092);
                  v124 = *(_DWORD *)(v56 + 1092);
                  *(_DWORD *)(v56 + 1092) = v65 + 1;
                  v66 = (_DWORD *)sub_1F90240(v53, (__int64 *)&ptr, v65, v56, v54, v55);
                  v52 = v124;
                  *v66 = v124;
                }
              }
            }
            ptr.m128_i32[0] = v52;
            sub_227BF10(&v136, &ptr, 4);
            break;
          case 3u:
          case 4u:
          case 5u:
          case 0xAu:
            break;
          case 6u:
            ptr.m128_i8[0] = v39;
            sub_227BF10(&v136, &ptr, 1);
            break;
          default:
            goto LABEL_42;
        }
        ptr.m128_i32[0] = v118;
        sub_227BF10(&v136, &ptr, 4);
        v63 = j[6];
        v119 = j[7];
        sub_227AEE0(&v136);
        while ( v119 != v63 )
        {
          v64 = v63++;
          ptr.m128_u64[0] = *(_QWORD *)(v30[1] + 8 * v64);
          sub_227BF10(&v136, &ptr, 8);
        }
      }
    }
    if ( *a1 <= ++v31 )
      break;
    v29 = *((char **)a1 + 13);
  }
  v67 = sub_227AEE0(&v136);
  v68 = (unsigned int)(v67 + (_DWORD)v139 - v138);
  v69 = (v68 + 3) & 0xFFFFFFFC;
  v70 = ((v68 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v68 - 1;
  if ( ((v68 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v68 )
  {
    do
    {
      --v70;
      ptr.m128_i8[0] = 0;
      sub_227BF10(&v136, &ptr, 1);
    }
    while ( v70 != -1 );
  }
  sub_A20800((__int64)&v136, *a1, 1);
  sub_A20800((__int64)&v136, a1[1], 1);
  if ( *a1 )
  {
    v71 = 0;
    do
    {
      v72 = (__int32 *)(*((_QWORD *)a1 + 13) + 16LL * v71++);
      ptr.m128_i32[0] = *v72;
      sub_227BF10(&v136, &ptr, 4);
    }
    while ( *a1 > v71 );
  }
  **a2 = v69;
  v136 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&v136);
}
