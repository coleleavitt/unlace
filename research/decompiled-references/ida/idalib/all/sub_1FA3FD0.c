__int64 __fastcall sub_1FA3FD0(unsigned int *a1, _DWORD **a2, __int64 *a3, __int64 *a4)
{
  unsigned int *v4; // r14
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 **v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // r12
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // esi
  __int64 v22; // r10
  unsigned int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // r12
  char *v28; // rbp
  char *v29; // rax
  int v30; // r13d
  char *v31; // rbx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  int *j; // rbx
  int v36; // ecx
  __int64 (__fastcall ***v37)(); // rdi
  __int64 v38; // rdx
  __int64 v39; // rsi
  char v40; // al
  unsigned int v41; // ecx
  char *v42; // rdx
  unsigned int v43; // r14d
  unsigned __int64 v44; // rdx
  unsigned __int8 v45; // si
  unsigned __int8 v46; // al
  char *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rcx
  __int64 v50; // r9
  __int64 v51; // r8
  __int32 v52; // edx
  __int64 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  __int32 *v62; // rax
  unsigned int v63; // r14d
  __int64 v64; // rdx
  __int64 v65; // rdx
  _DWORD *v66; // rax
  int v67; // eax
  __int64 v68; // rax
  int v69; // ebx
  unsigned __int64 v70; // r12
  unsigned int v71; // r12d
  __int32 *v72; // rax
  char *v74; // rdi
  char *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rsi
  char *v78; // rax
  int *v79; // r13
  int v80; // ebx
  unsigned __int64 v81; // r12
  int v82; // eax
  __int64 v83; // r9
  __int64 v84; // rdx
  int *v85; // rax
  int v86; // r11d
  int v87; // edx
  bool v88; // zf
  __int64 v89; // rax
  __int64 v90; // r8
  unsigned __int64 v91; // r12
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  __int64 v95; // r8
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rsi
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  _QWORD *v102; // r12
  _QWORD *v103; // rsi
  __int64 i; // rcx
  __int64 *v105; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v106; // [rsp+0h] [rbp-D8h]
  unsigned int v107; // [rsp+0h] [rbp-D8h]
  __int64 v108; // [rsp+0h] [rbp-D8h]
  int v109; // [rsp+0h] [rbp-D8h]
  __int32 v110; // [rsp+0h] [rbp-D8h]
  int *v111; // [rsp+0h] [rbp-D8h]
  unsigned int *v112; // [rsp+8h] [rbp-D0h]
  __int64 *v113; // [rsp+8h] [rbp-D0h]
  __int64 *v117; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v118; // [rsp+28h] [rbp-B0h]
  unsigned int v119; // [rsp+28h] [rbp-B0h]
  __int64 v120; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v121; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v122; // [rsp+38h] [rbp-A0h]
  int v123; // [rsp+44h] [rbp-94h] BYREF
  __int64 v124; // [rsp+48h] [rbp-90h] BYREF
  __m128 v125; // [rsp+50h] [rbp-88h] BYREF
  __int64 (__fastcall **v126)(); // [rsp+60h] [rbp-78h] BYREF
  int v127; // [rsp+68h] [rbp-70h]
  __int128 v128; // [rsp+70h] [rbp-68h]
  char *v129; // [rsp+80h] [rbp-58h]
  char v130; // [rsp+88h] [rbp-50h]
  int v131; // [rsp+8Ch] [rbp-4Ch]
  _DWORD **v132; // [rsp+90h] [rbp-48h]

  v4 = a1;
  v132 = a2;
  v127 = 2;
  v130 = 0;
  v131 = 1;
  v129 = nullptr;
  v128 = 0;
  v126 = &off_2BEBEE0;
  sub_227B8B0(&v126, 0, 0, 0);
  v123 = 0;
  sub_227BF10(&v126, &v123, 4);
  if ( !a4 )
    goto LABEL_18;
  v6 = *a4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*a4 & 2) == 0 )
  {
    if ( v6 )
      goto LABEL_5;
LABEL_18:
    LODWORD(v124) = 0;
    sub_227BF10(&v126, &v124, 4);
    goto LABEL_19;
  }
  if ( !*(_DWORD *)(v6 + 8) )
    goto LABEL_18;
  a4 = *(__int64 **)v6;
LABEL_5:
  v7 = *a4;
  if ( !*a4 )
    goto LABEL_18;
  if ( (v7 & 4) == 0 )
    goto LABEL_18;
  v8 = (__int64 **)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  v118 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    goto LABEL_18;
  v125.m128_i32[0] = v8[1] - *v8;
  sub_227BF10(&v126, &v125, 4);
  v12 = *v8;
  v105 = v8[1];
  if ( *v8 != v105 )
  {
    while ( 1 )
    {
      v17 = *a3;
      v18 = *v12;
      v19 = *(unsigned int *)(*a3 + 1264);
      v124 = *v12;
      v20 = v17 + 1248;
      if ( !(_DWORD)v19 )
        break;
      v13 = *(_QWORD *)(v17 + 1248);
      v14 = (v19 - 1) & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
      v15 = (__int64 *)(v13 + 8LL * v14);
      v16 = *v15;
      if ( v18 != *v15 )
      {
        v86 = 1;
        v11 = 0;
        if ( v16 == -4096 )
        {
LABEL_84:
          v87 = *(_DWORD *)(v17 + 1256);
          v10 = (unsigned int)(3 * v19);
          v125.m128_u64[0] = (unsigned __int64)v15;
          v9 = (unsigned int)(v87 + 1);
          if ( 4 * (int)v9 < (unsigned int)v10 )
          {
            v22 = v18;
            v10 = (unsigned int)(v19 - *(_DWORD *)(v17 + 1260) - v9);
            if ( (unsigned int)v10 > (unsigned int)v19 >> 3 )
              goto LABEL_86;
            v21 = v19;
LABEL_16:
            sub_1F00150(v17 + 1248, v21, v9, v20, v10, v11);
            sub_1F7DE00((__int64 *)(v17 + 1248), &v124, &v125);
            v22 = v124;
            v13 = *(_QWORD *)(v17 + 1248);
            v19 = *(unsigned int *)(v17 + 1264);
            LODWORD(v9) = *(_DWORD *)(v17 + 1256) + 1;
            v15 = (__int64 *)v125.m128_u64[0];
            v20 = v17 + 1248;
LABEL_86:
            v88 = *v15 == -4096;
            *(_DWORD *)(v17 + 1256) = v9;
            if ( !v88 )
              --*(_DWORD *)(v17 + 1260);
            *v15 = v22;
            sub_1F000E0(&v125, v15, (_QWORD *)(v13 + 8 * v19), v20, 1);
            v89 = *(unsigned int *)(v17 + 1280);
            v90 = v124;
            if ( v89 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 1284) )
            {
              v120 = v124;
              sub_2237220(v17 + 1272, v17 + 1288, v89 + 1, 8);
              v89 = *(unsigned int *)(v17 + 1280);
              v90 = v120;
            }
            *(_QWORD *)(*(_QWORD *)(v17 + 1272) + 8 * v89) = v90;
            ++*(_DWORD *)(v17 + 1280);
            goto LABEL_12;
          }
LABEL_15:
          v21 = 2 * v19;
          goto LABEL_16;
        }
        while ( 1 )
        {
          if ( !v11 && v16 == -8192 )
            v11 = (__int64)v15;
          v14 = (v19 - 1) & (v86 + v14);
          v15 = (__int64 *)(v13 + 8LL * v14);
          v16 = *v15;
          if ( v18 == *v15 )
            break;
          if ( v16 == -4096 )
          {
            if ( v11 )
              v15 = (__int64 *)v11;
            goto LABEL_84;
          }
          ++v86;
        }
      }
      sub_1F000E0(&v125, v15, (_QWORD *)(v13 + 8 * v19), v20, 1);
LABEL_12:
      ++v12;
      v125.m128_i32[0] = sub_1EAC240(*(_QWORD *)(*a3 + 48), v18);
      sub_227BF10(&v126, &v125, 4);
      if ( v105 == v12 )
      {
        v4 = a1;
        goto LABEL_70;
      }
    }
    v125.m128_u64[0] = 0;
    goto LABEL_15;
  }
LABEL_70:
  v79 = *(int **)(v118 + 24);
  v111 = &v79[16 * (unsigned __int64)*(unsigned int *)(v118 + 40)];
  if ( *(_DWORD *)(v118 + 32) && v111 != v79 )
  {
    if ( *v79 != -1 )
      goto LABEL_73;
    do
    {
      if ( (unsigned __int64)(*((_QWORD *)v79 + 1) - 1LL) > 1 )
        break;
      v79 += 16;
      if ( v111 == v79 )
        goto LABEL_19;
    }
    while ( *v79 == -1 );
    if ( v111 != v79 )
    {
LABEL_73:
      v113 = a3 + 3;
      v117 = a3 + 1;
      while ( 1 )
      {
        v80 = *v79;
        v81 = *((_QWORD *)v79 + 1);
        v125.m128_i32[0] = *v79;
        v125.m128_u64[1] = v81;
        v82 = sub_1EADE10((__int64)&v125);
        v84 = *(_QWORD *)(*((_QWORD *)v4 + 13) + 16LL * (v82 & (*v4 - 1)) + 8);
        if ( v84 )
        {
          while ( v82 != *(_DWORD *)(v84 + 32) || *(_DWORD *)v84 != v80 || *(_QWORD *)(v84 + 8) != v81 )
          {
            v84 = *(_QWORD *)(v84 + 24);
            if ( !v84 )
              goto LABEL_101;
          }
        }
        else
        {
LABEL_101:
          v91 = *((_QWORD *)v79 + 2);
          v92 = *((unsigned int *)a3 + 4);
          v93 = *((unsigned int *)a3 + 5);
          v94 = v91 + 8LL * (unsigned int)v79[6];
          v95 = v92;
          if ( v91 == v94 )
          {
            LODWORD(v96) = *((_DWORD *)a3 + 4);
            if ( v93 < v92 )
            {
              v119 = *((_DWORD *)a3 + 4);
              sub_2237220(v117, v113, v119, 8);
              v95 = v119;
              LODWORD(v96) = *((_DWORD *)a3 + 4);
            }
          }
          else
          {
            v83 = ((8 * (unsigned __int64)(unsigned int)v79[6] - 8) >> 3) + 1;
            v96 = v92 + v83;
            if ( v93 < v92 + v83 )
            {
              v122 = ((8 * (unsigned __int64)(unsigned int)v79[6] - 8) >> 3) + 1;
              v121 = v91 + 8LL * (unsigned int)v79[6];
              sub_2237220(v117, v113, v96, 8);
              v83 = v122;
              v95 = (unsigned int)v92;
              v96 = *((unsigned int *)a3 + 4);
              v94 = v121;
              v97 = a3[1] + 8 * v96;
              LODWORD(v96) = v122 + v96;
            }
            else
            {
              v97 = a3[1] + 8 * v92;
            }
            v98 = (-8LL - v91 + v94) >> 3;
            if ( (v91 >= v97 + 16 || v97 >= v91 + 16) && (v98 & 0x1FFFFFFFFFFFFFFCLL) != 0 )
            {
              v99 = v98 + 1;
              v100 = 0;
              do
              {
                *(__m128i *)(v97 + v100) = _mm_loadu_si128((const __m128i *)(v91 + v100));
                v100 += 16;
              }
              while ( 16 * (v99 >> 1) != v100 );
              v101 = 8 * (v99 & 0xFFFFFFFFFFFFFFFELL);
              v102 = (_QWORD *)(v101 + v91);
              v103 = (_QWORD *)(v101 + v97);
              if ( (v99 & 0xFFFFFFFFFFFFFFFELL) != v99 )
                *v103 = *v102;
            }
            else
            {
              for ( i = 0; ; ++i )
              {
                *(_QWORD *)(v97 + 8 * i) = *(_QWORD *)(v91 + 8 * i);
                if ( v98 == i )
                  break;
              }
            }
          }
          v125.m128_u64[0] = __PAIR64__(v96, v95);
          *((_DWORD *)a3 + 4) = v96;
          sub_1F75120(v4, *v79, *((_QWORD *)v79 + 1), (__int64 *)&v125, v95, v83);
        }
        v85 = v79 + 16;
        if ( v79 + 16 == v111 )
          break;
        if ( v79[16] == -1 )
        {
          while ( (unsigned __int64)(*((_QWORD *)v85 + 1) - 1LL) <= 1 )
          {
            v85 += 16;
            if ( v111 == v85 )
              goto LABEL_19;
            if ( *v85 != -1 )
              goto LABEL_82;
          }
          if ( v111 == v85 )
            break;
        }
LABEL_82:
        v79 = v85;
      }
    }
  }
LABEL_19:
  v23 = v4[1];
  v24 = 1;
  if ( v23 > 2 )
  {
    v25 = 4 * v23;
    if ( v25 > 2 )
    {
      _BitScanReverse(&v26, v25 / 3);
      v24 = 1 << (32 - (v26 ^ 0x1F));
    }
  }
  v27 = *v4;
  if ( (_DWORD)v27 == v24 )
  {
    v28 = *((char **)v4 + 13);
  }
  else
  {
    v28 = (char *)calloc(v24, 0x10u);
    if ( !v28 )
      sub_2221CE0("Allocation failed");
    v74 = *((char **)v4 + 13);
    v75 = v74;
    if ( v27 )
    {
      do
      {
        v76 = *((_QWORD *)v75 + 1);
        if ( v76 )
        {
          do
          {
            v77 = *(_QWORD *)(v76 + 24);
            v78 = &v28[16 * (*(_DWORD *)(v76 + 32) & (v24 - 1))];
            *(_QWORD *)(v76 + 24) = *((_QWORD *)v78 + 1);
            *((_QWORD *)v78 + 1) = v76;
            v76 = v77;
            ++*((_DWORD *)v78 + 1);
          }
          while ( v77 );
        }
        v75 += 16;
      }
      while ( v75 != &v74[16 * v27] );
    }
    free(v74);
    *v4 = v24;
    *((_QWORD *)v4 + 13) = v28;
  }
  v112 = v4;
  v29 = v28;
  v30 = 0;
  while ( 1 )
  {
    v31 = &v29[16 * v30];
    if ( *((_QWORD *)v31 + 1) )
    {
      v32 = sub_227AEE0(&v126);
      v33 = v32 + (_DWORD)v129 - v128;
      v34 = *((_DWORD *)v31 + 1);
      *(_DWORD *)v31 = v33;
      v125.m128_i16[0] = v34;
      sub_227BF10(&v126, &v125, 2);
      for ( j = *((int **)v31 + 1); j; j = *((int **)j + 3) )
      {
        v125.m128_i32[0] = j[8];
        sub_227BF10(&v126, &v125, 4);
        v36 = *j;
        LODWORD(v37) = j[4];
        LODWORD(v38) = j[5];
        if ( (unsigned int)*j > 0xB )
        {
LABEL_43:
          v39 = 1;
          v40 = 1;
        }
        else if ( ((1LL << v36) & 0x806) != 0 )
        {
          v39 = 5;
          v40 = 5;
        }
        else if ( ((1LL << v36) & 0x301) != 0 )
        {
          v39 = 9;
          v40 = 9;
        }
        else
        {
          v39 = 2 - (unsigned int)(((1LL << v36) & 0x40) == 0);
          v40 = 2 - (((1LL << v36) & 0x40) == 0);
        }
        v41 = 8 * (v38 - (_DWORD)v37);
        v42 = v129;
        v43 = v41;
        if ( (unsigned __int64)v129 >= *((_QWORD *)&v128 + 1) )
        {
          sub_227BA10(&v126, v39);
        }
        else
        {
          ++v129;
          *v42 = v40;
        }
        v44 = v43;
        do
        {
          while ( 1 )
          {
            v45 = v44 & 0x7F;
            v46 = v44 & 0x7F | 0x80;
            v44 >>= 7;
            if ( v44 )
              v45 = v46;
            v47 = v129;
            if ( (unsigned __int64)v129 >= *((_QWORD *)&v128 + 1) )
              break;
            ++v129;
            *v47 = v45;
            if ( !v44 )
              goto LABEL_39;
          }
          v106 = v44;
          sub_227BA10(&v126, v45);
          v44 = v106;
        }
        while ( v106 );
LABEL_39:
        v37 = &v126;
        v48 = *((_QWORD *)j + 1);
        v107 = *j;
        v125.m128_i8[0] = *j;
        sub_227BF10(&v126, &v125, 1);
        switch ( v107 )
        {
          case 0u:
          case 8u:
          case 9u:
            v125.m128_u64[0] = sub_1F80CA0(*a3, v48, v38, v49, v107, v50);
            sub_227BF10(&v126, &v125, 8);
            break;
          case 1u:
          case 2u:
          case 7u:
          case 0xBu:
            v51 = *a3;
            v125.m128_u64[0] = v48;
            v52 = 0;
            if ( v48 )
            {
              v53 = v51 + 1096;
              v108 = v51;
              v52 = *(_DWORD *)sub_1F90240(v51 + 1096, (__int64 *)&v125, 0, v49, v51, v50);
              if ( !v52 )
              {
                v56 = v108;
                v57 = *(_QWORD *)(v108 + 48);
                if ( !v57
                  || (sub_1EAC1E0(v57),
                      v62 = (__int32 *)sub_1F90240(v53, (__int64 *)&v125, v58, v59, v60, v61),
                      v56 = v108,
                      (v52 = *v62) == 0) )
                {
                  v65 = *(unsigned int *)(v56 + 1092);
                  v110 = *(_DWORD *)(v56 + 1092);
                  *(_DWORD *)(v56 + 1092) = v65 + 1;
                  v66 = (_DWORD *)sub_1F90240(v53, (__int64 *)&v125, v65, v54, v56, v55);
                  v52 = v110;
                  *v66 = v110;
                }
              }
            }
            v125.m128_i32[0] = v52;
            sub_227BF10(&v126, &v125, 4);
            break;
          case 3u:
          case 4u:
          case 5u:
          case 0xAu:
            break;
          case 6u:
            v125.m128_i8[0] = v48;
            sub_227BF10(&v126, &v125, 1);
            break;
          default:
            goto LABEL_43;
        }
        v63 = j[4];
        v109 = j[5];
        sub_227AEE0(&v126);
        while ( v109 != v63 )
        {
          v64 = v63++;
          v125.m128_u64[0] = *(_QWORD *)(a3[1] + 8 * v64);
          sub_227BF10(&v126, &v125, 8);
        }
      }
    }
    if ( *v112 <= ++v30 )
      break;
    v29 = *((char **)v112 + 13);
  }
  v67 = sub_227AEE0(&v126);
  v68 = (unsigned int)(v67 + (_DWORD)v129 - v128);
  v69 = (v68 + 3) & 0xFFFFFFFC;
  v70 = ((v68 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v68 - 1;
  if ( ((v68 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v68 )
  {
    do
    {
      --v70;
      v125.m128_i8[0] = 0;
      sub_227BF10(&v126, &v125, 1);
    }
    while ( v70 != -1 );
  }
  sub_A20800((__int64)&v126, *v112, 1);
  sub_A20800((__int64)&v126, v112[1], 1);
  if ( *v112 )
  {
    v71 = 0;
    do
    {
      v72 = (__int32 *)(*((_QWORD *)v112 + 13) + 16LL * v71++);
      v125.m128_i32[0] = *v72;
      sub_227BF10(&v126, &v125, 4);
    }
    while ( *v112 > v71 );
  }
  **a2 = v69;
  v126 = (__int64 (__fastcall **)())&unk_2C76288;
  return sub_227B7A0(&v126);
}
