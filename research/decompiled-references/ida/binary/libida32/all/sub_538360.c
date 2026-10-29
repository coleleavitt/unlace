char __fastcall sub_538360(__int64 *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // r13
  _QWORD *v9; // r15
  __int64 v10; // rax
  unsigned __int8 *v11; // r11
  unsigned __int8 v13; // r10
  char v14; // r8
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int8 v21; // r10
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  int v24; // eax
  char v25; // dl
  char v26; // r9
  int v27; // eax
  int v28; // eax
  char v29; // r8
  unsigned __int8 v30; // r10
  unsigned __int8 *v31; // r11
  int tinfo_size; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  unsigned __int8 v36; // al
  char v37; // dl
  char v38; // al
  unsigned __int8 v39; // al
  char v40; // al
  int v41; // ecx
  char v42; // dl
  char v43; // r10
  unsigned __int8 *v44; // r11
  unsigned __int8 v45; // r10
  unsigned __int8 v46; // al
  unsigned __int8 scalar_bt; // al
  int v48; // eax
  unsigned __int8 v49; // al
  _QWORD *v50; // rbx
  __int64 v51; // r15
  int v52; // edx
  int v53; // eax
  int j; // r13d
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  int v57; // eax
  _QWORD *v58; // rdx
  _QWORD *v59; // r15
  unsigned __int64 v60; // r14
  const char *v61; // rsi
  const char *v62; // rdi
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rbx
  __int64 v67; // rax
  __int64 v69; // rax
  _QWORD *v70; // rdx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  char v73; // [rsp+6h] [rbp-EAh]
  unsigned __int8 v74; // [rsp+7h] [rbp-E9h]
  char v75; // [rsp+8h] [rbp-E8h]
  unsigned __int8 *v76; // [rsp+8h] [rbp-E8h]
  unsigned __int8 *v77; // [rsp+10h] [rbp-E0h]
  char v78; // [rsp+10h] [rbp-E0h]
  char v79; // [rsp+18h] [rbp-D8h]
  char v80; // [rsp+18h] [rbp-D8h]
  char v81; // [rsp+18h] [rbp-D8h]
  char v82; // [rsp+20h] [rbp-D0h]
  unsigned __int8 v83; // [rsp+20h] [rbp-D0h]
  char v84; // [rsp+20h] [rbp-D0h]
  char v85; // [rsp+20h] [rbp-D0h]
  unsigned __int8 v86; // [rsp+20h] [rbp-D0h]
  unsigned __int8 *v87; // [rsp+20h] [rbp-D0h]
  unsigned __int8 v88; // [rsp+28h] [rbp-C8h]
  char v89; // [rsp+28h] [rbp-C8h]
  unsigned __int8 v90; // [rsp+28h] [rbp-C8h]
  unsigned __int8 v91; // [rsp+28h] [rbp-C8h]
  char v92; // [rsp+28h] [rbp-C8h]
  char v93; // [rsp+28h] [rbp-C8h]
  unsigned __int8 *v94; // [rsp+28h] [rbp-C8h]
  unsigned __int8 v95; // [rsp+28h] [rbp-C8h]
  unsigned __int8 v96; // [rsp+30h] [rbp-C0h]
  unsigned __int8 *v97; // [rsp+30h] [rbp-C0h]
  char v98; // [rsp+30h] [rbp-C0h]
  unsigned __int8 v99; // [rsp+30h] [rbp-C0h]
  int v100; // [rsp+38h] [rbp-B8h]
  __int64 v101; // [rsp+38h] [rbp-B8h]
  unsigned __int8 *v102; // [rsp+38h] [rbp-B8h]
  char v103; // [rsp+40h] [rbp-B0h]
  unsigned __int8 *v104; // [rsp+40h] [rbp-B0h]
  char v105; // [rsp+48h] [rbp-A8h]
  unsigned __int8 *v106; // [rsp+48h] [rbp-A8h]
  unsigned __int8 *v107; // [rsp+48h] [rbp-A8h]
  unsigned __int8 *v108; // [rsp+48h] [rbp-A8h]
  unsigned __int8 v109; // [rsp+48h] [rbp-A8h]
  unsigned __int8 *v110; // [rsp+48h] [rbp-A8h]
  unsigned __int8 v111; // [rsp+50h] [rbp-A0h]
  unsigned __int8 *v112; // [rsp+50h] [rbp-A0h]
  char v113; // [rsp+50h] [rbp-A0h]
  int v114[2]; // [rsp+50h] [rbp-A0h]
  unsigned __int64 v115; // [rsp+58h] [rbp-98h]
  int v116[2]; // [rsp+58h] [rbp-98h]
  char v117; // [rsp+58h] [rbp-98h]
  int v118[2]; // [rsp+58h] [rbp-98h]
  char v119; // [rsp+58h] [rbp-98h]
  __int64 v120; // [rsp+58h] [rbp-98h]
  unsigned int v121; // [rsp+58h] [rbp-98h]
  char v122; // [rsp+58h] [rbp-98h]
  int v123; // [rsp+58h] [rbp-98h]
  int i; // [rsp+58h] [rbp-98h]
  __int64 v125; // [rsp+60h] [rbp-90h] BYREF
  __int64 v126; // [rsp+68h] [rbp-88h] BYREF
  __int128 v127; // [rsp+70h] [rbp-80h] BYREF
  __int64 v128; // [rsp+80h] [rbp-70h] BYREF
  int v129; // [rsp+88h] [rbp-68h]
  __int16 v130; // [rsp+8Ch] [rbp-64h]
  __m128i v131; // [rsp+90h] [rbp-60h] BYREF
  __int64 v132; // [rsp+A0h] [rbp-50h] BYREF
  int v133; // [rsp+A8h] [rbp-48h]
  __int16 v134; // [rsp+ACh] [rbp-44h]
  unsigned __int64 v135; // [rsp+B8h] [rbp-38h]

  v115 = a4;
  v135 = __readfsqword(0x28u);
  if ( a4 == a3 )
    return 1;
  v7 = a3;
  v8 = a5;
  while ( 1 )
  {
    v111 = v115;
    v9 = (_QWORD *)sub_51B8E0((__int64)a1, v7);
    v10 = sub_51B8E0((__int64)a1, v115);
    v11 = (unsigned __int8 *)v10;
    if ( !v9 || !v9[4] )
    {
      if ( !v10 || !*(_QWORD *)(v10 + 32) )
      {
        v103 = 0;
        v13 = v7;
        v14 = 0;
        goto LABEL_15;
      }
      if ( (v8 & 0x20) != 0 )
        return 0;
      v103 = 0;
      v21 = v7;
LABEL_42:
      v96 = v21;
      v112 = v11;
      sub_524160((__int64)v11, *a1, v115, 1);
      v22 = sub_5246C0((_QWORD **)v112, *a1, 2u, v115, 0, nullptr, 0, 0);
      v11 = v112;
      v13 = v96;
      v14 = 1;
      v111 = v22;
LABEL_15:
      if ( (v13 == 0) != (v111 == 0) )
        return 0;
      if ( (v8 & 0x100) != 0 )
      {
        v100 = 256;
      }
      else
      {
LABEL_87:
        v92 = v14;
        v99 = v13;
        v101 = (__int64)v11;
        v38 = sub_51CDE0((__int64)v9);
        v11 = (unsigned __int8 *)v101;
        v13 = v99;
        v14 = v92;
        if ( !v38 || (v40 = sub_51CDE0(v101), v11 = (unsigned __int8 *)v101, v13 = v99, v14 = v92, !v40) )
        {
          v100 = 0;
          v98 = 0;
          goto LABEL_45;
        }
        v100 = 0;
      }
      if ( !v9 )
        goto LABEL_44;
      goto LABEL_19;
    }
    if ( v10 && *(_QWORD *)(v10 + 32) )
    {
      if ( (v8 & 0x20) != 0 )
        return sub_51DBC0(a1, (__int64)v9, v10, v8) == 0;
      v102 = (unsigned __int8 *)v10;
      sub_524160((__int64)v9, *a1, v7, 1);
      v39 = sub_5246C0((_QWORD **)v9, *a1, 2u, v7, 0, nullptr, 0, 0);
      v11 = v102;
      v21 = v39;
      v103 = 1;
      goto LABEL_42;
    }
    if ( (v8 & 0x20) != 0 )
      return 0;
    v104 = (unsigned __int8 *)v10;
    sub_524160((__int64)v9, *a1, v7, 1);
    v13 = sub_5246C0((_QWORD **)v9, *a1, 2u, v7, 0, nullptr, 0, 0);
    if ( (v13 == 0) != ((_BYTE)v115 == 0) )
      return 0;
    v11 = v104;
    v14 = 0;
    v103 = 1;
    if ( (v8 & 0x100) == 0 )
      goto LABEL_87;
    v100 = 256;
LABEL_19:
    if ( (*((_BYTE *)v9 + 70) & 0x2F) == 0xD )
    {
      v15 = v9[4];
      if ( !v15 || (v16 = *(_DWORD *)(v15 + 24)) == 0 )
      {
        if ( (*((_BYTE *)v9 + 68) & 8) == 0 )
          goto LABEL_44;
        v16 = *(_DWORD *)(v15 + 8);
      }
      if ( v11 && (v11[70] & 0x2F) == 0xD )
      {
        v17 = *((_QWORD *)v11 + 4);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v17 + 24);
          if ( v18 )
            goto LABEL_30;
        }
        if ( (v11[68] & 8) != 0 )
        {
          v18 = *(_DWORD *)(v17 + 8);
LABEL_30:
          if ( v18 == v16 )
            return 1;
          v19 = *(_QWORD *)(a2 + 16);
          v131.m128i_i64[0] = __PAIR64__(v18, v16);
          v20 = a2 + 8;
          if ( v19 )
          {
            do
            {
              if ( *(_DWORD *)(v19 + 32) >= v16 )
              {
                v20 = v19;
                v19 = *(_QWORD *)(v19 + 16);
              }
              else
              {
                v19 = *(_QWORD *)(v19 + 24);
              }
            }
            while ( v19 );
            if ( v20 != a2 + 8 && v16 >= *(_DWORD *)(v20 + 32) )
              return *(_DWORD *)(v20 + 36) == v18;
          }
          v82 = v14;
          v88 = v13;
          v97 = v11;
          sub_39EC70((_QWORD *)a2, v20, &v131);
          v14 = v82;
          v13 = v88;
          v11 = v97;
        }
      }
    }
LABEL_44:
    v98 = 1;
LABEL_45:
    v23 = *(_QWORD *)(a2 + 48);
    if ( v23 == v7 && *(_QWORD *)(a2 + 56) == v115 )
      return 1;
    v24 = *(_DWORD *)(a2 + 64);
    if ( (v24 & 0x3FF) != 0 )
    {
      if ( v23 )
        goto LABEL_50;
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0;
    }
    if ( (v7 & 0xF) == 0xC )
    {
      *(_QWORD *)(a2 + 48) = v7;
      *(_QWORD *)(a2 + 56) = v115;
    }
LABEL_50:
    *(_DWORD *)(a2 + 64) = v24 + 1;
    if ( (v8 & 0x10) == 0 )
      break;
    v25 = v111 & 0xF;
    if ( (v13 & 0xF) == 0xA )
    {
      v7 = *v9;
      if ( v25 != 10 )
        goto LABEL_54;
      goto LABEL_53;
    }
    if ( v25 != 10 )
      break;
LABEL_53:
    v115 = *(_QWORD *)v11;
LABEL_54:
    v8 = (unsigned int)v8 & 0xFFFFFFEF;
LABEL_55:
    if ( v115 == v7 )
      return 1;
  }
  if ( (v8 & 2) == 0 )
    goto LABEL_78;
  v26 = v13 & 0xF;
  if ( (v13 & 0xFu) > 9 )
  {
    if ( (v7 & 0x100) == 0 && (v115 & 0x100) == 0 )
      goto LABEL_70;
    if ( v14 && v103 )
      goto LABEL_66;
    goto LABEL_67;
  }
  v105 = v111 & 0xF;
  if ( (v111 & 0xFu) <= 9 )
  {
    v81 = v14;
    v78 = v13 & 0xF;
    v87 = v11;
    v95 = v13;
    if ( sub_51A950(v13, v111) )
      return 1;
    v13 = v95;
    v11 = v87;
    v14 = v81;
    if ( (v7 & 0x100) != 0 )
    {
      if ( !v81 || !v103 )
        goto LABEL_70;
LABEL_129:
      v80 = v14;
      v86 = v13;
      v94 = v11;
      v48 = sub_51DBC0(a1, (__int64)v9, (__int64)v11, v8);
      v11 = v94;
      v13 = v86;
      v14 = v80;
      if ( !v48 )
        return 1;
      goto LABEL_123;
    }
    if ( (v115 & 0x100) == 0 )
      goto LABEL_70;
    if ( !v81 || !v103 )
      goto LABEL_122;
    v26 = v78;
LABEL_66:
    v79 = v14;
    v83 = v13;
    v89 = v26;
    v106 = v11;
    v27 = sub_51DBC0(a1, (__int64)v9, (__int64)v11, v8);
    v11 = v106;
    v26 = v89;
    v13 = v83;
    v14 = v79;
    if ( !v27 )
      return 1;
LABEL_67:
    if ( v26 != 13 )
      goto LABEL_122;
    if ( (v13 & 0x3F) == 0x3D && ((v111 & 0xF) != 0xD || (v111 & 0x3F) == 0x3D) )
      goto LABEL_71;
    goto LABEL_69;
  }
  if ( (v7 & 0x100) != 0 )
  {
    if ( !v14 || !v103 )
      goto LABEL_123;
    goto LABEL_129;
  }
  if ( (v115 & 0x100) != 0 )
  {
    if ( v14 && v103 )
      goto LABEL_66;
LABEL_122:
    v105 = v111 & 0xF;
LABEL_123:
    if ( v105 == 13 )
    {
      if ( (v111 & 0x3F) == 0x3D )
      {
        if ( (v13 & 0x3F) == 0x2D )
          goto LABEL_121;
        goto LABEL_71;
      }
LABEL_69:
      if ( !v98 )
        return 0;
    }
  }
LABEL_70:
  if ( (v13 & 0x3F) == 0x2D && (v111 & 0x3F) != 0x2D )
  {
LABEL_121:
    v93 = v14;
    v110 = v11;
    v46 = getinf(61);
    scalar_bt = get_scalar_bt(v46);
    v14 = v93;
    v11 = v110;
    v13 = scalar_bt;
  }
LABEL_71:
  if ( (v111 & 0xE) == 0 && (v111 & 0x30) != 0 && (v13 & 0x2F) != 0xD )
  {
    if ( (v13 & 0xF) == 0xB )
    {
      v73 = v14;
      v131 = 0;
      v74 = v13;
      v76 = v11;
      v125 = 0;
      v126 = 0;
      *(_QWORD *)&v127 = 0;
      copy_tinfo_t(&v131.m128i_u64[1]);
      v132 = 0;
      copy_tinfo_t(&v132);
      v133 = 0;
      v134 = 0;
      clear_tinfo_t(&v127);
      clear_tinfo_t(&v126);
      copy_tinfo_t(&v131);
      create_tinfo(&v125, 10, 10, &v131);
      clear_tinfo_t(&v132);
      clear_tinfo_t(&v131.m128i_u64[1]);
      clear_tinfo_t(&v131);
      tinfo_size = get_tinfo_size(0, v125, 0);
      clear_tinfo_t(&v125);
      v31 = v76;
      v30 = v74;
      v29 = v73;
    }
    else
    {
      v84 = v14;
      v90 = v13;
      v107 = v11;
      v28 = get_tinfo_size(0, v7, 0);
      v29 = v84;
      v30 = v90;
      v31 = v107;
      tinfo_size = v28;
    }
    v85 = v29;
    v91 = v30;
    v108 = v31;
    v33 = get_tinfo_size(0, v115, 0);
    v11 = v108;
    v13 = v91;
    v14 = v85;
    if ( tinfo_size == v33 )
      return 1;
  }
LABEL_78:
  if ( (v8 & 1) == 0 && (((v8 & 6) - 2) & 0xFFFFFFFC) != 0 )
  {
    if ( (v8 & 6) != 0 )
    {
      if ( !under_debugger )
        interr(992);
LABEL_215:
      BUG();
    }
    if ( (unsigned __int8)(v13 ^ v111) > 0x3Fu )
      return 0;
  }
  if ( v14 )
  {
    if ( v103 )
    {
      v109 = v13;
      *(_QWORD *)v116 = v11;
      v34 = sub_51DBC0(a1, (__int64)v9, (__int64)v11, v8);
      v11 = *(unsigned __int8 **)v116;
      v13 = v109;
      if ( !v34 )
        return 1;
    }
  }
  if ( ((v13 & 0x2F) == 0xD || (v111 & 0x2F) == 0xD) && !v98 )
    return 0;
  v35 = v111;
  v117 = v13 & 0xF;
  v36 = v111 & 0xF;
  v37 = v111 & 0xF;
  if ( (v13 & 0xFu) <= 9 )
  {
    if ( v36 <= 9u )
      return sub_51D9A0(v13, v111, v8);
    return 0;
  }
  if ( v36 <= 9u )
    return 0;
  if ( !v9 || !v11 )
  {
    if ( !under_debugger )
      interr(995);
    goto LABEL_215;
  }
  if ( (*((_BYTE *)v9 + 68) & 1) == 0 || (v11[68] & 1) == 0 )
    return 0;
  v41 = v8 & 6;
  if ( (v8 & 6) == 0 || (unsigned __int8)(v117 - 10) > 1u )
  {
    if ( v117 != v37 )
      return 0;
    switch ( v117 )
    {
      case 10:
        return sub_53C040((_DWORD)a1, a2, v13, v111, (_DWORD)v9, (_DWORD)v11, v8);
      case 11:
        if ( *((_DWORD *)v9 + 2) != *((_DWORD *)v11 + 2) )
          return 0;
        if ( v41 == 2 )
        {
          v57 = *((_DWORD *)v11 + 3);
          if ( *((_DWORD *)v9 + 3) != v57 && v57 )
            return 0;
        }
        else if ( v41 != 4 )
        {
          if ( (v8 & 6) != 0 )
          {
            if ( !under_debugger )
              interr(996);
            goto LABEL_215;
          }
          if ( *((_DWORD *)v9 + 3) != *((_DWORD *)v11 + 3) )
            return 0;
        }
        v7 = *v9;
        v8 = (unsigned int)v8 | 1;
        v115 = *(_QWORD *)v11;
        goto LABEL_55;
      case 12:
        return sub_5397C0(a1, a2, *v9, *(_QWORD *)v11, (unsigned int)v8);
      case 13:
        v49 = v111 & 0x30;
        if ( (v111 & 0x30) != (v13 & 0x30) )
          return 0;
        if ( v49 != 32 )
        {
          v120 = (__int64)v11;
          if ( v49 > 0x20u )
          {
            if ( v49 == 48 )
            {
              if ( !under_debugger )
                interr(997);
              goto LABEL_215;
            }
          }
          else
          {
            sub_524160((__int64)v9, *a1, v13, 2);
            sub_524160(v120, *a1, v111, 2);
            v50 = (_QWORD *)*v9;
            v51 = *(_QWORD *)v120;
            if ( *(_QWORD *)(*(_QWORD *)v120 + 8LL) != v50[1] )
              return 0;
            if ( v50[3] != *(_QWORD *)(v51 + 24) )
              return 0;
            if ( v50[4] != *(_QWORD *)(v51 + 32) )
              return 0;
            v52 = *((_DWORD *)v50 + 11);
            if ( v52 != *(_DWORD *)(v51 + 44) || ((*(_DWORD *)(v51 + 48) ^ *((_DWORD *)v50 + 12)) & 0xFFFF00) != 0 )
              return 0;
            v53 = 256;
            if ( !v100 )
              v53 = v8;
            if ( (v52 & 0x800) != 0 )
            {
              for ( i = 0; (unsigned __int64)i < v50[1]; ++i )
              {
                v69 = (__int64)i << 7;
                v70 = (_QWORD *)(v69 + *v50);
                v71 = (_QWORD *)(*(_QWORD *)v51 + v69);
                if ( *v70 != *v71 || v70[1] != v71[1] )
                  return 0;
                v72 = v71[8];
                if ( !(v100
                     ? sub_538360(a1, a2, v70[8], v72, (unsigned int)v8)
                     : (unsigned __int8)compare_tinfo(v70[8], v72, (unsigned int)v8)) )
                  return 0;
              }
            }
            else
            {
              v121 = v53;
              for ( j = 0; (unsigned __int64)j < v50[1]; ++j )
              {
                if ( !(unsigned __int8)sub_53BE90(
                                         a1,
                                         a2,
                                         *v50 + ((__int64)j << 7),
                                         ((__int64)j << 7) + *(_QWORD *)v51,
                                         v121) )
                  return 0;
              }
            }
          }
          return 1;
        }
        v58 = (_QWORD *)*v9;
        v59 = *(_QWORD **)v11;
        v60 = v58[1];
        if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v60 )
          return 0;
        v123 = 0;
        break;
      case 14:
        return (unsigned int)sub_51A1C0(*(_BYTE *)v9, *((_BYTE *)v9 + 1), *((_BYTE *)v9 + 2), *v11, v11[1], v11[2]) == 0;
      default:
        if ( !under_debugger )
          interr(998);
        goto LABEL_215;
    }
    while ( 1 )
    {
      if ( v123 >= v60 )
        return 1;
      v64 = 56LL * v123;
      v65 = v64 + *v59;
      v66 = *v58 + v64;
      v67 = *(_QWORD *)(v66 + 8);
      if ( *(_QWORD *)(v65 + 8) )
      {
        v61 = *(const char **)v65;
        v62 = haystack;
        if ( !v67 )
          goto LABEL_188;
      }
      else
      {
        v61 = haystack;
        if ( !v67 )
          goto LABEL_189;
      }
      v62 = *(const char **)v66;
LABEL_188:
      *(_QWORD *)v114 = v58;
      v63 = strcmp(v62, v61);
      v58 = *(_QWORD **)v114;
      if ( v63 )
        return 0;
LABEL_189:
      if ( *(_QWORD *)(v66 + 48) != *(_QWORD *)(v65 + 48) )
        return 0;
      ++v123;
    }
  }
  v75 = v13;
  v77 = v11;
  if ( (unsigned __int8)(v37 - 10) > 1u )
    return 0;
  v131.m128i_i64[0] = 0;
  v126 = 0;
  v127 = 0;
  copy_tinfo_t((char *)&v127 + 8);
  v128 = 0;
  copy_tinfo_t(&v128);
  v130 = 0;
  v129 = 0;
  clear_tinfo_t(&v126);
  clear_tinfo_t(&v131);
  v126 = 0;
  v125 = 0;
  v131 = 0;
  copy_tinfo_t(&v131.m128i_u64[1]);
  v132 = 0;
  copy_tinfo_t(&v132);
  v134 = 0;
  v133 = 0;
  clear_tinfo_t(&v125);
  clear_tinfo_t(&v126);
  if ( v117 == 11 )
  {
    copy_tinfo_t(&v127);
    v56 = v127;
    v44 = v77;
    v42 = v111 & 0xF;
    if ( (_BYTE)v127 )
    {
      LOBYTE(v56) = v127 & 0x3F;
      *(_QWORD *)&v127 = (unsigned __int8)v75 & 0xC0 | v56;
    }
    v43 = 10;
  }
  else
  {
    copy_tinfo_t(&v127);
    copy_tinfo_t((char *)&v127 + 8);
    copy_tinfo_t(&v128);
    v42 = v111 & 0xF;
    v43 = v75;
    v44 = v77;
    v129 = *((_DWORD *)v9 + 6);
    v130 = *((_WORD *)v9 + 14);
  }
  if ( v42 == 11 )
  {
    v122 = v43;
    copy_tinfo_t(&v131);
    v55 = v131.m128i_i64[0];
    v45 = v122;
    if ( v131.m128i_i8[0] )
    {
      LOBYTE(v55) = v131.m128i_i8[0] & 0x3F;
      v131.m128i_i64[0] = v111 & 0xC0 | (unsigned __int64)v55;
    }
    v35 = 10;
  }
  else
  {
    v113 = v43;
    *(_QWORD *)v118 = v44;
    copy_tinfo_t(&v131);
    copy_tinfo_t(&v131.m128i_u64[1]);
    copy_tinfo_t(&v132);
    v45 = v113;
    v133 = *(_DWORD *)(*(_QWORD *)v118 + 24LL);
    v134 = *(_WORD *)(*(_QWORD *)v118 + 28LL);
  }
  v119 = sub_53C040((_DWORD)a1, a2, v45, v35, (unsigned int)&v127, (unsigned int)&v131, v8);
  sub_529110((__int64)&v131);
  sub_529110((__int64)&v127);
  return v119;
}

