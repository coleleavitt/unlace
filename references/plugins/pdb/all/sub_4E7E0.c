__int64 __fastcall sub_4E7E0(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 **a4,
        __int64 a5,
        unsigned int *a6,
        double a7,
        double a8,
        double a9)
{
  unsigned int v9; // r15d
  __int64 *v14; // rax
  __int64 (__fastcall *v15)(__int64, unsigned int *); // rax
  unsigned int *v16; // rax
  unsigned int v17; // edi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 *v24; // rax
  __int64 (__fastcall *v25)(__int64, _DWORD *); // rax
  int *v26; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  const char *v30; // rsi
  __int64 *v31; // rdi
  __int64 idati; // rax
  __int64 (__fastcall *v33)(__int64, _BYTE *); // rax
  char *v34; // rax
  char v35; // al
  __int64 (__fastcall *v36)(__int64, _BYTE *); // rax
  char *v37; // rax
  char v38; // al
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  int v43; // r13d
  char v44; // r13
  __int64 (__fastcall *v45)(__int64, _BYTE *); // rax
  char *v46; // rax
  char v47; // al
  __int64 (__fastcall *v48)(__int64, _BYTE *); // rax
  char *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  char v53; // al
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 *v58; // rax
  __int64 (__fastcall *v59)(__int64, _DWORD *); // rax
  int *v60; // rax
  int v61; // r8d
  const char *v62; // rcx
  __int64 (__fastcall *v63)(__int64, _BYTE *); // rax
  char *v64; // rax
  char v65; // al
  __int64 (__fastcall *v66)(__int64, _BYTE *); // rax
  char *v67; // rax
  char v68; // al
  const char *v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  __int64 v72; // rax
  const char *v73; // rcx
  const char *v74; // rcx
  _QWORD *v75; // rcx
  __int64 v76; // rsi
  __int64 v77; // rcx
  const char *v78; // rcx
  const char *v79; // rcx
  unsigned __int8 v80; // [rsp+12h] [rbp-FEh]
  char v81; // [rsp+13h] [rbp-FDh]
  unsigned int type_ordinal; // [rsp+14h] [rbp-FCh]
  unsigned int v85; // [rsp+3Ch] [rbp-D4h] BYREF
  int v86; // [rsp+40h] [rbp-D0h] BYREF
  unsigned int v87; // [rsp+44h] [rbp-CCh] BYREF
  __int64 v88; // [rsp+48h] [rbp-C8h] BYREF
  unsigned __int64 v89; // [rsp+50h] [rbp-C0h] BYREF
  _QWORD *v90; // [rsp+58h] [rbp-B8h] BYREF
  const char *v91; // [rsp+60h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+68h] [rbp-A8h]
  __int64 v93; // [rsp+80h] [rbp-90h] BYREF
  _QWORD v94[3]; // [rsp+88h] [rbp-88h] BYREF
  unsigned __int64 v95; // [rsp+A0h] [rbp-70h] BYREF
  __int128 v96; // [rsp+A8h] [rbp-68h]
  _QWORD *v97; // [rsp+C0h] [rbp-50h] BYREF
  __int128 v98; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-38h]

  v99 = __readfsqword(0x28u);
  if ( a6 )
    *a6 = 0;
  v14 = *a4;
  v85 = 0;
  v15 = (__int64 (__fastcall *)(__int64, unsigned int *))v14[22];
  if ( v15 != sub_2DEA0 )
  {
    v15((__int64)a4, &v85);
    goto LABEL_25;
  }
  v16 = (unsigned int *)sub_2CEC0(a4[2], 0x80000, 0x400u, 0x4000000);
  if ( !v16 )
  {
LABEL_25:
    v17 = v85;
    goto LABEL_6;
  }
  v17 = *v16;
  v85 = *v16;
LABEL_6:
  v18 = *(_QWORD *)(a1 + 80);
  v19 = a1 + 72;
  if ( v18 )
  {
    v20 = a1 + 72;
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)(v18 + 16);
        v22 = *(_QWORD *)(v18 + 24);
        if ( *(_DWORD *)(v18 + 32) < v17 )
          break;
        v20 = v18;
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v21 )
          goto LABEL_11;
      }
      v18 = *(_QWORD *)(v18 + 24);
    }
    while ( v22 );
LABEL_11:
    if ( v19 != v20 && v17 >= *(_DWORD *)(v20 + 32) )
    {
      v9 = 1;
      copy_tinfo_t(a2 + 8, v20 + 40);
      return v9;
    }
  }
  v24 = *a4;
  v86 = 0;
  v25 = (__int64 (__fastcall *)(__int64, _DWORD *))v24[23];
  if ( v25 == sub_2DCC0 )
  {
    v26 = (int *)sub_2CEC0(a4[2], 0x100000, 0x400u, 0x4000000);
    if ( v26 )
      v86 = *v26;
  }
  else
  {
    v9 = 0;
    if ( ((int (__fastcall *)(__int64 **, int *, __int64 (__fastcall *)(__int64, _DWORD *), __int64))v25)(
           a4,
           &v86,
           sub_2DCC0,
           v19) < 0 )
      return v9;
  }
  v27 = *(_QWORD *)a1;
  v91 = nullptr;
  v92 = 0;
  v81 = (*(__int64 (__fastcall **)(__int64, __int64 **, const char **))(v27 + 40))(a1, a4, &v91);
  v28 = v86;
  v87 = 0;
  if ( v86 != 25 )
  {
    if ( v86 != 7 )
    {
      if ( (unsigned __int64)v92 <= 1 )
      {
LABEL_21:
        LOBYTE(v9) = (unsigned int)sub_4E5C0(a1, a2, a3, a4, a5, v85, 0.0, a8, a9, v28) != 0;
        goto LABEL_22;
      }
      goto LABEL_26;
    }
LABEL_86:
    v28 = 7;
    goto LABEL_21;
  }
  if ( (unsigned __int64)v92 > 1 )
  {
LABEL_26:
    if ( v81 )
    {
      v29 = *(_DWORD *)(a1 + 304);
      *(_DWORD *)(a1 + 304) = v29 + 1;
      sub_37FD0((__int64 *)&v91, (__int64)"unnamed-%d", v29);
    }
    else
    {
      validate_name(&v91, 8, 1);
    }
    v30 = src;
    if ( (_QWORD)v92 )
      v30 = v91;
    v31 = *(__int64 **)(a1 + 312);
    type_ordinal = get_type_ordinal(v31);
    v87 = type_ordinal;
    goto LABEL_31;
  }
  if ( a5 )
    (*(void (__fastcall **)(__int64, __int64, const char **))(*(_QWORD *)a1 + 40LL))(a1, a5, &v91);
  v58 = *a4;
  LODWORD(v97) = 0;
  v59 = (__int64 (__fastcall *)(__int64, _DWORD *))v58[19];
  if ( v59 == sub_2D130 )
  {
    v60 = (int *)sub_2CEC0(a4[2], 0x20000000, 0x20000000u, 0x20000000);
    if ( v60 )
    {
      v61 = *v60;
      LODWORD(v97) = *v60;
      goto LABEL_79;
    }
  }
  else
  {
    v59((__int64)a4, &v97);
  }
  v61 = (int)v97;
LABEL_79:
  v62 = src;
  if ( (_QWORD)v92 )
    v62 = v91;
  sub_47410(a1, (__int64 *)&v91, &v87, v62, v61);
  v28 = v86;
  if ( v86 == 7 )
    goto LABEL_86;
  if ( (unsigned __int64)v92 <= 1 )
    goto LABEL_21;
  v31 = (__int64 *)&v91;
  v30 = &byte_8;
  validate_name(&v91, 8, 1);
  v81 = 0;
  type_ordinal = v87;
LABEL_31:
  if ( !type_ordinal )
    goto LABEL_54;
  idati = *(_QWORD *)(a1 + 312);
  v95 = 0;
  WORD4(v98) = 1;
  *(_QWORD *)&v98 = type_ordinal;
  if ( !idati )
    idati = get_idati(v31, v30);
  v97 = (_QWORD *)idati;
  create_tinfo(&v95, 61, 189, &v97);
  v33 = (__int64 (__fastcall *)(__int64, _BYTE *))(*a4)[7];
  if ( v33 == sub_2DBC0 )
  {
    v34 = (char *)sub_2CEC0(a4[2], 1, 1u, 512);
    if ( v34 )
    {
      v35 = *v34;
      LOBYTE(v97) = v35;
LABEL_37:
      v80 = v35 << 6;
      goto LABEL_38;
    }
  }
  else if ( !(unsigned int)v33((__int64)a4, &v97) )
  {
    v35 = (char)v97;
    goto LABEL_37;
  }
  v80 = 0;
LABEL_38:
  v36 = (__int64 (__fastcall *)(__int64, _BYTE *))(*a4)[29];
  if ( v36 == sub_2DC00 )
  {
    v37 = (char *)sub_2CEC0(a4[2], 8, 1u, 512);
    if ( !v37 )
      goto LABEL_42;
    v38 = *v37;
    goto LABEL_41;
  }
  if ( !(unsigned int)v36((__int64)a4, &v97) )
  {
    v38 = (char)v97;
LABEL_41:
    v80 |= v38 << 7;
  }
LABEL_42:
  v39 = 2;
  if ( (unsigned __int8)get_tinfo_property(v95, 2) || (v39 = 5, !get_tinfo_property(v95, 5)) )
  {
    clear_tinfo_t(&v95);
LABEL_44:
    if ( a6 )
      *a6 = type_ordinal;
    v40 = *(_QWORD *)(a1 + 312);
    WORD4(v98) = 1;
    v41 = a2 + 8;
    *(_QWORD *)&v98 = type_ordinal;
    if ( !v40 )
    {
      v40 = get_idati(v41, v39);
      v41 = a2 + 8;
    }
    v97 = (_QWORD *)v40;
    create_tinfo(v41, 61, 189, &v97);
    if ( v80 )
    {
      v42 = *(_QWORD *)(a2 + 8);
      if ( (_BYTE)v42 )
      {
        LOBYTE(v42) = v42 & 0x3F;
        *(_QWORD *)(a2 + 8) = v42 | v80;
      }
    }
    v9 = 1;
    goto LABEL_22;
  }
  clear_tinfo_t(&v95);
LABEL_54:
  v9 = sub_4A7B0(a1, v86, (__int64)&v91, (int *)&v87, 0.0, a8, a9);
  if ( !(_BYTE)v9 )
  {
    v63 = (__int64 (__fastcall *)(__int64, _BYTE *))(*a4)[7];
    if ( v63 == sub_2DBC0 )
    {
      v64 = (char *)sub_2CEC0(a4[2], 1, 1u, 512);
      if ( v64 )
      {
        v65 = *v64;
        LOBYTE(v97) = v65;
LABEL_90:
        v80 = v65 << 6;
        goto LABEL_91;
      }
    }
    else if ( !(unsigned int)v63((__int64)a4, &v97) )
    {
      v65 = (char)v97;
      goto LABEL_90;
    }
    v80 = 0;
LABEL_91:
    v66 = (__int64 (__fastcall *)(__int64, _BYTE *))(*a4)[29];
    if ( v66 == sub_2DC00 )
    {
      v39 = 8;
      v67 = (char *)sub_2CEC0(a4[2], 8, 1u, 512);
      if ( !v67 )
      {
LABEL_95:
        type_ordinal = v87;
        goto LABEL_44;
      }
      v68 = *v67;
    }
    else
    {
      v39 = (__int64)&v97;
      if ( (unsigned int)v66((__int64)a4, &v97) )
        goto LABEL_95;
      v68 = (char)v97;
    }
    v80 |= v68 << 7;
    goto LABEL_95;
  }
  v93 = 1;
  v94[0] = 0;
  v94[1] = 0;
  v43 = sub_4E5C0(a1, (__int64)&v93, a3, a4, a5, v85, 0.0, a8, a9, v86);
  if ( v43 == 1 )
  {
    if ( v86 == 5 )
    {
      v78 = src;
      if ( (_QWORD)v92 )
        v78 = v91;
      save_tinfo(v94, *(_QWORD *)(a1 + 312), 0, v78, 0);
      v79 = src;
      if ( (_QWORD)v92 )
        v79 = v91;
      (*(void (__fastcall **)(__int64, __int64, _QWORD, const char *, _QWORD *))(*(_QWORD *)a1 + 56LL))(
        a1,
        -1,
        0,
        v79,
        v94);
      copy_tinfo_t(a2 + 8, v94);
      goto LABEL_114;
    }
    if ( !v81 )
      goto LABEL_119;
    tinfo_t__build_anon_type_name(&v91, v94);
    type_ordinal = get_type_ordinal(*(_QWORD *)(a1 + 312));
    v44 = 0;
    v87 = type_ordinal;
    if ( type_ordinal )
    {
      sub_4A530(a1 + 160, (__int64)&v91);
      v44 = v81;
    }
    v45 = (__int64 (__fastcall *)(__int64, _BYTE *))(*a4)[7];
    if ( v45 == sub_2DBC0 )
    {
      v46 = (char *)sub_2CEC0(a4[2], 1, 1u, 512);
      if ( v46 )
      {
        v47 = *v46;
        LOBYTE(v97) = v47;
LABEL_63:
        v80 = v47 << 6;
        goto LABEL_64;
      }
    }
    else if ( !(unsigned int)v45((__int64)a4, &v97) )
    {
      v47 = (char)v97;
      goto LABEL_63;
    }
    v80 = 0;
LABEL_64:
    v48 = (__int64 (__fastcall *)(__int64, _BYTE *))(*a4)[29];
    if ( v48 == sub_2DC00 )
    {
      v49 = (char *)sub_2CEC0(a4[2], 8, 1u, 512);
      if ( !v49 )
        goto LABEL_68;
      v53 = *v49;
    }
    else
    {
      if ( (unsigned int)v48((__int64)a4, &v97) )
      {
LABEL_68:
        if ( v44 )
        {
LABEL_69:
          v54 = sub_24E40(a1 + 208, type_ordinal, v50, v51, v52);
          v56 = v55;
          if ( v55 )
          {
            if ( !v54 && v55 != a1 + 216 )
              LOBYTE(v9) = type_ordinal < *(_DWORD *)(v55 + 32);
            v57 = operator new(0x28u);
            *(_DWORD *)(v57 + 32) = type_ordinal;
            std::_Rb_tree_insert_and_rebalance((unsigned __int8)v9, v57, v56, a1 + 216, 0.0, a8, a9);
            ++*(_QWORD *)(a1 + 248);
          }
LABEL_72:
          v39 = -1;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)a1 + 56LL))(
            a1,
            -1,
            type_ordinal,
            0,
            v94);
          clear_tinfo_t(v94);
          goto LABEL_44;
        }
LABEL_119:
        type_ordinal = sub_486D0(a1, (__int64 *)&v91);
        v87 = type_ordinal;
        v95 = 0;
        v97 = nullptr;
        v96 = 0;
        v98 = 0;
        if ( !(unsigned __int8)serialize_tinfo(&v95, &v97, 0, v94, 272) )
        {
          if ( !under_debugger )
            interr(30408);
          BUG();
        }
        v75 = v97;
        v76 = *(_QWORD *)(a1 + 312);
        v88 = 0;
        v89 = v95;
        v90 = v97;
        if ( v97 )
          v75 = &v90;
        if ( (unsigned __int8)deserialize_tinfo(&v88, v76, &v89, v75, 0, 0) )
        {
          v77 = 0;
          if ( (unsigned __int64)v92 > 1 )
            v77 = (__int64)v91;
          if ( !(unsigned int)save_tinfo(&v88, *(_QWORD *)(a1 + 312), type_ordinal, v77, 134) )
          {
            v80 = v94[0] & 0xC0;
            clear_tinfo_t(&v88);
            if ( v97 )
            {
              *(_QWORD *)&v98 = 0;
              qfree(v97);
            }
            if ( v95 )
            {
              *(_QWORD *)&v96 = 0;
              qfree(v95);
            }
            if ( !v81 )
              goto LABEL_72;
            goto LABEL_69;
          }
        }
        clear_tinfo_t(&v88);
        if ( v97 )
        {
          *(_QWORD *)&v98 = 0;
          qfree(v97);
        }
        if ( v95 )
        {
          *(_QWORD *)&v96 = 0;
          qfree(v95);
        }
        goto LABEL_144;
      }
      v53 = (char)v97;
    }
    v80 |= v53 << 7;
    goto LABEL_68;
  }
  sub_4A530(a1 + 160, (__int64)&v91);
  if ( !v43 )
  {
LABEL_144:
    v9 = 0;
    goto LABEL_114;
  }
  v95 = 0;
  v69 = src;
  if ( (_QWORD)v92 )
    v69 = v91;
  if ( v69 )
  {
    v70 = *(_QWORD *)(a1 + 312);
    *(_QWORD *)&v98 = v69;
    WORD4(v98) = 0;
    if ( !v70 )
      v70 = get_idati(a1 + 160, 0);
    v97 = (_QWORD *)v70;
    create_tinfo(&v95, 61, 61, &v97);
    v71 = v95;
    if ( (_BYTE)v95 )
    {
      LOBYTE(v71) = v95 & 0x3F;
      v95 = v94[0] & 0xC0 | v71;
    }
  }
  v72 = sub_379A0((_QWORD *)(a1 + 64), &v85, 0.0, a8, a9);
  copy_tinfo_t(v72, &v95);
  if ( !(unsigned __int8)get_tinfo_property(v94[0], 2) || (v94[0] & 0x3F) != 0x3D )
    goto LABEL_113;
  v73 = src;
  if ( (_QWORD)v92 )
    v73 = v91;
  if ( !(unsigned int)save_tinfo(v94, 0, 0, v73, 5) )
  {
    clear_tinfo_t(&v95);
    goto LABEL_144;
  }
  v74 = src;
  if ( (_QWORD)v92 )
    v74 = v91;
  (*(void (__fastcall **)(__int64, __int64, _QWORD, const char *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, -1, 0, v74, v94);
LABEL_113:
  clear_tinfo_t(&v95);
  copy_tinfo_t(a2 + 8, v94);
LABEL_114:
  clear_tinfo_t(v94);
LABEL_22:
  if ( v91 )
  {
    *(_QWORD *)&v92 = 0;
    qfree(v91);
  }
  return v9;
}
