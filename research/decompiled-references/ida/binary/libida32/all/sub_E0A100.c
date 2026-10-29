__int64 __fastcall sub_E0A100(__int64 a1, __int64 *a2)
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
  __int64 *v67; // r8
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v70; // rdx
  int v71; // edi
  int v72; // edi
  __int64 v73; // r10
  unsigned int v74; // esi
  __int64 *v75; // rcx
  __int64 v76; // r9
  int v77; // esi
  int v78; // r8d
  unsigned int v79; // edi
  int v80; // r10d
  __int64 *v81; // r9
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rdx
  __int64 *v86; // r14
  _QWORD *i; // rdx
  __int64 *v88; // rax
  __int64 v89; // rdx
  int v90; // edi
  int v91; // edi
  __int64 v92; // r9
  unsigned int v93; // esi
  __int64 *v94; // rcx
  __int64 v95; // r8
  int v96; // esi
  int v97; // edi
  unsigned int v98; // r12d
  int v99; // r9d
  __int64 *v100; // r8
  __int64 v101; // rcx
  _QWORD *v102; // rcx
  _QWORD *v103; // rdx
  __int64 v104; // rcx
  _QWORD *v105; // rcx
  _QWORD *v106; // rdx
  int v107; // r14d
  __int64 *v108; // r12
  __int64 *v109; // r10
  __int64 v110; // [rsp+8h] [rbp-60h]
  int v111; // [rsp+8h] [rbp-60h]
  char v112; // [rsp+10h] [rbp-58h]
  int v113; // [rsp+10h] [rbp-58h]
  int v114; // [rsp+14h] [rbp-54h]
  int v115; // [rsp+18h] [rbp-50h]
  bool v116; // [rsp+1Fh] [rbp-49h]
  __m128 v117[4]; // [rsp+20h] [rbp-48h] BYREF

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
      sub_E09990(v117, v9, (__int64 *)(16 * v5 + v7), v3, 1);
      v11 = v117[0].m128_u64[0];
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
  sub_E09990(v117, (__int64 *)(v7 + 16LL * (unsigned int)v5), (__int64 *)(v7 + 16LL * (unsigned int)v5), v3, 1);
  v11 = v117[0].m128_u64[0];
LABEL_4:
  v12 = (__int64 *)(*(_QWORD *)(a1 + 296) + 16LL * *(unsigned int *)(a1 + 312));
  sub_E09990(v117, v12, v12, v3, 1);
  if ( v117[0].m128_u64[0] == v11 )
  {
    v21 = *a2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*a2 & 2) != 0 && v21 )
    {
      v112 = 0;
      v22 = *(_QWORD *)(v21 + 8);
    }
    else
    {
      v53 = sub_B559C0(*a2 & 0xFFFFFFFFFFFFFFFCLL);
      v22 = *(_QWORD *)(v21 + 48);
      v112 = v53;
      v54 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      v13 = (unsigned int)*(unsigned __int8 *)(v54 + 16) - 43;
      if ( (unsigned int)v13 <= 1
        || (v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v54 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v13 <= 1)
        && (v54 = sub_F3F310(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL), v12, v13, v14)) != 0 )
      {
        while ( (*(_BYTE *)(v54 + 18) & 0x10) != 0 )
        {
          v55 = *(_QWORD *)(v54 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v54 = *(_QWORD *)v55;
          v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v55 + 16LL) - 43;
          if ( (unsigned int)v13 > 1 )
            v54 = sub_F3F310(v54, v55, v13, v14);
        }
        v22 = *(_QWORD *)(v54 + 32);
      }
    }
    v24 = sub_CC2440(*(_QWORD *)a1, v22, v13, v14, v15);
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
        v111 = v25;
        v60 = sub_962430(a1 + 128, 88, 88, 4, v23, v25);
        LODWORD(v25) = v111;
        v28 = v60;
      }
      sub_CCAC30(v28, a2, 0, v24, 0, v25, 0, 0, 0);
    }
    else
    {
      v56 = 1;
      v57 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v22 & 1) == 0 )
        v56 = *(_DWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 1;
      v27 = a1 + 128;
      v28 = (__int64)sub_E08460((__int64 *)a1, (unsigned __int64 *)a2, *v57, 0, v56, 0, 0, 0);
    }
    if ( !v28 )
    {
      v59 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 208) += 88LL;
      v28 = (v59 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_QWORD *)(a1 + 136) >= (unsigned __int64)(v28 + 88) && v59 )
        *(_QWORD *)(a1 + 128) = v28 + 88;
      else
        v28 = sub_962430(v27, 88, 88, 4, v29, v30);
      sub_CCB800(v28, a2, 0);
    }
    v31 = *(_QWORD *)(a1 + 232) - *(_QWORD *)(a1 + 224);
    *(_BYTE *)(v28 + 61) = 1;
    v32 = 0;
    v33 = *(_QWORD *)(a1 + 128);
    v110 = v31 >> 3;
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
      v116 = v35 != -1;
      v115 = v34;
      v114 = v32;
      v58 = sub_962430(v27, v36, v36, 3, v32, v30);
      LOBYTE(v30) = v116;
      v34 = v115;
      v38 = v58;
      LODWORD(v32) = v114;
    }
    *(_DWORD *)v38 = v34;
    *(_DWORD *)(v38 + 16) = v32;
    *(_BYTE *)(v38 + 20) = v30;
    v39 = *(unsigned int *)(v28 + 28);
    *(_QWORD *)(v38 + 8) = 0;
    *(_DWORD *)(v38 + 24) = 1;
    *(_BYTE *)(v38 + 28) = 0;
    *(_BYTE *)(v38 + 29) = v112;
    *(_QWORD *)(v38 + 32) = v28;
    v117[0].m128_u64[0] = v38;
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
      sub_E055D0(a1 + 224, v44, (__int64 *)v117);
    }
    else
    {
      v45 = v44 + 8;
      *((_QWORD *)v45 - 1) = v117[0].m128_u64[0];
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
      *((_DWORD *)v51 + 2) = v110;
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
      v82 = (((v49 >> 1) | v49 | (((v49 >> 1) | v49) >> 2)) >> 4) | (v49 >> 1) | v49 | (((v49 >> 1) | v49) >> 2);
      v83 = ((((v82 >> 8) | v82) >> 16) | (v82 >> 8) | v82) + 1;
      if ( (unsigned int)v83 < 0x40 )
        LODWORD(v83) = 64;
      *(_DWORD *)(a1 + 312) = v83;
      v84 = (_QWORD *)sub_220C370(16LL * (unsigned int)v83, 8, 64, v40, v41, v42);
      *(_QWORD *)(a1 + 296) = v84;
      if ( v48 )
      {
        v85 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v86 = &v48[2 * v47];
        for ( i = &v84[2 * v85]; i != v84; v84 += 2 )
          *v84 = -4096;
        v88 = v48;
        do
        {
          v89 = *v88;
          if ( *v88 != -8192 && v89 != -4096 )
          {
            v90 = *(_DWORD *)(a1 + 312);
            if ( !v90 )
            {
              *(_QWORD *)&dword_0 = *v88;
              BUG();
            }
            v91 = v90 - 1;
            v92 = *(_QWORD *)(a1 + 296);
            v93 = v91 & (((unsigned int)v89 >> 9) ^ ((unsigned int)v89 >> 4));
            v94 = (__int64 *)(v92 + 16LL * v93);
            v95 = *v94;
            if ( *v94 != v89 && v95 != -4096 )
            {
              v113 = 1;
              v109 = nullptr;
              while ( 1 )
              {
                if ( v95 == -8192 && !v109 )
                  v109 = v94;
                v93 = v91 & (v113 + v93);
                v94 = (__int64 *)(v92 + 16LL * v93);
                v95 = *v94;
                if ( v89 == *v94 )
                  break;
                if ( v95 == -4096 )
                {
                  if ( v109 )
                    v94 = v109;
                  break;
                }
                ++v113;
              }
            }
            *v94 = v89;
            *((_DWORD *)v94 + 2) = *((_DWORD *)v88 + 2);
            ++*(_DWORD *)(a1 + 304);
          }
          v88 += 2;
        }
        while ( v86 != v88 );
        operator delete();
        v84 = *(_QWORD **)(a1 + 296);
        v96 = *(_DWORD *)(a1 + 312);
        LODWORD(v40) = *(_DWORD *)(a1 + 304) + 1;
      }
      else
      {
        v104 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v96 = v104;
        v105 = &v84[2 * v104];
        if ( v84 != v105 )
        {
          v106 = v84;
          do
          {
            *v106 = -4096;
            v106 += 2;
          }
          while ( v105 != v106 );
        }
        LODWORD(v40) = 1;
      }
      if ( v96 )
      {
        v97 = v96 - 1;
        v98 = (v96 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v51 = &v84[2 * v98];
        v62 = *v51;
        if ( v46 != *v51 )
        {
          v99 = 1;
          v100 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( !v100 && v62 == -8192 )
                v100 = v51;
              v98 = v97 & (v99 + v98);
              v51 = &v84[2 * v98];
              v62 = *v51;
              if ( v46 == *v51 )
                goto LABEL_57;
              if ( v62 == -4096 )
              {
                if ( !v100 )
                  break;
                v62 = *v100;
                v51 = v100;
                goto LABEL_57;
              }
              ++v99;
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
      v65 = (_QWORD *)sub_220C370(16LL * (unsigned int)v64, 8, 64, v40, v41, v42);
      *(_QWORD *)(a1 + 296) = v65;
      if ( v48 )
      {
        v66 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v67 = &v48[2 * v47];
        for ( j = &v65[2 * v66]; j != v65; v65 += 2 )
          *v65 = -4096;
        for ( k = v48; v67 != k; k += 2 )
        {
          v70 = *k;
          if ( *k != -4096 && v70 != -8192 )
          {
            v71 = *(_DWORD *)(a1 + 312);
            if ( !v71 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v72 = v71 - 1;
            v73 = *(_QWORD *)(a1 + 296);
            v74 = v72 & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
            v75 = (__int64 *)(v73 + 16LL * v74);
            v76 = *v75;
            if ( *v75 != v70 )
            {
              v107 = 1;
              v108 = nullptr;
              if ( v76 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v108 && v76 == -8192 )
                    v108 = v75;
                  v74 = v72 & (v107 + v74);
                  v75 = (__int64 *)(v73 + 16LL * v74);
                  v76 = *v75;
                  if ( v70 == *v75 )
                    break;
                  if ( v76 == -4096 )
                  {
                    if ( v108 )
                      v75 = v108;
                    break;
                  }
                  ++v107;
                }
              }
            }
            *v75 = v70;
            *((_DWORD *)v75 + 2) = *((_DWORD *)k + 2);
            ++*(_DWORD *)(a1 + 304);
          }
        }
        operator delete();
        v65 = *(_QWORD **)(a1 + 296);
        v77 = *(_DWORD *)(a1 + 312);
        LODWORD(v40) = *(_DWORD *)(a1 + 304) + 1;
      }
      else
      {
        v101 = *(unsigned int *)(a1 + 312);
        *(_QWORD *)(a1 + 304) = 0;
        v77 = v101;
        v102 = &v65[2 * v101];
        if ( v65 != v102 )
        {
          v103 = v65;
          do
          {
            *v103 = -4096;
            v103 += 2;
          }
          while ( v102 != v103 );
        }
        LODWORD(v40) = 1;
      }
      if ( v77 )
      {
        v78 = v77 - 1;
        v79 = (v77 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
        v51 = &v65[2 * v79];
        v62 = *v51;
        if ( v46 != *v51 )
        {
          v80 = 1;
          v81 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( v62 == -8192 && !v81 )
                v81 = v51;
              v79 = v78 & (v80 + v79);
              v51 = &v65[2 * v79];
              v62 = *v51;
              if ( v46 == *v51 )
                goto LABEL_57;
              if ( v62 == -4096 )
              {
                if ( !v81 )
                  goto LABEL_76;
                v62 = *v81;
                v51 = v81;
                goto LABEL_57;
              }
              ++v80;
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

