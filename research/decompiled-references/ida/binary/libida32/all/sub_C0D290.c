__int64 __fastcall sub_C0D290(__int64 a1, _DWORD *a2, __m128i *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r15d
  unsigned __int64 v9; // r12
  unsigned __int64 v11; // rsi
  __m128 v12; // xmm0
  unsigned __int64 *v13; // r9
  __int64 v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  unsigned int v17; // r13d
  __int64 v18; // rax
  unsigned __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r12
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  unsigned __int64 v28; // r12
  unsigned __int8 **v29; // rax
  bool v30; // al
  unsigned __int8 **v31; // rax
  unsigned int v32; // r15d
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // rbx
  void *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // r13d
  unsigned __int64 v40; // rbx
  unsigned __int8 **v41; // rax
  unsigned __int8 **v42; // r12
  unsigned __int8 **v43; // rax
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // r13
  unsigned __int64 v47; // rbx
  unsigned __int8 **v48; // rax
  unsigned __int8 **v49; // rbp
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 *v55; // r10
  unsigned __int64 v56; // r11
  __int64 *v57; // r8
  char v58; // al
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r11
  __int64 v66; // r10
  __int64 v67; // rbx
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // dl
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // r11
  __int64 v74; // rax
  __int64 v75; // r9
  __int64 v76; // rdx
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // rax
  __int64 v79; // rbp
  __int64 *v80; // r12
  char v81; // al
  char v82; // al
  __int64 v83; // rax
  unsigned __int64 v84; // rbx
  unsigned int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  unsigned __int64 v90; // rax
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // r12
  unsigned __int8 **v94; // rax
  unsigned __int8 **v95; // rbx
  __int64 v96; // rbp
  unsigned __int8 **v97; // rax
  __int64 v98; // r11
  unsigned __int8 **v99; // rbx
  __int64 v100; // rdi
  unsigned __int8 **v101; // rax
  __int64 v102; // [rsp+8h] [rbp-F0h] BYREF
  unsigned __int64 v103; // [rsp+10h] [rbp-E8h]
  unsigned __int64 *v104; // [rsp+18h] [rbp-E0h]
  __m128i *v105; // [rsp+20h] [rbp-D8h]
  int v106; // [rsp+28h] [rbp-D0h]
  unsigned __int8 v107; // [rsp+2Fh] [rbp-C9h]
  unsigned __int64 v108; // [rsp+30h] [rbp-C8h]
  __int64 *v109; // [rsp+38h] [rbp-C0h]
  __int64 *v110; // [rsp+40h] [rbp-B8h]
  __m128i *v111; // [rsp+48h] [rbp-B0h]
  __int64 v112; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v113; // [rsp+58h] [rbp-A0h]
  __m128 v114; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v115[2]; // [rsp+70h] [rbp-88h] BYREF
  __m128i v116; // [rsp+80h] [rbp-78h] BYREF
  _DWORD *v117; // [rsp+90h] [rbp-68h]
  unsigned __int64 *v118; // [rsp+98h] [rbp-60h]
  void *v119[2]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v120; // [rsp+B0h] [rbp-48h]
  __int64 v121; // [rsp+B8h] [rbp-40h]

  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  v102 = a5;
  v9 = (unsigned __int64)a2;
  if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x20) == 0 )
  {
    sub_E0FED0(a1, a2, 108, 0);
    return 0;
  }
  sub_BF8730(&v116, a1, a2, 2u, a3, a4);
  if ( ((unsigned __int64)v118 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v103 = a1;
  v11 = a3[1].m128i_u8[8];
  v104 = v118;
  v12 = _mm_loadh_ps((const double *)&v102);
  v115[0] = v9;
  v114 = v12;
  if ( (v11 & 1) != 0 )
    return 0;
  if ( sub_BEC880((__int64)&a3[1].m128i_i64[1])
    || (v13 = v104, LODWORD(v102) = a3[3].m128i_i32[2], (_DWORD)v102 == 1) && (v11 &= 4u, (_DWORD)v11) )
  {
    if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) == 0 )
    {
      sub_E0FED0(a1, v9, 108, 0);
      return 0;
    }
    v30 = sub_BEC880((__int64)&a3[1].m128i_i64[1]);
    v31 = (unsigned __int8 **)sub_E0FED0(a1, v9, !v30 ? 2375 : 2370, 0);
    if ( v31 )
      sub_BED5E0(v31, 2);
    return 0;
  }
  v14 = (__int64)v117;
  if ( !*v117 )
  {
LABEL_41:
    v5 = *(unsigned __int8 *)(a1 + 914);
    if ( (_BYTE)v5 )
      return 0;
    v33 = (unsigned __int8 **)sub_E0FED0(a1, v9, 2372, 0);
    v34 = v33;
    if ( v33 )
    {
      sub_BED5E0(v33, 2);
      sub_BED5E0(v34, *(_DWORD *)v14 == 1);
      v35 = (void *)sub_EC8B80(v9);
      LOBYTE(v119[1]) = 1;
      v119[0] = v35;
      sub_AC88D0((__int64 *)v34, (__int64 *)v119);
    }
    return v5;
  }
  v103 = v9;
  v15 = 0;
  v104 = (unsigned __int64 *)v119;
  v109 = (__int64 *)(a1 + 824);
  v108 = 0;
  v105 = a3;
  v106 = v102 - 1;
  v107 = 0;
  v16 = (unsigned __int64)v13;
  v111 = &v116;
  v17 = 0;
  while ( 1 )
  {
    if ( (v16 & 1) != 0
      || (v18 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
          (v11 = (unsigned int)v18 | v16 & 4 | *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v11 = (unsigned __int64)v104;
        v110 = (__int64 *)v15;
        v50 = v105[3].m128i_i64[0];
        *(__m128i *)v119 = _mm_load_si128(&v116);
        v120 = v50;
        v121 = v17;
        v51 = sub_C0B700(v109, v104);
        v15 = (__int64)v110;
        if ( v51 )
        {
          if ( *((_DWORD *)v51 + 8) )
          {
            v52 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 7LL | v16 & 7;
            v16 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | v52 & 0xFFFFFFFFFFFFFFF8LL
                | v52 & 2;
          }
        }
      }
    }
    if ( (_DWORD)v102 == v17 )
      goto LABEL_44;
    v19 = v16 & 0xFFFFFFFFFFFFFFF0LL;
    v20 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v106 == v17 )
      break;
LABEL_16:
    if ( (unsigned __int8)(v21 - 2) <= 4u )
      goto LABEL_17;
    if ( (_BYTE)v21 == 14 )
    {
      v75 = v16;
      v28 = v103;
      v5 = v107;
      v76 = v105[3].m128i_i64[0];
      v77 = *(_QWORD *)(v76 + 8LL * v17);
      if ( v77 <= 1 )
      {
        if ( *(_BYTE *)(v20 + 16) != 14 )
        {
          v102 = v75;
          v20 = sub_F3F310(v20, v11, v76, v17);
          v75 = v102;
        }
        v78 = sub_BEBA20(v75, *(_QWORD *)(v20 + 32), 0);
        v79 = v78;
        if ( *(_DWORD *)v14 == 5 )
        {
          v100 = v14 + 8;
          if ( v77 )
            v100 = v14 + 24;
          if ( (v78 & 1) != 0 || (byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
          {
            v101 = (unsigned __int8 **)sub_E0FED0(v114.m128_u64[0], v115[0], 2442, 0);
            if ( v101 )
              sub_AC60B0(v101, v79, 8u);
          }
          else if ( *(_DWORD *)v114.m128_u64[1] == 2 )
          {
            v5 = 1;
            sub_BFCC40(v100, (__int64 *)(v114.m128_u64[1] + 8));
          }
          else
          {
            sub_E0FED0(v114.m128_u64[0], v115[0], 108, 0);
          }
        }
        else
        {
          v80 = (__int64 *)(v14 + 8);
          if ( v77 )
            v80 = (__int64 *)(v14 + 32);
          v5 = sub_BF18E0(&v114, v115, v78);
          if ( (_BYTE)v5 )
            sub_BF34E0(v80, (__int64 *)(v114.m128_u64[1] + 8));
        }
        return v5;
      }
      goto LABEL_24;
    }
LABEL_60:
    v110 = (__int64 *)v19;
    v112 = 8LL * v17;
    v45 = (unsigned int)*(unsigned __int8 *)(v20 + 16) - 57;
    if ( (unsigned int)v45 <= 1 || (v20 = sub_BECCF0(v20, v11, v21, v45), v55 = v110, v20) )
    {
      v46 = *(unsigned int *)(v20 + 20);
      v5 = v107;
      v28 = v103;
      v47 = *(_QWORD *)(v105[3].m128i_i64[0] + v112);
      if ( v47 != v46 )
      {
        if ( v47 <= v46 )
        {
          v96 = *(_QWORD *)(v14 + 8);
          v5 = sub_BF18E0(&v114, v115, *(_QWORD *)(v20 + 32));
          if ( (_BYTE)v5 )
            sub_A2C150((int *)(v96 + 56LL * (unsigned int)v47), (int *)v114.m128_u64[1]);
        }
        else
        {
          v48 = (unsigned __int8 **)sub_E0FF50(a1, v103, 2381, 0);
          v49 = v48;
          if ( !v48 )
            return 0;
          sub_AC60B0(v48, v47, 3u);
          sub_BED5E0(v49, 0);
          sub_AC60B0(v49, v46, 3u);
        }
        return v5;
      }
      goto LABEL_24;
    }
    v56 = *(_QWORD *)(v105[3].m128i_i64[0] + 8LL * v17) & 0xFFFFFFFFFFFFFFF8LL;
    v57 = (__int64 *)v56;
    if ( !v56 || (*(_BYTE *)(v56 + 28) & 0x7Fu) - 49 > 2 )
    {
      v83 = sub_F3F530(*v110);
      v84 = *(_QWORD *)(v105[3].m128i_i64[0] + 8LL * v17) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v84
        && (*(_BYTE *)((*(_QWORD *)(v105[3].m128i_i64[0] + 8LL * v17) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 >= 3 )
      {
        v84 = 0;
      }
      v85 = sub_C0CE80(v83, v84);
      v86 = *(_QWORD *)(v14 + 8);
      v14 = v86 + 56LL * v85;
      v11 = sub_A56C90(*(_QWORD *)(a1 + 16), v84, v87, v86, v88, v89);
      v90 = sub_BEBA20(v16, v11, 0);
      v15 = 0;
      v16 = v90;
      goto LABEL_39;
    }
    if ( (*(_BYTE *)(v56 + 68) & 2) != 0 )
    {
      v11 = a1;
      v113 = *(_QWORD *)(v105[3].m128i_i64[0] + 8LL * v17) & 0xFFFFFFFFFFFFFFF8LL;
      v112 = v56;
      v58 = sub_BEDB70(v111->m128i_i64, a1, 2u);
      v55 = v110;
      v57 = (__int64 *)v112;
      v56 = v113;
      if ( !v58 )
      {
        v102 = v113;
        v97 = (unsigned __int8 **)sub_E0FED0(a1, v103, 2368, 1);
        v98 = v102;
        v99 = v97;
        if ( v97 )
        {
          sub_BED5E0(v97, 2);
          sub_AC60B0(v99, v102, 0xAu);
          v98 = v102;
        }
        sub_E10070(a1, *(unsigned int *)(v98 + 24), 103);
        return 0;
      }
    }
    v59 = *v55;
    v112 = v56;
    v110 = v57;
    v60 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL), v11, v53, v54, v57);
    v64 = (__int64)v110;
    v65 = v112;
    if ( *(_BYTE *)(v60 + 73) >> 5 == 2 )
    {
      v66 = *(_QWORD *)(v14 + 8);
      if ( !v66 )
        goto LABEL_124;
      v67 = *(_QWORD *)(v14 + 8);
      if ( *(char *)(v66 + 29) < 0 )
      {
        v68 = *(_QWORD *)(v14 + 8);
        v113 = v112;
        v112 = (__int64)v110;
        v110 = (__int64 *)v66;
        v69 = sub_B4E9E0(v68);
        v65 = v113;
        v64 = v112;
        v66 = (__int64)v110;
        v67 = v69;
      }
      v70 = v65;
      if ( *(char *)(v65 + 29) < 0 )
      {
        v113 = v66;
        v112 = v64;
        v110 = (__int64 *)v65;
        v70 = sub_B4E9E0(v65);
        v66 = v113;
        v64 = v112;
        v65 = (__int64)v110;
      }
      if ( v70 != v67 )
      {
LABEL_124:
        v104 = (unsigned __int64 *)v65;
        v5 = v107;
        v102 = v66;
        v94 = (unsigned __int8 **)sub_E0FED0(a1, v103, 2367, 0);
        v95 = v94;
        if ( !v94 )
          return 0;
        sub_BED5E0(v94, 2);
        sub_AC60B0(v95, (__int64)v104, 0xAu);
        sub_BED5E0(v95, v102 == 0);
        sub_AC60B0(v95, v102, 0xAu);
        return v5;
      }
      v14 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      v91 = v112;
      v112 = (__int64)v110;
      v110 = (__int64 *)v65;
      v92 = sub_BF9790(v91, v11, v61, v62, v64, v63);
      v64 = v112;
      v65 = (__int64)v110;
      v14 = *(_QWORD *)(v14 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v14 + 16) + v92);
    }
    v71 = *(_BYTE *)(v65 + 68);
    v11 = *(_QWORD *)(v65 + 48);
    v112 = v64;
    v110 = (__int64 *)v65;
    v72 = sub_BEBA20(v16, v11, (v71 & 2) != 0);
    v73 = (unsigned __int64)v110;
    v15 = v112;
    v16 = v72;
    v74 = v110[6];
    if ( (v74 & 4) != 0 )
    {
      v108 = (unsigned __int64)v110;
    }
    else
    {
      if ( (byte_8[v74 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
        v73 = v108;
      v108 = v73;
    }
LABEL_39:
    ++v17;
    if ( !*(_DWORD *)v14 )
    {
      v9 = v103;
      goto LABEL_41;
    }
  }
  if ( (_BYTE)v21 != 14 )
  {
    v21 = (unsigned int)(v21 - 2);
    if ( (unsigned __int8)v21 > 4u )
      goto LABEL_60;
LABEL_17:
    v22 = sub_A4E300(*(_QWORD **)(a1 + 16), v16);
    v25 = v22;
    if ( !v22 || (unsigned int)*(unsigned __int8 *)(v22 + 16) - 2 > 1 )
      BUG();
    v11 = *(_QWORD *)(v22 + 40);
    v26 = *(_QWORD *)(v105[3].m128i_i64[0] + 8LL * v17);
    v27 = *(unsigned __int8 *)(v22 + 19);
    if ( (v27 & 2) != 0 )
    {
      LODWORD(v119[1]) = *(_DWORD *)(v11 + 8);
      if ( LODWORD(v119[1]) <= 0x40 )
      {
        v119[0] = *(void **)v11;
        goto LABEL_22;
      }
      sub_21E17D0(v104);
      v32 = (unsigned int)v119[1];
    }
    else
    {
      v27 = ((unsigned __int8)v27 >> 2) & 0x1F;
      v32 = 8 * v27;
      LODWORD(v119[1]) = 8 * v27;
      if ( 8 * (int)v27 > 64 )
      {
        sub_21E1730(v104, v11, 0);
        v32 = (unsigned int)v119[1];
      }
      else
      {
        v119[0] = (void *)v11;
      }
    }
    if ( v32 <= 0x40 )
    {
LABEL_22:
      if ( (void *)v26 >= v119[0] )
      {
        v5 = v107;
        v28 = v103;
        goto LABEL_24;
      }
      goto LABEL_37;
    }
    v27 = v32 - (unsigned int)sub_21E2A40(v104);
    if ( (unsigned int)v27 <= 0x40 )
    {
      if ( v26 >= *(_QWORD *)v119[0] )
      {
        v5 = v107;
        v28 = v103;
        if ( v119[0] )
          operator delete[](v119[0]);
LABEL_24:
        if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
        {
          v29 = (unsigned __int8 **)sub_E0FED0(a1, v28, 2370, 0);
          if ( v29 )
            sub_BED5E0(v29, 2);
          return v5;
        }
        goto LABEL_104;
      }
    }
    else if ( !v119[0] )
    {
      goto LABEL_37;
    }
    operator delete[](v119[0]);
LABEL_37:
    v16 = *(_QWORD *)(v25 + 32);
    if ( v26 >= *(unsigned int *)(v14 + 16) )
    {
      v44 = sub_BDCD00(v103, v11, v27, v23, v24);
      if ( !(unsigned __int8)sub_BF5C40(a1, v25, v44) )
        return 0;
      v11 = (unsigned int)v26;
      sub_BEBFB0(v14, v26);
      v15 = 0;
      v14 = *(_QWORD *)(v14 + 8) + 56LL * (unsigned int)v26;
    }
    else
    {
      v15 = 0;
      v14 = *(_QWORD *)(v14 + 8) + 56 * v26;
    }
    goto LABEL_39;
  }
LABEL_44:
  if ( (v16 & 4) != 0 || (v19 = v16 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
  {
    v5 = v107;
    v28 = v103;
    if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 8) != 0 )
    {
      v39 = 0;
      if ( v108 )
      {
        v39 = *(_DWORD *)(v108 + 24);
        v40 = 2;
      }
      else
      {
        v40 = v116.m128i_i64[0];
        if ( v116.m128i_i64[0] )
        {
          if ( (v116.m128i_i8[0] & 3) != 0 )
          {
            if ( (v116.m128i_i8[0] & 3) == 1 )
            {
              v40 = v116.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
              if ( (v116.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                v40 = 0;
                v39 = sub_BDCD00(v116.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v11, v36, v37, v38);
              }
            }
            else
            {
              v40 = 0;
            }
          }
          else
          {
            v40 = v116.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
            if ( (v116.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              v108 = v116.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
              v39 = *(_DWORD *)(v40 + 24);
              v40 = 1;
            }
          }
        }
      }
      v41 = (unsigned __int8 **)sub_E0FED0(a1, v28, 2376, 1);
      v42 = v41;
      if ( v41 )
      {
        sub_BED5E0(v41, 2);
        sub_BED5E0(v42, v40);
        sub_AC60B0(v42, v108, 0xAu);
      }
      v43 = (unsigned __int8 **)sub_E10070(a1, v39, 2506);
      if ( v43 )
        sub_BED5E0(v43, v40);
      return v5;
    }
LABEL_104:
    sub_E0FED0(a1, v28, 108, 0);
    return v5;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v11 = a1;
    v112 = v15;
    v110 = (__int64 *)(v16 & 0xFFFFFFFFFFFFFFF0LL);
    v81 = sub_BEDB70(v111->m128i_i64, a1, 2u);
    v19 = (unsigned __int64)v110;
    v15 = v112;
    if ( !v81 )
    {
      v11 = v103;
      v82 = sub_C04AA0(a1, v103, 2, v16);
      v19 = (unsigned __int64)v110;
      v15 = v112;
      if ( v82 )
        return 0;
    }
  }
  if ( (_DWORD)v102 != v17 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v19 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_16;
  }
  v93 = v103;
  v102 = v15;
  v5 = sub_BF18E0(&v114, v115, v16);
  if ( !(_BYTE)v5 )
    return 0;
  sub_A2C150((int *)v14, (int *)v114.m128_u64[1]);
  if ( v102 )
  {
    if ( (*(_BYTE *)(v102 + 68) & 1) != 0 && !(unsigned __int8)sub_BEF010(a1, v93, v14, v102) )
      return 0;
  }
  return v5;
}

