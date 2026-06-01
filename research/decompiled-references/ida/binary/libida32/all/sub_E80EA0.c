__int64 __fastcall sub_E80EA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5,
        __int64 a6,
        unsigned __int64 a7,
        int a8,
        _QWORD *a9)
{
  unsigned int v10; // r15d
  int v11; // r13d
  _QWORD *v12; // r12
  unsigned int v13; // edx
  unsigned __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 *v16; // rdx
  char v17; // r12
  unsigned __int64 v18; // rax
  int v19; // r15d
  __int64 result; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r12
  int v24; // r12d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r12
  bool v31; // bp
  bool v32; // r13
  int v33; // ebp
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  bool v37; // bp
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  bool v41; // bp
  unsigned __int64 v42; // rdx
  int v43; // ebp
  __int64 v44; // rax
  unsigned int j; // r12d
  __int64 v46; // rcx
  bool v47; // r8
  int v48; // edi
  int v49; // eax
  unsigned __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 *v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  int v58; // r10d
  _QWORD *v59; // r9
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  int i; // r14d
  __int64 v63; // rcx
  unsigned int v64; // r8d
  __int64 v65; // rdi
  __int64 v66; // r11
  int v67; // ecx
  __int64 v68; // rsi
  __int64 v69; // r12
  int v70; // ecx
  _QWORD *v71; // rdx
  int v72; // edi
  unsigned int v73; // ecx
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rcx
  _QWORD *v79; // rdx
  int v80; // r9d
  _QWORD *v81; // rcx
  _QWORD *v82; // rdx
  int v83; // r11d
  __int64 v84; // rcx
  unsigned int v85; // edi
  __int64 v86; // rsi
  __int64 v87; // r10
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  unsigned int v91; // r14d
  __int64 v92; // r12
  _QWORD *v93; // rdx
  __int64 v94; // r15
  unsigned __int64 *v95; // rdi
  int v96; // r8d
  unsigned __int64 *v97; // r8
  int v98; // r9d
  unsigned __int64 v99; // [rsp+8h] [rbp-60h]
  int v100; // [rsp+8h] [rbp-60h]
  __int64 v101; // [rsp+8h] [rbp-60h]
  bool v102; // [rsp+10h] [rbp-58h]
  int v103; // [rsp+10h] [rbp-58h]
  __int64 v104; // [rsp+18h] [rbp-50h]
  __m128 v105[4]; // [rsp+20h] [rbp-48h] BYREF

  v10 = *(_DWORD *)(a1 + 16);
  v11 = *(_DWORD *)(a1 + 8);
  v12 = *(_QWORD **)a1;
  if ( !v10 )
    goto LABEL_62;
  a4 = v10 - 1;
  v13 = a4 & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4));
  v14 = &v12[2 * v13];
  v15 = *v14;
  if ( a7 == *v14 )
  {
LABEL_3:
    v16 = &v12[2 * v10];
    v17 = 0;
    sub_E80E40(v105, (__int64 *)v14, v16, a1, 1);
    v18 = v105[0].m128_u64[0];
    goto LABEL_4;
  }
  v48 = 1;
  a5 = nullptr;
  if ( v15 != -1 )
  {
    while ( 1 )
    {
      if ( !a5 && v15 == -2 )
        a5 = v14;
      a6 = (unsigned int)(v48 + 1);
      v13 = a4 & (v48 + v13);
      v14 = &v12[2 * v13];
      v15 = *v14;
      if ( a7 == *v14 )
        goto LABEL_3;
      if ( v15 == -1 )
        break;
      ++v48;
    }
    if ( a5 )
      v14 = a5;
  }
  v49 = v11 + 1;
  if ( 4 * (v11 + 1) >= 3 * v10 )
  {
LABEL_62:
    v53 = (((((((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
            | (2 * v10 - 1)
            | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 4)
          | (((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
          | (2 * v10 - 1)
          | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 8)
        | (((((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
          | (2 * v10 - 1)
          | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 4)
        | (((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
        | (2 * v10 - 1)
        | ((unsigned __int64)(2 * v10 - 1) >> 1);
    v54 = ((v53 >> 16) | v53) + 1;
    if ( (unsigned int)v54 < 0x40 )
      LODWORD(v54) = 64;
    *(_DWORD *)(a1 + 16) = v54;
    v55 = sub_220C370(16LL * (unsigned int)v54, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v55;
    if ( v12 )
    {
      v56 = *(unsigned int *)(a1 + 16);
      v57 = (_QWORD *)v55;
      *(_QWORD *)(a1 + 8) = 0;
      v58 = v56;
      v59 = &v12[2 * v10];
      v60 = (_QWORD *)(v55 + 16 * v56);
      if ( (_QWORD *)v55 != v60 )
      {
        do
        {
          *v57 = -1;
          v57 += 2;
        }
        while ( v60 != v57 );
      }
      v61 = v12;
      for ( i = v58 - 1; v59 != v61; v61 += 2 )
      {
        v63 = *v61;
        if ( (unsigned __int64)(*v61 + 2LL) > 1 )
        {
          if ( !v58 )
          {
            *(_QWORD *)&dword_0 = *v61;
            BUG();
          }
          v64 = i & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
          v65 = v55 + 16LL * v64;
          v66 = *(_QWORD *)v65;
          if ( *(_QWORD *)v65 != v63 && v66 != -1 )
          {
            v100 = 1;
            v94 = 0;
            while ( 1 )
            {
              if ( v66 == -2 && !v94 )
                v94 = v65;
              v64 = i & (v100 + v64);
              v65 = v55 + 16LL * v64;
              v66 = *(_QWORD *)v65;
              if ( v63 == *(_QWORD *)v65 )
                break;
              if ( v66 == -1 )
              {
                if ( v94 )
                  v65 = v94;
                break;
              }
              ++v100;
            }
          }
          *(_QWORD *)v65 = *v61;
          v67 = *((_DWORD *)v61 + 2);
          ++*(_DWORD *)(a1 + 8);
          *(_DWORD *)(v65 + 8) = v67;
        }
      }
      operator delete();
      v12 = *(_QWORD **)a1;
      v70 = *(_DWORD *)(a1 + 16);
      v49 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v69 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v70 = v69;
      v12 = (_QWORD *)(v55 + 16 * v69);
      if ( (_QWORD *)v55 != v12 )
      {
        v71 = (_QWORD *)v55;
        do
        {
          *v71 = -1;
          v71 += 2;
        }
        while ( v12 != v71 );
        v12 = (_QWORD *)v55;
      }
      v49 = 1;
    }
    if ( v70 )
    {
      v72 = v70 - 1;
      v73 = (v70 - 1) & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4));
      v14 = &v12[2 * v73];
      v50 = *v14;
      if ( a7 == *v14 )
        goto LABEL_59;
      if ( v50 != -1 )
      {
        v97 = &v12[2 * (v72 & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4)))];
        v98 = 1;
        v14 = nullptr;
        while ( 1 )
        {
          if ( v50 == -2 && !v14 )
            v14 = v97;
          v73 = v72 & (v98 + v73);
          v97 = &v12[2 * v73];
          v50 = *v97;
          if ( a7 == *v97 )
          {
            v14 = &v12[2 * v73];
            goto LABEL_59;
          }
          if ( v50 == -1 )
            break;
          ++v98;
        }
        if ( v14 )
          goto LABEL_58;
        v14 = &v12[2 * v73];
      }
      goto LABEL_86;
    }
LABEL_165:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  if ( v10 - *(_DWORD *)(a1 + 12) - v49 > v10 >> 3 )
  {
LABEL_58:
    v50 = *v14;
    goto LABEL_59;
  }
  v74 = (((a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2)) >> 4) | (a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2);
  v75 = v74 >> 8;
  v76 = (((v75 | v74) >> 16) | v75 | v74) + 1;
  if ( (unsigned int)v76 < 0x40 )
    LODWORD(v76) = 64;
  *(_DWORD *)(a1 + 16) = v76;
  v77 = sub_220C370(16LL * (unsigned int)v76, 8, 64, v75, a5, a6);
  *(_QWORD *)a1 = v77;
  if ( v12 )
  {
    v78 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v79 = (_QWORD *)v77;
    v80 = v78;
    v81 = (_QWORD *)(v77 + 16 * v78);
    if ( (_QWORD *)v77 != v81 )
    {
      do
      {
        *v79 = -1;
        v79 += 2;
      }
      while ( v81 != v79 );
    }
    v82 = v12;
    v83 = v80 - 1;
    do
    {
      v84 = *v82;
      if ( (unsigned __int64)(*v82 + 2LL) > 1 )
      {
        if ( !v80 )
        {
          *(_QWORD *)&dword_0 = *v82;
          BUG();
        }
        v85 = v83 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
        v86 = v77 + 16LL * v85;
        v87 = *(_QWORD *)v86;
        if ( v84 != *(_QWORD *)v86 && v87 != -1 )
        {
          v103 = 1;
          v101 = 0;
          while ( 1 )
          {
            if ( !v101 )
            {
              if ( v87 != -2 )
                v86 = 0;
              v101 = v86;
            }
            v85 = v83 & (v103 + v85);
            v86 = v77 + 16LL * v85;
            v87 = *(_QWORD *)v86;
            if ( v84 == *(_QWORD *)v86 )
              break;
            if ( v87 == -1 )
            {
              if ( v101 )
                v86 = v101;
              break;
            }
            ++v103;
          }
        }
        *(_QWORD *)v86 = *v82;
        v88 = *((_DWORD *)v82 + 2);
        ++*(_DWORD *)(a1 + 8);
        *(_DWORD *)(v86 + 8) = v88;
      }
      v82 += 2;
    }
    while ( &v12[2 * v10] != v82 );
    operator delete();
    v12 = *(_QWORD **)a1;
    v89 = *(_DWORD *)(a1 + 16);
    v49 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v92 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v89 = v92;
    v12 = (_QWORD *)(v77 + 16 * v92);
    if ( (_QWORD *)v77 != v12 )
    {
      v93 = (_QWORD *)v77;
      do
      {
        *v93 = -1;
        v93 += 2;
      }
      while ( v12 != v93 );
      v12 = (_QWORD *)v77;
    }
    v49 = 1;
  }
  if ( !v89 )
    goto LABEL_165;
  v90 = v89 - 1;
  v91 = v90 & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4));
  v14 = &v12[2 * v91];
  v50 = *v14;
  if ( *v14 == a7 )
  {
    v50 = a7;
LABEL_59:
    *(_DWORD *)(a1 + 8) = v49;
    if ( v50 != -1 )
      --*(_DWORD *)(a1 + 12);
    goto LABEL_61;
  }
  if ( v50 != -1 )
  {
    v95 = &v12[2 * v91];
    v96 = 1;
    v14 = nullptr;
    while ( 1 )
    {
      if ( v50 == -2 && !v14 )
        v14 = v95;
      v91 = v90 & (v96 + v91);
      v95 = &v12[2 * v91];
      v50 = *v95;
      if ( a7 == *v95 )
      {
        v14 = &v12[2 * v91];
        goto LABEL_59;
      }
      if ( v50 == -1 )
        break;
      ++v96;
    }
    if ( v14 )
      goto LABEL_58;
    v14 = &v12[2 * v91];
  }
LABEL_86:
  *(_DWORD *)(a1 + 8) = v49;
LABEL_61:
  *((_DWORD *)v14 + 2) = v11;
  v51 = *(unsigned int *)(a1 + 16);
  *v14 = a7;
  v52 = &v12[2 * v51];
  v17 = 1;
  sub_E80E40(v105, (__int64 *)v14, v52, a1, 1);
  v18 = v105[0].m128_u64[0];
LABEL_4:
  v19 = *(_DWORD *)(v18 + 8);
  result = *(unsigned int *)(a1 + 184);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(a1 + 176, a1 + 192, result + 1, 4);
    result = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * result) = v19;
  ++*(_DWORD *)(a1 + 184);
  if ( v17 )
  {
    result = *(_QWORD *)(a1 + 32);
    v21 = a7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (unsigned __int64)(result + 1) > *(_QWORD *)(a1 + 40) )
    {
      sub_22130D0(a1 + 24, a1 + 48, result + 1, 1);
      result = *(_QWORD *)(a1 + 32);
      v21 = a7 & 0xFFFFFFFFFFFFFFF8LL;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + result) = a7 == 0;
    ++*(_QWORD *)(a1 + 32);
    if ( a7 )
    {
      v22 = a7 & 7;
      v23 = v22;
      if ( (_DWORD)v22 == 7 )
      {
        v24 = 3;
        if ( *(_DWORD *)v21 <= 3u )
          v24 = *(_DWORD *)v21;
        v23 = (unsigned int)(v24 + 8);
      }
      v25 = *(unsigned int *)(a1 + 184);
      v26 = *(unsigned int *)(a1 + 188);
      if ( v25 + 1 > v26 )
      {
        v99 = v21;
        sub_22134E0(a1 + 176, a1 + 192, v25 + 1, 4);
        v25 = *(unsigned int *)(a1 + 184);
        v22 = a7 & 7;
        v21 = v99;
      }
      v27 = *(_QWORD *)(a1 + 176);
      *(_DWORD *)(v27 + 4 * v25) = v23;
      result = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
      *(_DWORD *)(a1 + 184) = result;
      switch ( v23 )
      {
        case 0LL:
          if ( (_DWORD)v22 )
            v21 = 0;
          return sub_21FEE70(a1 + 176, *(_QWORD *)(v21 + 16) + 16LL, **(unsigned int **)(v21 + 16));
        case 1LL:
        case 2LL:
        case 11LL:
          v34 = *(_QWORD *)(a1 + 32);
          v105[0].m128_u64[0] = a7;
          if ( (unsigned __int64)(v34 + 1) > *(_QWORD *)(a1 + 40) )
          {
            sub_22130D0(a1 + 24, a1 + 48, v34 + 1, 1);
            v34 = *(_QWORD *)(a1 + 32);
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v34) = 0;
          v35 = *(_QWORD *)(a1 + 32);
          v36 = v35 + 1;
          v37 = (v105[0].m128_i8[0] & 3) != 1;
          *(_QWORD *)(a1 + 32) = v35 + 1;
          v38 = v35 + 2;
          if ( v38 > *(_QWORD *)(a1 + 40) )
          {
            sub_22130D0(a1 + 24, a1 + 48, v38, 1);
            v36 = *(_QWORD *)(a1 + 32);
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v36) = v37;
          v39 = *(_QWORD *)(a1 + 32);
          v40 = v39 + 1;
          v41 = (v105[0].m128_i8[0] & 3) == 1;
          *(_QWORD *)(a1 + 32) = v39 + 1;
          v42 = v39 + 2;
          if ( v42 > *(_QWORD *)(a1 + 40) )
          {
            sub_22130D0(a1 + 24, a1 + 48, v42, 1);
            v40 = *(_QWORD *)(a1 + 32);
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v40) = v41;
          ++*(_QWORD *)(a1 + 32);
          v43 = sub_FBABF0(v105);
          v44 = *(unsigned int *)(a1 + 184);
          if ( v44 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
          {
            sub_22134E0(a1 + 176, a1 + 192, v44 + 1, 4);
            v44 = *(unsigned int *)(a1 + 184);
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v44) = v43;
          ++*(_DWORD *)(a1 + 184);
          if ( !v43 )
            v43 = 1;
          for ( j = 0; j != v43; ++j )
          {
            result = sub_FBAC20(v105, j);
            v46 = *(_QWORD *)(a1 + 32);
            v47 = result != 0;
            if ( (unsigned __int64)(v46 + 1) > *(_QWORD *)(a1 + 40) )
            {
              v104 = result;
              v102 = result != 0;
              sub_22130D0(a1 + 24, a1 + 48, v46 + 1, 1);
              v46 = *(_QWORD *)(a1 + 32);
              result = v104;
              v47 = v102;
            }
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v46) = v47;
            ++*(_QWORD *)(a1 + 32);
            if ( result )
              result = sub_21FEE70(a1 + 176, *(_QWORD *)(result + 16) + 16LL, **(unsigned int **)(result + 16));
          }
          return result;
        case 3LL:
        case 4LL:
        case 5LL:
          if ( (_DWORD)v22 == 7 )
          {
            v68 = 0;
          }
          else
          {
            if ( (_DWORD)v22 == 3 || (unsigned int)(v22 - 4) <= 1 )
            {
              if ( a9 )
                return sub_E847E0(a1, *a9, v27, v26, v22, v21);
              goto LABEL_109;
            }
            v22 = (unsigned int)(v22 - 3);
            v68 = 0;
            if ( (unsigned int)v22 <= 2 )
LABEL_109:
              v68 = *(_QWORD *)(v21 + 8);
          }
          return sub_E847E0(a1, v68, v27, v26, v22, v21);
        case 6LL:
          v33 = 0;
          if ( (_DWORD)v22 == 6 )
            v33 = *(_DWORD *)v21;
          if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
          {
            sub_22134E0(a1 + 176, a1 + 192, result + 1, 4);
            result = *(unsigned int *)(a1 + 184);
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * result) = v33;
          ++*(_DWORD *)(a1 + 184);
          return result;
        case 8LL:
          result = *(_QWORD *)(a1 + 32);
          v28 = *(_QWORD *)(a1 + 40);
          v29 = result + 1;
          if ( (_DWORD)v22 != 7 || *(_DWORD *)v21 )
          {
            v32 = 0;
            v30 = 0;
            v31 = 0;
            if ( v29 <= v28 )
            {
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + result) = 0;
              ++*(_QWORD *)(a1 + 32);
              return result;
            }
          }
          else
          {
            v30 = *(_QWORD *)(v21 + 16);
            v31 = v30 != 0;
            v32 = v30 != 0;
            if ( v29 <= v28 )
              goto LABEL_20;
          }
          sub_22130D0(a1 + 24, a1 + 48, v29, 1);
          result = *(_QWORD *)(a1 + 32);
LABEL_20:
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + result) = v32;
          ++*(_QWORD *)(a1 + 32);
          if ( v31 )
            return sub_E81B80(a1, v30);
          return result;
        case 9LL:
          if ( (_DWORD)v22 != 7 || *(_DWORD *)v21 != 1 )
            BUG();
          return sub_21FEE70(
                   a1 + 176,
                   *(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL,
                   **(unsigned int **)(*(_QWORD *)(v21 + 16) + 16LL));
        default:
          return result;
      }
    }
  }
  return result;
}

