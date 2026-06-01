__int64 __fastcall sub_1201600(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // r11
  char v11; // r10
  char v12; // r13
  int v13; // r12d
  char v14; // r14
  char v15; // r9
  char v16; // r15
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rbp
  unsigned int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rax
  const char *v23; // rax
  _BYTE *v24; // rbx
  size_t v25; // rax
  __int64 v26; // rsi
  char v27; // r9
  char *v28; // rax
  signed __int64 v29; // rdx
  char v30; // r9
  char v31; // r10
  __int64 result; // rax
  const char *v33; // rax
  size_t v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  char v38; // r9
  char v39; // r10
  __m128i *v40; // rax
  void *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __m128i *v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  _QWORD *v49; // rax
  __int64 *v50; // rdx
  _DWORD *v51; // rbp
  unsigned __int64 v52; // r12
  char *v53; // rbx
  size_t v54; // rax
  signed __int64 v55; // rdx
  unsigned __int8 *v56; // rbx
  unsigned __int8 *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rbx
  const char *v60; // rdi
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rbp
  __int64 v65; // r12
  __int64 v66; // rbp
  void *v67; // rdi
  signed __int64 v68; // [rsp+8h] [rbp-140h]
  char v69; // [rsp+8h] [rbp-140h]
  char v70; // [rsp+8h] [rbp-140h]
  __int64 v71; // [rsp+8h] [rbp-140h]
  char v72; // [rsp+8h] [rbp-140h]
  char v73; // [rsp+8h] [rbp-140h]
  char v74; // [rsp+8h] [rbp-140h]
  char *v75; // [rsp+10h] [rbp-138h]
  char v78; // [rsp+28h] [rbp-120h]
  char v79; // [rsp+28h] [rbp-120h]
  char v80; // [rsp+28h] [rbp-120h]
  char v81; // [rsp+28h] [rbp-120h]
  char v82; // [rsp+28h] [rbp-120h]
  char v83; // [rsp+28h] [rbp-120h]
  __int64 v84; // [rsp+28h] [rbp-120h]
  __int64 v85; // [rsp+28h] [rbp-120h]
  __int64 v86; // [rsp+28h] [rbp-120h]
  __int64 v87; // [rsp+30h] [rbp-118h]
  char v88; // [rsp+30h] [rbp-118h]
  char v89; // [rsp+30h] [rbp-118h]
  char v90; // [rsp+30h] [rbp-118h]
  char v91; // [rsp+30h] [rbp-118h]
  char v92; // [rsp+38h] [rbp-110h]
  char *v93; // [rsp+38h] [rbp-110h]
  char v94; // [rsp+38h] [rbp-110h]
  char v95; // [rsp+40h] [rbp-108h]
  char v96; // [rsp+40h] [rbp-108h]
  signed __int64 v97; // [rsp+40h] [rbp-108h]
  int v98; // [rsp+48h] [rbp-100h]
  char v99; // [rsp+48h] [rbp-100h]
  char v100; // [rsp+48h] [rbp-100h]
  char v101; // [rsp+48h] [rbp-100h]
  char v102; // [rsp+48h] [rbp-100h]
  char v103; // [rsp+48h] [rbp-100h]
  char v104; // [rsp+4Fh] [rbp-F9h]
  char v105; // [rsp+4Fh] [rbp-F9h]
  _QWORD *v106; // [rsp+50h] [rbp-F8h]
  char v107; // [rsp+50h] [rbp-F8h]
  _QWORD *v108; // [rsp+58h] [rbp-F0h]
  __m128i v109; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v110; // [rsp+70h] [rbp-D8h] BYREF
  void *v111[2]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+90h] [rbp-B8h] BYREF
  void *v113[2]; // [rsp+A0h] [rbp-A8h] BYREF
  __m128i v114; // [rsp+B0h] [rbp-98h] BYREF
  __m128i *v115; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v116; // [rsp+C8h] [rbp-80h]
  char *v117; // [rsp+D0h] [rbp-78h]
  signed __int64 v118; // [rsp+D8h] [rbp-70h]
  __int16 v119; // [rsp+E0h] [rbp-68h]

  LODWORD(v115) = 792;
  v4 = sub_21B6DA0(a2, &v115, 1);
  v5 = *(_QWORD **)(a2 + 8);
  v6 = &v5[(unsigned int)v4];
  v7 = &v5[HIDWORD(v4)];
  if ( v6 == v7 )
  {
LABEL_6:
    v68 = 0;
    v8 = a2;
    v75 = nullptr;
    goto LABEL_7;
  }
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 792) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    v5 = *(_QWORD **)(a2 + 8);
    goto LABEL_6;
  }
  do
  {
    v21 = *v6;
    v22 = *(_QWORD *)(*v6 + 16LL);
    if ( !v22 )
      v22 = *v6;
    ++v6;
    *(_BYTE *)(v22 + 44) |= 1u;
    if ( v6 == v7 )
      break;
    while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 792) )
    {
      if ( v7 == ++v6 )
        goto LABEL_62;
    }
  }
  while ( v7 != v6 );
LABEL_62:
  v23 = **(const char ***)(v21 + 48);
  v75 = (char *)v23;
  if ( !v23 )
  {
    v68 = 0;
    v26 = *a1;
    goto LABEL_86;
  }
  v24 = **(_BYTE ***)(v21 + 48);
  v25 = strlen(v23);
  v68 = v25;
  if ( v25 == 4 )
  {
    if ( *(_DWORD *)v24 == 1953718630 )
    {
LABEL_87:
      v8 = a2;
      v5 = *(_QWORD **)(a2 + 8);
      goto LABEL_7;
    }
    goto LABEL_65;
  }
  if ( v25 == 3 )
  {
    if ( *(_WORD *)v24 == 26223 && v24[2] == 102 )
      goto LABEL_87;
LABEL_65:
    v26 = *a1;
LABEL_86:
    sub_FC70B0((__int64)&v115, v26, 0, 497);
    sub_AEC220((unsigned __int8 **)&v115, *(_BYTE **)(v21 + 24), *(_QWORD *)(v21 + 32));
    sub_AEC220((unsigned __int8 **)&v115, v75, v68);
    sub_AEA040((__int64)&v115);
    v68 = 0;
    v75 = nullptr;
    goto LABEL_87;
  }
  v26 = *a1;
  if ( v25 != 2 || *(_WORD *)v24 != 28271 )
    goto LABEL_86;
  sub_FC70B0((__int64)&v115, v26, 0, 606);
  sub_AEC220((unsigned __int8 **)&v115, v24, 2);
  v49 = *(_QWORD **)(v21 + 8);
  v50 = (__int64 *)v49[1];
  v51 = (_DWORD *)(v49[4] + 80LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v21 + 40LL) - 1));
  if ( !*v51 )
  {
    v52 = 0;
    v53 = (char *)(*v50 + (unsigned int)v51[1]);
    if ( !v53 )
    {
      v55 = 0;
      goto LABEL_159;
    }
    goto LABEL_156;
  }
  v59 = *v50;
  v60 = (const char *)(*v50 + *(unsigned int *)(v49[2] + 4LL * (unsigned int)(*v51 + 1)));
  if ( !v60 )
  {
    v52 = 0;
    v53 = (char *)((unsigned int)v51[1] + v59);
    if ( !v53 )
    {
      v52 = 0;
      v54 = 0;
      goto LABEL_163;
    }
    goto LABEL_156;
  }
  v52 = (unsigned int)j__strlen(v60);
  v54 = 0;
  v53 = (char *)((unsigned int)v51[1] + v59);
  if ( v53 )
LABEL_156:
    v54 = j__strlen(v53);
  if ( v54 >= v52 )
  {
LABEL_163:
    v53 += v52;
    v55 = v54 - v52;
    goto LABEL_159;
  }
  v53 += v54;
  v55 = 0;
LABEL_159:
  sub_AEC220((unsigned __int8 **)&v115, v53, v55);
  v56 = (unsigned __int8 *)v115;
  if ( !v115 )
  {
    v61 = v116;
    v62 = *(_DWORD *)(v116 + 14976);
    if ( v62 )
    {
      v63 = (unsigned int)(v62 - 1);
      *(_DWORD *)(v116 + 14976) = v63;
      v56 = *(unsigned __int8 **)(v61 + 8 * v63 + 14848);
      v64 = *((unsigned int *)v56 + 134);
      *v56 = 0;
      v65 = *((_QWORD *)v56 + 66);
      *((_DWORD *)v56 + 106) = 0;
      v66 = v65 + (v64 << 6);
      while ( v65 != v66 )
      {
        while ( 1 )
        {
          v66 -= 64;
          v67 = *(void **)(v66 + 24);
          if ( v67 == (void *)(v66 + 40) )
            break;
          operator delete(v67);
          if ( v65 == v66 )
            goto LABEL_175;
        }
      }
LABEL_175:
      *((_DWORD *)v56 + 134) = 0;
    }
    else
    {
      v56 = (unsigned __int8 *)operator new(0x3A0u);
      *v56 = 0;
      *((_QWORD *)v56 + 12) = v56 + 112;
      *((_QWORD *)v56 + 16) = v56 + 144;
      *((_QWORD *)v56 + 20) = v56 + 176;
      *((_QWORD *)v56 + 24) = v56 + 208;
      *((_QWORD *)v56 + 28) = v56 + 240;
      *((_QWORD *)v56 + 32) = v56 + 272;
      *((_QWORD *)v56 + 36) = v56 + 304;
      *((_QWORD *)v56 + 40) = v56 + 336;
      *((_QWORD *)v56 + 44) = v56 + 368;
      *((_QWORD *)v56 + 48) = v56 + 400;
      *((_QWORD *)v56 + 52) = v56 + 432;
      *((_QWORD *)v56 + 13) = 0;
      v56[112] = 0;
      *((_QWORD *)v56 + 17) = 0;
      v56[144] = 0;
      *((_QWORD *)v56 + 21) = 0;
      v56[176] = 0;
      *((_QWORD *)v56 + 25) = 0;
      v56[208] = 0;
      *((_QWORD *)v56 + 29) = 0;
      v56[240] = 0;
      *((_QWORD *)v56 + 33) = 0;
      v56[272] = 0;
      *((_QWORD *)v56 + 37) = 0;
      v56[304] = 0;
      *((_QWORD *)v56 + 41) = 0;
      v56[336] = 0;
      *((_QWORD *)v56 + 45) = 0;
      v56[368] = 0;
      *((_QWORD *)v56 + 49) = 0;
      v56[400] = 0;
      *((_QWORD *)v56 + 53) = 0x800000000LL;
      *((_QWORD *)v56 + 66) = v56 + 544;
      *((_QWORD *)v56 + 67) = 0x600000000LL;
    }
    v115 = (__m128i *)v56;
  }
  v56[*v56 + 1] = 1;
  v57 = (unsigned __int8 *)v115;
  v58 = v115->m128i_u8[0];
  v115->m128i_i8[0] = v58 + 1;
  *(_QWORD *)&v57[8 * v58 + 16] = "off";
  sub_AEA040((__int64)&v115);
  v68 = 3;
  v75 = (char *)"off";
  v8 = a2;
  v5 = *(_QWORD **)(a2 + 8);
LABEL_7:
  v9 = v5;
  v10 = &v5[*(unsigned int *)(v8 + 16)];
  if ( v5 == v10 )
    goto LABEL_151;
  if ( !*v5 )
  {
    v48 = v5 + 1;
    while ( 1 )
    {
      v9 = v48;
      if ( v10 == v48 )
        break;
      if ( *v48++ )
        goto LABEL_9;
    }
LABEL_151:
    v98 = 4;
    v11 = 0;
    v14 = 0;
    v13 = 1;
    v95 = 0;
    v16 = 1;
    v27 = 1;
    goto LABEL_69;
  }
LABEL_9:
  v87 = a3;
  v11 = 0;
  v12 = 1;
  v13 = 1;
  v14 = 0;
  v15 = 0;
  v98 = 4;
  v16 = 1;
  while ( 1 )
  {
    v19 = *v9;
    v20 = *(_DWORD *)(*(_QWORD *)*v9 + 40LL);
    if ( v20 == 1023 )
    {
      v15 = 0;
      goto LABEL_16;
    }
    if ( v20 > 0x3FF )
    {
      if ( v20 == 1328 )
      {
        v11 = 0;
        goto LABEL_16;
      }
      if ( v20 <= 0x530 )
      {
        if ( v20 != 1171 )
        {
          if ( v20 == 1172 )
          {
            v16 = 0;
            goto LABEL_16;
          }
          if ( v20 != 1134 )
            goto LABEL_19;
          if ( v68 == 4 && *(_DWORD *)v75 == 1953718630 )
          {
            v68 = 0;
            v75 = (char *)&byte_22F0C30;
          }
          v11 = 0;
          v15 = 0;
          v13 = 1;
          v14 = 0;
          v16 = 1;
LABEL_41:
          v12 = 1;
          goto LABEL_16;
        }
LABEL_35:
        v12 = 0;
        goto LABEL_16;
      }
      if ( v20 == 1686 )
      {
        v11 = 1;
        goto LABEL_16;
      }
      if ( v20 <= 0x696 )
      {
        if ( v20 != 1402 )
          goto LABEL_19;
        v13 = 0;
        goto LABEL_16;
      }
      if ( v20 != 1805 )
      {
        if ( v20 != 3076 )
          goto LABEL_19;
LABEL_34:
        v68 = 4;
        v11 = 1;
        v13 = 0;
        v15 = 1;
        v75 = "fast";
        v14 = 1;
        v16 = 0;
        goto LABEL_35;
      }
      v13 = 1;
    }
    else
    {
      if ( v20 == 696 )
        goto LABEL_34;
      if ( v20 > 0x2B8 )
      {
        if ( v20 == 838 )
        {
          v16 = 1;
          goto LABEL_16;
        }
        if ( v20 == 1020 )
        {
          v14 = 0;
          goto LABEL_16;
        }
        if ( v20 != 837 )
          goto LABEL_19;
        goto LABEL_41;
      }
      switch ( v20 )
      {
        case 0x1B4u:
          v15 = 1;
          break;
        case 0x202u:
          v33 = **(const char ***)(v19 + 48);
          v93 = (char *)v33;
          if ( !v33 )
          {
            v34 = 0;
LABEL_96:
            v97 = v34;
            v108 = v10;
            v107 = v11;
            v105 = v15;
            sub_FC70B0((__int64)&v115, *a1, 0, 497);
            sub_AEC220((unsigned __int8 **)&v115, *(_BYTE **)(v19 + 24), *(_QWORD *)(v19 + 32));
            sub_AEC220((unsigned __int8 **)&v115, v93, v97);
            sub_AEA040((__int64)&v115);
            v15 = v105;
            v11 = v107;
            v10 = v108;
            break;
          }
          v106 = v10;
          v104 = v11;
          v96 = v15;
          v34 = strlen(v33);
          v15 = v96;
          v11 = v104;
          v10 = v106;
          if ( v34 != 4 )
          {
            if ( v34 == 8 )
            {
              if ( *(_QWORD *)v93 == 0x6465766F72706D69LL )
              {
                v98 = 1;
                break;
              }
            }
            else if ( v34 == 5 && *(_DWORD *)v93 == 1769169250 && v93[4] == 99 )
            {
              v98 = 3;
              break;
            }
            goto LABEL_96;
          }
          if ( *(_DWORD *)v93 != 1819047270 )
            goto LABEL_96;
          v98 = 0;
          break;
        case 0x1B1u:
          v14 = 1;
          break;
        default:
          goto LABEL_19;
      }
    }
LABEL_16:
    v17 = *(_QWORD *)(v19 + 16);
    if ( !v17 )
      v17 = v19;
    *(_BYTE *)(v17 + 44) |= 1u;
LABEL_19:
    v18 = v9 + 1;
    if ( v10 == v9 + 1 )
      goto LABEL_68;
    if ( !v9[1] )
      break;
LABEL_21:
    v9 = v18;
  }
  while ( v10 != ++v18 )
  {
    if ( *v18 )
      goto LABEL_21;
  }
LABEL_68:
  v95 = v15;
  v27 = v12;
  a3 = v87;
LABEL_69:
  v92 = v11;
  v88 = v27;
  v28 = sub_11C6A80(*a1, a2);
  v30 = v88;
  v31 = v92;
  if ( v29 )
  {
    v119 = 1283;
    v115 = (__m128i *)"-mrecip=";
    v118 = v29;
    v117 = v28;
    v45 = sub_10DA6C0(a2, (__int64)&v115);
    v46 = *(unsigned int *)(a3 + 8);
    v30 = v88;
    v31 = v92;
    if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v86 = v45;
      sub_2237220(a3, a3 + 16, v46 + 1, 8);
      v46 = *(unsigned int *)(a3 + 8);
      v31 = v92;
      v30 = v88;
      v45 = v86;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v46) = v45;
    ++*(_DWORD *)(a3 + 8);
  }
  if ( v98 != 4 )
  {
    v89 = v31;
    v78 = v30;
    sub_11C17C0(&v109, v98);
    v119 = 260;
    v115 = &v109;
    v36 = sub_10DA6C0(a2, (__int64)&v115);
    v37 = *(unsigned int *)(a3 + 8);
    v38 = v78;
    v39 = v89;
    if ( v37 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v94 = v89;
      v91 = v78;
      v84 = v36;
      sub_2237220(a3, a3 + 16, v37 + 1, 8);
      v37 = *(unsigned int *)(a3 + 8);
      v39 = v94;
      v38 = v91;
      v36 = v84;
    }
    v90 = v39;
    v79 = v38;
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v37) = v36;
    ++*(_DWORD *)(a3 + 8);
    sub_11BBBE0(v111, v98);
    v40 = (__m128i *)sub_99BDC0(v111, 0, 0, "-fcomplex-arithmetic=", 0x15u);
    v113[0] = &v114;
    if ( (__m128i *)v40->m128i_i64[0] == &v40[1] )
    {
      v114 = _mm_loadu_si128(v40 + 1);
    }
    else
    {
      v113[0] = (void *)v40->m128i_i64[0];
      v114.m128i_i64[0] = v40[1].m128i_i64[0];
    }
    v41 = (void *)v40->m128i_i64[1];
    v40[1].m128i_i8[0] = 0;
    v113[1] = v41;
    v40->m128i_i64[0] = (__int64)v40[1].m128i_i64;
    v40->m128i_i64[1] = 0;
    v99 = v79;
    v119 = 260;
    v115 = (__m128i *)v113;
    v42 = sub_10DA6C0(a2, (__int64)&v115);
    v43 = *(unsigned int *)(a3 + 8);
    v30 = v79;
    v31 = v90;
    if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v85 = v42;
      sub_2237220(a3, a3 + 16, v43 + 1, 8);
      v43 = *(unsigned int *)(a3 + 8);
      v31 = v90;
      v30 = v99;
      v42 = v85;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v43) = v42;
    v44 = (__m128i *)v113[0];
    ++*(_DWORD *)(a3 + 8);
    if ( v44 != &v114 )
    {
      v100 = v31;
      v80 = v30;
      operator delete(v44);
      v31 = v100;
      v30 = v80;
    }
    if ( v111[0] != &v112 )
    {
      v101 = v31;
      v81 = v30;
      operator delete(v111[0]);
      v31 = v101;
      v30 = v81;
    }
    if ( (__int64 *)v109.m128i_i64[0] != &v110 )
    {
      v102 = v31;
      v82 = v30;
      operator delete((void *)v109.m128i_i64[0]);
      v31 = v102;
      v30 = v82;
    }
  }
  result = v13 ^ 1u;
  if ( v30 || v16 )
  {
    if ( v68 )
      goto LABEL_132;
    goto LABEL_89;
  }
  if ( v31 && v95 && (unsigned __int8)v13 != 1 && v14 )
  {
    if ( v68 == 4 )
    {
      if ( *(_DWORD *)v75 != 1953718630 )
        goto LABEL_132;
      return sub_10DC5D0(a3, (__int64)"-ffast-math");
    }
    if ( !v68 )
      return sub_10DC5D0(a3, (__int64)"-ffast-math");
LABEL_132:
    v103 = v31;
    v119 = 1283;
    v115 = (__m128i *)"-ffp-contract=";
    v83 = v30;
    v117 = v75;
    v118 = v68;
    result = sub_10DA6C0(a2, (__int64)&v115);
    v47 = *(unsigned int *)(a3 + 8);
    v30 = v83;
    v31 = v103;
    if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      v71 = result;
      sub_2237220(a3, a3 + 16, v47 + 1, 8);
      v47 = *(unsigned int *)(a3 + 8);
      v31 = v103;
      v30 = v83;
      result = v71;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v47) = result;
    ++*(_DWORD *)(a3 + 8);
LABEL_89:
    if ( v30 )
    {
      if ( v16 )
        goto LABEL_91;
LABEL_101:
      result = *(unsigned int *)(a3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v72 = v31;
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
        v31 = v72;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-menable-no-nans";
      ++*(_DWORD *)(a3 + 8);
      if ( v14 )
        goto LABEL_104;
LABEL_92:
      if ( (_BYTE)v13 )
        goto LABEL_93;
LABEL_107:
      v35 = *(unsigned int *)(a3 + 8);
      if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v70 = v31;
        sub_2237220(a3, a3 + 16, v35 + 1, 8);
        v35 = *(unsigned int *)(a3 + 8);
        v31 = v70;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v35) = "-fno-signed-zeros";
      result = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
      *(_DWORD *)(a3 + 8) = result;
      if ( !v95 )
        goto LABEL_93;
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        v73 = v31;
        sub_2237220(a3, a3 + 16, result + 1, 8);
        result = *(unsigned int *)(a3 + 8);
        v31 = v73;
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-mreassociate";
      ++*(_DWORD *)(a3 + 8);
      if ( v31 )
        goto LABEL_113;
      return result;
    }
  }
  else if ( v68 )
  {
    goto LABEL_132;
  }
  result = *(unsigned int *)(a3 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v69 = v31;
    sub_2237220(a3, a3 + 16, result + 1, 8);
    result = *(unsigned int *)(a3 + 8);
    v31 = v69;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-menable-no-infs";
  ++*(_DWORD *)(a3 + 8);
  if ( !v16 )
    goto LABEL_101;
LABEL_91:
  if ( !v14 )
    goto LABEL_92;
LABEL_104:
  result = *(unsigned int *)(a3 + 8);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v74 = v31;
    sub_2237220(a3, a3 + 16, result + 1, 8);
    result = *(unsigned int *)(a3 + 8);
    v31 = v74;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-fapprox-func";
  ++*(_DWORD *)(a3 + 8);
  if ( !(_BYTE)v13 )
    goto LABEL_107;
LABEL_93:
  if ( v31 )
  {
LABEL_113:
    result = *(unsigned int *)(a3 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, result + 1, 8);
      result = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * result) = "-freciprocal-math";
    ++*(_DWORD *)(a3 + 8);
  }
  return result;
}
