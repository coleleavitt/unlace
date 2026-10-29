__int64 __fastcall sub_CE4240(__int64 a1, unsigned __int64 *a2, unsigned int *a3, unsigned __int64 a4, __int64 a5)
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
  unsigned __int64 v26; // r9
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
  unsigned int v41; // eax
  unsigned int v42; // r14d
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned int v46; // r12d
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
  unsigned __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // r8
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
  __int64 v80; // r8
  char v81; // al
  char v82; // cl
  unsigned int v83; // edx
  unsigned __int64 v84; // r15
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // rax
  __int64 *v92; // rcx
  __int64 v93; // rsi
  unsigned __int64 v94; // r10
  __int64 v95; // rcx
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
    sub_2237220(a1 + 1376, a1 + 1392, v9 + 1, 16);
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
  v31 = *v12;
  v117 = v5;
  v13 = sub_F63050(v31, a2, v15, v16);
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
      v32 = sub_D06A50(a1, &v128);
      v17 = *(_DWORD *)(a1 + 1384);
      v18 = v32;
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
      v20 = sub_CDA710(a1, *v7, v15, v16, a5);
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
  v23 = sub_CE6180(v22, v11);
  v26 = v117;
  v18 = HIDWORD(v23);
  if ( BYTE4(v23) )
  {
    if ( !v117 )
    {
      v20 = sub_CB6350(a1, (unsigned int)v23, v11, v6, v25);
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
      if ( *(_BYTE *)(v27 + 16) == 14 || (v27 = sub_CAEAD0(*v12, v11, v29, v24), v26 = v117, v27) )
      {
        v65 = v26;
        if ( (_DWORD)v26 == 1 )
        {
          v30 = *v7;
LABEL_23:
          v18 = sub_CDF950(a1, v30);
          goto LABEL_16;
        }
        v66 = *(_QWORD *)(v27 + 32);
        v116 = (__m128 *)v26;
        v113 = v66;
        v68 = sub_CB4CA0(a1, v66);
        if ( (_DWORD)v116 )
        {
          if ( (_DWORD)v116 == 2 )
          {
            v114 = &v7[(_QWORD)v116];
            if ( v7 != v114 )
            {
              v69 = 0;
              v70 = v6 | 4;
              v116 = &v128;
              do
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 48LL))(a1, *v7) )
                  goto LABEL_16;
                v128.m128_u64[0] = v70;
                if ( !(unsigned __int8)sub_D19550(a1, v68, v69, v116) )
                  goto LABEL_16;
                ++v69;
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
            if ( !(unsigned __int8)sub_CB6350(a1, v68, v113, v6, v67) )
              goto LABEL_16;
            v128.m128_u64[0] = v6 | 4;
            if ( !(unsigned __int8)sub_D19550(a1, v68, v65, v116) )
              goto LABEL_16;
            if ( v65 == 1 )
              break;
            v65 = 1;
          }
        }
      }
      else
      {
        v96 = *v12;
        v97 = (unsigned int)*(unsigned __int8 *)(*v12 + 16) - 57;
        if ( (unsigned int)v97 > 1 )
        {
          v96 = sub_CAEB00(v96, v11, v97, v95);
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
        v115 = sub_CB4CA0(a1, v99);
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
              || (v109 = sub_CAEB00(v109, v106, v107, v108)) != 0 )
            {
              v128.m128_u64[0] = v104;
              if ( !(unsigned __int8)sub_D122D0(a1, v115, 0, v103, *(unsigned int *)(v109 + 20), v117) )
                goto LABEL_16;
              v103 += *(_DWORD *)(v109 + 20);
            }
            else
            {
              v128.m128_u64[0] = v104;
              if ( !(unsigned __int8)sub_D19550(a1, v115, v103, v117) )
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
          if ( (unsigned __int8)sub_CB6350(a1, v115, v119, v6, v101) )
          {
            v128.m128_u64[0] = v6 | 4;
            if ( (unsigned __int8)sub_D19550(a1, v115, v103, &v128) )
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
      v30 = *v7;
      if ( v11 == *(_QWORD *)(*v7 + 8) )
        goto LABEL_23;
    }
    v33 = sub_A72040(**(_QWORD ***)(a1 + 1264), v11);
    v34 = v33;
    if ( !v33 || (unsigned int)*(unsigned __int8 *)(v33 + 16) - 2 > 1 )
      BUG();
    v35 = *(_QWORD *)(v33 + 40);
    v123 = (_QWORD *)v35;
    if ( (*(_BYTE *)(v33 + 19) & 2) != 0 )
    {
      v36 = *(_QWORD **)v35;
      if ( *(_DWORD *)(v35 + 8) > 0x40u )
        v36 = (_QWORD *)*v36;
      v123 = v36;
    }
    v118 = v6 | 4;
    v128.m128_u64[0] = v6 | 4;
    v121 = &v128;
    if ( !(unsigned __int8)sub_D00090(a1, v123, &v128) )
      goto LABEL_16;
    v37 = *(_QWORD *)(v34 + 32);
    LODWORD(v34) = 0;
    v122 = sub_CE6180(*(_QWORD *)(a1 + 1264), v37);
    v119 = (__int64)&v7[v117];
    if ( v7 == (unsigned __int64 *)v119 )
      goto LABEL_52;
    LOBYTE(v117) = v18;
    v38 = v7;
LABEL_39:
    v39 = *v38;
    v40 = sub_BFBAE0(*v38);
    if ( (*(_WORD *)v40 & 0x1FF) != 0x42 )
    {
      if ( !(unsigned __int8)sub_CDA1F0(a1, v34, v39, v122) )
        goto LABEL_58;
      LODWORD(v34) = v34 + 1;
      goto LABEL_50;
    }
    v41 = sub_CB4CA0(a1, *(_QWORD *)(v39 + 8));
    v120 = v38;
    v42 = v41;
    v43 = *(unsigned int *)(v40 + 48);
    v128.m128_u64[0] = v40;
    v128.m128_u64[1] = v43;
    while ( 1 )
    {
      if ( !v40 )
      {
LABEL_48:
        if ( v128.m128_u64[1] == -1 )
        {
          v38 = v120;
LABEL_50:
          if ( (unsigned __int64 *)v119 == ++v38 )
          {
            v18 = (unsigned __int8)v117;
LABEL_52:
            if ( !v116 || (_QWORD *)(unsigned int)v34 == v123 )
            {
LABEL_56:
              v128.m128_u64[0] = v118;
              v18 = sub_D00E60(a1, v121);
            }
            else
            {
              while ( (unsigned __int8)sub_CDA1F0(a1, v34, (unsigned __int64)v116, v122) )
              {
                v34 = (unsigned int)(v34 + 1);
                if ( (_QWORD *)v34 == v123 )
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
      v44 = sub_C29F30(v121);
      v45 = *(_QWORD *)v44;
      v46 = sub_CE6180(*(_QWORD *)(a1 + 1264), *(_QWORD *)(*(_QWORD *)v44 + 8LL));
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v45)
        || v42 != v46 && (v127 = v118, !(unsigned __int8)sub_D2FA60(a1, v46, v42, &v127))
        || (v127 = v45 | 4, !(unsigned __int8)sub_D19550(a1, v42, (unsigned int)v34, &v127)) )
      {
LABEL_58:
        v18 = (unsigned __int8)v117;
        goto LABEL_16;
      }
      v40 = v128.m128_u64[0];
      LODWORD(v34) = v34 + 1;
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
  v48 = sub_CB4AE0(a1, v11);
  v49 = v48;
  if ( v117 == 1 )
  {
    v50 = (_WORD *)*v7;
    if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(*v7 + 8) )
    {
      v116 = (__m128 *)v6;
      v128 = _mm_loadh_ps((const double *)&v116);
      if ( *(_BYTE *)(v48 + 648) )
        goto LABEL_65;
      goto LABEL_89;
    }
LABEL_57:
    v47 = sub_CDF950(a1, *v7);
    v17 = *(_DWORD *)(a1 + 1384);
    v18 = v47;
    goto LABEL_17;
  }
  v116 = (__m128 *)v6;
  v128 = _mm_loadh_ps((const double *)&v116);
  if ( !*(_BYTE *)(v48 + 648) )
  {
LABEL_89:
    v116 = (__m128 *)&v7[v117];
    if ( v7 == (unsigned __int64 *)v116 )
    {
LABEL_130:
      v127 = v6 | 4;
      v110 = sub_D00E60(a1, &v127);
      v17 = *(_DWORD *)(a1 + 1384);
      v18 = v110;
      goto LABEL_17;
    }
    v126 = v6;
    v124 = &v128;
    v71 = v6;
    v72 = 0;
    LOBYTE(v123) = v18;
    v122 = v71 | 4;
    while ( 1 )
    {
      v83 = *(_DWORD *)(v49 + 288);
      v84 = *v7;
      if ( v83 > v72 )
      {
        v85 = *(_QWORD *)(v49 + 280);
        v86 = *(_QWORD *)(v85 + 24LL * v72);
        if ( (*(_BYTE *)(v86 + 68) & 1) != 0 && !*(_QWORD *)(v86 + 40) )
        {
          v91 = v72 + 1;
          v92 = (__int64 *)(v85 + 24 * v91);
          ++v72;
          for ( ; (_DWORD)v91 != v83; v72 = v91 )
          {
            v93 = *v92;
            if ( (*(_BYTE *)(*v92 + 68) & 1) == 0 )
              break;
            v92 += 3;
            if ( *(_QWORD *)(v93 + 40) )
              break;
            LODWORD(v91) = v91 + 1;
          }
        }
      }
      v94 = sub_CB4C40(a1, *v7);
      if ( BYTE4(v94) )
      {
        v73 = *(unsigned int *)(a1 + 1388);
        v74 = *(_QWORD *)(v49 + 280) + 24LL * v72;
        LOBYTE(v121) = *(_BYTE *)(a1 + 1440);
        *(_BYTE *)(a1 + 1440) = (*(_WORD *)v84 & 0x1FF) == 111;
        v75 = v118 & 0xFFFFFFFF00000000LL | 1;
        v76 = *(unsigned int *)(v74 + 8) | v119 & 0xFFFFFFFF00000000LL;
        v119 = v76;
        v77 = *(unsigned int *)(a1 + 1384);
        v118 = v75;
        if ( v77 + 1 > v73 )
        {
          v125 = v75;
          v120 = (unsigned __int64 *)v94;
          v117 = v74;
          sub_2237220(v111, a1 + 1392, v77 + 1, 16);
          v77 = *(unsigned int *)(a1 + 1384);
          v75 = v125;
          v94 = (unsigned __int64)v120;
          v74 = v117;
        }
        v120 = (unsigned __int64 *)v94;
        v78 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1376) + 16 * v77);
        v117 = v74;
        *v78 = v75;
        v78[1] = v76;
        v79 = *(_QWORD *)a1;
        ++*(_DWORD *)(a1 + 1384);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(v79 + 48))(a1, v84) )
        {
          v18 = (unsigned __int8)v123;
          v17 = *(_DWORD *)(a1 + 1384) - 1;
          *(_BYTE *)(a1 + 1440) = (_BYTE)v121;
          goto LABEL_17;
        }
        v62 = (*(_BYTE *)(*(_QWORD *)v117 + 68LL) & 1) == 0;
        v127 = v122;
        if ( v62 )
          v81 = sub_D26CC0(a1, (unsigned int)v120, *(unsigned int *)(v117 + 8), &v127, v80);
        else
          v81 = sub_D4C370(a1, (unsigned int)v120, v117, &v127);
        v17 = *(_DWORD *)(a1 + 1384) - 1;
        v82 = (char)v121;
        *(_DWORD *)(a1 + 1384) = v17;
        *(_BYTE *)(a1 + 1440) = v82;
        if ( !v81 )
        {
          v18 = (unsigned __int8)v123;
          goto LABEL_17;
        }
      }
      else
      {
        v87 = sub_E31C00(v49, *(_QWORD *)(v84 + 8));
        if ( v87 )
        {
          v127 = v84 | 4;
          if ( !(unsigned __int8)sub_D05EC0(a1, *(unsigned int *)(v87 + 8), &v127)
            || !(unsigned __int8)sub_CD6B90(a1, v84, v88, v89, v90)
            || (v127 = v122, !(unsigned __int8)sub_D00F10(a1, &v127)) )
          {
LABEL_107:
            v18 = (unsigned __int8)v123;
            v17 = *(_DWORD *)(a1 + 1384);
            goto LABEL_17;
          }
          goto LABEL_98;
        }
        if ( !(unsigned __int8)sub_CDA0D0((__int64 *)v124, *(_QWORD *)(v49 + 280) + 24LL * v72, v84) )
          goto LABEL_107;
      }
      ++v72;
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
    v18 = sub_CB6A10(a1, v48, v6);
    if ( !(_BYTE)v18 )
      goto LABEL_16;
LABEL_132:
    v61 = v6 | 4;
LABEL_76:
    v127 = v61;
    v64 = sub_D00E60(a1, &v127);
    v17 = *(_DWORD *)(a1 + 1384);
    v18 = v64;
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
  v54 = sub_CB4C40(a1, (__int64)v50);
  if ( !BYTE4(v54) )
  {
    if ( !(unsigned __int8)sub_CDA0D0((__int64 *)&v128, (__int64)v53, (unsigned __int64)v50) )
      goto LABEL_16;
    goto LABEL_132;
  }
  v55 = *(unsigned int *)(a1 + 1388);
  v112 = *(_BYTE *)(a1 + 1440);
  v56 = *(unsigned int *)(a1 + 1384);
  *(_BYTE *)(a1 + 1440) = (*v50 & 0x1FF) == 111;
  v57 = v53[2];
  if ( v56 + 1 > v55 )
  {
    v116 = (__m128 *)v53[2];
    sub_2237220(a1 + 1376, a1 + 1392, v56 + 1, 16);
    v56 = *(unsigned int *)(a1 + 1384);
    v57 = (unsigned __int64)v116;
  }
  v58 = (_QWORD *)(*(_QWORD *)(a1 + 1376) + 16 * v56);
  *v58 = 1;
  v58[1] = v57;
  v59 = *(_QWORD *)a1;
  ++*(_DWORD *)(a1 + 1384);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _WORD *))(v59 + 48))(a1, v50) )
  {
    v17 = *(_DWORD *)(a1 + 1384) - 1;
    *(_BYTE *)(a1 + 1440) = v112;
    goto LABEL_17;
  }
  v61 = v6 | 4;
  v62 = (*(_BYTE *)(*(_QWORD *)v53 + 68LL) & 1) == 0;
  v127 = v6 | 4;
  if ( v62 )
    v63 = sub_D26CC0(a1, (unsigned int)v54, v53[2], &v127, v60);
  else
    v63 = sub_D4C370(a1, (unsigned int)v54, v53, &v127);
  v17 = *(_DWORD *)(a1 + 1384) - 1;
  *(_DWORD *)(a1 + 1384) = v17;
  *(_BYTE *)(a1 + 1440) = v112;
  if ( v63 )
    goto LABEL_76;
LABEL_17:
  *(_DWORD *)(a1 + 1384) = v17 - 1;
  return v18;
}
