__int64 __fastcall sub_CD1000(__int64 a1, unsigned __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
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
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 *v26; // r9
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rdx
  unsigned __int64 v30; // rsi
  __int64 v31; // rdi
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rsi
  unsigned __int64 *v38; // r15
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rbp
  int v41; // eax
  int v42; // r14d
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  int v46; // r12d
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r13
  _WORD *v50; // r14
  __int64 v51; // rax
  unsigned __int64 v52; // rsi
  unsigned int *v53; // rbp
  unsigned __int64 v54; // r13
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  __int64 *v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r14
  bool v61; // zf
  char v62; // al
  unsigned int v63; // eax
  unsigned int v64; // r14d
  __int64 v65; // rax
  __int64 v66; // r8
  unsigned int v67; // r13d
  unsigned int v68; // r14d
  __int64 v69; // r12
  __int64 v70; // rax
  unsigned int v71; // r12d
  unsigned __int64 v72; // rsi
  __int64 v73; // r11
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r14
  __int64 v76; // rcx
  unsigned __int64 *v77; // rcx
  __int64 v78; // rax
  char v79; // al
  char v80; // cl
  unsigned int v81; // edx
  unsigned __int64 v82; // r15
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  __int64 *v90; // rcx
  __int64 v91; // rsi
  unsigned __int64 v92; // r10
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  int v96; // ecx
  __int64 v97; // rax
  __int64 *v98; // r13
  __int64 v99; // r8
  __int64 *v100; // rax
  unsigned int v101; // ebp
  __int64 v102; // r14
  __int64 v103; // r12
  __int64 v104; // rsi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r12
  unsigned int v108; // eax
  __int64 v109; // [rsp+0h] [rbp-B8h]
  char v110; // [rsp+0h] [rbp-B8h]
  __int64 v111; // [rsp+0h] [rbp-B8h]
  unsigned __int64 *v112; // [rsp+0h] [rbp-B8h]
  unsigned int v113; // [rsp+0h] [rbp-B8h]
  __int64 v114; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v115; // [rsp+10h] [rbp-A8h]
  __int64 v116; // [rsp+18h] [rbp-A0h]
  __int64 v117; // [rsp+20h] [rbp-98h]
  __int64 *v118; // [rsp+28h] [rbp-90h]
  __m128 *v119; // [rsp+30h] [rbp-88h]
  __int64 v120; // [rsp+38h] [rbp-80h]
  _QWORD *v121; // [rsp+40h] [rbp-78h]
  __m128 *v122; // [rsp+48h] [rbp-70h]
  unsigned __int64 v123; // [rsp+50h] [rbp-68h]
  __int64 *v124; // [rsp+58h] [rbp-60h]
  __int64 v125; // [rsp+68h] [rbp-50h] BYREF
  __m128 v126; // [rsp+70h] [rbp-48h] BYREF

  v5 = (__int64)a3;
  v6 = a5;
  v7 = a2;
  v109 = a1 + 600;
  v9 = *(unsigned int *)(a1 + 608);
  v114 = (__int64)a4;
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 612) )
  {
    a2 = (unsigned __int64 *)(a1 + 616);
    v115 = (__int64)a3;
    sub_2237220(a1 + 600, a1 + 616, v9 + 1, 16);
    v9 = *(unsigned int *)(a1 + 608);
    v5 = v115;
  }
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 16 * v9);
  *v10 = 7;
  v10[1] = 0;
  ++*(_DWORD *)(a1 + 608);
  v11 = *(_QWORD *)(v6 + 8);
  v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) == 7 )
    goto LABEL_4;
  v15 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(unsigned __int8 *)(v15 + 16);
  if ( (_BYTE)v16 != 7 )
    goto LABEL_6;
  v31 = *v12;
  v115 = v5;
  v13 = sub_F63050(v31, a2, v15, v16);
  v5 = v115;
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
      v126.m128_u64[0] = v6 | 4;
      v32 = sub_CAAFE0(a1, (__int64 *)&v126);
      v17 = *(_DWORD *)(a1 + 608);
      v18 = v32;
      goto LABEL_17;
    }
    goto LABEL_9;
  }
  if ( *(_BYTE *)(a1 + 584) )
  {
    v19 = &v7[v5];
    if ( v7 == v19 )
    {
LABEL_9:
      v17 = *(_DWORD *)(a1 + 608);
      v18 = 1;
      goto LABEL_17;
    }
    do
    {
      v20 = sub_CC7500(a1, *v7, v15, v16, a5);
      if ( !(_BYTE)v20 )
        break;
      ++v7;
    }
    while ( v19 != v7 );
LABEL_15:
    v18 = v20;
    goto LABEL_16;
  }
  v22 = *(_QWORD *)(a1 + 488);
  v115 = v5;
  v23 = sub_CE6180(v22, v11);
  v26 = (__int64 *)v115;
  v18 = HIDWORD(v23);
  if ( BYTE4(v23) )
  {
    if ( !v115 )
    {
      v20 = sub_CB2AD0(a1, (unsigned int)v23, v11, v6, v25);
      goto LABEL_15;
    }
    goto LABEL_57;
  }
  v27 = *v12;
  v28 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v28 != 48 )
  {
    v29 = (unsigned int)(v28 - 2);
    if ( (unsigned __int8)v29 > 4u )
    {
      if ( *(_BYTE *)(v27 + 16) == 14 || (v27 = sub_CAEAD0(*v12, v11, v29, v24), v26 = (__int64 *)v115, v27) )
      {
        v64 = (unsigned int)v26;
        if ( (_DWORD)v26 == 1 )
        {
          v30 = *v7;
LABEL_23:
          v18 = sub_CCC710(a1, v30);
          goto LABEL_16;
        }
        v65 = *(_QWORD *)(v27 + 32);
        v114 = (__int64)v26;
        v111 = v65;
        v67 = sub_CB1440(a1, v65);
        if ( (_DWORD)v114 )
        {
          if ( (_DWORD)v114 == 2 )
          {
            v112 = &v7[v114];
            if ( v7 != v112 )
            {
              v68 = 0;
              v69 = v6 | 4;
              v114 = (__int64)&v126;
              do
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, *v7) )
                  goto LABEL_16;
                v126.m128_u64[0] = v69;
                if ( !(unsigned __int8)sub_CA4D80(a1, v67, v68, (__int64 *)v114) )
                  goto LABEL_16;
                ++v68;
                ++v7;
              }
              while ( v112 != v7 );
            }
          }
        }
        else
        {
          v114 = (__int64)&v126;
          while ( 1 )
          {
            if ( !(unsigned __int8)sub_CB2AD0(a1, v67, v111, v6, v66) )
              goto LABEL_16;
            v126.m128_u64[0] = v6 | 4;
            if ( !(unsigned __int8)sub_CA4D80(a1, v67, v64, (__int64 *)v114) )
              goto LABEL_16;
            if ( v64 == 1 )
              break;
            v64 = 1;
          }
        }
      }
      else
      {
        v94 = *v12;
        v95 = (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 57;
        if ( (unsigned int)v95 > 1 )
        {
          v94 = sub_CAEB00(v94, v11, v95, v93);
          v26 = (__int64 *)v115;
          if ( !v94 )
            goto LABEL_16;
        }
        v96 = *(_DWORD *)(v94 + 20);
        v97 = *(_QWORD *)(v94 + 32);
        v114 = (__int64)v26;
        v98 = (__int64 *)v7;
        LODWORD(v116) = v96;
        v117 = v97;
        v113 = sub_CB1440(a1, v97);
        v100 = (__int64 *)&v7[v114];
        v101 = 0;
        v114 = (__int64)v100;
        v115 = (__int64)&v126;
        if ( v98 != v100 )
        {
          v118 = (__int64 *)v6;
          v102 = v6 | 4;
          do
          {
            v103 = *v98;
            v104 = *v98;
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, *v98) )
              goto LABEL_16;
            v107 = *(_QWORD *)(*(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v107 + 16) - 57 <= 1
              || (v107 = sub_CAEB00(v107, v104, v105, v106)) != 0 )
            {
              v126.m128_u64[0] = v102;
              if ( !(unsigned __int8)sub_CA5780(a1, v113, 0, v101, *(_DWORD *)(v107 + 20), (__int64 *)v115) )
                goto LABEL_16;
              v101 += *(_DWORD *)(v107 + 20);
            }
            else
            {
              v126.m128_u64[0] = v102;
              if ( !(unsigned __int8)sub_CA4D80(a1, v113, v101, (__int64 *)v115) )
                goto LABEL_16;
              ++v101;
            }
            ++v98;
          }
          while ( (__int64 *)v114 != v98 );
          v6 = (__int64)v118;
        }
        for ( ; v101 != (_DWORD)v116; ++v101 )
        {
          if ( (unsigned __int8)sub_CB2AD0(a1, v113, v117, v6, v99) )
          {
            v126.m128_u64[0] = v6 | 4;
            if ( (unsigned __int8)sub_CA4D80(a1, v113, v101, (__int64 *)&v126) )
              continue;
          }
          goto LABEL_16;
        }
      }
      v18 = 1;
      goto LABEL_16;
    }
    if ( v115 == 1 )
    {
      v30 = *v7;
      if ( v11 == *(_QWORD *)(*v7 + 8) )
        goto LABEL_23;
    }
    v33 = sub_A72040(**(_QWORD ***)(a1 + 488), v11);
    v34 = v33;
    if ( !v33 || (unsigned int)*(unsigned __int8 *)(v33 + 16) - 2 > 1 )
      BUG();
    v35 = *(_QWORD *)(v33 + 40);
    v121 = (_QWORD *)v35;
    if ( (*(_BYTE *)(v33 + 19) & 2) != 0 )
    {
      v36 = *(_QWORD **)v35;
      if ( *(_DWORD *)(v35 + 8) > 0x40u )
        v36 = (_QWORD *)*v36;
      v121 = v36;
    }
    v116 = v6 | 4;
    v126.m128_u64[0] = v6 | 4;
    v119 = &v126;
    if ( !(unsigned __int8)sub_CA7CB0(a1, (__int64)v121, (__int64 *)&v126) )
      goto LABEL_16;
    v37 = *(_QWORD *)(v34 + 32);
    LODWORD(v34) = 0;
    v120 = sub_CE6180(*(_QWORD *)(a1 + 488), v37);
    v117 = (__int64)&v7[v115];
    if ( v7 == (unsigned __int64 *)v117 )
      goto LABEL_52;
    LOBYTE(v115) = v18;
    v38 = v7;
LABEL_39:
    v39 = *v38;
    v40 = sub_BFBAE0(*v38);
    if ( (*(_WORD *)v40 & 0x1FF) != 0x42 )
    {
      if ( !(unsigned __int8)sub_CC6FE0(a1, v34, v39, v120) )
        goto LABEL_58;
      LODWORD(v34) = v34 + 1;
      goto LABEL_50;
    }
    v41 = sub_CB1440(a1, *(_QWORD *)(v39 + 8));
    v118 = (__int64 *)v38;
    v42 = v41;
    v43 = *(unsigned int *)(v40 + 48);
    v126.m128_u64[0] = v40;
    v126.m128_u64[1] = v43;
    while ( 1 )
    {
      if ( !v40 )
      {
LABEL_48:
        if ( v126.m128_u64[1] == -1 )
        {
          v38 = (unsigned __int64 *)v118;
LABEL_50:
          if ( (unsigned __int64 *)v117 == ++v38 )
          {
            v18 = (unsigned __int8)v115;
LABEL_52:
            if ( !v114 || (_QWORD *)(unsigned int)v34 == v121 )
            {
LABEL_56:
              v126.m128_u64[0] = v116;
              v18 = sub_CA11B0(a1, (__int64 *)v119);
            }
            else
            {
              while ( (unsigned __int8)sub_CC6FE0(a1, v34, v114, v120) )
              {
                v34 = (unsigned int)(v34 + 1);
                if ( (_QWORD *)v34 == v121 )
                  goto LABEL_56;
              }
            }
LABEL_16:
            v17 = *(_DWORD *)(a1 + 608);
            goto LABEL_17;
          }
          goto LABEL_39;
        }
      }
      v44 = sub_C29F30(v119);
      v45 = *(_QWORD *)v44;
      v46 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(*(_QWORD *)v44 + 8LL));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v45)
        || v42 != v46 && (v125 = v116, !(unsigned __int8)sub_CA0510(a1, v46, v42, &v125))
        || (v125 = v45 | 4, !(unsigned __int8)sub_CA4D80(a1, v42, v34, &v125)) )
      {
LABEL_58:
        v18 = (unsigned __int8)v115;
        goto LABEL_16;
      }
      v40 = v126.m128_u64[0];
      LODWORD(v34) = v34 + 1;
      if ( ++v126.m128_u64[1] >= *(unsigned int *)(v126.m128_u64[0] + 48)
                               + (unsigned __int64)*(unsigned int *)(v126.m128_u64[0] + 52) )
      {
        v126.m128_u64[1] = -1;
        v126.m128_u64[0] = 0;
        goto LABEL_48;
      }
    }
  }
  v114 = v115;
  v48 = sub_CB1280(a1, v11);
  v49 = v48;
  if ( v115 == 1 )
  {
    v50 = (_WORD *)*v7;
    if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(*v7 + 8) )
    {
      v114 = v6;
      v126 = _mm_loadh_ps((const double *)&v114);
      if ( *(_BYTE *)(v48 + 648) )
        goto LABEL_65;
      goto LABEL_89;
    }
LABEL_57:
    v47 = sub_CCC710(a1, *v7);
    v17 = *(_DWORD *)(a1 + 608);
    v18 = v47;
    goto LABEL_17;
  }
  v114 = v6;
  v126 = _mm_loadh_ps((const double *)&v114);
  if ( !*(_BYTE *)(v48 + 648) )
  {
LABEL_89:
    v114 = (__int64)&v7[v115];
    if ( v7 == (unsigned __int64 *)v114 )
    {
LABEL_130:
      v125 = v6 | 4;
      v108 = sub_CA11B0(a1, &v125);
      v17 = *(_DWORD *)(a1 + 608);
      v18 = v108;
      goto LABEL_17;
    }
    v124 = (__int64 *)v6;
    v122 = &v126;
    v70 = v6;
    v71 = 0;
    LOBYTE(v121) = v18;
    v120 = v70 | 4;
    while ( 1 )
    {
      v81 = *(_DWORD *)(v49 + 288);
      v82 = *v7;
      if ( v81 > v71 )
      {
        v83 = *(_QWORD *)(v49 + 280);
        v84 = *(_QWORD *)(v83 + 24LL * v71);
        if ( (*(_BYTE *)(v84 + 68) & 1) != 0 && !*(_QWORD *)(v84 + 40) )
        {
          v89 = v71 + 1;
          v90 = (__int64 *)(v83 + 24 * v89);
          ++v71;
          for ( ; (_DWORD)v89 != v81; v71 = v89 )
          {
            v91 = *v90;
            if ( (*(_BYTE *)(*v90 + 68) & 1) == 0 )
              break;
            v90 += 3;
            if ( *(_QWORD *)(v91 + 40) )
              break;
            LODWORD(v89) = v89 + 1;
          }
        }
      }
      v92 = sub_CB13E0(a1, *v7);
      if ( BYTE4(v92) )
      {
        v72 = *(unsigned int *)(a1 + 612);
        v73 = *(_QWORD *)(v49 + 280) + 24LL * v71;
        LOBYTE(v119) = *(_BYTE *)(a1 + 664);
        *(_BYTE *)(a1 + 664) = (*(_WORD *)v82 & 0x1FF) == 111;
        v74 = v116 & 0xFFFFFFFF00000000LL | 1;
        v75 = *(unsigned int *)(v73 + 8) | v117 & 0xFFFFFFFF00000000LL;
        v117 = v75;
        v76 = *(unsigned int *)(a1 + 608);
        v116 = v74;
        if ( v76 + 1 > v72 )
        {
          v123 = v74;
          v118 = (__int64 *)v92;
          v115 = v73;
          sub_2237220(v109, a1 + 616, v76 + 1, 16);
          v76 = *(unsigned int *)(a1 + 608);
          v74 = v123;
          v92 = (unsigned __int64)v118;
          v73 = v115;
        }
        v118 = (__int64 *)v92;
        v77 = (unsigned __int64 *)(*(_QWORD *)(a1 + 600) + 16 * v76);
        v115 = v73;
        *v77 = v74;
        v77[1] = v75;
        v78 = *(_QWORD *)a1;
        ++*(_DWORD *)(a1 + 608);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v78 + 40))(a1, v82) )
        {
          v18 = (unsigned __int8)v121;
          v17 = *(_DWORD *)(a1 + 608) - 1;
          *(_BYTE *)(a1 + 664) = (_BYTE)v119;
          goto LABEL_17;
        }
        v61 = (*(_BYTE *)(*(_QWORD *)v115 + 68LL) & 1) == 0;
        v125 = v120;
        if ( v61 )
          v79 = sub_CA4FD0(a1, (int)v118, *(_DWORD *)(v115 + 8), &v125);
        else
          v79 = sub_CA9660((_QWORD *)a1, (int)v118, v115, &v125);
        v17 = *(_DWORD *)(a1 + 608) - 1;
        v80 = (char)v119;
        *(_DWORD *)(a1 + 608) = v17;
        *(_BYTE *)(a1 + 664) = v80;
        if ( !v79 )
        {
          v18 = (unsigned __int8)v121;
          goto LABEL_17;
        }
      }
      else
      {
        v85 = sub_E31C00(v49, *(_QWORD *)(v82 + 8));
        if ( v85 )
        {
          v125 = v82 | 4;
          if ( !(unsigned __int8)sub_CA4AE0(a1, *(_DWORD *)(v85 + 8), &v125)
            || !(unsigned __int8)sub_CC3960(a1, v82, v86, v87, v88)
            || (v125 = v120, !(unsigned __int8)sub_CABC60(a1, &v125)) )
          {
LABEL_107:
            v18 = (unsigned __int8)v121;
            v17 = *(_DWORD *)(a1 + 608);
            goto LABEL_17;
          }
          goto LABEL_98;
        }
        if ( !(unsigned __int8)sub_CC6EC0((__int64 *)v122, *(_QWORD *)(v49 + 280) + 24LL * v71, v82) )
          goto LABEL_107;
      }
      ++v71;
LABEL_98:
      if ( (unsigned __int64 *)v114 == ++v7 )
      {
        v6 = (__int64)v124;
        goto LABEL_130;
      }
    }
  }
  if ( !v115 )
  {
    v18 = sub_CB3190(a1, v48, v6);
    if ( !(_BYTE)v18 )
      goto LABEL_16;
LABEL_132:
    v60 = v6 | 4;
LABEL_76:
    v125 = v60;
    v63 = sub_CA11B0(a1, &v125);
    v17 = *(_DWORD *)(a1 + 608);
    v18 = v63;
    goto LABEL_17;
  }
  v50 = (_WORD *)*v7;
LABEL_65:
  if ( (*(_WORD *)v6 & 0x1FF) == 0x35 )
  {
    v51 = *(_QWORD *)(v6 + 56);
    v52 = 0;
    if ( !v51 )
      goto LABEL_69;
  }
  else
  {
    v51 = *(_QWORD *)(v6 + 40);
    v52 = 0;
    if ( !v51 )
      goto LABEL_69;
  }
  if ( (v51 & 2) != 0 )
    v52 = v51 & 0xFFFFFFFFFFFFFFFCLL;
LABEL_69:
  v53 = (unsigned int *)sub_E31D10(v49, v52);
  v54 = sub_CB13E0(a1, (__int64)v50);
  if ( !BYTE4(v54) )
  {
    if ( !(unsigned __int8)sub_CC6EC0((__int64 *)&v126, (__int64)v53, (unsigned __int64)v50) )
      goto LABEL_16;
    goto LABEL_132;
  }
  v55 = *(unsigned int *)(a1 + 612);
  v110 = *(_BYTE *)(a1 + 664);
  v56 = *(unsigned int *)(a1 + 608);
  *(_BYTE *)(a1 + 664) = (*v50 & 0x1FF) == 111;
  v57 = (__int64 *)v53[2];
  if ( v56 + 1 > v55 )
  {
    v114 = v53[2];
    sub_2237220(a1 + 600, a1 + 616, v56 + 1, 16);
    v56 = *(unsigned int *)(a1 + 608);
    v57 = (__int64 *)v114;
  }
  v58 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 16 * v56);
  *v58 = 1;
  v58[1] = v57;
  v59 = *(_QWORD *)a1;
  ++*(_DWORD *)(a1 + 608);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _WORD *))(v59 + 40))(a1, v50) )
  {
    v17 = *(_DWORD *)(a1 + 608) - 1;
    *(_BYTE *)(a1 + 664) = v110;
    goto LABEL_17;
  }
  v60 = v6 | 4;
  v61 = (*(_BYTE *)(*(_QWORD *)v53 + 68LL) & 1) == 0;
  v125 = v6 | 4;
  if ( v61 )
    v62 = sub_CA4FD0(a1, v54, v53[2], &v125);
  else
    v62 = sub_CA9660((_QWORD *)a1, v54, (__int64)v53, &v125);
  v17 = *(_DWORD *)(a1 + 608) - 1;
  *(_DWORD *)(a1 + 608) = v17;
  *(_BYTE *)(a1 + 664) = v110;
  if ( v62 )
    goto LABEL_76;
LABEL_17:
  *(_DWORD *)(a1 + 608) = v17 - 1;
  return v18;
}
