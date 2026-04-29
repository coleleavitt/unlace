unsigned __int64 __fastcall sub_2190(__int64 a1, __int16 a2)
{
  __int64 ph; // rax
  int v3; // eax
  int v4; // edx
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  char v8; // r9
  int v9; // ecx
  int v10; // r12d
  int v11; // eax
  char v12; // dl
  char *i; // rax
  char v14; // al
  unsigned __int64 v15; // r13
  unsigned __int8 v16; // cl
  char v17; // r13
  int v18; // r13d
  char v19; // r13
  int v20; // edi
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // esi
  char *v25; // r13
  _BYTE *v26; // r15
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r13
  int v29; // r13d
  unsigned int v30; // eax
  int v31; // eax
  __int64 v33; // r13
  const char *v34; // r8
  unsigned __int64 v35; // rax
  unsigned int v36; // eax
  __int64 first_seg; // rax
  int v38; // eax
  unsigned int v39; // eax
  size_t v40; // rax
  size_t v41; // r13
  size_t v42; // r12
  char *v43; // r12
  int v44; // r13d
  int v45; // eax
  int v46; // [rsp+8h] [rbp-320h]
  char v47; // [rsp+13h] [rbp-315h]
  int v48; // [rsp+14h] [rbp-314h]
  __int64 v49; // [rsp+18h] [rbp-310h]
  unsigned __int64 v50; // [rsp+20h] [rbp-308h]
  int v51; // [rsp+28h] [rbp-300h]
  unsigned __int64 v52; // [rsp+30h] [rbp-2F8h]
  unsigned int v53; // [rsp+40h] [rbp-2E8h]
  char v54; // [rsp+45h] [rbp-2E3h]
  char v55; // [rsp+46h] [rbp-2E2h]
  char v56; // [rsp+47h] [rbp-2E1h]
  unsigned int v57; // [rsp+48h] [rbp-2E0h]
  unsigned int v58; // [rsp+50h] [rbp-2D8h]
  __int64 v59; // [rsp+58h] [rbp-2D0h]
  __int64 v60; // [rsp+60h] [rbp-2C8h]
  char v61; // [rsp+68h] [rbp-2C0h]
  char v62; // [rsp+6Ch] [rbp-2BCh]
  __int16 v63; // [rsp+6Eh] [rbp-2BAh]
  char *s1; // [rsp+70h] [rbp-2B8h] BYREF
  __int128 v65; // [rsp+78h] [rbp-2B0h]
  char s[600]; // [rsp+90h] [rbp-298h] BYREF
  unsigned __int64 v67; // [rsp+2E8h] [rbp-40h]

  v62 = a2;
  v67 = __readfsqword(0x28u);
  setinf_flag(3, 4, 0);
  xmmword_51C0 = 0;
  setinf(15, -1);
  ph = get_ph();
  v59 = ph;
  v63 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    v3 = *(_DWORD *)(ph + 16);
  else
    v3 = *(_DWORD *)(ph + 20);
  v4 = v3 + 14;
  v5 = v3 + 7;
  if ( v5 < 0 )
    v5 = v4;
  v53 = v5 >> 3;
  v6 = getinf(12);
  v49 = 16 * v6;
  v54 = 0;
  v60 = setup_selector(v6 & 0xFFFFFFFFFFFFFFFLL);
  v48 = *(_DWORD *)(v59 + 4);
  if ( v48 != 22 )
    goto LABEL_6;
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  s1 = nullptr;
  v65 = 0;
  v40 = strlen(s);
  v41 = v40 + 1;
  v42 = v40;
  s1 = (char *)qvector_reserve(&s1, 0, v40 + 1, 1);
  *(_QWORD *)&v65 = v41;
  memmove(s1, s, v42);
  s1[v42] = 0;
  v43 = s1;
  if ( (_QWORD)v65 )
  {
    v44 = strncmp(s1, "PIC18", 5u);
    if ( v43 )
    {
      *(_QWORD *)&v65 = 0;
      qfree(v43);
    }
    if ( !v44 )
      goto LABEL_97;
  }
  else if ( s1 )
  {
    qfree(s1);
  }
  v45 = sub_1DC0(
          (__int64)"~B~yte addressing",
          (__int64)"~W~ord addressing",
          (__int64)"~C~ancel",
          1u,
          (__int64)"There are two flavors of HEX files for PIC: with word addressing\n"
                   "and with byte addressing. It is not possible to recognize the\n"
                   "flavor automatically. Please specify what addressing mode should\n"
                   "be used to load the input file. If you don't know, try both and\n"
                   "choose the one which produces the more meaningful result\n");
  if ( !v45 )
  {
    v54 = 1;
    v48 = *(_DWORD *)(v59 + 4);
    goto LABEL_6;
  }
  if ( v45 != 1 )
    sub_1F50(0);
LABEL_97:
  v54 = 0;
  v48 = *(_DWORD *)(v59 + 4);
LABEL_6:
  v7 = getinf(5);
  v8 = 83;
  v9 = v7;
  v10 = v7;
  if ( v7 != 13 )
    v8 = (v7 != 5) + 58;
  v56 = 0;
  v11 = 1;
  v58 = 0;
  v57 = 0;
  v52 = 0;
  v50 = 0;
  v55 = 0;
  v47 = v8;
  v46 = v9;
  v61 = a2;
  while ( 1 )
  {
    DWORD2(xmmword_51C0) = v11;
    if ( !qlgets(s, 598) )
      break;
    v12 = s[0];
    for ( i = s; v12 == 32; ++i )
      v12 = i[1];
    if ( v12 == 13 || v12 == 10 )
      goto LABEL_26;
    if ( v12 != v47 )
      sub_2000();
    if ( v10 == 13 )
    {
      v19 = i[1];
      *(_QWORD *)&xmmword_51C0 = i + 2;
      sub_2020(0);
      switch ( v19 )
      {
        case '0':
        case '5':
          goto LABEL_26;
        case '1':
        case '9':
          v20 = 2;
          goto LABEL_29;
        case '2':
        case '8':
          v20 = 3;
          goto LABEL_29;
        case '3':
        case '7':
          v20 = 4;
LABEL_29:
          --BYTE14(xmmword_51C0);
          if ( (unsigned __int8)v19 > 0x33u )
          {
            v21 = sub_2020(v20);
            setinf(15, v21);
            goto LABEL_26;
          }
          v22 = sub_2020(v20);
          v16 = BYTE14(xmmword_51C0);
          LODWORD(v15) = v22;
          if ( BYTE14(xmmword_51C0) )
            goto LABEL_34;
          goto LABEL_20;
        default:
          sub_2000();
      }
    }
    *(_QWORD *)&xmmword_51C0 = i + 1;
    sub_2020(0);
    v14 = BYTE14(xmmword_51C0);
    if ( !BYTE14(xmmword_51C0) )
      break;
    BYTE14(xmmword_51C0) += 2;
    if ( v10 != 5 )
    {
      v15 = (unsigned int)sub_2020(2);
      if ( v48 != 65 )
        v15 /= v53;
LABEL_19:
      v16 = BYTE14(xmmword_51C0);
      if ( !BYTE14(xmmword_51C0) )
      {
LABEL_20:
        BYTE14(xmmword_51C0) = v16 + 1;
        if ( v46 == 5 )
        {
          sub_2020(1);
          LOWORD(v18) = BYTE12(xmmword_51C0);
        }
        else if ( v46 == 13 )
        {
          v17 = BYTE12(xmmword_51C0);
          LOWORD(v18) = (unsigned __int8)~(sub_2020(1) ^ v17);
        }
        else
        {
          v29 = WORD6(xmmword_51C0);
          BYTE14(xmmword_51C0) = v16 + 2;
          v18 = v29 - sub_2020(2);
        }
        if ( (_WORD)v18 )
        {
          if ( !byte_51B1 )
          {
            byte_51B1 = 1;
            sub_1CF0((__int64)"Bad hex input file checksum, line %u. Ignore?", DWORD2(xmmword_51C0));
          }
        }
        goto LABEL_26;
      }
LABEL_34:
      v23 = v16 % v53;
      v24 = v57 + v58 + v15;
      v25 = s;
      v51 = v24 + v16 / v53;
      if ( v16 )
      {
        while ( 1 )
        {
          v26 = v25 + 1;
          *v25 = sub_2020(1);
          if ( !v54 )
            break;
          v25[1] = 0;
          v25 += 2;
          if ( !BYTE14(xmmword_51C0) )
            goto LABEL_37;
        }
        while ( BYTE14(xmmword_51C0) )
          *v26++ = sub_2020(1);
      }
LABEL_37:
      v56 |= (v51 & 0xFFFF0000) != 0;
      v27 = (unsigned int)(v24 + v49);
      show_auto(v27, 0, v23);
      v28 = (unsigned int)(v49 + v51);
      if ( v50 >= v28 && v55 == 1 )
      {
        v55 = 1;
        if ( v27 < v52 )
        {
          if ( (v62 & 1) != 0 )
            goto LABEL_41;
          v52 = (unsigned int)(v24 + v49);
        }
        goto LABEL_42;
      }
      if ( v27 - v50 <= 0xFFFFF )
      {
        if ( (v62 & 1) != 0 )
        {
          if ( v55 )
          {
            set_segm_end(v52, v28, (unsigned __int8)(v27 - v50 > 0x40000) << 6);
            v50 = (unsigned int)(v49 + v51);
            if ( v27 < v52 )
            {
LABEL_41:
              set_segm_start(v52, v27, (unsigned __int8)(v52 - v27 > 0x40000) << 6);
              v52 = (unsigned int)(v24 + v49);
              v55 = 1;
            }
LABEL_42:
            mem2base(s, v27, v28, -1);
            v16 = BYTE14(xmmword_51C0);
            goto LABEL_20;
          }
LABEL_68:
          v34 = "CODE";
          if ( !v63 )
            v34 = "DATA";
          v55 = add_segm(v60, v27, v28, 0, v34, 0);
          if ( !v55 )
            sub_1F50(0);
          v50 = (unsigned int)(v49 + v51);
          v52 = (unsigned int)(v24 + v49);
          goto LABEL_42;
        }
      }
      else
      {
        if ( (v62 & 1) != 0 )
          goto LABEL_68;
        v55 = 0;
      }
      v35 = v52;
      v50 = (unsigned int)(v49 + v51);
      if ( v52 > v27 )
        v35 = (unsigned int)(v24 + v49);
      v52 = v35;
      goto LABEL_42;
    }
    BYTE14(xmmword_51C0) = v14 + 3;
    v15 = (unsigned int)sub_2020(2);
    if ( v48 == 65 )
    {
      v30 = sub_2020(1);
      if ( v30 == 5 )
        goto LABEL_62;
      if ( v30 > 5 )
      {
        if ( v30 == 255 )
        {
LABEL_99:
          v36 = (unsigned int)sub_2020(2) << 16;
          goto LABEL_83;
        }
        goto LABEL_26;
      }
      if ( v30 == 2 )
      {
        v39 = 16 * sub_2020(2);
        goto LABEL_89;
      }
      if ( v30 == 4 )
        goto LABEL_99;
    }
    else
    {
      v30 = sub_2020(1);
      if ( v30 == 4 )
        goto LABEL_82;
      if ( v30 > 4 )
      {
        if ( v30 != 5 )
        {
          if ( v30 != 255 )
            goto LABEL_26;
LABEL_82:
          v36 = ((unsigned int)sub_2020(2) << 16) / v53;
LABEL_83:
          v58 = v36;
          goto LABEL_26;
        }
LABEL_62:
        v33 = (unsigned int)sub_2020(4);
        if ( (*(_BYTE *)(v59 + 12) & 8) != 0 && (v33 & 1) != 0 )
        {
          sub_1E90(0x57u, (unsigned int)v33, 1);
          v33 = (unsigned int)v33 & 0xFFFFFFFE;
        }
        setinf(15, v33);
        setinf(16, v33);
        goto LABEL_26;
      }
      if ( v30 == 2 )
      {
        v39 = 16 * (unsigned int)sub_2020(2) / v53;
LABEL_89:
        v57 = v39;
        goto LABEL_26;
      }
      v15 /= v53;
    }
    if ( !v30 )
      goto LABEL_19;
    if ( v30 == 1 )
      break;
LABEL_26:
    v11 = DWORD2(xmmword_51C0) + 1;
  }
  if ( (v61 & 1) != 0 )
  {
    if ( v56 )
    {
      first_seg = get_first_seg();
      set_segm_addressing(first_seg, 1);
      if ( !*(_DWORD *)(v59 + 4) )
      {
        v38 = getinf(3);
        setinf(3, v38 | 2u);
      }
    }
    set_default_dataseg(v60);
    setinf(14, v60);
  }
  else
  {
    enable_flags(v49, v50, 0xFFFFFFFFLL);
  }
  v31 = getinf(10);
  setinf(10, v31 & 0x7FFFFFFF);
  create_filename_cmt();
  return v67 - __readfsqword(0x28u);
}
