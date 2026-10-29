__int64 __fastcall sub_CAD2C0(__int64 a1, unsigned __int64 *a2, __int64 *a3, __int64 *a4, __int64 a5)
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
  __int64 *v26; // r9
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
  int v42; // eax
  int v43; // r14d
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbp
  int v47; // r12d
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
  __int64 *v58; // r9
  _QWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // r14
  bool v62; // zf
  char v63; // al
  unsigned int v64; // eax
  unsigned int v65; // r14d
  __int64 v66; // rax
  __int64 v67; // r8
  unsigned int v68; // r13d
  unsigned int v69; // r14d
  __int64 v70; // r12
  __int64 v71; // rax
  unsigned int v72; // r12d
  unsigned __int64 v73; // rsi
  __int64 v74; // r11
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r14
  __int64 v77; // rcx
  unsigned __int64 *v78; // rcx
  __int64 v79; // rax
  char v80; // al
  char v81; // cl
  unsigned int v82; // edx
  unsigned __int64 v83; // r15
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 *v91; // rcx
  __int64 v92; // rsi
  unsigned __int64 v93; // r10
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
    sub_22134E0(a1 + 600, a1 + 616, v9 + 1, 16);
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
  v32 = *v12;
  v115 = v5;
  v13 = sub_F3F310(v32, a2, v15, v16);
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
      v33 = sub_C872A0(a1, (__int64 *)&v126);
      v17 = *(_DWORD *)(a1 + 608);
      v18 = v33;
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
      v20 = sub_CA37C0(a1, *v7, v15, v16, a5);
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
  v23 = sub_CC2440(v22, v11);
  v26 = (__int64 *)v115;
  v27 = HIDWORD(v23);
  v18 = HIDWORD(v23);
  if ( BYTE4(v23) )
  {
    if ( !v115 )
    {
      v20 = sub_C8ED90(a1, (unsigned int)v23, v11, v6, v25);
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
      if ( *(_BYTE *)(v28 + 16) == 14 || (v28 = sub_C8AD90(*v12, v11, v30, v24), v26 = (__int64 *)v115, v28) )
      {
        v65 = (unsigned int)v26;
        if ( (_DWORD)v26 == 1 )
        {
          v31 = *v7;
LABEL_23:
          v18 = sub_CA89D0(a1, v31, v30, v24, v25);
          goto LABEL_16;
        }
        v66 = *(_QWORD *)(v28 + 32);
        v114 = (__int64)v26;
        v111 = v66;
        v68 = sub_C8D700(a1, v66);
        if ( (_DWORD)v114 )
        {
          if ( (_DWORD)v114 == 2 )
          {
            v112 = &v7[v114];
            if ( v7 != v112 )
            {
              v69 = 0;
              v70 = v6 | 4;
              v114 = (__int64)&v126;
              do
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 40LL))(a1, *v7) )
                  goto LABEL_16;
                v126.m128_u64[0] = v70;
                if ( !(unsigned __int8)sub_C81040(a1, v68, v69, (__int64 *)v114) )
                  goto LABEL_16;
                ++v69;
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
            if ( !(unsigned __int8)sub_C8ED90(a1, v68, v111, v6, v67) )
              goto LABEL_16;
            v126.m128_u64[0] = v6 | 4;
            if ( !(unsigned __int8)sub_C81040(a1, v68, v65, (__int64 *)v114) )
              goto LABEL_16;
            if ( v65 == 1 )
              break;
            v65 = 1;
          }
        }
      }
      else
      {
        v94 = *v12;
        v95 = (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 57;
        if ( (unsigned int)v95 > 1 )
        {
          v94 = sub_C8ADC0(v94, v11, v95, v24);
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
        v113 = sub_C8D700(a1, v97);
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
              || (v107 = sub_C8ADC0(v107, v104, v105, v106)) != 0 )
            {
              v126.m128_u64[0] = v102;
              if ( !(unsigned __int8)sub_C81A40(a1, v113, 0, v101, *(_DWORD *)(v107 + 20), (__int64 *)v115) )
                goto LABEL_16;
              v101 += *(_DWORD *)(v107 + 20);
            }
            else
            {
              v126.m128_u64[0] = v102;
              if ( !(unsigned __int8)sub_C81040(a1, v113, v101, (__int64 *)v115) )
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
          if ( (unsigned __int8)sub_C8ED90(a1, v113, v117, v6, v99) )
          {
            v126.m128_u64[0] = v6 | 4;
            if ( (unsigned __int8)sub_C81040(a1, v113, v101, (__int64 *)&v126) )
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
      v31 = *v7;
      if ( v11 == *(_QWORD *)(*v7 + 8) )
        goto LABEL_23;
    }
    v34 = sub_A4E300(**(_QWORD ***)(a1 + 488), v11);
    v35 = v34;
    if ( !v34 || (unsigned int)*(unsigned __int8 *)(v34 + 16) - 2 > 1 )
      BUG();
    v36 = *(_QWORD *)(v34 + 40);
    v121 = (_QWORD *)v36;
    if ( (*(_BYTE *)(v34 + 19) & 2) != 0 )
    {
      v37 = *(_QWORD **)v36;
      if ( *(_DWORD *)(v36 + 8) > 0x40u )
        v37 = (_QWORD *)*v37;
      v121 = v37;
    }
    v116 = v6 | 4;
    v126.m128_u64[0] = v6 | 4;
    v119 = &v126;
    if ( !(unsigned __int8)sub_C83F70(a1, (__int64)v121, (__int64 *)&v126) )
      goto LABEL_16;
    v38 = *(_QWORD *)(v35 + 32);
    LODWORD(v35) = 0;
    v120 = sub_CC2440(*(_QWORD *)(a1 + 488), v38);
    v117 = (__int64)&v7[v115];
    if ( v7 == (unsigned __int64 *)v117 )
      goto LABEL_52;
    LOBYTE(v115) = v18;
    v39 = v7;
LABEL_39:
    v40 = *v39;
    v41 = sub_BD7DA0(*v39);
    if ( (*(_WORD *)v41 & 0x1FF) != 0x42 )
    {
      if ( !(unsigned __int8)sub_CA32A0(a1, v35, v40, v120) )
        goto LABEL_58;
      LODWORD(v35) = v35 + 1;
      goto LABEL_50;
    }
    v42 = sub_C8D700(a1, *(_QWORD *)(v40 + 8));
    v118 = (__int64 *)v39;
    v43 = v42;
    v44 = *(unsigned int *)(v41 + 48);
    v126.m128_u64[0] = v41;
    v126.m128_u64[1] = v44;
    while ( 1 )
    {
      if ( !v41 )
      {
LABEL_48:
        if ( v126.m128_u64[1] == -1 )
        {
          v39 = (unsigned __int64 *)v118;
LABEL_50:
          if ( (unsigned __int64 *)v117 == ++v39 )
          {
            v18 = (unsigned __int8)v115;
LABEL_52:
            if ( !v114 || (_QWORD *)(unsigned int)v35 == v121 )
            {
LABEL_56:
              v126.m128_u64[0] = v116;
              v18 = sub_C7D470(a1, (__int64 *)v119);
            }
            else
            {
              while ( (unsigned __int8)sub_CA32A0(a1, v35, v114, v120) )
              {
                v35 = (unsigned int)(v35 + 1);
                if ( (_QWORD *)v35 == v121 )
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
      v45 = sub_C061F0(v119);
      v46 = *(_QWORD *)v45;
      v47 = sub_CC2440(*(_QWORD *)(a1 + 488), *(_QWORD *)(*(_QWORD *)v45 + 8LL));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v46)
        || v43 != v47 && (v125 = v116, !(unsigned __int8)sub_C7C7D0(a1, v47, v43, &v125))
        || (v125 = v46 | 4, !(unsigned __int8)sub_C81040(a1, v43, v35, &v125)) )
      {
LABEL_58:
        v18 = (unsigned __int8)v115;
        goto LABEL_16;
      }
      v41 = v126.m128_u64[0];
      LODWORD(v35) = v35 + 1;
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
  v49 = sub_C8D540(a1, v11);
  v50 = v49;
  if ( v115 == 1 )
  {
    v51 = (_WORD *)*v7;
    if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(*v7 + 8) )
    {
      v114 = v6;
      v126 = _mm_loadh_ps((const double *)&v114);
      if ( *(_BYTE *)(v49 + 648) )
        goto LABEL_65;
      goto LABEL_89;
    }
LABEL_57:
    v48 = sub_CA89D0(a1, *v7, v27, v24, v25);
    v17 = *(_DWORD *)(a1 + 608);
    v18 = v48;
    goto LABEL_17;
  }
  v114 = v6;
  v126 = _mm_loadh_ps((const double *)&v114);
  if ( !*(_BYTE *)(v49 + 648) )
  {
LABEL_89:
    v114 = (__int64)&v7[v115];
    if ( v7 == (unsigned __int64 *)v114 )
    {
LABEL_130:
      v125 = v6 | 4;
      v108 = sub_C7D470(a1, &v125);
      v17 = *(_DWORD *)(a1 + 608);
      v18 = v108;
      goto LABEL_17;
    }
    v124 = (__int64 *)v6;
    v122 = &v126;
    v71 = v6;
    v72 = 0;
    LOBYTE(v121) = v18;
    v120 = v71 | 4;
    while ( 1 )
    {
      v82 = *(_DWORD *)(v50 + 288);
      v83 = *v7;
      if ( v82 > v72 )
      {
        v84 = *(_QWORD *)(v50 + 280);
        v85 = *(_QWORD *)(v84 + 24LL * v72);
        if ( (*(_BYTE *)(v85 + 68) & 1) != 0 && !*(_QWORD *)(v85 + 40) )
        {
          v90 = v72 + 1;
          v91 = (__int64 *)(v84 + 24 * v90);
          ++v72;
          for ( ; (_DWORD)v90 != v82; v72 = v90 )
          {
            v92 = *v91;
            if ( (*(_BYTE *)(*v91 + 68) & 1) == 0 )
              break;
            v91 += 3;
            if ( *(_QWORD *)(v92 + 40) )
              break;
            LODWORD(v90) = v90 + 1;
          }
        }
      }
      v93 = sub_C8D6A0(a1, *v7);
      if ( BYTE4(v93) )
      {
        v73 = *(unsigned int *)(a1 + 612);
        v74 = *(_QWORD *)(v50 + 280) + 24LL * v72;
        LOBYTE(v119) = *(_BYTE *)(a1 + 664);
        *(_BYTE *)(a1 + 664) = (*(_WORD *)v83 & 0x1FF) == 111;
        v75 = v116 & 0xFFFFFFFF00000000LL | 1;
        v76 = *(unsigned int *)(v74 + 8) | v117 & 0xFFFFFFFF00000000LL;
        v117 = v76;
        v77 = *(unsigned int *)(a1 + 608);
        v116 = v75;
        if ( v77 + 1 > v73 )
        {
          v123 = v75;
          v118 = (__int64 *)v93;
          v115 = v74;
          sub_22134E0(v109, a1 + 616, v77 + 1, 16);
          v77 = *(unsigned int *)(a1 + 608);
          v75 = v123;
          v93 = (unsigned __int64)v118;
          v74 = v115;
        }
        v118 = (__int64 *)v93;
        v78 = (unsigned __int64 *)(*(_QWORD *)(a1 + 600) + 16 * v77);
        v115 = v74;
        *v78 = v75;
        v78[1] = v76;
        v79 = *(_QWORD *)a1;
        ++*(_DWORD *)(a1 + 608);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v79 + 40))(a1, v83) )
        {
          v18 = (unsigned __int8)v121;
          v17 = *(_DWORD *)(a1 + 608) - 1;
          *(_BYTE *)(a1 + 664) = (_BYTE)v119;
          goto LABEL_17;
        }
        v62 = (*(_BYTE *)(*(_QWORD *)v115 + 68LL) & 1) == 0;
        v125 = v120;
        if ( v62 )
          v80 = sub_C81290(a1, (int)v118, *(_DWORD *)(v115 + 8), &v125);
        else
          v80 = sub_C85920((_QWORD *)a1, (int)v118, v115, &v125);
        v17 = *(_DWORD *)(a1 + 608) - 1;
        v81 = (char)v119;
        *(_DWORD *)(a1 + 608) = v17;
        *(_BYTE *)(a1 + 664) = v81;
        if ( !v80 )
        {
          v18 = (unsigned __int8)v121;
          goto LABEL_17;
        }
      }
      else
      {
        v86 = sub_E0DEC0(v50, *(_QWORD *)(v83 + 8));
        if ( v86 )
        {
          v125 = v83 | 4;
          if ( !(unsigned __int8)sub_C80DA0(a1, *(_DWORD *)(v86 + 8), &v125)
            || !(unsigned __int8)sub_C9FC20(a1, v83, v87, v88, v89)
            || (v125 = v120, !(unsigned __int8)sub_C87F20(a1, &v125)) )
          {
LABEL_107:
            v18 = (unsigned __int8)v121;
            v17 = *(_DWORD *)(a1 + 608);
            goto LABEL_17;
          }
          goto LABEL_98;
        }
        if ( !(unsigned __int8)sub_CA3180((__int64 *)v122, *(_QWORD *)(v50 + 280) + 24LL * v72, v83) )
          goto LABEL_107;
      }
      ++v72;
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
    v18 = sub_C8F450(a1, v49, v6);
    if ( !(_BYTE)v18 )
      goto LABEL_16;
LABEL_132:
    v61 = v6 | 4;
LABEL_76:
    v125 = v61;
    v64 = sub_C7D470(a1, &v125);
    v17 = *(_DWORD *)(a1 + 608);
    v18 = v64;
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
  v55 = sub_C8D6A0(a1, (__int64)v51);
  if ( !BYTE4(v55) )
  {
    if ( !(unsigned __int8)sub_CA3180((__int64 *)&v126, (__int64)v54, (unsigned __int64)v51) )
      goto LABEL_16;
    goto LABEL_132;
  }
  v56 = *(unsigned int *)(a1 + 612);
  v110 = *(_BYTE *)(a1 + 664);
  v57 = *(unsigned int *)(a1 + 608);
  *(_BYTE *)(a1 + 664) = (*v51 & 0x1FF) == 111;
  v58 = (__int64 *)v54[2];
  if ( v57 + 1 > v56 )
  {
    v114 = v54[2];
    sub_22134E0(a1 + 600, a1 + 616, v57 + 1, 16);
    v57 = *(unsigned int *)(a1 + 608);
    v58 = (__int64 *)v114;
  }
  v59 = (_QWORD *)(*(_QWORD *)(a1 + 600) + 16 * v57);
  *v59 = 1;
  v59[1] = v58;
  v60 = *(_QWORD *)a1;
  ++*(_DWORD *)(a1 + 608);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _WORD *))(v60 + 40))(a1, v51) )
  {
    v17 = *(_DWORD *)(a1 + 608) - 1;
    *(_BYTE *)(a1 + 664) = v110;
    goto LABEL_17;
  }
  v61 = v6 | 4;
  v62 = (*(_BYTE *)(*(_QWORD *)v54 + 68LL) & 1) == 0;
  v125 = v6 | 4;
  if ( v62 )
    v63 = sub_C81290(a1, v55, v54[2], &v125);
  else
    v63 = sub_C85920((_QWORD *)a1, v55, (__int64)v54, &v125);
  v17 = *(_DWORD *)(a1 + 608) - 1;
  *(_DWORD *)(a1 + 608) = v17;
  *(_BYTE *)(a1 + 664) = v110;
  if ( v63 )
    goto LABEL_76;
LABEL_17:
  *(_DWORD *)(a1 + 608) = v17 - 1;
  return v18;
}

