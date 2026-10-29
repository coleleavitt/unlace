__int64 __fastcall sub_CC0500(__int64 a1, unsigned __int64 *a2, unsigned int *a3, unsigned __int64 a4, __int64 a5)
{
  __int64 v5; // r9
  __int64 v6; // r12
  unsigned __int64 *v7; // rbp
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // r13
  __int64 *v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // edx
  unsigned int v18; // r15d
  unsigned __int64 *v19; // r12
  unsigned int v20; // eax
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  __int64 v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rsi
  unsigned __int64 *v39; // r15
  unsigned __int64 v40; // r12
  unsigned __int64 v41; // rbp
  unsigned int v42; // eax
  unsigned int v43; // r14d
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  unsigned int v47; // r12d
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // r13
  _WORD *v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rsi
  unsigned int *v54; // rbp
  unsigned __int64 v55; // r13
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  unsigned __int64 v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r14
  bool v63; // zf
  char v64; // al
  unsigned int v65; // eax
  unsigned int v66; // r14d
  __int64 v67; // rax
  __int64 v68; // r8
  unsigned int v69; // r13d
  unsigned int v70; // r14d
  __int64 v71; // r12
  __int64 v72; // rax
  unsigned int v73; // r12d
  unsigned __int64 v74; // rsi
  __int64 v75; // r11
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r14
  __int64 v78; // rcx
  unsigned __int64 *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // r8
  char v82; // al
  char v83; // cl
  unsigned int v84; // edx
  unsigned __int64 v85; // r15
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 *v93; // rcx
  __int64 v94; // rsi
  unsigned __int64 v95; // r10
  __int64 v96; // rax
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rax
  __int64 *v100; // r13
  __int64 v101; // r8
  unsigned __int64 v102; // rax
  unsigned int v103; // ebp
  __int64 v104; // r14
  __int64 v105; // r12
  __int64 v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r12
  unsigned int v110; // eax
  __int64 v111; // [rsp+0h] [rbp-B8h]
  char v112; // [rsp+0h] [rbp-B8h]
  __int64 v113; // [rsp+0h] [rbp-B8h]
  unsigned __int64 *v114; // [rsp+0h] [rbp-B8h]
  unsigned int v115; // [rsp+0h] [rbp-B8h]
  __m128 *v116; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v117; // [rsp+10h] [rbp-A8h]
  __int64 v118; // [rsp+18h] [rbp-A0h]
  __int64 v119; // [rsp+20h] [rbp-98h]
  unsigned __int64 *v120; // [rsp+28h] [rbp-90h]
  __m128 *v121; // [rsp+30h] [rbp-88h]
  __int64 v122; // [rsp+38h] [rbp-80h]
  _QWORD *v123; // [rsp+40h] [rbp-78h]
  __m128 *v124; // [rsp+48h] [rbp-70h]
  unsigned __int64 v125; // [rsp+50h] [rbp-68h]
  __int64 v126; // [rsp+58h] [rbp-60h]
  __int64 v127; // [rsp+68h] [rbp-50h] BYREF
  __m128 v128; // [rsp+70h] [rbp-48h] BYREF

  v5 = (__int64)a3;
  v6 = a5;
  v7 = a2;
  v111 = a1 + 1376;
  v9 = *(unsigned int *)(a1 + 1384);
  v116 = (__m128 *)a4;
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 1388) )
  {
    a2 = (unsigned __int64 *)(a1 + 1392);
    v117 = (__int64)a3;
    sub_22134E0(a1 + 1376, a1 + 1392, v9 + 1, 16);
    v9 = *(unsigned int *)(a1 + 1384);
    v5 = v117;
  }
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v9);
  *v10 = 7;
  v10[1] = 0;
  ++*(_DWORD *)(a1 + 1384);
  v11 = *(_QWORD *)(v6 + 8);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 7 )
    goto LABEL_4;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (_BYTE)v16 != 7 )
    goto LABEL_6;
  v32 = *v12;
  v117 = v5;
  v13 = sub_F3F310(v32, a2, v15, v16);
  v5 = v117;
  if ( v13 )
  {
LABEL_4:
    v11 = *(_QWORD *)(v13 + 32);
    v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v14 = *(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)v14;
  v16 = *(unsigned __int8 *)(*(_QWORD *)v14 + 16LL);
LABEL_6:
  if ( (_BYTE)v16 == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( v5 )
    {
      v128.m128_u64[0] = v6 | 4;
      v33 = sub_CE2D10(a1, &v128);
      v17 = *(_DWORD *)(a1 + 1384);
      v18 = v33;
      goto LABEL_17;
    }
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a1 + 1360) )
  {
    v19 = &v7[v5];
    if ( v7 == v19 )
    {
LABEL_9:
      v17 = *(_DWORD *)(a1 + 1384);
      v18 = 1;
      goto LABEL_17;
    }
    do
    {
      v20 = sub_CB69D0(a1, *v7, v15, v16, a5);
      if ( !(_BYTE)v20 )
        break;
      ++v7;
    }
    while ( v19 != v7 );
LABEL_15:
    v18 = v20;
    goto LABEL_16;
  }
  v22 = *(_QWORD *)(a1 + 1264);
  v117 = v5;
  v23 = sub_CC2440(v22, v11);
  v26 = v117;
  v27 = HIDWORD(v23);
  v18 = HIDWORD(v23);
  if ( BYTE4(v23) )
  {
    if ( !v117 )
    {
      v20 = sub_C92610(a1, (unsigned int)v23, v11, v6, v25);
      goto LABEL_15;
    }
    goto LABEL_57;
  }
  v28 = *v12;
  v29 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v29 != 48 )
  {
    v30 = (unsigned int)(v29 - 2);
    if ( (unsigned __int8)v30 > 4u )
    {
      if ( *(_BYTE *)(v28 + 16) == 14 || (v28 = sub_C8AD90(*v12, v11, v30, v24), v26 = v117, v28) )
      {
        v66 = v26;
        if ( (_DWORD)v26 == 1 )
        {
          v31 = *v7;
LABEL_23:
          v18 = sub_CBBC10(a1, v31, v30, v24, v25);
          goto LABEL_16;
        }
        v67 = *(_QWORD *)(v28 + 32);
        v116 = (__m128 *)v26;
        v113 = v67;
        v69 = sub_C90F60(a1, v67);
        if ( (_DWORD)v116 )
        {
          if ( (_DWORD)v116 == 2 )
          {
            v114 = &v7[(_QWORD)v116];
            if ( v7 != v114 )
            {
              v70 = 0;
              v71 = v6 | 4;
              v116 = &v128;
              do
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, *v7) )
                  goto LABEL_16;
                v128.m128_u64[0] = v71;
                if ( !(unsigned __int8)sub_CF5810(a1, v69, v70, v116) )
                  goto LABEL_16;
                ++v70;
                ++v7;
              }
              while ( v114 != v7 );
            }
          }
        }
        else
        {
          v116 = &v128;
          while ( 1 )
          {
            if ( !(unsigned __int8)sub_C92610(a1, v69, v113, v6, v68) )
              goto LABEL_16;
            v128.m128_u64[0] = v6 | 4;
            if ( !(unsigned __int8)sub_CF5810(a1, v69, v66, v116) )
              goto LABEL_16;
            if ( v66 == 1 )
              break;
            v66 = 1;
          }
        }
      }
      else
      {
        v96 = *v12;
        v97 = (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 57;
        if ( (unsigned int)v97 > 1 )
        {
          v96 = sub_C8ADC0(v96, v11, v97, v24);
          v26 = v117;
          if ( !v96 )
            goto LABEL_16;
        }
        v98 = *(_DWORD *)(v96 + 20);
        v99 = *(_QWORD *)(v96 + 32);
        v116 = (__m128 *)v26;
        v100 = (__int64 *)v7;
        LODWORD(v118) = v98;
        v119 = v99;
        v115 = sub_C90F60(a1, v99);
        v102 = (unsigned __int64)&v7[(_QWORD)v116];
        v103 = 0;
        v116 = (__m128 *)v102;
        v117 = (__int64)&v128;
        if ( v100 != (__int64 *)v102 )
        {
          v120 = (unsigned __int64 *)v6;
          v104 = v6 | 4;
          do
          {
            v105 = *v100;
            v106 = *v100;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, *v100) )
              goto LABEL_16;
            v109 = *(_QWORD *)(*(_QWORD *)(v105 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v109 + 16) - 57 <= 1
              || (v109 = sub_C8ADC0(v109, v106, v107, v108)) != 0 )
            {
              v128.m128_u64[0] = v104;
              if ( !(unsigned __int8)sub_CEE590(a1, v115, 0, v103, *(unsigned int *)(v109 + 20), v117) )
                goto LABEL_16;
              v103 += *(_DWORD *)(v109 + 20);
            }
            else
            {
              v128.m128_u64[0] = v104;
              if ( !(unsigned __int8)sub_CF5810(a1, v115, v103, v117) )
                goto LABEL_16;
              ++v103;
            }
            ++v100;
          }
          while ( v116 != (__m128 *)v100 );
          v6 = (__int64)v120;
        }
        for ( ; v103 != (_DWORD)v118; ++v103 )
        {
          if ( (unsigned __int8)sub_C92610(a1, v115, v119, v6, v101) )
          {
            v128.m128_u64[0] = v6 | 4;
            if ( (unsigned __int8)sub_CF5810(a1, v115, v103, &v128) )
              continue;
          }
          goto LABEL_16;
        }
      }
      v18 = 1;
      goto LABEL_16;
    }
    if ( v117 == 1 )
    {
      v31 = *v7;
      if ( v11 == *(_QWORD *)(*v7 + 8) )
        goto LABEL_23;
    }
    v34 = sub_A4E300(**(_QWORD ***)(a1 + 1264), v11);
    v35 = v34;
    if ( !v34 || (unsigned int)*(unsigned __int8 *)(v34 + 16) - 2 > 1 )
      BUG();
    v36 = *(_QWORD *)(v34 + 40);
    v123 = (_QWORD *)v36;
    if ( (*(_BYTE *)(v34 + 19) & 2) != 0 )
    {
      v37 = *(_QWORD **)v36;
      if ( *(_DWORD *)(v36 + 8) > 0x40u )
        v37 = (_QWORD *)*v37;
      v123 = v37;
    }
    v118 = v6 | 4;
    v128.m128_u64[0] = v6 | 4;
    v121 = &v128;
    if ( !(unsigned __int8)sub_CDC350(a1, v123, &v128) )
      goto LABEL_16;
    v38 = *(_QWORD *)(v35 + 32);
    LODWORD(v35) = 0;
    v122 = sub_CC2440(*(_QWORD *)(a1 + 1264), v38);
    v119 = (__int64)&v7[v117];
    if ( v7 == (unsigned __int64 *)v119 )
      goto LABEL_52;
    LOBYTE(v117) = v18;
    v39 = v7;
LABEL_39:
    v40 = *v39;
    v41 = sub_BD7DA0(*v39);
    if ( (*(_WORD *)v41 & 0x1FF) != 0x42 )
    {
      if ( !(unsigned __int8)sub_CB64B0(a1, v35, v40, v122) )
        goto LABEL_58;
      LODWORD(v35) = v35 + 1;
      goto LABEL_50;
    }
    v42 = sub_C90F60(a1, *(_QWORD *)(v40 + 8));
    v120 = v39;
    v43 = v42;
    v44 = *(unsigned int *)(v41 + 48);
    v128.m128_u64[0] = v41;
    v128.m128_u64[1] = v44;
    while ( 1 )
    {
      if ( !v41 )
      {
LABEL_48:
        if ( v128.m128_u64[1] == -1 )
        {
          v39 = v120;
LABEL_50:
          if ( (unsigned __int64 *)v119 == ++v39 )
          {
            v18 = (unsigned __int8)v117;
LABEL_52:
            if ( !v116 || (_QWORD *)(unsigned int)v35 == v123 )
            {
LABEL_56:
              v128.m128_u64[0] = v118;
              v18 = sub_CDD120(a1, v121);
            }
            else
            {
              while ( (unsigned __int8)sub_CB64B0(a1, v35, (unsigned __int64)v116, v122) )
              {
                v35 = (unsigned int)(v35 + 1);
                if ( (_QWORD *)v35 == v123 )
                  goto LABEL_56;
              }
            }
LABEL_16:
            v17 = *(_DWORD *)(a1 + 1384);
            goto LABEL_17;
          }
          goto LABEL_39;
        }
      }
      v45 = sub_C061F0(v121);
      v46 = *(_QWORD *)v45;
      v47 = sub_CC2440(*(_QWORD *)(a1 + 1264), *(_QWORD *)(*(_QWORD *)v45 + 8LL));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v46)
        || v43 != v47 && (v127 = v118, !(unsigned __int8)sub_D0BD20(a1, v47, v43, &v127))
        || (v127 = v46 | 4, !(unsigned __int8)sub_CF5810(a1, v43, (unsigned int)v35, &v127)) )
      {
LABEL_58:
        v18 = (unsigned __int8)v117;
        goto LABEL_16;
      }
      v41 = v128.m128_u64[0];
      LODWORD(v35) = v35 + 1;
      if ( ++v128.m128_u64[1] >= *(unsigned int *)(v128.m128_u64[0] + 48)
                               + (unsigned __int64)*(unsigned int *)(v128.m128_u64[0] + 52) )
      {
        v128.m128_u64[1] = -1;
        v128.m128_u64[0] = 0;
        goto LABEL_48;
      }
    }
  }
  v116 = (__m128 *)v117;
  v49 = sub_C90DA0(a1, v11);
  v50 = v49;
  if ( v117 == 1 )
  {
    v51 = (_WORD *)*v7;
    if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(*v7 + 8) )
    {
      v116 = (__m128 *)v6;
      v128 = _mm_loadh_ps((const double *)&v116);
      if ( *(_BYTE *)(v49 + 648) )
        goto LABEL_65;
      goto LABEL_89;
    }
LABEL_57:
    v48 = sub_CBBC10(a1, *v7, v27, v24, v25);
    v17 = *(_DWORD *)(a1 + 1384);
    v18 = v48;
    goto LABEL_17;
  }
  v116 = (__m128 *)v6;
  v128 = _mm_loadh_ps((const double *)&v116);
  if ( !*(_BYTE *)(v49 + 648) )
  {
LABEL_89:
    v116 = (__m128 *)&v7[v117];
    if ( v7 == (unsigned __int64 *)v116 )
    {
LABEL_130:
      v127 = v6 | 4;
      v110 = sub_CDD120(a1, &v127);
      v17 = *(_DWORD *)(a1 + 1384);
      v18 = v110;
      goto LABEL_17;
    }
    v126 = v6;
    v124 = &v128;
    v72 = v6;
    v73 = 0;
    LOBYTE(v123) = v18;
    v122 = v72 | 4;
    while ( 1 )
    {
      v84 = *(_DWORD *)(v50 + 288);
      v85 = *v7;
      if ( v84 > v73 )
      {
        v86 = *(_QWORD *)(v50 + 280);
        v87 = *(_QWORD *)(v86 + 24LL * v73);
        if ( (*(_BYTE *)(v87 + 68) & 1) != 0 && !*(_QWORD *)(v87 + 40) )
        {
          v92 = v73 + 1;
          v93 = (__int64 *)(v86 + 24 * v92);
          ++v73;
          for ( ; (_DWORD)v92 != v84; v73 = v92 )
          {
            v94 = *v93;
            if ( (*(_BYTE *)(*v93 + 68) & 1) == 0 )
              break;
            v93 += 3;
            if ( *(_QWORD *)(v94 + 40) )
              break;
            LODWORD(v92) = v92 + 1;
          }
        }
      }
      v95 = sub_C90F00(a1, *v7);
      if ( BYTE4(v95) )
      {
        v74 = *(unsigned int *)(a1 + 1388);
        v75 = *(_QWORD *)(v50 + 280) + 24LL * v73;
        LOBYTE(v121) = *(_BYTE *)(a1 + 1440);
        *(_BYTE *)(a1 + 1440) = (*(_WORD *)v85 & 0x1FF) == 111;
        v76 = v118 & 0xFFFFFFFF00000000LL | 1;
        v77 = *(unsigned int *)(v75 + 8) | v119 & 0xFFFFFFFF00000000LL;
        v119 = v77;
        v78 = *(unsigned int *)(a1 + 1384);
        v118 = v76;
        if ( v78 + 1 > v74 )
        {
          v125 = v76;
          v120 = (unsigned __int64 *)v95;
          v117 = v75;
          sub_22134E0(v111, a1 + 1392, v78 + 1, 16);
          v78 = *(unsigned int *)(a1 + 1384);
          v76 = v125;
          v95 = (unsigned __int64)v120;
          v75 = v117;
        }
        v120 = (unsigned __int64 *)v95;
        v79 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1376) + 16 * v78);
        v117 = v75;
        *v79 = v76;
        v79[1] = v77;
        v80 = *(_QWORD *)a1;
        ++*(_DWORD *)(a1 + 1384);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v80 + 48))(a1, v85) )
        {
          v18 = (unsigned __int8)v123;
          v17 = *(_DWORD *)(a1 + 1384) - 1;
          *(_BYTE *)(a1 + 1440) = (_BYTE)v121;
          goto LABEL_17;
        }
        v63 = (*(_BYTE *)(*(_QWORD *)v117 + 68LL) & 1) == 0;
        v127 = v122;
        if ( v63 )
          v82 = sub_D02F80(a1, (unsigned int)v120, *(unsigned int *)(v117 + 8), &v127, v81);
        else
          v82 = sub_D28630(a1, (unsigned int)v120, v117, &v127);
        v17 = *(_DWORD *)(a1 + 1384) - 1;
        v83 = (char)v121;
        *(_DWORD *)(a1 + 1384) = v17;
        *(_BYTE *)(a1 + 1440) = v83;
        if ( !v82 )
        {
          v18 = (unsigned __int8)v123;
          goto LABEL_17;
        }
      }
      else
      {
        v88 = sub_E0DEC0(v50, *(_QWORD *)(v85 + 8));
        if ( v88 )
        {
          v127 = v85 | 4;
          if ( !(unsigned __int8)sub_CE2180(a1, *(unsigned int *)(v88 + 8), &v127)
            || !(unsigned __int8)sub_CB2E50(a1, v85, v89, v90, v91)
            || (v127 = v122, !(unsigned __int8)sub_CDD1D0(a1, &v127)) )
          {
LABEL_107:
            v18 = (unsigned __int8)v123;
            v17 = *(_DWORD *)(a1 + 1384);
            goto LABEL_17;
          }
          goto LABEL_98;
        }
        if ( !(unsigned __int8)sub_CB6390((__int64 *)v124, *(_QWORD *)(v50 + 280) + 24LL * v73, v85) )
          goto LABEL_107;
      }
      ++v73;
LABEL_98:
      if ( v116 == (__m128 *)++v7 )
      {
        v6 = v126;
        goto LABEL_130;
      }
    }
  }
  if ( !v117 )
  {
    v18 = sub_C92CD0(a1, v49, v6);
    if ( !(_BYTE)v18 )
      goto LABEL_16;
LABEL_132:
    v62 = v6 | 4;
LABEL_76:
    v127 = v62;
    v65 = sub_CDD120(a1, &v127);
    v17 = *(_DWORD *)(a1 + 1384);
    v18 = v65;
    goto LABEL_17;
  }
  v51 = (_WORD *)*v7;
LABEL_65:
  if ( (*(_WORD *)v6 & 0x1FF) == 0x35 )
  {
    v52 = *(_QWORD *)(v6 + 56);
    v53 = 0;
    if ( !v52 )
      goto LABEL_69;
  }
  else
  {
    v52 = *(_QWORD *)(v6 + 40);
    v53 = 0;
    if ( !v52 )
      goto LABEL_69;
  }
  if ( (v52 & 2) != 0 )
    v53 = v52 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_69:
  v54 = (unsigned int *)sub_E0DFD0(v50, v53);
  v55 = sub_C90F00(a1, (__int64)v51);
  if ( !BYTE4(v55) )
  {
    if ( !(unsigned __int8)sub_CB6390((__int64 *)&v128, (__int64)v54, (unsigned __int64)v51) )
      goto LABEL_16;
    goto LABEL_132;
  }
  v56 = *(unsigned int *)(a1 + 1388);
  v112 = *(_BYTE *)(a1 + 1440);
  v57 = *(unsigned int *)(a1 + 1384);
  *(_BYTE *)(a1 + 1440) = (*v51 & 0x1FF) == 111;
  v58 = v54[2];
  if ( v57 + 1 > v56 )
  {
    v116 = (__m128 *)v54[2];
    sub_22134E0(a1 + 1376, a1 + 1392, v57 + 1, 16);
    v57 = *(unsigned int *)(a1 + 1384);
    v58 = (unsigned __int64)v116;
  }
  v59 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v57);
  *v59 = 1;
  v59[1] = v58;
  v60 = *(_QWORD *)a1;
  ++*(_DWORD *)(a1 + 1384);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _WORD *))(v60 + 48))(a1, v51) )
  {
    v17 = *(_DWORD *)(a1 + 1384) - 1;
    *(_BYTE *)(a1 + 1440) = v112;
    goto LABEL_17;
  }
  v62 = v6 | 4;
  v63 = (*(_BYTE *)(*(_QWORD *)v54 + 68LL) & 1) == 0;
  v127 = v6 | 4;
  if ( v63 )
    v64 = sub_D02F80(a1, (unsigned int)v55, v54[2], &v127, v61);
  else
    v64 = sub_D28630(a1, (unsigned int)v55, v54, &v127);
  v17 = *(_DWORD *)(a1 + 1384) - 1;
  *(_DWORD *)(a1 + 1384) = v17;
  *(_BYTE *)(a1 + 1440) = v112;
  if ( v64 )
    goto LABEL_76;
LABEL_17:
  *(_DWORD *)(a1 + 1384) = v17 - 1;
  return v18;
}

