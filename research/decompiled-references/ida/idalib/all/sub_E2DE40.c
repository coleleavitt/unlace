__int64 __fastcall sub_E2DE40(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r12
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r15d
  int v18; // esi
  int v19; // r10d
  __int64 v20; // r8
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r15
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // r12
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  int v34; // r10d
  unsigned int v35; // eax
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rbp
  size_t v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // r8
  __int64 v42; // r9
  void (__fastcall *v43)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64); // rax
  char *v44; // rsi
  char *v45; // rsi
  __int64 v46; // rbp
  unsigned int v47; // r14d
  __int64 *v48; // r13
  unsigned __int64 v49; // rsi
  unsigned int v50; // ecx
  __int64 *v51; // rdx
  __int64 v52; // rax
  char v53; // al
  __int64 v54; // rax
  unsigned __int64 v55; // rsi
  __int64 v56; // r8
  __int64 *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // edi
  __int64 v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r11
  __int64 *v68; // r8
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v71; // rdx
  int v72; // edi
  int v73; // edi
  __int64 v74; // r10
  unsigned int v75; // esi
  __int64 *v76; // rcx
  __int64 v77; // r9
  int v78; // esi
  int v79; // r8d
  unsigned int v80; // edi
  int v81; // r10d
  __int64 *v82; // r9
  unsigned __int64 v83; // rax
  __int64 v84; // rax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r11
  _QWORD *i; // rdx
  __int64 *v89; // rax
  __int64 v90; // rdx
  int v91; // edi
  int v92; // edi
  __int64 v93; // r9
  unsigned int v94; // esi
  __int64 *v95; // rcx
  __int64 v96; // r8
  int v97; // esi
  int v98; // edi
  unsigned int v99; // r12d
  int v100; // r9d
  __int64 *v101; // r8
  __int64 v102; // rcx
  _QWORD *v103; // rcx
  _QWORD *v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rcx
  _QWORD *v107; // rdx
  int v108; // r14d
  __int64 *v109; // r12
  __int64 *v110; // r10
  __int64 v111; // [rsp+8h] [rbp-60h]
  int v112; // [rsp+8h] [rbp-60h]
  char v113; // [rsp+10h] [rbp-58h]
  int v114; // [rsp+10h] [rbp-58h]
  int v115; // [rsp+14h] [rbp-54h]
  int v116; // [rsp+18h] [rbp-50h]
  bool v117; // [rsp+1Fh] [rbp-49h]
  __m128 v118[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a1 + 296;
  v5 = *(unsigned int *)(a1 + 312);
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 296);
  if ( (_DWORD)v5 )
  {
    v8 = (v5 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v9 = (__int64 *)(v7 + 16LL * v8);
    v10 = *v9;
    if ( v6 == *v9 )
    {
LABEL_3:
      sub_E2D6D0(v118, v9, (__int64 *)(16 * v5 + v7), v3, 1);
      v11 = v118[0].m128_u64[0];
      goto LABEL_4;
    }
    v18 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v19 = v18 + 1;
        v8 = (v5 - 1) & (v18 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v20 = *v9;
        if ( v6 == *v9 )
          goto LABEL_3;
        v18 = v19;
      }
      while ( v20 != -4096 );
    }
  }
  sub_E2D6D0(v118, (__int64 *)(v7 + 16LL * (unsigned int)v5), (__int64 *)(v7 + 16LL * (unsigned int)v5), v3, 1);
  v11 = v118[0].m128_u64[0];
LABEL_4:
  v12 = (__int64 *)(*(_QWORD *)(a1 + 296) + 16LL * *(unsigned int *)(a1 + 312));
  sub_E2D6D0(v118, v12, v12, v3, 1);
  if ( v118[0].m128_u64[0] == v11 )
  {
    v21 = *a2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*a2 & 2) != 0 && v21 )
    {
      v113 = 0;
      v22 = *(_QWORD *)(v21 + 8);
    }
    else
    {
      v53 = sub_B79700(*a2 & 0xFFFFFFFFFFFFFFFCLL);
      v22 = *(_QWORD *)(v21 + 48);
      v113 = v53;
      v54 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      v13 = (unsigned int)*(unsigned __int8 *)(v54 + 16) - 43;
      if ( (unsigned int)v13 <= 1
        || (v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v13 <= 1)
        && (v54 = sub_F63050(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), v12, v13, v14)) != 0 )
      {
        while ( (*(_BYTE *)(v54 + 18) & 0x10) != 0 )
        {
          v55 = *(_QWORD *)(v54 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v54 = *(_QWORD *)v55;
          v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v55 + 16LL) - 43;
          if ( (unsigned int)v13 > 1 )
            v54 = sub_F63050(v54, v55, v13, v14);
        }
        v22 = *(_QWORD *)(v54 + 32);
      }
    }
    v24 = sub_CE6180(*(_QWORD *)a1, v22, v13, v14, v15);
    if ( BYTE4(v24) )
    {
      v25 = 1;
      if ( (v22 & 1) == 0 )
        v25 = *(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 1LL;
      v26 = *(_QWORD *)(a1 + 128);
      v27 = a1 + 128;
      *(_QWORD *)(a1 + 208) += 88LL;
      v28 = (v26 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)(v28 + 88) && v26 )
      {
        *(_QWORD *)(a1 + 128) = v28 + 88;
      }
      else
      {
        v112 = v25;
        v60 = sub_986170(a1 + 128, 88, 88, 4, v23, v25);
        LODWORD(v25) = v112;
        v28 = v60;
      }
      sub_CEE970(v28, a2, 0, v24, 0, v25, 0, 0, 0);
    }
    else
    {
      v56 = 1;
      v57 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v22 & 1) == 0 )
        v56 = *(_DWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 1;
      v27 = a1 + 128;
      v28 = (__int64)sub_E2C1A0((__int64 *)a1, (unsigned __int64 *)a2, *v57, 0, v56, 0, 0, 0);
    }
    if ( !v28 )
    {
      v59 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 208) += 88LL;
      v28 = (v59 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)(v28 + 88) && v59 )
        *(_QWORD *)(a1 + 128) = v28 + 88;
      else
        v28 = sub_986170(v27, 88, 88, 4, v29, v30);
      sub_CEF540(v28, a2, 0);
    }
    v31 = *(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 224);
    *(_BYTE *)(v28 + 61) = 1;
    v32 = 0;
    v33 = *(_QWORD *)(a1 + 128);
    v111 = v31 >> 3;
    v16 = v31 >> 3;
    v34 = *(_DWORD *)(*(_QWORD *)a1 + 32LL);
    v35 = *(_DWORD *)(a1 + 324);
    if ( v35 != -1 )
      v32 = v35;
    LOBYTE(v30) = v35 != -1;
    v36 = *(unsigned int *)(v28 + 28) + 40LL;
    *(_QWORD *)(a1 + 208) += v36;
    v37 = v36 + ((v33 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(a1 + 136) >= v37 && v33 )
    {
      *(_QWORD *)(a1 + 128) = v37;
      v38 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v117 = v35 != -1;
      v116 = v34;
      v115 = v32;
      v58 = sub_986170(v27, v36, v36, 3, v32, v30);
      LOBYTE(v30) = v117;
      v34 = v116;
      v38 = v58;
      LODWORD(v32) = v115;
    }
    *(_DWORD *)v38 = v34;
    *(_DWORD *)(v38 + 16) = v32;
    *(_BYTE *)(v38 + 20) = v30;
    v39 = *(unsigned int *)(v28 + 28);
    *(_QWORD *)(v38 + 8) = 0;
    *(_DWORD *)(v38 + 24) = 1;
    *(_BYTE *)(v38 + 28) = 0;
    *(_BYTE *)(v38 + 29) = v113;
    *(_QWORD *)(v38 + 32) = v28;
    v118[0].m128_u64[0] = v38;
    memset((void *)(v38 + 40), 0, v39);
    v43 = *(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD, _QWORD, __int64, _QWORD, __int64))(v28 + 64);
    if ( v43 )
      v43(
        v38,
        v38 + *(unsigned int *)(v28 + 24) + 40,
        *(unsigned __int8 *)(v28 + 56),
        *(unsigned __int8 *)(v28 + 57),
        *(unsigned __int8 *)(v28 + 59),
        1,
        0,
        v28);
    *(_BYTE *)(v38 + 27) = 1;
    v44 = *(char **)(a1 + 232);
    if ( v44 == *(char **)(a1 + 240) )
    {
      sub_E29310(a1 + 224, v44, (__int64 *)v118);
    }
    else
    {
      v45 = v44 + 8;
      *((_QWORD *)v45 - 1) = v118[0].m128_u64[0];
      *(_QWORD *)(a1 + 232) = v45;
    }
    v46 = *a2;
    v47 = *(_DWORD *)(a1 + 312);
    v48 = *(__int64 **)(a1 + 296);
    if ( !v47 )
      goto LABEL_60;
    v49 = v47 - 1;
    v50 = v49 & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
    v51 = &v48[2 * v50];
    v52 = *v51;
    if ( v46 == *v51 )
    {
LABEL_33:
      *((_DWORD *)v51 + 2) = v111;
      return v16;
    }
    v61 = 1;
    v41 = nullptr;
    if ( v52 != -4096 )
    {
      while ( 1 )
      {
        if ( !v41 && v52 == -8192 )
          v41 = v51;
        v42 = (unsigned int)(v61 + 1);
        v50 = v49 & (v61 + v50);
        v51 = &v48[2 * v50];
        v52 = *v51;
        if ( v46 == *v51 )
          goto LABEL_33;
        if ( v52 == -4096 )
          break;
        ++v61;
      }
      if ( v41 )
        v51 = v41;
    }
    v40 = (unsigned int)(*(_DWORD *)(a1 + 304) + 1);
    if ( 4 * (int)v40 < 3 * v47 )
    {
      if ( v47 - *(_DWORD *)(a1 + 308) - (unsigned int)v40 > v47 >> 3 )
      {
        v62 = *v51;
        goto LABEL_57;
      }
      v83 = (((v49 >> 1) | v49 | (((v49 >> 1) | v49) >> 2)) >> 4) | (v49 >> 1) | v49 | (((v49 >> 1) | v49) >> 2);
      v84 = ((((v83 >> 8) | v83) >> 16) | (v83 >> 8) | v83) + 1;
      if ( (unsigned int)v84 < 0x40 )
        LODWORD(v84) = 64;
      *(_DWORD *)(a1 + 312) = v84;
      v85 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v84, 8, 64, v40, v41, v42);
      *(_QWORD *)(a1 + 296) = v85;
      if ( v48 )
      {
        v86 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v87 = 2LL * v47;
        for ( i = &v85[2 * v86]; i != v85; v85 += 2 )
          *v85 = -4096;
        v89 = v48;
        do
        {
          v90 = *v89;
          if ( *v89 != -8192 && v90 != -4096 )
          {
            v91 = *(_DWORD *)(a1 + 312);
            if ( !v91 )
            {
              *(_QWORD *)&dword_0 = *v89;
              BUG();
            }
            v92 = v91 - 1;
            v93 = *(_QWORD *)(a1 + 296);
            v94 = v92 & (((unsigned int)v90 >> 9) ^ ((unsigned int)v90 >> 4));
            v95 = (__int64 *)(v93 + 16LL * v94);
            v96 = *v95;
            if ( *v95 != v90 && v96 != -4096 )
            {
              v114 = 1;
              v110 = nullptr;
              while ( 1 )
              {
                if ( v96 == -8192 && !v110 )
                  v110 = v95;
                v94 = v92 & (v114 + v94);
                v95 = (__int64 *)(v93 + 16LL * v94);
                v96 = *v95;
                if ( v90 == *v95 )
                  break;
                if ( v96 == -4096 )
                {
                  if ( v110 )
                    v95 = v110;
                  break;
                }
                ++v114;
              }
            }
            *v95 = v90;
            *((_DWORD *)v95 + 2) = *((_DWORD *)v89 + 2);
            ++*(_DWORD *)(a1 + 304);
          }
          v89 += 2;
        }
        while ( &v48[v87] != v89 );
        operator delete(v48, v87 * 8, 8);
        v85 = *(_QWORD **)(a1 + 296);
        v97 = *(_DWORD *)(a1 + 312);
        LODWORD(v40) = *(_DWORD *)(a1 + 304) + 1;
      }
      else
      {
        v105 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v97 = v105;
        v106 = &v85[2 * v105];
        if ( v85 != v106 )
        {
          v107 = v85;
          do
          {
            *v107 = -4096;
            v107 += 2;
          }
          while ( v106 != v107 );
        }
        LODWORD(v40) = 1;
      }
      if ( v97 )
      {
        v98 = v97 - 1;
        v99 = (v97 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v51 = &v85[2 * v99];
        v62 = *v51;
        if ( v46 != *v51 )
        {
          v100 = 1;
          v101 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( !v101 && v62 == -8192 )
                v101 = v51;
              v99 = v98 & (v100 + v99);
              v51 = &v85[2 * v99];
              v62 = *v51;
              if ( v46 == *v51 )
                goto LABEL_57;
              if ( v62 == -4096 )
              {
                if ( !v101 )
                  break;
                v62 = *v101;
                v51 = v101;
                goto LABEL_57;
              }
              ++v100;
            }
          }
LABEL_76:
          *(_DWORD *)(a1 + 304) = v40;
LABEL_59:
          *v51 = v46;
          *((_DWORD *)v51 + 2) = 0;
          goto LABEL_33;
        }
        goto LABEL_57;
      }
    }
    else
    {
LABEL_60:
      v63 = (((((((2 * v47 - 1) | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 2)
              | (2 * v47 - 1)
              | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 4)
            | (((2 * v47 - 1) | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 2)
            | (2 * v47 - 1)
            | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 8)
          | (((((2 * v47 - 1) | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 2)
            | (2 * v47 - 1)
            | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 4)
          | (((2 * v47 - 1) | ((unsigned __int64)(2 * v47 - 1) >> 1)) >> 2)
          | (2 * v47 - 1)
          | ((unsigned __int64)(2 * v47 - 1) >> 1);
      v64 = ((v63 >> 16) | v63) + 1;
      if ( (unsigned int)v64 < 0x40 )
        LODWORD(v64) = 64;
      *(_DWORD *)(a1 + 312) = v64;
      v65 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v64, 8, 64, v40, v41, v42);
      *(_QWORD *)(a1 + 296) = v65;
      if ( v48 )
      {
        v66 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v67 = 2LL * v47;
        v68 = &v48[v67];
        for ( j = &v65[2 * v66]; j != v65; v65 += 2 )
          *v65 = -4096;
        for ( k = v48; v68 != k; k += 2 )
        {
          v71 = *k;
          if ( *k != -4096 && v71 != -8192 )
          {
            v72 = *(_DWORD *)(a1 + 312);
            if ( !v72 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v73 = v72 - 1;
            v74 = *(_QWORD *)(a1 + 296);
            v75 = v73 & (((unsigned int)v71 >> 9) ^ ((unsigned int)v71 >> 4));
            v76 = (__int64 *)(v74 + 16LL * v75);
            v77 = *v76;
            if ( *v76 != v71 )
            {
              v108 = 1;
              v109 = nullptr;
              if ( v77 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v109 && v77 == -8192 )
                    v109 = v76;
                  v75 = v73 & (v108 + v75);
                  v76 = (__int64 *)(v74 + 16LL * v75);
                  v77 = *v76;
                  if ( v71 == *v76 )
                    break;
                  if ( v77 == -4096 )
                  {
                    if ( v109 )
                      v76 = v109;
                    break;
                  }
                  ++v108;
                }
              }
            }
            *v76 = v71;
            *((_DWORD *)v76 + 2) = *((_DWORD *)k + 2);
            ++*(_DWORD *)(a1 + 304);
          }
        }
        operator delete(v48, v67 * 8, 8);
        v65 = *(_QWORD **)(a1 + 296);
        v78 = *(_DWORD *)(a1 + 312);
        LODWORD(v40) = *(_DWORD *)(a1 + 304) + 1;
      }
      else
      {
        v102 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v78 = v102;
        v103 = &v65[2 * v102];
        if ( v65 != v103 )
        {
          v104 = v65;
          do
          {
            *v104 = -4096;
            v104 += 2;
          }
          while ( v103 != v104 );
        }
        LODWORD(v40) = 1;
      }
      if ( v78 )
      {
        v79 = v78 - 1;
        v80 = (v78 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v51 = &v65[2 * v80];
        v62 = *v51;
        if ( v46 != *v51 )
        {
          v81 = 1;
          v82 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( v62 == -8192 && !v82 )
                v82 = v51;
              v80 = v79 & (v81 + v80);
              v51 = &v65[2 * v80];
              v62 = *v51;
              if ( v46 == *v51 )
                goto LABEL_57;
              if ( v62 == -4096 )
              {
                if ( !v82 )
                  goto LABEL_76;
                v62 = *v82;
                v51 = v82;
                goto LABEL_57;
              }
              ++v81;
            }
          }
          goto LABEL_76;
        }
LABEL_57:
        *(_DWORD *)(a1 + 304) = v40;
        if ( v62 != -4096 )
          --*(_DWORD *)(a1 + 308);
        goto LABEL_59;
      }
    }
    ++*(_DWORD *)(a1 + 304);
    BUG();
  }
  return *(unsigned int *)(v11 + 8);
}
