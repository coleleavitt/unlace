void __fastcall sub_2206F10(__int64 *a1, int a2, __int64 *a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // esi
  size_t v13; // rdx
  _BYTE *v14; // rbx
  unsigned int *v15; // rbp
  int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 *v20; // r15
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // r8d
  __int64 v25; // rax
  unsigned int v26; // eax
  __int64 v27; // r12
  signed int v28; // esi
  unsigned int v29; // edi
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned int v32; // ecx
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rdx
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // r8
  unsigned int v39; // edi
  unsigned int v40; // eax
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // rax
  int v44; // ecx
  _DWORD *v45; // r10
  unsigned __int64 v46; // rsi
  __int64 v47; // rbp
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r12
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  unsigned __int64 v54; // rdx
  int v55; // r13d
  unsigned int *v56; // r9
  int v57; // esi
  unsigned int v58; // edi
  __int64 v59; // rdx
  unsigned int *v60; // r8
  __int64 v61; // r14
  __int64 v62; // rax
  _DWORD *v63; // r15
  __int64 v64; // r14
  __int64 v65; // rax
  int v66; // r15d
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  _BYTE *v71; // rsi
  bool v72; // di
  char *v73; // rcx
  int v74; // edi
  __int64 v75; // rax
  int v76; // eax
  int v77; // edx
  int v78; // eax
  unsigned __int8 v79; // r9
  int v80; // eax
  unsigned int *v81; // r12
  unsigned int v82; // r13d
  unsigned int v83; // eax
  char v84; // r13
  unsigned int *v85; // r9
  unsigned int v86; // edx
  char v87; // r10
  unsigned int v88; // eax
  int v89; // eax
  char v90; // r14
  unsigned int *v91; // rdx
  char v92; // r10
  unsigned int v93; // r13d
  unsigned int v94; // r9d
  _DWORD *v95; // rax
  char v96; // r9
  __int64 v97; // rsi
  int v98; // edi
  char v99; // dl
  int v100; // edi
  _BYTE *v101; // rax
  unsigned int v102; // ecx
  unsigned int *v103; // rax
  _BYTE *v104; // [rsp+0h] [rbp-298h]
  size_t n; // [rsp+8h] [rbp-290h]
  unsigned int *na; // [rsp+8h] [rbp-290h]
  int v107; // [rsp+10h] [rbp-288h]
  unsigned int *v108; // [rsp+10h] [rbp-288h]
  __int64 v109; // [rsp+18h] [rbp-280h]
  int v110; // [rsp+18h] [rbp-280h]
  unsigned int *v112; // [rsp+20h] [rbp-278h]
  _DWORD *v113; // [rsp+28h] [rbp-270h]
  __int64 v118; // [rsp+50h] [rbp-248h]
  unsigned int v119; // [rsp+58h] [rbp-240h]
  unsigned int v120; // [rsp+5Ch] [rbp-23Ch]
  _BYTE s[568]; // [rsp+60h] [rbp-238h] BYREF

  v6 = (unsigned int)(2 * a2);
  v7 = a1;
  v8 = v6;
  v9 = (unsigned int)(2 * a4);
  v10 = 2 * a2 - v9;
  v11 = (unsigned int)(v6 + 1);
  v12 = 2 * v10;
  v13 = 4 * v11;
  v107 = v9;
  v109 = 4 * v6;
  n = 4 * v9;
  if ( a6 )
  {
    if ( (unsigned int)(v12 + 8 * a4 + 1) > 0x80 )
    {
      v118 = 4 * v11;
      v14 = (_BYTE *)operator new[](4 * v11);
      v15 = (unsigned int *)operator new[](n);
      v104 = (_BYTE *)operator new[](4 * v6);
      v95 = (_DWORD *)operator new[](n);
      v13 = v118;
      v113 = v95;
    }
    else
    {
      v14 = s;
      v15 = (unsigned int *)&s[v13];
      v104 = &s[4 * (unsigned int)(v6 + v9 + 1)];
      v113 = &s[4 * (unsigned int)(v6 + v9 + v11)];
    }
  }
  else if ( (unsigned int)(v12 + 2 * (a4 + v9) + 1) > 0x80 )
  {
    v118 = 4 * v11;
    v14 = (_BYTE *)operator new[](4 * v11);
    v15 = (unsigned int *)operator new[](n);
    v101 = (_BYTE *)operator new[](4 * v6);
    v13 = v118;
    v113 = nullptr;
    v104 = v101;
  }
  else
  {
    v14 = s;
    v113 = nullptr;
    v15 = (unsigned int *)&s[v13];
    v104 = &s[4 * (unsigned int)(v9 + v11)];
  }
  memset(v14, 0, v13);
  if ( a2 )
  {
    v16 = 0;
    v17 = (__int64)&a1[(unsigned int)(a2 - 1) + 1];
    do
    {
      v18 = *v7++;
      *(_DWORD *)&v14[4 * v16] = v18;
      v19 = (unsigned int)(v16 + 1);
      v16 += 2;
      *(_DWORD *)&v14[4 * v19] = HIDWORD(v18);
    }
    while ( (__int64 *)v17 != v7 );
  }
  *(_DWORD *)&v14[4 * v6] = 0;
  memset(v15, 0, n);
  if ( !a4 )
  {
    memset(v104, 0, v109);
    if ( !a6 )
      goto LABEL_109;
    goto LABEL_11;
  }
  v20 = a3;
  v21 = 0;
  do
  {
    v22 = *v20++;
    v15[v21] = v22;
    v23 = (unsigned int)(v21 + 1);
    v21 += 2;
    v15[v23] = HIDWORD(v22);
  }
  while ( &a3[(unsigned int)(a4 - 1) + 1] != v20 );
  memset(v104, 0, v109);
  if ( a6 )
LABEL_11:
    memset(v113, 0, n);
  if ( !v107 )
  {
LABEL_109:
    v8 = v10;
    v102 = v10;
    v24 = 0;
    --v10;
    v25 = 0xFFFFFFFFLL;
    LODWORD(v118) = -1;
    goto LABEL_19;
  }
  v24 = v107 - 1;
  v25 = (unsigned int)(v107 - 1);
  if ( v15[v25] )
  {
    v102 = v10;
    LODWORD(v118) = v107 - 1;
    v10 = v8 - 1;
    v24 = v107;
LABEL_19:
    if ( !(_DWORD)v8 )
    {
      v103 = &v15[v25];
      v28 = v102;
      v39 = *v103;
      na = v103;
      if ( !*v103 )
      {
        v119 = 32;
        v120 = 32;
LABEL_99:
        if ( v24 )
        {
          v90 = v119;
          v91 = v15;
          v92 = 32 - v119;
          v93 = 0;
          do
          {
            v94 = *v91++;
            *(v91 - 1) = v93 | (v94 << v90);
            v93 = v94 >> v92;
          }
          while ( &v15[v24 - 1 + 1] != v91 );
        }
        goto LABEL_52;
      }
      goto LABEL_50;
    }
    if ( !*(_DWORD *)&v14[4 * v10] )
      goto LABEL_21;
    v28 = v102;
    LODWORD(v27) = v102;
LABEL_49:
    v8 = (unsigned int)(v24 + v27);
    LODWORD(v118) = v24 - 1;
    v39 = v15[v24 - 1];
    na = &v15[v24 - 1];
    if ( !v39 )
    {
      v119 = 32;
      v120 = 32;
LABEL_96:
      v39 = 0;
      if ( (_DWORD)v8 )
      {
        v84 = v119;
        v85 = (unsigned int *)v14;
        v86 = 0;
        v87 = 32 - v119;
        do
        {
          v88 = *v85++;
          v39 = v88 >> v87;
          v89 = v86 | (v88 << v84);
          v86 = v39;
          *(v85 - 1) = v89;
        }
        while ( &v14[4 * (unsigned int)(v8 - 1) + 4] != (_BYTE *)v85 );
      }
      goto LABEL_99;
    }
LABEL_50:
    _BitScanReverse(&v40, v39);
    v120 = v40 ^ 0x1F;
    v119 = v40 ^ 0x1F;
    if ( v40 == 0x1F )
    {
      v119 = 0;
      v39 = 0;
LABEL_52:
      *(_DWORD *)&v14[4 * v8] = v39;
      v41 = v28;
      v42 = v39;
      v108 = v15;
      v110 = v24;
      v112 = &v15[v24 - 2];
      v43 = (unsigned int)(v28 + v24);
      v44 = v28 + v24;
      while ( 1 )
      {
        v45 = &v14[4 * v43];
        v46 = *na;
        v47 = (unsigned int)(v44 - 1);
        v48 = ((v42 << 32) | (unsigned __int64)*(unsigned int *)&v14[4 * v47]) / v46;
        v49 = ((v42 << 32) | (unsigned __int64)*(unsigned int *)&v14[4 * v47]) % v46;
        v50 = v48;
        if ( v48 == 0x100000000LL )
        {
          v54 = v46 + v49;
          v50 = 0xFFFFFFFFLL;
          if ( v54 > 0xFFFFFFFF )
            goto LABEL_58;
          v53 = 0xFFFFFFFFLL;
          v51 = *v112;
          v52 = *(unsigned int *)&v14[4 * (v44 - 2)];
        }
        else
        {
          v51 = *v112;
          v52 = *(unsigned int *)&v14[4 * (v44 - 2)];
          if ( v51 * v48 <= v52 + (v49 << 32) )
            goto LABEL_58;
          v53 = v48 - 1;
          v54 = v46 + v49;
          v50 = v48 - 1;
          if ( v54 > 0xFFFFFFFF )
            goto LABEL_58;
          if ( v48 == 0x100000001LL )
            goto LABEL_57;
        }
        v50 = v53;
        if ( v53 * v51 > (v54 << 32) + v52 )
        {
LABEL_57:
          v50 = v48 - 2;
LABEL_58:
          v55 = v50;
          if ( !v110 )
            goto LABEL_69;
          goto LABEL_59;
        }
        v55 = v53;
        if ( !v110 )
        {
LABEL_69:
          --v44;
          *(_DWORD *)&v104[4 * v41--] = v50;
          if ( (int)v41 < 0 )
            goto LABEL_70;
          goto LABEL_64;
        }
LABEL_59:
        v56 = v108;
        v57 = v41;
        v58 = v41;
        v59 = 0;
        v60 = v108;
        do
        {
          v61 = *v56;
          v62 = v58++;
          ++v56;
          v63 = &v14[4 * v62];
          v64 = v50 * v61;
          v65 = (unsigned int)*v63 - v59 - (unsigned int)v64;
          *v63 = v65;
          v66 = HIDWORD(v65);
          v59 = (unsigned int)(HIDWORD(v64) - HIDWORD(v65));
        }
        while ( v44 != v58 );
        v67 = (unsigned int)*v45;
        *v45 = v67 + v66 - HIDWORD(v64);
        if ( v59 > v67 )
        {
          v79 = 0;
          *(_DWORD *)&v104[4 * v41] = v55 - 1;
          do
          {
            while ( 1 )
            {
              v81 = (unsigned int *)&v14[4 * v57];
              v82 = *v60;
              if ( *v81 <= *v60 )
                v82 = *v81;
              v83 = *v81 + *v60 + v79;
              *v81 = v83;
              if ( v82 > v83 )
                break;
              ++v57;
              ++v60;
              v79 &= v82 == v83;
              v80 = v79;
              if ( v44 == v57 )
                goto LABEL_87;
            }
            ++v57;
            v80 = 1;
            v79 = 1;
            ++v60;
          }
          while ( v44 != v57 );
LABEL_87:
          *v45 += v80;
        }
        else
        {
          *(_DWORD *)&v104[4 * v41] = v55;
        }
        --v41;
        --v44;
        if ( (int)v41 < 0 )
        {
LABEL_70:
          v15 = v108;
          if ( v113 )
          {
            if ( v120 )
            {
              if ( (int)v118 >= 0 )
              {
                v96 = v119;
                v97 = (int)v118;
                v98 = 0;
                v99 = 32 - v119;
                do
                {
                  v113[v97] = v98 | (*(_DWORD *)&v14[4 * v97] >> v96);
                  v100 = *(_DWORD *)&v14[4 * v97--];
                  v98 = v100 << v99;
                }
                while ( (int)v97 >= 0 );
              }
            }
            else if ( (int)v118 >= 0 )
            {
              v68 = (int)v118;
              v69 = 4LL * (int)v118 + 4;
              v70 = 4LL * (int)v118 - 12;
              v71 = &v14[v70];
              v72 = &v14[v70] >= (_BYTE *)v113 + v69;
              v73 = (char *)v113 + v70;
              if ( (&v14[v69] <= v73 || v72) && (unsigned int)v118 > 3 )
              {
                v74 = v118 + 1;
                v75 = 0;
                do
                {
                  *(__m128i *)&v73[v75] = _mm_loadu_si128((const __m128i *)&v71[v75]);
                  v75 -= 16;
                }
                while ( -16LL * ((unsigned int)(v118 + 1) >> 2) != v75 );
                v76 = v118 - (v74 & 0xFFFFFFFC);
                if ( (v74 & 0xFFFFFFFC) != v74 )
                {
                  v113[v76] = *(_DWORD *)&v14[4 * v76];
                  v77 = v76 - 1;
                  if ( v76 )
                  {
                    v78 = v76 - 2;
                    v113[v77] = *(_DWORD *)&v14[4 * v77];
                    if ( v78 != -1 )
                      v113[v78] = *(_DWORD *)&v14[4 * v78];
                  }
                }
              }
              else
              {
                do
                {
                  v113[v68] = *(_DWORD *)&v14[4 * v68];
                  --v68;
                }
                while ( (int)v68 >= 0 );
              }
            }
          }
          goto LABEL_34;
        }
LABEL_64:
        v43 = (unsigned int)v47;
        v42 = *(unsigned int *)&v14[4 * (unsigned int)v47];
      }
    }
    goto LABEL_96;
  }
  while ( 1 )
  {
    v102 = v10 + 1;
    if ( !v24 )
    {
      LODWORD(v118) = -1;
      v8 = v102;
      v25 = 0xFFFFFFFFLL;
      goto LABEL_19;
    }
    ++v10;
    if ( v15[v24 - 1] )
      break;
    --v24;
  }
  if ( v24 + v102 )
  {
    v10 = v24 + v102 - 1;
    if ( *(_DWORD *)&v14[4 * v10] )
    {
      LODWORD(v27) = v102;
      goto LABEL_24;
    }
LABEL_21:
    v26 = v102;
    LODWORD(v27) = v102 - 1 - v10;
    while ( --v26 != (_DWORD)v27 )
    {
      if ( *(_DWORD *)&v14[4 * (v26 + v10 - v102)] )
      {
        LODWORD(v27) = v26;
        break;
      }
    }
  }
  else
  {
    LODWORD(v27) = v102;
  }
LABEL_24:
  v28 = v27;
  if ( v24 != 1 )
    goto LABEL_49;
  v29 = *v15;
  if ( (int)v27 >= 0 )
  {
    v27 = (int)v27;
    v30 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = *(unsigned int *)&v14[4 * v27] | (v30 << 32);
        if ( v30 )
          break;
        *(_DWORD *)&v104[4 * v27] = 0;
        v30 = 0;
LABEL_28:
        if ( (int)--v27 < 0 )
          goto LABEL_32;
      }
      if ( v29 <= v30 )
      {
        if ( v29 == v30 )
        {
          *(_DWORD *)&v104[4 * v27] = 1;
          v30 = 0;
        }
        else
        {
          *(_DWORD *)&v104[4 * v27] = v30 / v29;
          v30 %= v29;
        }
        goto LABEL_28;
      }
      *(_DWORD *)&v104[4 * v27--] = 0;
      if ( (int)v27 < 0 )
        goto LABEL_32;
    }
  }
  LODWORD(v30) = 0;
LABEL_32:
  if ( v113 )
    *v113 = v30;
LABEL_34:
  if ( a5 && a2 )
  {
    v31 = a5;
    v32 = 0;
    do
    {
      v33 = v32 + 1;
      v34 = v32;
      v31 += 8;
      v32 += 2;
      *(_QWORD *)(v31 - 8) = *(unsigned int *)&v104[4 * v34] | ((unsigned __int64)*(unsigned int *)&v104[4 * v33] << 32);
    }
    while ( v31 != a5 + 8LL * (unsigned int)(a2 - 1) + 8 );
  }
  if ( a6 && a4 )
  {
    v35 = a6;
    v36 = 0;
    do
    {
      v37 = v36 + 1;
      v38 = v36;
      v35 += 8;
      v36 += 2;
      *(_QWORD *)(v35 - 8) = (unsigned int)v113[v38] | ((unsigned __int64)(unsigned int)v113[v37] << 32);
    }
    while ( v35 != a6 + 8LL * (unsigned int)(a4 - 1) + 8 );
  }
  if ( v14 != s )
  {
    operator delete[](v14);
    operator delete[](v15);
    operator delete[](v104);
    if ( v113 )
      operator delete[](v113);
  }
}
