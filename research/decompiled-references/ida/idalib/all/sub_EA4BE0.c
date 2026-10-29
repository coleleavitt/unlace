__int64 __fastcall sub_EA4BE0(
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
  int v22; // r8d
  __int64 v23; // r12
  int v24; // r12d
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // r12
  bool v29; // bp
  bool v30; // r13
  int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  bool v35; // bp
  unsigned __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // bp
  unsigned __int64 v40; // rdx
  int v41; // ebp
  __int64 v42; // rax
  unsigned int j; // r12d
  __int64 v44; // rcx
  bool v45; // r8
  int v46; // edi
  int v47; // eax
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 *v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  __int64 v56; // rsi
  int v57; // r10d
  _QWORD *v58; // r9
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  int i; // r14d
  __int64 v62; // rcx
  unsigned int v63; // r8d
  __int64 v64; // rdi
  __int64 v65; // r11
  int v66; // ecx
  __int64 v67; // rsi
  __int64 v68; // r12
  int v69; // ecx
  _QWORD *v70; // rdx
  int v71; // edi
  unsigned int v72; // ecx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rdx
  int v79; // r9d
  __int64 v80; // r15
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
    sub_EA4B80(v105, (__int64 *)v14, v16, a1, 1);
    v18 = v105[0].m128_u64[0];
    goto LABEL_4;
  }
  v46 = 1;
  a5 = nullptr;
  if ( v15 != -1 )
  {
    while ( 1 )
    {
      if ( !a5 && v15 == -2 )
        a5 = v14;
      a6 = (unsigned int)(v46 + 1);
      v13 = a4 & (v46 + v13);
      v14 = &v12[2 * v13];
      v15 = *v14;
      if ( a7 == *v14 )
        goto LABEL_3;
      if ( v15 == -1 )
        break;
      ++v46;
    }
    if ( a5 )
      v14 = a5;
  }
  v47 = v11 + 1;
  if ( 4 * (v11 + 1) >= 3 * v10 )
  {
LABEL_62:
    v51 = (((((((2 * v10 - 1) | ((unsigned __int64)(2 * v10 - 1) >> 1)) >> 2)
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
    v52 = ((v51 >> 16) | v51) + 1;
    if ( (unsigned int)v52 < 0x40 )
      LODWORD(v52) = 64;
    *(_DWORD *)(a1 + 16) = v52;
    v53 = sub_22300B0(16LL * (unsigned int)v52, 8, 64, a4, a5, a6);
    *(_QWORD *)a1 = v53;
    if ( v12 )
    {
      v54 = *(unsigned int *)(a1 + 16);
      v55 = (_QWORD *)v53;
      v56 = 2LL * v10;
      *(_QWORD *)(a1 + 8) = 0;
      v57 = v54;
      v58 = &v12[v56];
      v59 = (_QWORD *)(v53 + 16 * v54);
      if ( (_QWORD *)v53 != v59 )
      {
        do
        {
          *v55 = -1;
          v55 += 2;
        }
        while ( v59 != v55 );
      }
      v60 = v12;
      for ( i = v57 - 1; v58 != v60; v60 += 2 )
      {
        v62 = *v60;
        if ( (unsigned __int64)(*v60 + 2LL) > 1 )
        {
          if ( !v57 )
          {
            *(_QWORD *)&dword_0 = *v60;
            BUG();
          }
          v63 = i & (((unsigned int)v62 >> 9) ^ ((unsigned int)v62 >> 4));
          v64 = v53 + 16LL * v63;
          v65 = *(_QWORD *)v64;
          if ( *(_QWORD *)v64 != v62 && v65 != -1 )
          {
            v100 = 1;
            v94 = 0;
            while ( 1 )
            {
              if ( v65 == -2 && !v94 )
                v94 = v64;
              v63 = i & (v100 + v63);
              v64 = v53 + 16LL * v63;
              v65 = *(_QWORD *)v64;
              if ( v62 == *(_QWORD *)v64 )
                break;
              if ( v65 == -1 )
              {
                if ( v94 )
                  v64 = v94;
                break;
              }
              ++v100;
            }
          }
          *(_QWORD *)v64 = *v60;
          v66 = *((_DWORD *)v60 + 2);
          ++*(_DWORD *)(a1 + 8);
          *(_DWORD *)(v64 + 8) = v66;
        }
      }
      operator delete(v12, v56 * 8, 8);
      v12 = *(_QWORD **)a1;
      v69 = *(_DWORD *)(a1 + 16);
      v47 = *(_DWORD *)(a1 + 8) + 1;
    }
    else
    {
      v68 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = 0;
      v69 = v68;
      v12 = (_QWORD *)(v53 + 16 * v68);
      if ( (_QWORD *)v53 != v12 )
      {
        v70 = (_QWORD *)v53;
        do
        {
          *v70 = -1;
          v70 += 2;
        }
        while ( v12 != v70 );
        v12 = (_QWORD *)v53;
      }
      v47 = 1;
    }
    if ( v69 )
    {
      v71 = v69 - 1;
      v72 = (v69 - 1) & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4));
      v14 = &v12[2 * v72];
      v48 = *v14;
      if ( a7 == *v14 )
        goto LABEL_59;
      if ( v48 != -1 )
      {
        v97 = &v12[2 * (v71 & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4)))];
        v98 = 1;
        v14 = nullptr;
        while ( 1 )
        {
          if ( v48 == -2 && !v14 )
            v14 = v97;
          v72 = v71 & (v98 + v72);
          v97 = &v12[2 * v72];
          v48 = *v97;
          if ( a7 == *v97 )
          {
            v14 = &v12[2 * v72];
            goto LABEL_59;
          }
          if ( v48 == -1 )
            break;
          ++v98;
        }
        if ( v14 )
          goto LABEL_58;
        v14 = &v12[2 * v72];
      }
      goto LABEL_86;
    }
LABEL_165:
    ++*(_DWORD *)(a1 + 8);
    BUG();
  }
  if ( v10 - *(_DWORD *)(a1 + 12) - v47 > v10 >> 3 )
  {
LABEL_58:
    v48 = *v14;
    goto LABEL_59;
  }
  v73 = (((a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2)) >> 4) | (a4 >> 1) | a4 | (((a4 >> 1) | a4) >> 2);
  v74 = v73 >> 8;
  v75 = (((v74 | v73) >> 16) | v74 | v73) + 1;
  if ( (unsigned int)v75 < 0x40 )
    LODWORD(v75) = 64;
  *(_DWORD *)(a1 + 16) = v75;
  v76 = sub_22300B0(16LL * (unsigned int)v75, 8, 64, v74, a5, a6);
  *(_QWORD *)a1 = v76;
  if ( v12 )
  {
    v77 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v78 = (_QWORD *)v76;
    v79 = v77;
    v80 = 2LL * v10;
    v81 = (_QWORD *)(v76 + 16 * v77);
    if ( (_QWORD *)v76 != v81 )
    {
      do
      {
        *v78 = -1;
        v78 += 2;
      }
      while ( v81 != v78 );
    }
    v82 = v12;
    v83 = v79 - 1;
    do
    {
      v84 = *v82;
      if ( (unsigned __int64)(*v82 + 2LL) > 1 )
      {
        if ( !v79 )
        {
          *(_QWORD *)&dword_0 = *v82;
          BUG();
        }
        v85 = v83 & (((unsigned int)v84 >> 9) ^ ((unsigned int)v84 >> 4));
        v86 = v76 + 16LL * v85;
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
            v86 = v76 + 16LL * v85;
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
    while ( &v12[v80] != v82 );
    operator delete(v12, v80 * 8, 8);
    v12 = *(_QWORD **)a1;
    v89 = *(_DWORD *)(a1 + 16);
    v47 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    v92 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v89 = v92;
    v12 = (_QWORD *)(v76 + 16 * v92);
    if ( (_QWORD *)v76 != v12 )
    {
      v93 = (_QWORD *)v76;
      do
      {
        *v93 = -1;
        v93 += 2;
      }
      while ( v12 != v93 );
      v12 = (_QWORD *)v76;
    }
    v47 = 1;
  }
  if ( !v89 )
    goto LABEL_165;
  v90 = v89 - 1;
  v91 = v90 & (((unsigned int)a7 >> 9) ^ ((unsigned int)a7 >> 4));
  v14 = &v12[2 * v91];
  v48 = *v14;
  if ( *v14 == a7 )
  {
    v48 = a7;
LABEL_59:
    *(_DWORD *)(a1 + 8) = v47;
    if ( v48 != -1 )
      --*(_DWORD *)(a1 + 12);
    goto LABEL_61;
  }
  if ( v48 != -1 )
  {
    v95 = &v12[2 * v91];
    v96 = 1;
    v14 = nullptr;
    while ( 1 )
    {
      if ( v48 == -2 && !v14 )
        v14 = v95;
      v91 = v90 & (v96 + v91);
      v95 = &v12[2 * v91];
      v48 = *v95;
      if ( a7 == *v95 )
      {
        v14 = &v12[2 * v91];
        goto LABEL_59;
      }
      if ( v48 == -1 )
        break;
      ++v96;
    }
    if ( v14 )
      goto LABEL_58;
    v14 = &v12[2 * v91];
  }
LABEL_86:
  *(_DWORD *)(a1 + 8) = v47;
LABEL_61:
  *((_DWORD *)v14 + 2) = v11;
  v49 = *(unsigned int *)(a1 + 16);
  *v14 = a7;
  v50 = &v12[2 * v49];
  v17 = 1;
  sub_EA4B80(v105, (__int64 *)v14, v50, a1, 1);
  v18 = v105[0].m128_u64[0];
LABEL_4:
  v19 = *(_DWORD *)(v18 + 8);
  result = *(unsigned int *)(a1 + 184);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, result + 1, 4);
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
      sub_2236E10(a1 + 24, a1 + 48, result + 1, 1);
      result = *(_QWORD *)(a1 + 32);
      v21 = a7 & 0xFFFFFFFFFFFFFFF8LL;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + result) = a7 == 0;
    ++*(_QWORD *)(a1 + 32);
    if ( a7 )
    {
      v22 = a7 & 7;
      v23 = a7 & 7;
      if ( v22 == 7 )
      {
        v24 = 3;
        if ( *(_DWORD *)v21 <= 3u )
          v24 = *(_DWORD *)v21;
        v23 = (unsigned int)(v24 + 8);
      }
      v25 = *(unsigned int *)(a1 + 184);
      if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
      {
        v99 = v21;
        sub_2237220(a1 + 176, a1 + 192, v25 + 1, 4);
        v25 = *(unsigned int *)(a1 + 184);
        v22 = a7 & 7;
        v21 = v99;
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v25) = v23;
      result = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
      *(_DWORD *)(a1 + 184) = result;
      switch ( v23 )
      {
        case 0LL:
          if ( v22 )
            v21 = 0;
          return sub_2222BB0(a1 + 176, *(_QWORD *)(v21 + 16) + 16LL, **(unsigned int **)(v21 + 16));
        case 1LL:
        case 2LL:
        case 11LL:
          v32 = *(_QWORD *)(a1 + 32);
          v105[0].m128_u64[0] = a7;
          if ( (unsigned __int64)(v32 + 1) > *(_QWORD *)(a1 + 40) )
          {
            sub_2236E10(a1 + 24, a1 + 48, v32 + 1, 1);
            v32 = *(_QWORD *)(a1 + 32);
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v32) = 0;
          v33 = *(_QWORD *)(a1 + 32);
          v34 = v33 + 1;
          v35 = (v105[0].m128_i8[0] & 3) != 1;
          *(_QWORD *)(a1 + 32) = v33 + 1;
          v36 = v33 + 2;
          if ( v36 > *(_QWORD *)(a1 + 40) )
          {
            sub_2236E10(a1 + 24, a1 + 48, v36, 1);
            v34 = *(_QWORD *)(a1 + 32);
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v34) = v35;
          v37 = *(_QWORD *)(a1 + 32);
          v38 = v37 + 1;
          v39 = (v105[0].m128_i8[0] & 3) == 1;
          *(_QWORD *)(a1 + 32) = v37 + 1;
          v40 = v37 + 2;
          if ( v40 > *(_QWORD *)(a1 + 40) )
          {
            sub_2236E10(a1 + 24, a1 + 48, v40, 1);
            v38 = *(_QWORD *)(a1 + 32);
          }
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + v38) = v39;
          ++*(_QWORD *)(a1 + 32);
          v41 = sub_FDE930(v105);
          v42 = *(unsigned int *)(a1 + 184);
          if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
          {
            sub_2237220(a1 + 176, a1 + 192, v42 + 1, 4);
            v42 = *(unsigned int *)(a1 + 184);
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v42) = v41;
          ++*(_DWORD *)(a1 + 184);
          if ( !v41 )
            v41 = 1;
          for ( j = 0; j != v41; ++j )
          {
            result = sub_FDE960(v105, j);
            v44 = *(_QWORD *)(a1 + 32);
            v45 = result != 0;
            if ( (unsigned __int64)(v44 + 1) > *(_QWORD *)(a1 + 40) )
            {
              v104 = result;
              v102 = result != 0;
              sub_2236E10(a1 + 24, a1 + 48, v44 + 1, 1);
              v44 = *(_QWORD *)(a1 + 32);
              result = v104;
              v45 = v102;
            }
            *(_BYTE *)(*(_QWORD *)(a1 + 24) + v44) = v45;
            ++*(_QWORD *)(a1 + 32);
            if ( result )
              result = sub_2222BB0(a1 + 176, *(_QWORD *)(result + 16) + 16LL, **(unsigned int **)(result + 16));
          }
          return result;
        case 3LL:
        case 4LL:
        case 5LL:
          if ( v22 == 7 )
          {
            v67 = 0;
          }
          else
          {
            if ( v22 == 3 || (unsigned int)(v22 - 4) <= 1 )
            {
              if ( a9 )
                return sub_EA8520(a1, *a9);
              goto LABEL_109;
            }
            v67 = 0;
            if ( (unsigned int)(v22 - 3) <= 2 )
LABEL_109:
              v67 = *(_QWORD *)(v21 + 8);
          }
          return sub_EA8520(a1, v67);
        case 6LL:
          v31 = 0;
          if ( v22 == 6 )
            v31 = *(_DWORD *)v21;
          if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
          {
            sub_2237220(a1 + 176, a1 + 192, result + 1, 4);
            result = *(unsigned int *)(a1 + 184);
          }
          *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * result) = v31;
          ++*(_DWORD *)(a1 + 184);
          return result;
        case 8LL:
          result = *(_QWORD *)(a1 + 32);
          v26 = *(_QWORD *)(a1 + 40);
          v27 = result + 1;
          if ( v22 != 7 || *(_DWORD *)v21 )
          {
            v30 = 0;
            v28 = 0;
            v29 = 0;
            if ( v27 <= v26 )
            {
              *(_BYTE *)(*(_QWORD *)(a1 + 24) + result) = 0;
              ++*(_QWORD *)(a1 + 32);
              return result;
            }
          }
          else
          {
            v28 = *(_QWORD *)(v21 + 16);
            v29 = v28 != 0;
            v30 = v28 != 0;
            if ( v27 <= v26 )
              goto LABEL_20;
          }
          sub_2236E10(a1 + 24, a1 + 48, v27, 1);
          result = *(_QWORD *)(a1 + 32);
LABEL_20:
          *(_BYTE *)(*(_QWORD *)(a1 + 24) + result) = v30;
          ++*(_QWORD *)(a1 + 32);
          if ( v29 )
            return sub_EA58C0(a1, v28);
          return result;
        case 9LL:
          if ( v22 != 7 || *(_DWORD *)v21 != 1 )
            BUG();
          return sub_2222BB0(
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
