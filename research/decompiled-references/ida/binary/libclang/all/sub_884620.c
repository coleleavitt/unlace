__int64 __fastcall sub_884620(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rbp
  char v4; // al
  __int64 v5; // rsi
  char v6; // r13
  __int64 v7; // r12
  __int64 v8; // rdx
  char v9; // r15
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // r12
  char v13; // al
  __int64 v14; // rsi
  char v15; // al
  unsigned int v16; // ebp
  char v18; // al
  char v19; // al
  char v20; // cl
  __int16 v21; // ax
  __int64 v22; // r15
  unsigned int v23; // edx
  __int64 v24; // rsi
  __int64 v25; // rsi
  char v26; // r13
  char v27; // r13
  unsigned int v28; // r13d
  void **v29; // rsi
  __int64 v30; // rdx
  __int64 *v31; // r12
  __int64 *v32; // rbx
  __int64 v33; // rsi
  __int64 *v34; // r13
  __int64 *v35; // rbx
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // r15
  unsigned int v46; // edx
  __int64 v47; // rsi
  __int64 v48; // rsi
  char v49; // bl
  char v50; // bl
  char v51; // bl
  char v52; // bl
  __int64 v53; // rbp
  unsigned int v54; // r13d
  void *v55; // r15
  void *v56; // rdi
  void *v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // rdx
  char v61; // cl
  __int64 v62; // rax
  __int64 *v63; // r15
  __int64 *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rdi
  __int64 *v67; // r8
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 *v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rdx
  char v75; // bl
  char v76; // bl
  __int64 v77; // rcx
  __int64 v78; // r8
  char v79; // bl
  char v80; // bl
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  _QWORD *v86; // rdi
  __int64 v87; // rdx
  _QWORD *v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rdx
  char v91; // [rsp+18h] [rbp-1D0h]
  char v92; // [rsp+18h] [rbp-1D0h]
  char v93; // [rsp+18h] [rbp-1D0h]
  char v94; // [rsp+18h] [rbp-1D0h]
  __int64 *v95; // [rsp+18h] [rbp-1D0h]
  char v96; // [rsp+18h] [rbp-1D0h]
  char v97; // [rsp+18h] [rbp-1D0h]
  char v98; // [rsp+18h] [rbp-1D0h]
  char v99; // [rsp+18h] [rbp-1D0h]
  char v100; // [rsp+18h] [rbp-1D0h]
  __int64 *v101; // [rsp+30h] [rbp-1B8h]
  __int64 *v102; // [rsp+38h] [rbp-1B0h]
  void *v103; // [rsp+50h] [rbp-198h] BYREF
  unsigned int v104; // [rsp+58h] [rbp-190h]
  char v105; // [rsp+5Ch] [rbp-18Ch]
  void *v106; // [rsp+60h] [rbp-188h]
  unsigned int v107; // [rsp+68h] [rbp-180h]
  char v108; // [rsp+6Ch] [rbp-17Ch]
  void *v109; // [rsp+70h] [rbp-178h] BYREF
  unsigned int v110; // [rsp+78h] [rbp-170h]
  char v111; // [rsp+7Ch] [rbp-16Ch]
  void *v112; // [rsp+90h] [rbp-158h] BYREF
  unsigned int v113; // [rsp+98h] [rbp-150h]
  char v114; // [rsp+9Ch] [rbp-14Ch]
  void *v115; // [rsp+B0h] [rbp-138h] BYREF
  unsigned int v116; // [rsp+B8h] [rbp-130h]
  char v117; // [rsp+BCh] [rbp-12Ch]
  void *v118; // [rsp+D0h] [rbp-118h] BYREF
  unsigned int v119; // [rsp+D8h] [rbp-110h]
  char v120; // [rsp+F0h] [rbp-F8h] BYREF
  void *v121; // [rsp+F8h] [rbp-F0h] BYREF
  unsigned int v122; // [rsp+100h] [rbp-E8h]
  char v123; // [rsp+104h] [rbp-E4h]
  void *v124; // [rsp+108h] [rbp-E0h] BYREF
  unsigned int v125; // [rsp+110h] [rbp-D8h]
  char v126; // [rsp+114h] [rbp-D4h]
  __int64 v127; // [rsp+118h] [rbp-D0h] BYREF
  __int64 *v128; // [rsp+120h] [rbp-C8h]
  __int64 v129; // [rsp+130h] [rbp-B8h] BYREF
  __int64 *v130; // [rsp+138h] [rbp-B0h]
  __m128i v131; // [rsp+150h] [rbp-98h] BYREF
  unsigned int v132; // [rsp+160h] [rbp-88h]
  char v133; // [rsp+164h] [rbp-84h]
  __int64 v134; // [rsp+168h] [rbp-80h] BYREF
  unsigned int v135; // [rsp+170h] [rbp-78h]
  char v136; // [rsp+174h] [rbp-74h]
  __int64 v137[3]; // [rsp+178h] [rbp-70h] BYREF
  __int64 v138[11]; // [rsp+190h] [rbp-58h] BYREF

  v2 = a1;
  v4 = sub_B080B0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  v5 = *(_QWORD *)(a2 + 16);
  v6 = v4;
  if ( !v4 )
  {
    v9 = sub_8811F0(a1, v5);
    if ( v9 )
    {
LABEL_23:
      v12 = sub_2575D20(a1, v5, v11);
      goto LABEL_6;
    }
LABEL_3:
    v10 = v2->m128i_i64[0];
    if ( !*(_DWORD *)(v2->m128i_i64[0] + 48) )
      return 0;
    v9 = *(_BYTE *)(v10 + 962);
    v11 = *(_BYTE **)(v10 + 24);
    if ( v9 )
    {
      *v11 = 1;
      v9 = 0;
      v12 = sub_2575D20(a1, v5, v11);
      goto LABEL_6;
    }
    v18 = *(_BYTE *)(v10 + 963);
    *v11 |= v18;
    if ( !v18 )
      return 0;
    goto LABEL_23;
  }
  v7 = a1->m128i_i64[1];
  a1 = &v131;
  v131 = _mm_unpacklo_epi64(_mm_loadl_epi64(v2), (__m128i)(unsigned __int64)(v7 + 40));
  v9 = sub_883160(v131.m128i_i64, v5);
  if ( !v9 )
    goto LABEL_3;
  *(_BYTE *)v2->m128i_i64[1] = 0;
  v37 = *(_QWORD *)(v7 + 40);
  v38 = sub_2575D20(&v131, v5, v8);
  v12 = v38;
  if ( v37 == v38 )
    sub_257CDE0(&v131, v38);
  else
    sub_2579610(&v131);
  v6 = v9;
  sub_834250((__int64 *)(v2->m128i_i64[1] + 64), v131.m128i_i64, v39);
  sub_5FF3B0(v131.m128i_i64);
LABEL_6:
  v122 = 1;
  v121 = nullptr;
  v123 = 0;
  v125 = 1;
  v124 = nullptr;
  v126 = 0;
  if ( sub_2575D40() == v12 )
  {
    sub_257CDE0(&v127, v12);
    sub_257CDE0(&v129, v12);
  }
  else
  {
    sub_2579610(&v127);
    sub_2579610(&v129);
  }
  v13 = sub_B080B0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
  v14 = *(_QWORD *)(a2 + 24);
  if ( !v13 )
  {
    v131.m128i_i64[0] = v2->m128i_i64[0];
    v131.m128i_i64[1] = (__int64)&v120;
    v19 = sub_8811F0(&v131, v14);
    if ( !v9 )
      goto LABEL_10;
    v20 = 0;
    if ( !v19 )
      goto LABEL_10;
LABEL_28:
    v21 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 5 )
    {
      v43 = v2->m128i_i64[1];
      if ( *(_BYTE *)v43 )
      {
        sub_2586200(v43 + 8, &v121);
        sub_2586200(v2->m128i_i64[1] + 24, &v124);
      }
      else
      {
        v93 = v20;
        if ( *(_QWORD *)(v43 + 40) == v12 )
          sub_257DC20(v43 + 40, &v127, 1);
        else
          sub_257BF20(v43 + 40, &v127, 1);
        if ( v6 )
        {
          sub_834130((__int64 *)(v2->m128i_i64[1] + 64), &v129, v44);
        }
        else if ( !v93 )
        {
          sub_8351D0((__int64 *)(v2->m128i_i64[1] + 64), (__int64)&v129, 1);
        }
      }
      goto LABEL_119;
    }
    if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3Fu) > 5 )
    {
      if ( (_BYTE)v21 == 6 )
      {
        v41 = v2->m128i_i64[1];
        if ( *(_BYTE *)v41 )
        {
          sub_25863C0(v41 + 8, &v121);
          sub_25863C0(v2->m128i_i64[1] + 24, &v124);
        }
        else
        {
          v92 = v20;
          if ( *(_QWORD *)(v41 + 40) == v12 )
            sub_257DC40(v41 + 40, &v127, 1);
          else
            sub_257BF10(v41 + 40, &v127, 1);
          if ( v6 )
          {
            sub_834130((__int64 *)(v2->m128i_i64[1] + 64), &v129, v42);
            v86 = (_QWORD *)(v2->m128i_i64[1] + 64);
            if ( *v86 == v12 )
              sub_257D180(v86);
            else
              sub_2577530(v86);
          }
          else if ( !v92 )
          {
            sub_835220((__int64 *)(v2->m128i_i64[1] + 64), (__int64)&v129, 1);
          }
        }
        goto LABEL_119;
      }
    }
    else
    {
      if ( (_BYTE)v21 == 2 )
      {
        v45 = v2->m128i_i64[1];
        v46 = *(_DWORD *)(v45 + 16);
        if ( *(_BYTE *)v45 )
        {
          v131.m128i_i8[0] = 1;
          v132 = v46;
          if ( v46 > 0x40 )
            sub_2585B30(&v131.m128i_u64[1]);
          else
            v131.m128i_i64[1] = *(_QWORD *)(v45 + 8);
          v133 = *(_BYTE *)(v45 + 20);
          v135 = *(_DWORD *)(v45 + 32);
          if ( v135 > 0x40 )
            sub_2585B30(&v134);
          else
            v134 = *(_QWORD *)(v45 + 24);
          v47 = v45 + 40;
          v136 = *(_BYTE *)(v45 + 36);
          if ( *(_QWORD *)(v45 + 40) == v12 )
            sub_257CF50(v137, v47);
          else
            sub_25768A0(v137, v47);
          v48 = v45 + 64;
          if ( *(_QWORD *)(v45 + 64) == v12 )
            sub_257CF50(v138, v48);
          else
            sub_25768A0(v138, v48);
          v49 = v136;
          sub_258C0C0(&v118, &v134, &v124);
          v114 = v49;
          v50 = v133;
          v113 = v119;
          v112 = v118;
          sub_258C0C0(&v118, &v131.m128i_u64[1], &v121);
          v111 = v50;
          v110 = v119;
          v109 = v118;
          if ( v119 > 0x40 )
            sub_2585B30(&v118);
          sub_25863C0(&v118, &v112);
          v117 = v50;
          v116 = v119;
          v115 = v118;
          sub_821230(v2->m128i_i64[1] + 8, (__int64)&v115);
          if ( v116 > 0x40 && v115 )
            operator delete[](v115);
          if ( v110 > 0x40 && v109 )
            operator delete[](v109);
          if ( v113 > 0x40 && v112 )
            operator delete[](v112);
          v51 = v136;
          sub_258C0C0(&v118, &v134, &v121);
          v117 = v51;
          v52 = v133;
          v116 = v119;
          v115 = v118;
          sub_258C0C0(&v118, &v131.m128i_u64[1], &v124);
          v114 = v52;
          v113 = v119;
          v112 = v118;
          if ( v119 > 0x40 )
            sub_2585B30(&v118);
          v29 = &v115;
          sub_2586200(&v118, &v115);
          v53 = v2->m128i_i64[1];
          v54 = v119;
          v55 = v118;
          if ( *(_DWORD *)(v53 + 32) > 0x40u )
          {
            v56 = *(void **)(v53 + 24);
            if ( v56 )
              operator delete[](v56);
          }
          *(_QWORD *)(v53 + 24) = v55;
          *(_DWORD *)(v53 + 32) = v54;
          *(_BYTE *)(v53 + 36) = v52;
          if ( v113 > 0x40 && v112 )
            operator delete[](v112);
          if ( v116 <= 0x40 )
            goto LABEL_118;
          v57 = v115;
          if ( !v115 )
            goto LABEL_118;
          goto LABEL_117;
        }
        v131.m128i_i8[0] = 0;
        v132 = v46;
        if ( v46 > 0x40 )
        {
          v98 = v20;
          sub_2585B30(&v131.m128i_u64[1]);
          v20 = v98;
        }
        else
        {
          v131.m128i_i64[1] = *(_QWORD *)(v45 + 8);
        }
        v133 = *(_BYTE *)(v45 + 20);
        v135 = *(_DWORD *)(v45 + 32);
        if ( v135 > 0x40 )
        {
          v97 = v20;
          sub_2585B30(&v134);
          v20 = v97;
        }
        else
        {
          v134 = *(_QWORD *)(v45 + 24);
        }
        v94 = v20;
        v58 = v45 + 40;
        v136 = *(_BYTE *)(v45 + 36);
        if ( *(_QWORD *)(v45 + 40) == v12 )
          sub_257CF50(v137, v58);
        else
          sub_25768A0(v137, v58);
        v59 = v45 + 64;
        if ( *(_QWORD *)(v45 + 64) == v12 )
          sub_257CF50(v138, v59);
        else
          sub_25768A0(v138, v59);
        v61 = v94;
        v62 = v2->m128i_i64[1];
        v63 = (__int64 *)(v62 + 40);
        v95 = (__int64 *)(v62 + 64);
        if ( v6 )
        {
          sub_834130(v63, v137, v60);
          v64 = v95;
          sub_834130(v95, v137, v87);
          v29 = (void **)a2;
          if ( !(unsigned __int8)sub_82E1B0(v2->m128i_i64[0], a2, v63, 2u, &v127) )
            goto LABEL_133;
          v66 = v2->m128i_i64[0];
          v67 = &v129;
        }
        else
        {
          if ( !v61 )
          {
            sub_835150((__int64)&v118, &v129, v60);
            sub_835150((__int64)&v115, &v127, v83);
            sub_835150((__int64)&v112, v138, v84);
            sub_835150((__int64)&v109, v137, v85);
            v29 = &v112;
            sub_845070((__int64 *)&v109, (__int64 *)&v112, (__int64)&v115, (__int64 *)&v118, v63, (__int64)v95);
LABEL_147:
            sub_5FF3B0((__int64 *)&v109);
            sub_5FF3B0((__int64 *)&v112);
            sub_5FF3B0((__int64 *)&v115);
            sub_5FF3B0((__int64 *)&v118);
            goto LABEL_118;
          }
          sub_834130(v63, &v127, v60);
          v64 = v95;
          sub_834130(v95, &v127, v65);
          v29 = (void **)a2;
          if ( !(unsigned __int8)sub_82E1B0(v2->m128i_i64[0], a2, v63, 2u, v137) )
          {
LABEL_133:
            sub_8336C0((__int64)&v131, (__int64)v29, v30);
            goto LABEL_10;
          }
          v66 = v2->m128i_i64[0];
          v67 = v138;
        }
        v29 = (void **)a2;
        if ( (unsigned __int8)sub_82E1B0(v66, a2, v64, 2u, v67) )
          goto LABEL_118;
        goto LABEL_133;
      }
      if ( (_BYTE)v21 == 3 )
      {
        v22 = v2->m128i_i64[1];
        v23 = *(_DWORD *)(v22 + 16);
        if ( *(_BYTE *)v22 )
        {
          v131.m128i_i8[0] = 1;
          v132 = v23;
          if ( v23 > 0x40 )
            sub_2585B30(&v131.m128i_u64[1]);
          else
            v131.m128i_i64[1] = *(_QWORD *)(v22 + 8);
          v133 = *(_BYTE *)(v22 + 20);
          v135 = *(_DWORD *)(v22 + 32);
          if ( v135 > 0x40 )
            sub_2585B30(&v134);
          else
            v134 = *(_QWORD *)(v22 + 24);
          v24 = v22 + 40;
          v136 = *(_BYTE *)(v22 + 36);
          if ( v12 == *(_QWORD *)(v22 + 40) )
            sub_257CF50(v137, v24);
          else
            sub_25768A0(v137, v24);
          v25 = v22 + 64;
          if ( v12 == *(_QWORD *)(v22 + 64) )
            sub_257CF50(v138, v25);
          else
            sub_25768A0(v138, v25);
          v26 = v126;
          sub_258C0C0(&v118, &v124, &v124);
          v117 = v26;
          v27 = v123;
          v116 = v119;
          v115 = v118;
          sub_258C0C0(&v118, &v121, &v121);
          v114 = v27;
          v113 = v119;
          v112 = v118;
          if ( v119 > 0x40 )
            sub_2585B30(&v118);
          sub_2586200(&v118, &v115);
          v105 = v27;
          v104 = v119;
          v103 = v118;
          if ( v113 > 0x40 && v112 )
            operator delete[](v112);
          if ( v116 > 0x40 && v115 )
            operator delete[](v115);
          v28 = v104;
          if ( v104 <= 0x40 )
          {
            if ( !v103 )
              goto LABEL_51;
          }
          else if ( v28 == (unsigned int)sub_2587400(&v103) )
          {
LABEL_51:
            v29 = (void **)a2;
            sub_828070(v2->m128i_i64[0], a2, 2306);
            if ( v104 > 0x40 && v103 )
              operator delete[](v103);
            goto LABEL_133;
          }
          v75 = v136;
          sub_258C0C0(&v118, &v134, &v124);
          v111 = v75;
          v76 = v133;
          v110 = v119;
          v109 = v118;
          sub_258C0C0(&v118, &v131.m128i_u64[1], &v121);
          v108 = v76;
          v107 = v119;
          v106 = v118;
          if ( v119 > 0x40 )
            sub_2585B30(&v118);
          sub_2586200(&v118, &v109);
          v114 = v76;
          v113 = v119;
          v112 = v118;
          if ( v76 )
          {
            sub_2588A50(&v118, &v112, &v103, v77, v78);
            v117 = 1;
          }
          else
          {
            sub_2588D90(&v118, &v112, &v103);
            v117 = 0;
          }
          v116 = v119;
          v115 = v118;
          sub_821230(v2->m128i_i64[1] + 8, (__int64)&v115);
          if ( v116 > 0x40 && v115 )
            operator delete[](v115);
          if ( v113 > 0x40 && v112 )
            operator delete[](v112);
          if ( v107 > 0x40 && v106 )
            operator delete[](v106);
          if ( v110 > 0x40 && v109 )
            operator delete[](v109);
          v79 = v133;
          sub_258C0C0(&v118, &v131.m128i_u64[1], &v124);
          v111 = v79;
          v110 = v119;
          v80 = v136;
          v109 = v118;
          sub_258C0C0(&v118, &v134, &v121);
          v108 = v80;
          v107 = v119;
          v106 = v118;
          if ( v119 > 0x40 )
            sub_2585B30(&v118);
          sub_25863C0(&v118, &v109);
          v114 = v80;
          v113 = v119;
          v112 = v118;
          if ( v80 )
          {
            sub_2588A50(&v118, &v112, &v103, v81, v82);
            v117 = 1;
          }
          else
          {
            sub_2588D90(&v118, &v112, &v103);
            v117 = 0;
          }
          v116 = v119;
          v115 = v118;
          v29 = &v115;
          sub_821230(v2->m128i_i64[1] + 24, (__int64)&v115);
          if ( v116 > 0x40 && v115 )
            operator delete[](v115);
          if ( v113 > 0x40 && v112 )
            operator delete[](v112);
          if ( v107 > 0x40 && v106 )
            operator delete[](v106);
          if ( v110 > 0x40 && v109 )
            operator delete[](v109);
          if ( v104 <= 0x40 )
            goto LABEL_118;
          v57 = v103;
          if ( !v103 )
            goto LABEL_118;
LABEL_117:
          operator delete[](v57);
LABEL_118:
          sub_8336C0((__int64)&v131, (__int64)v29, v30);
LABEL_119:
          v16 = 1;
          goto LABEL_11;
        }
        v131.m128i_i8[0] = 0;
        v132 = v23;
        if ( v23 > 0x40 )
        {
          v100 = v20;
          sub_2585B30(&v131.m128i_u64[1]);
          v20 = v100;
        }
        else
        {
          v131.m128i_i64[1] = *(_QWORD *)(v22 + 8);
        }
        v133 = *(_BYTE *)(v22 + 20);
        v135 = *(_DWORD *)(v22 + 32);
        if ( v135 > 0x40 )
        {
          v99 = v20;
          sub_2585B30(&v134);
          v20 = v99;
        }
        else
        {
          v134 = *(_QWORD *)(v22 + 24);
        }
        v96 = v20;
        v68 = v22 + 40;
        v136 = *(_BYTE *)(v22 + 36);
        if ( v12 == *(_QWORD *)(v22 + 40) )
          sub_257CF50(v137, v68);
        else
          sub_25768A0(v137, v68);
        v69 = v22 + 64;
        if ( v12 == *(_QWORD *)(v22 + 64) )
          sub_257CF50(v138, v69);
        else
          sub_25768A0(v138, v69);
        v70 = v2->m128i_i64[1];
        v71 = (__int64 *)(v70 + 40);
        v102 = (__int64 *)(v70 + 40);
        v101 = (__int64 *)(v70 + 64);
        if ( !v96 )
        {
          if ( v6 )
          {
            LODWORD(v115) = 0;
            sub_846480((__int64)&v118, v137[0], (unsigned int *)&v115);
            if ( (void *)v12 == v118 )
              sub_257D590(&v118, 0);
            else
              sub_25795C0(&v118, 0);
            sub_834250(v138, (__int64 *)&v118, v90);
            sub_5FF3B0((__int64 *)&v118);
          }
          sub_835150((__int64)&v118, &v129, (__int64)v71);
          sub_835150((__int64)&v115, &v127, v72);
          sub_835150((__int64)&v112, v138, v73);
          sub_835150((__int64)&v109, v137, v74);
          v29 = &v112;
          sub_8464C0((__int64 *)&v109, (__int64 *)&v112, (__int64 *)&v115, (__int64 *)&v118, v102, (__int64)v101);
          goto LABEL_147;
        }
        v88 = (_QWORD *)(v70 + 40);
        sub_834130(v71, v137, (__int64)v71);
        sub_834130(v101, v138, v89);
        v29 = (void **)a2;
        if ( (unsigned __int8)sub_82E1B0(v2->m128i_i64[0], a2, v88, 3u, &v127) )
        {
          v29 = (void **)a2;
          if ( (unsigned __int8)sub_82E1B0(v2->m128i_i64[0], a2, v101, 3u, &v127) )
            goto LABEL_118;
        }
        goto LABEL_133;
      }
    }
    sub_828070(v2->m128i_i64[0], a2, 110);
    goto LABEL_10;
  }
  v131.m128i_i64[0] = v2->m128i_i64[0];
  v131.m128i_i64[1] = (__int64)&v127;
  v15 = v9 & sub_883160(v131.m128i_i64, v14);
  if ( v15 )
  {
    v120 = 0;
    v91 = v15;
    if ( v127 == v12 )
      sub_257CDE0(&v131, v12);
    else
      sub_2579610(&v131);
    sub_834250(&v129, v131.m128i_i64, v40);
    sub_5FF3B0(v131.m128i_i64);
    v20 = v91;
    goto LABEL_28;
  }
LABEL_10:
  v16 = 0;
LABEL_11:
  if ( v12 == v129 )
  {
    v34 = v130;
    if ( v130 )
    {
      v35 = &v130[3 * *(v130 - 1)];
      if ( v130 == v35 )
      {
        v36 = 0;
      }
      else
      {
        do
        {
          v35 -= 3;
          sub_5FF3B0(v35);
        }
        while ( v34 != v35 );
        v36 = 24 * *(v34 - 1);
      }
      operator delete[](v34 - 1, v36 + 8);
    }
    v130 = nullptr;
  }
  else
  {
    sub_25769A0(&v129);
  }
  if ( v12 == v127 )
  {
    v31 = v128;
    if ( v128 )
    {
      v32 = &v128[3 * *(v128 - 1)];
      if ( v128 == v32 )
      {
        v33 = 0;
      }
      else
      {
        do
        {
          v32 -= 3;
          sub_5FF3B0(v32);
        }
        while ( v31 != v32 );
        v33 = 24 * *(v31 - 1);
      }
      operator delete[](v31 - 1, v33 + 8);
    }
    v128 = nullptr;
  }
  else
  {
    sub_25769A0(&v127);
  }
  if ( v125 > 0x40 && v124 )
    operator delete[](v124);
  if ( v122 > 0x40 && v121 )
    operator delete[](v121);
  return v16;
}

