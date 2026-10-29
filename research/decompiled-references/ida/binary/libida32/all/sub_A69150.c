__int64 *__fastcall sub_A69150(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r11
  __int64 i; // r15
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rbp
  _QWORD *v12; // r11
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rbp
  unsigned int v16; // esi
  __int64 v17; // rdi
  unsigned int v18; // r10d
  __int64 v19; // r9
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbp
  unsigned int v25; // esi
  __int64 v26; // rdi
  unsigned int v27; // r10d
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r10
  __int64 v32; // r12
  __int64 v33; // r14
  __int64 v34; // r9
  __int64 v35; // r8
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rbp
  unsigned int v40; // esi
  __int64 v41; // rdi
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 *result; // rax
  __int64 *v46; // r13
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rbp
  unsigned int v50; // esi
  __int64 v51; // rdi
  int v52; // r10d
  int v53; // r10d
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rsi
  int v59; // r10d
  int v60; // r10d
  __int64 v61; // rdi
  int v62; // r8d
  unsigned int v63; // edi
  int v64; // r8d
  unsigned int v65; // edi
  int v66; // r9d
  __int64 v67; // rdi
  unsigned int v68; // r15d
  _QWORD *v69; // r8
  int v70; // r9d
  __int64 v71; // rdi
  unsigned int v72; // r15d
  int v73; // edi
  int v74; // edi
  unsigned int v75; // r14d
  _QWORD *v76; // r10
  int v77; // edi
  int v78; // edi
  unsigned int v79; // r14d
  _QWORD *v80; // r10
  _QWORD *v81; // rsi
  _QWORD *v82; // rcx
  _QWORD *v83; // rsi
  _QWORD *v84; // rdx
  _QWORD *v85; // r8
  int j; // r14d
  int k; // r14d
  _QWORD *v88; // r8
  _QWORD *v89; // r8
  __int64 v90; // [rsp+0h] [rbp-78h]
  __int64 v91; // [rsp+8h] [rbp-70h]
  __int64 v93; // [rsp+18h] [rbp-60h]
  __int64 v94; // [rsp+18h] [rbp-60h]
  __int64 v95; // [rsp+18h] [rbp-60h]
  __int64 v96; // [rsp+18h] [rbp-60h]
  __int64 v97; // [rsp+18h] [rbp-60h]
  __int64 v98; // [rsp+18h] [rbp-60h]
  int v99; // [rsp+18h] [rbp-60h]
  __int64 v100; // [rsp+18h] [rbp-60h]
  _QWORD *v101; // [rsp+18h] [rbp-60h]
  _QWORD *v102; // [rsp+18h] [rbp-60h]
  int v103; // [rsp+18h] [rbp-60h]
  int v104; // [rsp+18h] [rbp-60h]
  int v105; // [rsp+18h] [rbp-60h]
  __int64 v106; // [rsp+20h] [rbp-58h]
  __int64 v107; // [rsp+20h] [rbp-58h]
  __int64 v108; // [rsp+20h] [rbp-58h]
  __int64 v109; // [rsp+20h] [rbp-58h]
  _QWORD *v110; // [rsp+20h] [rbp-58h]
  __int64 v111; // [rsp+20h] [rbp-58h]
  _QWORD *v112; // [rsp+20h] [rbp-58h]
  _QWORD *v113; // [rsp+20h] [rbp-58h]
  __int64 v114; // [rsp+20h] [rbp-58h]
  __int64 v115; // [rsp+20h] [rbp-58h]
  _QWORD *v116; // [rsp+20h] [rbp-58h]
  int v117; // [rsp+20h] [rbp-58h]
  _QWORD *v118; // [rsp+20h] [rbp-58h]
  int v119; // [rsp+20h] [rbp-58h]
  int v120; // [rsp+20h] [rbp-58h]
  int v121; // [rsp+20h] [rbp-58h]
  int v122; // [rsp+20h] [rbp-58h]
  int v123; // [rsp+20h] [rbp-58h]
  _QWORD *v124; // [rsp+20h] [rbp-58h]
  _QWORD *v125; // [rsp+20h] [rbp-58h]
  __int64 v126; // [rsp+28h] [rbp-50h]
  _QWORD *v127; // [rsp+28h] [rbp-50h]
  __int64 v128; // [rsp+28h] [rbp-50h]
  __int64 v129; // [rsp+28h] [rbp-50h]
  __int64 v130; // [rsp+28h] [rbp-50h]
  __int64 v131; // [rsp+28h] [rbp-50h]
  __int64 v132; // [rsp+28h] [rbp-50h]
  __int64 v133; // [rsp+30h] [rbp-48h]

  v6 = a1;
  v91 = a4;
  v90 = a5;
  v93 = (a3 - 1) / 2;
  if ( a2 < v93 )
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 16 * (i + 1);
      v11 = *(_QWORD *)(a1 + v10 - 8);
      v12 = (_QWORD *)(a1 + v10);
      v13 = *(_QWORD *)(a1 + v10);
      v14 = *(_QWORD *)(v11 + 128);
      if ( v14
        || (v128 = *(_QWORD *)(a1 + v10),
            v110 = (_QWORD *)(a1 + v10),
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v11 + 104) + 96LL), *(_QWORD *)(v11 + 104), v13, a4, a5, a6),
            v12 = v110,
            v13 = v128,
            (v14 = *(_QWORD *)(v11 + 128)) != 0) )
      {
        v14 = *(_QWORD *)(v14 + 88);
      }
      v15 = *(_QWORD *)(v90 + 72);
      v16 = *(_DWORD *)(v15 + 80);
      v17 = v15 + 64;
      if ( !v16 )
        goto LABEL_87;
      v18 = v16 - 1;
      v19 = *(_QWORD *)(v15 + 64);
      v20 = (v16 - 1) & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
      v21 = (_QWORD *)(v19 + 16 * v20);
      v22 = *v21;
      if ( v14 == *v21 )
      {
LABEL_9:
        a4 = v21[1];
        goto LABEL_10;
      }
      if ( v22 != -4096 )
      {
        v120 = 1;
        v81 = nullptr;
        while ( 1 )
        {
          if ( v22 == -8192 && !v81 )
            v81 = v21;
          v20 = v18 & (v120 + (_DWORD)v20);
          v21 = (_QWORD *)(v19 + 16LL * (unsigned int)v20);
          v22 = *v21;
          if ( v14 == *v21 )
            goto LABEL_9;
          if ( v22 == -4096 )
            break;
          ++v120;
        }
        v82 = v81;
        v17 = v15 + 64;
        v16 = *(_DWORD *)(v15 + 80);
        if ( v82 )
          v21 = v82;
      }
      a5 = 3 * v16;
      a4 = (unsigned int)(*(_DWORD *)(v15 + 72) + 1);
      a6 = (unsigned int)(4 * a4);
      if ( (unsigned int)a6 < (unsigned int)a5 )
      {
        v20 = v16 - *(_DWORD *)(v15 + 76) - (unsigned int)a4;
        v19 = v16 >> 3;
        if ( (unsigned int)v20 > (unsigned int)v19 )
          goto LABEL_64;
        v132 = v13;
        v118 = v12;
        sub_6E50A0(v17, v16, v13, a4, v20, v19);
        v77 = *(_DWORD *)(v15 + 80);
        if ( !v77 )
        {
LABEL_228:
          ++*(_DWORD *)(v15 + 72);
          BUG();
        }
        v78 = v77 - 1;
        v20 = *(_QWORD *)(v15 + 64);
        v79 = v78 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
        v12 = v118;
        v13 = v132;
        LODWORD(a4) = *(_DWORD *)(v15 + 72) + 1;
        v21 = (_QWORD *)(v20 + 16LL * v79);
        v57 = *v21;
        if ( v14 != *v21 )
        {
          if ( v57 == -4096 )
            goto LABEL_90;
          v119 = 1;
          v80 = nullptr;
          while ( 1 )
          {
            if ( v80 || v57 != -8192 )
              v21 = v80;
            v79 = v78 & (v119 + v79);
            v19 = v20 + 16LL * v79;
            v57 = *(_QWORD *)v19;
            if ( v14 == *(_QWORD *)v19 )
            {
              v21 = (_QWORD *)(v20 + 16LL * v79);
              goto LABEL_65;
            }
            if ( v57 == -4096 )
              break;
            ++v119;
            v80 = v21;
            v21 = (_QWORD *)(v20 + 16LL * v79);
          }
          if ( !v21 )
          {
            v21 = (_QWORD *)(v20 + 16LL * v79);
            goto LABEL_90;
          }
LABEL_64:
          v57 = *v21;
        }
      }
      else
      {
LABEL_87:
        v130 = v13;
        v113 = v12;
        sub_6E50A0(v17, 2 * v16, v13, a4, a5, a6);
        v64 = *(_DWORD *)(v15 + 80);
        if ( !v64 )
          goto LABEL_228;
        v20 = (unsigned int)(v64 - 1);
        v19 = *(_QWORD *)(v15 + 64);
        v12 = v113;
        v13 = v130;
        v65 = v20 & (((unsigned int)v14 >> 9) ^ ((unsigned int)v14 >> 4));
        LODWORD(a4) = *(_DWORD *)(v15 + 72) + 1;
        v21 = (_QWORD *)(v19 + 16LL * v65);
        v57 = *v21;
        if ( v14 != *v21 )
        {
          if ( v57 == -4096 )
            goto LABEL_90;
          v124 = nullptr;
          for ( j = 1; ; ++j )
          {
            if ( v57 != -8192 || v124 )
              v21 = v124;
            v65 = v20 & (j + v65);
            v57 = *(_QWORD *)(v19 + 16LL * v65);
            if ( v14 == v57 )
            {
              v21 = (_QWORD *)(v19 + 16LL * v65);
              goto LABEL_65;
            }
            if ( v57 == -4096 )
              break;
            v124 = v21;
            v21 = (_QWORD *)(v19 + 16LL * v65);
          }
          if ( v21 )
            goto LABEL_64;
          v21 = (_QWORD *)(v19 + 16LL * v65);
LABEL_90:
          *(_DWORD *)(v15 + 72) = a4;
          goto LABEL_67;
        }
      }
LABEL_65:
      *(_DWORD *)(v15 + 72) = a4;
      if ( v57 != -4096 )
        --*(_DWORD *)(v15 + 76);
LABEL_67:
      *v21 = v14;
      a4 = 0;
      v21[1] = 0;
LABEL_10:
      v23 = *(_QWORD *)(v13 + 128);
      if ( v23
        || (v133 = a4,
            v127 = v12,
            v109 = v13,
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v13 + 104) + 96LL), *(_QWORD *)(v13 + 104), v13, a4, v20, v19),
            v13 = v109,
            v12 = v127,
            a4 = v133,
            (v23 = *(_QWORD *)(v109 + 128)) != 0) )
      {
        v23 = *(_QWORD *)(v23 + 88);
      }
      v24 = *(_QWORD *)(v90 + 72);
      v25 = *(_DWORD *)(v24 + 80);
      v26 = v24 + 64;
      if ( !v25 )
        goto LABEL_83;
      v27 = v25 - 1;
      a6 = *(_QWORD *)(v24 + 64);
      a5 = (v25 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
      v28 = (_QWORD *)(a6 + 16 * a5);
      v29 = *v28;
      if ( v23 == *v28 )
      {
LABEL_14:
        v30 = v28[1];
        goto LABEL_15;
      }
      if ( v29 != -4096 )
      {
        v121 = 1;
        v83 = nullptr;
        while ( 1 )
        {
          if ( !v83 && v29 == -8192 )
            v83 = v28;
          a5 = v27 & (v121 + (_DWORD)a5);
          v28 = (_QWORD *)(a6 + 16LL * (unsigned int)a5);
          v29 = *v28;
          if ( v23 == *v28 )
            goto LABEL_14;
          if ( v29 == -4096 )
            break;
          ++v121;
        }
        v84 = v83;
        v26 = v24 + 64;
        v25 = *(_DWORD *)(v24 + 80);
        if ( v84 )
          v28 = v84;
      }
      v20 = 3 * v25;
      v13 = (unsigned int)(*(_DWORD *)(v24 + 72) + 1);
      v19 = (unsigned int)(4 * v13);
      if ( (unsigned int)v19 >= (unsigned int)v20 )
      {
LABEL_83:
        v129 = a4;
        v112 = v12;
        sub_6E50A0(v26, 2 * v25, v13, a4, v20, v19);
        v62 = *(_DWORD *)(v24 + 80);
        if ( v62 )
        {
          a5 = (unsigned int)(v62 - 1);
          a6 = *(_QWORD *)(v24 + 64);
          v12 = v112;
          v63 = a5 & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
          LODWORD(v13) = *(_DWORD *)(v24 + 72) + 1;
          a4 = v129;
          v28 = (_QWORD *)(a6 + 16LL * v63);
          v58 = *v28;
          if ( v23 == *v28 )
            goto LABEL_72;
          if ( v58 == -4096 )
            goto LABEL_86;
          v125 = nullptr;
          for ( k = 1; ; ++k )
          {
            if ( v125 || v58 != -8192 )
              v28 = v125;
            v63 = a5 & (k + v63);
            v58 = *(_QWORD *)(a6 + 16LL * v63);
            if ( v23 == v58 )
              break;
            if ( v58 == -4096 )
            {
              if ( !v28 )
              {
                v28 = (_QWORD *)(a6 + 16LL * v63);
                goto LABEL_86;
              }
LABEL_71:
              v58 = *v28;
LABEL_72:
              *(_DWORD *)(v24 + 72) = v13;
              if ( v58 != -4096 )
                --*(_DWORD *)(v24 + 76);
              goto LABEL_74;
            }
            v125 = v28;
            v28 = (_QWORD *)(a6 + 16LL * v63);
          }
          v28 = (_QWORD *)(a6 + 16LL * v63);
          goto LABEL_72;
        }
LABEL_230:
        ++*(_DWORD *)(v24 + 72);
        BUG();
      }
      a5 = v25 - *(_DWORD *)(v24 + 76) - (unsigned int)v13;
      a6 = v25 >> 3;
      if ( (unsigned int)a5 > (unsigned int)a6 )
        goto LABEL_71;
      v131 = a4;
      v116 = v12;
      sub_6E50A0(v26, v25, v13, a4, a5, a6);
      v73 = *(_DWORD *)(v24 + 80);
      if ( !v73 )
        goto LABEL_230;
      v74 = v73 - 1;
      a5 = *(_QWORD *)(v24 + 64);
      v75 = v74 & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
      v12 = v116;
      LODWORD(v13) = *(_DWORD *)(v24 + 72) + 1;
      a4 = v131;
      v28 = (_QWORD *)(a5 + 16LL * v75);
      v58 = *v28;
      if ( v23 == *v28 )
        goto LABEL_72;
      if ( v58 == -4096 )
        goto LABEL_86;
      v117 = 1;
      v76 = nullptr;
      while ( 1 )
      {
        if ( v76 || v58 != -8192 )
          v28 = v76;
        v75 = v74 & (v117 + v75);
        a6 = a5 + 16LL * v75;
        v58 = *(_QWORD *)a6;
        if ( v23 == *(_QWORD *)a6 )
        {
          v28 = (_QWORD *)(a5 + 16LL * v75);
          goto LABEL_72;
        }
        if ( v58 == -4096 )
          break;
        ++v117;
        v76 = v28;
        v28 = (_QWORD *)(a5 + 16LL * v75);
      }
      if ( v28 )
        goto LABEL_71;
      v28 = (_QWORD *)(a5 + 16LL * v75);
LABEL_86:
      *(_DWORD *)(v24 + 72) = v13;
LABEL_74:
      *v28 = v23;
      v28[1] = 0;
      v30 = 0;
LABEL_15:
      if ( a4 > v30 )
      {
        --v9;
        *(_QWORD *)(a1 + 8 * i) = *(_QWORD *)(a1 + 8 * v9);
        if ( v9 >= v93 )
          goto LABEL_17;
      }
      else
      {
        *(_QWORD *)(a1 + 8 * i) = *v12;
        if ( v9 >= v93 )
        {
LABEL_17:
          v31 = v9;
          v6 = a1;
          if ( (a3 & 1) != 0 )
            goto LABEL_18;
          goto LABEL_76;
        }
      }
    }
  }
  if ( (a3 & 1) == 0 )
  {
    v31 = a2;
LABEL_76:
    if ( (a3 - 2) / 2 == v31 )
    {
      *(_QWORD *)(v6 + 8 * v31) = *(_QWORD *)(v6 + 8 * (2 * v31 + 2) - 8);
      v31 = 2 * v31 + 1;
    }
LABEL_18:
    v32 = (v31 - 1) / 2;
    if ( v31 <= a2 )
    {
      result = (__int64 *)(v6 + 8 * v31);
      goto LABEL_46;
    }
    v33 = v31;
    while ( 1 )
    {
      v46 = (__int64 *)(v6 + 8 * v32);
      v47 = *v46;
      v48 = *(_QWORD *)(v91 + 128);
      if ( v48
        || (v107 = v6,
            v95 = *v46,
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v91 + 104) + 96LL), *(_QWORD *)(v91 + 104), v47, a4, a5, a6),
            v47 = v95,
            v6 = v107,
            (v48 = *(_QWORD *)(v91 + 128)) != 0) )
      {
        v48 = *(_QWORD *)(v48 + 88);
      }
      v49 = *(_QWORD *)(v90 + 72);
      v50 = *(_DWORD *)(v49 + 80);
      v51 = v49 + 64;
      if ( !v50 )
        goto LABEL_33;
      v34 = *(_QWORD *)(v49 + 64);
      v35 = (v50 - 1) & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
      v36 = (_QWORD *)(v34 + 16 * v35);
      v37 = *v36;
      if ( *v36 == v48 )
      {
LABEL_21:
        a4 = v36[1];
        goto LABEL_22;
      }
      if ( v37 != -4096 )
      {
        v123 = 1;
        v102 = nullptr;
        while ( 1 )
        {
          if ( !v102 )
          {
            if ( v37 != -8192 )
              v36 = nullptr;
            v102 = v36;
          }
          v35 = (v50 - 1) & (v123 + (_DWORD)v35);
          v36 = (_QWORD *)(v34 + 16LL * (unsigned int)v35);
          v37 = *v36;
          if ( v48 == *v36 )
            goto LABEL_21;
          if ( v37 == -4096 )
            break;
          ++v123;
        }
        if ( v102 )
          v36 = v102;
      }
      a5 = 3 * v50;
      a4 = (unsigned int)(*(_DWORD *)(v49 + 72) + 1);
      a6 = (unsigned int)(4 * a4);
      if ( (unsigned int)a6 < (unsigned int)a5 )
      {
        v35 = v50 - *(_DWORD *)(v49 + 76) - (unsigned int)a4;
        v34 = v50 >> 3;
        if ( (unsigned int)v35 > (unsigned int)v34 )
          goto LABEL_57;
        v115 = v6;
        v100 = v47;
        sub_6E50A0(v51, v50, v47, a4, v35, v34);
        v70 = *(_DWORD *)(v49 + 80);
        if ( !v70 )
        {
LABEL_229:
          ++*(_DWORD *)(v49 + 72);
          BUG();
        }
        v34 = (unsigned int)(v70 - 1);
        v71 = *(_QWORD *)(v49 + 64);
        v72 = v34 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
        v47 = v100;
        v6 = v115;
        LODWORD(a4) = *(_DWORD *)(v49 + 72) + 1;
        v36 = (_QWORD *)(v71 + 16LL * v72);
        v55 = *v36;
        if ( *v36 == v48 )
        {
LABEL_35:
          v55 = v48;
          goto LABEL_58;
        }
        if ( v55 != -4096 )
        {
          v105 = 1;
          v89 = nullptr;
          while ( 1 )
          {
            if ( v55 != -8192 || v89 )
              v36 = v89;
            v35 = (unsigned int)(v105 + 1);
            v72 = v34 & (v105 + v72);
            v55 = *(_QWORD *)(v71 + 16LL * v72);
            if ( v48 == v55 )
            {
              v36 = (_QWORD *)(v71 + 16LL * v72);
              goto LABEL_58;
            }
            if ( v55 == -4096 )
              break;
            ++v105;
            v89 = v36;
            v36 = (_QWORD *)(v71 + 16LL * v72);
          }
          if ( v36 )
          {
LABEL_57:
            v55 = *v36;
LABEL_58:
            *(_DWORD *)(v49 + 72) = a4;
            if ( v55 != -4096 )
              --*(_DWORD *)(v49 + 76);
            goto LABEL_60;
          }
          v36 = (_QWORD *)(v71 + 16LL * v72);
        }
      }
      else
      {
LABEL_33:
        v106 = v6;
        v94 = v47;
        sub_6E50A0(v51, 2 * v50, v47, a4, a5, a6);
        v52 = *(_DWORD *)(v49 + 80);
        if ( !v52 )
          goto LABEL_229;
        v53 = v52 - 1;
        v54 = *(_QWORD *)(v49 + 64);
        v47 = v94;
        v6 = v106;
        v34 = v53 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
        LODWORD(a4) = *(_DWORD *)(v49 + 72) + 1;
        v36 = (_QWORD *)(v54 + 16 * v34);
        v55 = *v36;
        if ( *v36 == v48 )
          goto LABEL_35;
        if ( v55 != -4096 )
        {
          v103 = 1;
          v85 = nullptr;
          while ( 1 )
          {
            if ( v55 != -8192 || v85 )
              v36 = v85;
            v35 = (unsigned int)(v103 + 1);
            v34 = v53 & (unsigned int)(v103 + v34);
            v55 = *(_QWORD *)(v54 + 16LL * (unsigned int)v34);
            if ( v48 == v55 )
            {
              v36 = (_QWORD *)(v54 + 16LL * (unsigned int)v34);
              goto LABEL_58;
            }
            if ( v55 == -4096 )
              break;
            ++v103;
            v85 = v36;
            v36 = (_QWORD *)(v54 + 16LL * (unsigned int)v34);
          }
          if ( v36 )
            goto LABEL_57;
          v36 = (_QWORD *)(v54 + 16LL * (unsigned int)v34);
        }
      }
      *(_DWORD *)(v49 + 72) = a4;
LABEL_60:
      *v36 = v48;
      a4 = 0;
      v36[1] = 0;
LABEL_22:
      v38 = *(_QWORD *)(v47 + 128);
      if ( v38
        || (v126 = v6,
            v108 = a4,
            v96 = v47,
            sub_6E4DB0((__int64 *)(*(_QWORD *)(v47 + 104) + 96LL), *(_QWORD *)(v47 + 104), v47, a4, v35, v34),
            v47 = v96,
            a4 = v108,
            v6 = v126,
            (v38 = *(_QWORD *)(v96 + 128)) != 0) )
      {
        v38 = *(_QWORD *)(v38 + 88);
      }
      v39 = *(_QWORD *)(v90 + 72);
      v40 = *(_DWORD *)(v39 + 80);
      v41 = v39 + 64;
      if ( !v40 )
        goto LABEL_79;
      a6 = *(_QWORD *)(v39 + 64);
      a5 = (v40 - 1) & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
      v42 = (_QWORD *)(a6 + 16 * a5);
      v43 = *v42;
      if ( v38 == *v42 )
      {
LABEL_26:
        v44 = v42[1];
        goto LABEL_27;
      }
      if ( v43 != -4096 )
      {
        v122 = 1;
        v101 = nullptr;
        while ( 1 )
        {
          if ( v43 == -8192 )
          {
            if ( v101 )
              v42 = v101;
            v101 = v42;
          }
          a5 = (v40 - 1) & (v122 + (_DWORD)a5);
          v42 = (_QWORD *)(a6 + 16LL * (unsigned int)a5);
          v43 = *v42;
          if ( v38 == *v42 )
            goto LABEL_26;
          if ( v43 == -4096 )
            break;
          ++v122;
        }
        if ( v101 )
          v42 = v101;
      }
      v35 = 3 * v40;
      v47 = (unsigned int)(*(_DWORD *)(v39 + 72) + 1);
      v34 = (unsigned int)(4 * v47);
      if ( (unsigned int)v34 < (unsigned int)v35 )
      {
        a5 = v40 - *(_DWORD *)(v39 + 76) - (unsigned int)v47;
        a6 = v40 >> 3;
        if ( (unsigned int)a5 > (unsigned int)a6 )
          goto LABEL_50;
        v114 = v6;
        v98 = a4;
        sub_6E50A0(v41, v40, v47, a4, a5, a6);
        v66 = *(_DWORD *)(v39 + 80);
        if ( !v66 )
        {
LABEL_231:
          ++*(_DWORD *)(v39 + 72);
          BUG();
        }
        a6 = (unsigned int)(v66 - 1);
        v67 = *(_QWORD *)(v39 + 64);
        v68 = a6 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
        v6 = v114;
        LODWORD(v47) = *(_DWORD *)(v39 + 72) + 1;
        a4 = v98;
        v42 = (_QWORD *)(v67 + 16LL * v68);
        v56 = *v42;
        if ( v38 == *v42 )
          goto LABEL_51;
        if ( v56 != -4096 )
        {
          v99 = 1;
          v69 = nullptr;
          while ( 1 )
          {
            if ( v56 != -8192 || v69 )
              v42 = v69;
            a5 = (unsigned int)(v99 + 1);
            v68 = a6 & (v99 + v68);
            v56 = *(_QWORD *)(v67 + 16LL * v68);
            if ( v38 == v56 )
            {
              v42 = (_QWORD *)(v67 + 16LL * v68);
              goto LABEL_51;
            }
            if ( v56 == -4096 )
              break;
            ++v99;
            v69 = v42;
            v42 = (_QWORD *)(v67 + 16LL * v68);
          }
          if ( v42 )
            goto LABEL_50;
          v42 = (_QWORD *)(v67 + 16LL * v68);
        }
      }
      else
      {
LABEL_79:
        v111 = v6;
        v97 = a4;
        sub_6E50A0(v41, 2 * v40, v47, a4, v35, v34);
        v59 = *(_DWORD *)(v39 + 80);
        if ( !v59 )
          goto LABEL_231;
        v60 = v59 - 1;
        v61 = *(_QWORD *)(v39 + 64);
        v6 = v111;
        a6 = v60 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
        LODWORD(v47) = *(_DWORD *)(v39 + 72) + 1;
        a4 = v97;
        v42 = (_QWORD *)(v61 + 16 * a6);
        v56 = *v42;
        if ( v38 == *v42 )
          goto LABEL_51;
        if ( v56 != -4096 )
        {
          v104 = 1;
          v88 = nullptr;
          while ( 1 )
          {
            if ( v88 || v56 != -8192 )
              v42 = v88;
            a5 = (unsigned int)(v104 + 1);
            a6 = v60 & (unsigned int)(v104 + a6);
            v56 = *(_QWORD *)(v61 + 16LL * (unsigned int)a6);
            if ( v38 == v56 )
            {
              v42 = (_QWORD *)(v61 + 16LL * (unsigned int)a6);
              goto LABEL_51;
            }
            if ( v56 == -4096 )
              break;
            ++v104;
            v88 = v42;
            v42 = (_QWORD *)(v61 + 16LL * (unsigned int)a6);
          }
          if ( v42 )
          {
LABEL_50:
            v56 = *v42;
LABEL_51:
            *(_DWORD *)(v39 + 72) = v47;
            if ( v56 != -4096 )
              --*(_DWORD *)(v39 + 76);
            goto LABEL_53;
          }
          v42 = (_QWORD *)(v61 + 16LL * (unsigned int)a6);
        }
      }
      *(_DWORD *)(v39 + 72) = v47;
LABEL_53:
      *v42 = v38;
      v44 = 0;
      v42[1] = 0;
LABEL_27:
      result = (__int64 *)(v6 + 8 * v33);
      if ( a4 <= v44 )
        goto LABEL_46;
      v33 = v32;
      *result = *v46;
      if ( a2 >= v32 )
      {
        result = v46;
        goto LABEL_46;
      }
      v32 = (v32 - 1) / 2;
    }
  }
  result = (__int64 *)(a1 + 8 * a2);
LABEL_46:
  *result = v91;
  return result;
}

