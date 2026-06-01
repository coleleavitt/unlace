__int64 __fastcall sub_C0F160(__int64 a1, _DWORD *a2, __m128i *a3, unsigned int a4, char a5)
{
  unsigned int v5; // r14d
  __int64 v11; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r13
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
  __int64 v25; // rdx
  unsigned __int64 v26; // r13
  unsigned int v27; // r12d
  unsigned __int8 **v28; // rax
  __int64 v29; // rdx
  unsigned __int8 **v30; // rax
  unsigned int v31; // r13d
  unsigned __int8 **v32; // rax
  unsigned __int8 **v33; // rbx
  void *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r15
  unsigned __int8 **v39; // rax
  unsigned __int8 **v40; // rbx
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // r15
  unsigned __int8 **v52; // rax
  unsigned __int8 **v53; // r13
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // r8
  unsigned __int64 v57; // r11
  char v58; // al
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r11
  __int64 v65; // r10
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // r11
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r9
  __int64 v74; // rdx
  char v75; // al
  char v76; // al
  __int64 v77; // rax
  unsigned __int64 v78; // rbx
  unsigned int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // eax
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // r15d
  int v88; // ebx
  unsigned __int8 **v89; // rax
  unsigned __int8 **v90; // r13
  unsigned __int8 **v91; // rax
  unsigned __int8 **v92; // rax
  unsigned __int8 **v93; // rbx
  unsigned __int8 **v94; // rax
  unsigned __int64 v95; // r11
  unsigned __int8 **v96; // rbx
  __int64 v97; // [rsp+0h] [rbp-128h]
  __int64 v98; // [rsp+0h] [rbp-128h]
  __int64 v99; // [rsp+0h] [rbp-128h]
  __int64 v100; // [rsp+0h] [rbp-128h]
  __int32 v101; // [rsp+8h] [rbp-120h]
  __int64 v102; // [rsp+8h] [rbp-120h]
  unsigned __int64 v103; // [rsp+10h] [rbp-118h]
  unsigned int v104; // [rsp+10h] [rbp-118h]
  unsigned __int64 v105; // [rsp+18h] [rbp-110h]
  __m128i *v106; // [rsp+28h] [rbp-100h]
  __int64 v107; // [rsp+30h] [rbp-F8h]
  _QWORD *v108; // [rsp+30h] [rbp-F8h]
  __int64 v109; // [rsp+38h] [rbp-F0h]
  __int32 v110; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v111; // [rsp+50h] [rbp-D8h]
  __int64 v112; // [rsp+58h] [rbp-D0h]
  __int64 v113; // [rsp+60h] [rbp-C8h]
  _QWORD *v114; // [rsp+60h] [rbp-C8h]
  __int64 v115; // [rsp+60h] [rbp-C8h]
  __int64 v116; // [rsp+60h] [rbp-C8h]
  __int64 v117; // [rsp+60h] [rbp-C8h]
  __int64 v118; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v119; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v120; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v121; // [rsp+68h] [rbp-C0h]
  __int64 v122; // [rsp+68h] [rbp-C0h]
  __int64 v123; // [rsp+68h] [rbp-C0h]
  __m128i v124; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v125; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v126; // [rsp+88h] [rbp-A0h]
  void *v127[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-88h] BYREF
  void *v129[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v130; // [rsp+C0h] [rbp-68h]
  __int64 v131; // [rsp+C8h] [rbp-60h]

  if ( (a3[1].m128i_i8[8] & 1) != 0 )
    return 0;
  sub_BF8730(&v124, a1, a2, a4, a3, 0);
  if ( (v126 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v11 = v125;
  v12 = a3[1].m128i_u8[8];
  if ( !v125 )
  {
    if ( (v12 & 2) == 0 )
    {
      if ( a3[3].m128i_i32[2] != 1 )
      {
        if ( (v12 & 8) != 0
          && a3[2].m128i_i64[0] == *(_QWORD *)(a3[3].m128i_i64[0]
                                             + 8LL * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) )
        {
          goto LABEL_34;
        }
LABEL_31:
        if ( !a5 )
          return 1;
        LODWORD(v129[0]) = 0;
        BYTE4(v129[0]) &= ~1u;
        sub_BEBB50((__int64)a3, (__int64)v129);
        v46 = a3[3].m128i_u32[2];
        v47 = *(_QWORD *)(a1 + 16);
        if ( (unsigned __int32)a3[1].m128i_i32[2] >> 4 == v46 )
        {
          v50 = a3[2].m128i_i64[1];
        }
        else
        {
          v48 = *(_QWORD *)(a3[3].m128i_i64[0] + 8 * v46 - 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v48 )
          {
            v46 = (*(_BYTE *)(v48 + 28) & 0x7Fu) - 59;
            if ( (unsigned int)v46 <= 2 )
              v11 = v48;
          }
          v98 = *(_QWORD *)(a1 + 16);
          v49 = sub_A56C90(v98, v11, v46, v47, v44, v45);
          v47 = v98;
          v50 = v49;
        }
        v51 = sub_A4F2F0(v47, v50, 1u);
        v52 = (unsigned __int8 **)sub_E0FED0(a1, a2, 2479, 0);
        v53 = v52;
        if ( v52 )
        {
          sub_BED5E0(v52, a4);
          sub_A2FDB0((__int64)v127, v129, *(_QWORD *)(a1 + 16), v51);
          sub_AC84E0(v53, (_BYTE *)v127[0], (signed __int64)v127[1]);
        }
        else
        {
          sub_A2FDB0((__int64)v127, v129, *(_QWORD *)(a1 + 16), v51);
        }
        if ( v127[0] != &v128 )
          operator delete(v127[0]);
        if ( LODWORD(v129[0]) > 1 )
          sub_A2BBA0((int *)v129);
        return 0;
      }
      if ( (v12 & 4) != 0 )
      {
        v29 = 2375;
LABEL_35:
        v30 = (unsigned __int8 **)sub_E0FED0(a1, a2, v29, 0);
        if ( v30 )
          sub_BED5E0(v30, a4);
        return 0;
      }
      if ( (v12 & 8) == 0
        || a3[2].m128i_i64[0] != *(_QWORD *)(a3[3].m128i_i64[0] + 8LL
                                                                * (((unsigned __int32)a3[1].m128i_i32[2] >> 4) - 1)) )
      {
        goto LABEL_31;
      }
    }
LABEL_34:
    v29 = 2370;
    goto LABEL_35;
  }
  v103 = v126;
  if ( (v12 & 1) != 0 )
    return 0;
  if ( sub_BEC880((__int64)&a3[1].m128i_i64[1]) || (v101 = a3[3].m128i_i32[2], v101 == 1) && (v12 &= 4u, (_DWORD)v12) )
  {
    if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) == 0 )
    {
      sub_E0FED0(a1, a2, 108, 0);
      return 0;
    }
    v29 = !sub_BEC880((__int64)&a3[1].m128i_i64[1]) ? 2375 : 2370;
    goto LABEL_35;
  }
  v105 = (unsigned __int64)a2;
  v13 = v103;
  v112 = 1LL << a4;
  v14 = 0;
  v109 = (1LL << a4) & 0x19;
  v111 = 0;
  v106 = a3;
  v110 = v101 - 1;
  v15 = *(_DWORD *)v11;
  v107 = 0;
  v104 = a4;
  if ( *(_DWORD *)v11 )
    goto LABEL_48;
LABEL_10:
  if ( v101 != v14 || v104 != 8 )
  {
LABEL_50:
    v5 = *(unsigned __int8 *)(a1 + 914);
    if ( !(_BYTE)v5 )
    {
      v32 = (unsigned __int8 **)sub_E0FED0(a1, v105, 2372, 0);
      v33 = v32;
      if ( v32 )
      {
        sub_BED5E0(v32, v104);
        sub_BED5E0(v33, *(_DWORD *)v11 == 1);
        v34 = (void *)sub_EC8B80(v105);
        LOBYTE(v129[1]) = 1;
        v129[0] = v34;
        sub_AC88D0((__int64 *)v33, (__int64 *)v129);
      }
      return v5;
    }
    return 0;
  }
  while ( 1 )
  {
    if ( (v13 & 1) != 0
      || (v16 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 1LL,
          (v12 = (unsigned int)v16 | v13 & 4 | *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        v12 = (unsigned __int64)v129;
        v41 = v106[3].m128i_i64[0];
        *(__m128i *)v129 = _mm_load_si128(&v124);
        v130 = v41;
        v131 = v14;
        v42 = sub_C0B700((__int64 *)(a1 + 824), (unsigned __int64 *)v129);
        if ( v42 )
        {
          if ( *((_DWORD *)v42 + 8) )
          {
            v43 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 7LL | v13 & 7;
            v13 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | v43 & 0xFFFFFFFFFFFFFFF8LL
                | v43 & 2;
          }
        }
      }
    }
    if ( v101 != v14 )
    {
      v17 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      if ( v14 != v110 )
        goto LABEL_17;
      if ( (_BYTE)v19 != 14 )
      {
        v19 = (unsigned int)(v19 - 2);
        if ( (unsigned __int8)v19 > 4u )
          goto LABEL_66;
LABEL_18:
        v20 = sub_A4E300(*(_QWORD **)(a1 + 16), v13);
        v23 = v20;
        if ( !v20 || (unsigned int)*(unsigned __int8 *)(v20 + 16) - 2 > 1 )
          BUG();
        v12 = *(_QWORD *)(v20 + 40);
        v24 = *(_QWORD *)(v106[3].m128i_i64[0] + 8LL * v14);
        v25 = *(unsigned __int8 *)(v20 + 19);
        if ( (v25 & 2) != 0 )
        {
          LODWORD(v129[1]) = *(_DWORD *)(v12 + 8);
          if ( LODWORD(v129[1]) <= 0x40 )
          {
            v129[0] = *(void **)v12;
            goto LABEL_23;
          }
          sub_21E17D0(v129);
          v31 = (unsigned int)v129[1];
        }
        else
        {
          v25 = ((unsigned __int8)v25 >> 2) & 0x1F;
          v31 = 8 * v25;
          LODWORD(v129[1]) = 8 * v25;
          if ( 8 * (int)v25 > 64 )
          {
            sub_21E1730(v129, v12, 0);
            v31 = (unsigned int)v129[1];
          }
          else
          {
            v129[0] = (void *)v12;
          }
        }
        if ( v31 <= 0x40 )
        {
LABEL_23:
          if ( (void *)v24 >= v129[0] )
          {
            v5 = 0;
            v26 = v105;
            v27 = v104;
            goto LABEL_25;
          }
          goto LABEL_45;
        }
        v25 = v31 - (unsigned int)sub_21E2A40(v129);
        if ( (unsigned int)v25 <= 0x40 )
        {
          if ( v24 >= *(_QWORD *)v129[0] )
          {
            v5 = 0;
            v26 = v105;
            v27 = v104;
            if ( v129[0] )
              operator delete[](v129[0]);
            goto LABEL_25;
          }
        }
        else if ( !v129[0] )
        {
          goto LABEL_45;
        }
        operator delete[](v129[0]);
LABEL_45:
        v13 = *(_QWORD *)(v23 + 32);
        if ( v24 >= *(unsigned int *)(v11 + 16) )
        {
          v35 = sub_BDCD00(v105, v12, v25, v21, v22);
          if ( !(unsigned __int8)sub_BF5C40(a1, v23, v35) )
            return 0;
          v12 = (unsigned int)v24;
          sub_BEBFB0(v11, v24);
          v107 = 0;
          v11 = *(_QWORD *)(v11 + 8) + 56LL * (unsigned int)v24;
        }
        else
        {
          v107 = 0;
          v11 = *(_QWORD *)(v11 + 8) + 56 * v24;
        }
        goto LABEL_47;
      }
    }
    if ( (v13 & 4) != 0 || (v17 = v13 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) )
    {
      if ( !sub_BEDB40(v104) )
      {
        v17 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_61;
      }
      v5 = 0;
      if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 8) == 0 )
      {
        sub_E0FED0(a1, v105, 108, 0);
        return v5;
      }
      v87 = 0;
      if ( v111 )
      {
        v87 = *(_DWORD *)(v111 + 24);
        v88 = 2;
LABEL_140:
        v89 = (unsigned __int8 **)sub_E0FED0(a1, v105, 2376, 1);
        v90 = v89;
        if ( v89 )
        {
          sub_BED5E0(v89, v104);
          sub_BED5E0(v90, v88);
          sub_AC60B0(v90, v111, 0xAu);
        }
        v91 = (unsigned __int8 **)sub_E10070(a1, v87, 2506);
        if ( v91 )
          sub_BED5E0(v91, v88);
        return v5;
      }
      if ( v124.m128i_i64[0] )
      {
        if ( (v124.m128i_i8[0] & 3) != 0 )
        {
          if ( (v124.m128i_i8[0] & 3) == 1 && (v124.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            v88 = 0;
            v87 = sub_BDCD00(v124.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v12, 0, v85, v86);
            goto LABEL_140;
          }
        }
        else if ( (v124.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          v111 = v124.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
          v87 = *(_DWORD *)((v124.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 24);
          v88 = 1;
          goto LABEL_140;
        }
      }
      v88 = 0;
      goto LABEL_140;
    }
LABEL_61:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      v12 = a1;
      v120 = v17;
      v75 = sub_BEDB70(v124.m128i_i64, a1, v104);
      v17 = v120;
      if ( !v75 )
      {
        v12 = v105;
        v76 = sub_C04AA0(a1, v105, v104, v13);
        v17 = v120;
        if ( v76 )
          return 0;
      }
    }
    if ( v101 == v14 )
      break;
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_17:
    if ( (unsigned __int8)(v19 - 2) <= 4u )
      goto LABEL_18;
    if ( (_BYTE)v19 == 14 )
    {
      v72 = v14;
      v73 = v13;
      v27 = v104;
      v5 = 0;
      v26 = v105;
      v74 = v106[3].m128i_i64[0];
      if ( *(_QWORD *)(v74 + 8 * v72) <= 1u )
      {
        if ( *(_BYTE *)(v18 + 16) != 14 )
        {
          v99 = v73;
          v18 = sub_F3F310(v18, v12, v74, v72);
          v73 = v99;
        }
        sub_BEBA20(v73, *(_QWORD *)(v18 + 32), 0);
        return 1;
      }
      goto LABEL_25;
    }
LABEL_66:
    v108 = (_QWORD *)v17;
    v113 = 8LL * v14;
    v36 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 57;
    if ( (unsigned int)v36 <= 1 || (v18 = sub_BECCF0(v18, v12, v19, v36), v56 = v108, v18) )
    {
      v37 = *(unsigned int *)(v18 + 20);
      v5 = 0;
      v26 = v105;
      v97 = v37;
      v27 = v104;
      v38 = *(_QWORD *)(v106[3].m128i_i64[0] + v113);
      if ( v38 != v37 )
      {
        if ( v38 <= v37 )
          return 1;
        v39 = (unsigned __int8 **)sub_E0FF50(a1, v105, 2381, 0);
        v40 = v39;
        if ( v39 )
        {
          sub_AC60B0(v39, v38, 3u);
          sub_BED5E0(v40, 0);
          sub_AC60B0(v40, v97, 3u);
          return v5;
        }
        return 0;
      }
LABEL_25:
      if ( (*(_BYTE *)(sub_E0E500(a1) + 1) & 0x10) != 0 )
      {
        v28 = (unsigned __int8 **)sub_E0FED0(a1, v26, 2370, 0);
        if ( v28 )
          sub_BED5E0(v28, v27);
      }
      else
      {
        sub_E0FED0(a1, v26, 108, 0);
      }
      return v5;
    }
    v57 = *(_QWORD *)(v106[3].m128i_i64[0] + 8LL * v14) & 0xFFFFFFFFFFFFFFF8LL;
    v107 = v57;
    if ( v57 && (*(_BYTE *)(v57 + 28) & 0x7Fu) - 49 <= 2 )
    {
      if ( (*(_BYTE *)(v57 + 68) & 2) != 0 )
      {
        v12 = a1;
        v121 = *(_QWORD *)(v106[3].m128i_i64[0] + 8LL * v14) & 0xFFFFFFFFFFFFFFF8LL;
        v114 = v56;
        v58 = sub_BEDB70(v124.m128i_i64, a1, v104);
        v56 = v114;
        v57 = v121;
        if ( !v58 )
        {
          v94 = (unsigned __int8 **)sub_E0FED0(a1, v105, 2368, 1);
          v95 = v121;
          v96 = v94;
          if ( v94 )
          {
            sub_BED5E0(v94, v104);
            sub_AC60B0(v96, v121, 0xAu);
            v95 = v121;
          }
          v5 = 0;
          sub_E10070(a1, *(unsigned int *)(v95 + 24), 103);
          return v5;
        }
      }
      v115 = v57;
      v59 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(*v56 + 8LL) & 0xFFFFFFFFFFFFFFF0LL), v12, v54, v55, v56);
      v64 = v115;
      if ( *(_BYTE *)(v59 + 73) >> 5 == 2 )
      {
        v65 = *(_QWORD *)(v11 + 8);
        if ( !v65 )
          goto LABEL_104;
        v66 = *(_QWORD *)(v11 + 8);
        if ( *(char *)(v65 + 29) < 0 )
        {
          v122 = v115;
          v116 = *(_QWORD *)(v11 + 8);
          v67 = sub_B4E9E0(v116);
          v64 = v122;
          v65 = v116;
          v66 = v67;
        }
        v68 = v64;
        if ( *(char *)(v64 + 29) < 0 )
        {
          v123 = v65;
          v117 = v64;
          v68 = sub_B4E9E0(v64);
          v65 = v123;
          v64 = v117;
        }
        if ( v68 != v66 )
        {
LABEL_104:
          if ( v14 != v110 || v104 != 8 )
          {
            v5 = 0;
            v102 = v65;
            v100 = v64;
            v92 = (unsigned __int8 **)sub_E0FED0(a1, v105, 2367, 0);
            v93 = v92;
            if ( !v92 )
              return 0;
            sub_BED5E0(v92, v104);
            sub_AC60B0(v93, v100, 0xAu);
            sub_BED5E0(v93, v102 == 0);
            sub_AC60B0(v93, v102, 0xAu);
            return v5;
          }
          v118 = v64;
          BYTE4(v129[0]) &= ~1u;
          LODWORD(v129[0]) = 0;
          sub_A31050(v11, v64, (int *)v129);
          v64 = v118;
          if ( LODWORD(v129[0]) > 1 )
          {
            sub_A2BBA0((int *)v129);
            v64 = v118;
          }
        }
        v11 = *(_QWORD *)(v11 + 16);
      }
      else
      {
        v84 = sub_BF9790(v115, v12, v60, v61, v62, v63);
        v64 = v115;
        v11 = *(_QWORD *)(v11 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v11 + 16) + v84);
      }
      v12 = *(_QWORD *)(v64 + 48);
      v119 = v64;
      v69 = sub_BEBA20(v13, v12, (*(_BYTE *)(v64 + 68) & 2) != 0);
      v70 = v119;
      v13 = v69;
      v71 = *(_QWORD *)(v119 + 48);
      if ( (v71 & 4) != 0 )
      {
        v111 = v119;
      }
      else
      {
        if ( (byte_8[v71 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
          v70 = v111;
        v111 = v70;
      }
    }
    else
    {
      v77 = sub_F3F530(*v56);
      v78 = *(_QWORD *)(v106[3].m128i_i64[0] + 8LL * v14) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v78
        && (*(_BYTE *)((*(_QWORD *)(v106[3].m128i_i64[0] + 8LL * v14) & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 59 >= 3 )
      {
        v78 = 0;
      }
      v79 = sub_C0CE80(v77, v78);
      v80 = *(_QWORD *)(v11 + 8);
      v11 = v80 + 56LL * v79;
      v12 = sub_A56C90(*(_QWORD *)(a1 + 16), v78, v81, v80, v82, v83);
      v107 = 0;
      v13 = sub_BEBA20(v13, v12, 0);
    }
LABEL_47:
    v15 = *(_DWORD *)v11;
    ++v14;
    if ( !*(_DWORD *)v11 )
      goto LABEL_10;
LABEL_48:
    if ( v15 == 1 && v109 )
      goto LABEL_50;
  }
  if ( (v112 & 0x4E3) == 0 && v107 && (*(_BYTE *)(v107 + 68) & 1) != 0 )
    return (unsigned int)sub_BEF010(a1, v105, v11, v107);
  return 1;
}

