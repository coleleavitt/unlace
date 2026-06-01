__int64 __fastcall sub_1373D0(
        const char *a1,
        const char *a2,
        unsigned int a3,
        __int64 (__fastcall *a4)(__int64 (***)(), const char *, __int64 (***)(), __int64),
        __int64 (***a5)())
{
  __int64 v6; // rbp
  __int64 (***v7)(); // r14
  __int64 (***v8)(); // r15
  __int64 (***v9)(); // r12
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 (***v13)(); // rcx
  unsigned int v14; // r14d
  __int64 v16; // rdx
  const char *v17; // rdx
  __int64 (***v18)(); // rcx
  __int64 v19; // rax
  char v20; // al
  const char *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // r15
  unsigned int *v24; // rbx
  int v25; // eax
  unsigned int v26; // eax
  __int64 (***v27)(); // rdi
  unsigned int v28; // ebp
  unsigned __int64 notype; // rbx
  __int64 v30; // rcx
  unsigned int v31; // eax
  __int64 (***v32)(); // rdi
  unsigned int v33; // ebp
  unsigned __int64 error; // rbx
  __int64 v35; // rcx
  __int64 (***v36)(); // rdi
  unsigned int v37; // ebp
  unsigned __int64 suspop; // rbx
  __int64 v39; // rcx
  __int64 (***v40)(); // rdi
  unsigned int v41; // r12d
  unsigned __int8 v42; // bp
  int v43; // ebp
  unsigned __int64 imm; // rbx
  __int64 v45; // rcx
  char v47; // al
  int v48; // r12d
  __int64 (***v49)(); // rdi
  __int64 v50; // r14
  __int64 v51; // r12
  const char *v52; // rbx
  const char *v53; // rsi
  unsigned __int64 v54; // rbp
  const char *v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rbp
  const char *v58; // rbx
  __int64 entry_qty; // rax
  __int64 v60; // r15
  unsigned __int64 v61; // r14
  bool v62; // dl
  unsigned int entry_ordinal; // ebp
  __int64 entry; // rax
  unsigned int v65; // ebp
  __int64 problem; // rbx
  bool v67; // r15
  bool v68; // al
  __int64 (***v69)(); // [rsp+8h] [rbp-120h]
  __int64 (***v70)(); // [rsp+8h] [rbp-120h]
  __int64 (***v71)(); // [rsp+8h] [rbp-120h]
  char v74; // [rsp+20h] [rbp-108h]
  unsigned int v75; // [rsp+20h] [rbp-108h]
  __int64 v76; // [rsp+28h] [rbp-100h]
  __int64 (***v77)(); // [rsp+28h] [rbp-100h]
  int v78; // [rsp+28h] [rbp-100h]
  unsigned __int64 v79; // [rsp+28h] [rbp-100h]
  char v80; // [rsp+30h] [rbp-F8h]
  char v81; // [rsp+38h] [rbp-F0h]
  char v82; // [rsp+3Ch] [rbp-ECh]
  char v83; // [rsp+4Fh] [rbp-D9h] BYREF
  __int64 (***v84)(); // [rsp+50h] [rbp-D8h] BYREF
  int v85; // [rsp+58h] [rbp-D0h]
  __int64 v86; // [rsp+60h] [rbp-C8h] BYREF
  int v87; // [rsp+68h] [rbp-C0h]
  __int64 (**v88)(); // [rsp+70h] [rbp-B8h] BYREF
  int v89; // [rsp+78h] [rbp-B0h]
  __int64 v90; // [rsp+80h] [rbp-A8h]
  __int64 (**v91)(); // [rsp+90h] [rbp-98h] BYREF
  int v92; // [rsp+98h] [rbp-90h]
  __int64 v93; // [rsp+A0h] [rbp-88h]
  const char *v94; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v95; // [rsp+B8h] [rbp-70h]
  __int64 (**v96)(); // [rsp+D0h] [rbp-58h] BYREF
  __int128 v97; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v98; // [rsp+E8h] [rbp-40h]

  v81 = (char)a2;
  v98 = __readfsqword(0x28u);
  if ( !a1 )
    return (unsigned int)-1;
  v84 = nullptr;
  v6 = a3;
  v7 = *((__int64 (****)())a1 + 111);
  v85 = 0;
  v8 = *((__int64 (****)())a1 + 112);
  v86 = 0;
  v87 = 0;
  if ( (_BYTE)a2 )
  {
    a2 = (const char *)&v84;
    v80 = sub_161A40(a1, &v84, &v86, &v83);
    if ( v80 )
    {
      v9 = (__int64 (***)())v86;
      if ( !v83 || *((_DWORD *)v84 + 2) != *(_DWORD *)(v86 + 8) )
      {
        v69 = v84;
        v94 = nullptr;
        v16 = *((_QWORD *)a1 + 95);
        v96 = nullptr;
        v95 = 0;
        v97 = 0;
        ((void (__fastcall *)(__int64 (***)(), const char **, __int64))**v84)(v84, &v94, v16);
        ((void (__fastcall *)(__int64 (***)(), __int64 (***)(), _QWORD))**v9)(v9, &v96, *((_QWORD *)a1 + 95));
        v17 = s1;
        if ( (_QWORD)v97 )
          v17 = (const char *)v96;
        a2 = s1;
        if ( (_QWORD)v95 )
          a2 = v94;
        sub_8F740((__int64)"Searching in the selection range: %s .. %s.\n", a2, v17);
        v18 = v69;
        if ( v96 )
        {
          *(_QWORD *)&v97 = 0;
          qfree();
          v18 = v69;
        }
        if ( v94 )
        {
          v70 = v18;
          *(_QWORD *)&v95 = 0;
          qfree();
          v18 = v70;
        }
        v74 = 0;
        if ( (v6 & 0xFFFFFFFB) != 2 )
        {
          v71 = v18;
          v20 = sub_13C2E0(a1, a2);
          v18 = v71;
          v74 = v20;
          if ( !v20 )
            return (unsigned int)-1;
        }
        v77 = v18;
        v19 = ((__int64 (__fastcall *)(__int64 (***)()))(*v18)[16])(v18);
        v11 = (__int64)v9;
        v89 = 0;
        v88 = off_230E18;
        v90 = v19;
        v12 = ((__int64 (__fastcall *)(__int64 (***)()))(*v9)[16])(v9);
        v13 = v77;
        goto LABEL_6;
      }
    }
  }
  if ( (v6 & 0xFFFFFFFB) != 2 )
  {
    if ( (unsigned __int8)sub_13C2E0(a1, a2) )
    {
      v74 = 1;
      goto LABEL_5;
    }
    return (unsigned int)-1;
  }
  v74 = 0;
LABEL_5:
  v9 = v8;
  v10 = getinf();
  v11 = 20;
  v89 = 0;
  v88 = off_230E18;
  v90 = v10;
  v12 = getinf();
  v80 = 0;
  v13 = v7;
LABEL_6:
  v92 = 0;
  v93 = v12;
  v91 = off_230E18;
  if ( v74 )
  {
    switch ( v6 )
    {
      case 0LL:
        entry_qty = get_entry_qty();
        v60 = 0;
        if ( !entry_qty )
          goto LABEL_10;
        v61 = entry_qty;
        while ( !(unsigned __int8)sub_1A0470(v11, a2) )
        {
          entry_ordinal = get_entry_ordinal();
          entry = get_entry();
          a2 = (const char *)&v96;
          v11 = (__int64)a1;
          LODWORD(v97) = -1;
          v96 = off_230E18;
          *((_QWORD *)&v97 + 1) = entry;
          if ( (int)sub_161BA0(a1, &v96, &v88) < 0
            || (a2 = (const char *)&v96, v11 = (__int64)a1, (int)sub_161BA0(a1, &v96, &v91) >= 0) )
          {
            v62 = v74;
            v31 = 0;
          }
          else
          {
            v11 = (__int64)a5;
            a2 = a1;
            v31 = a4(a5, a1, &v96, entry_ordinal);
            v62 = v31 == 0;
          }
          if ( ++v60 >= v61 || !v62 )
            goto LABEL_55;
        }
        goto LABEL_10;
      case 1LL:
        v48 = -1;
        v82 = BYTE2(xmmword_2450C0) | 0x11;
        v49 = &v91;
        ((void (__fastcall *)(__int64 (***)(), const char *, __int64 (**)(), __int64 (***)()))v88[16])(
          &v88,
          a2,
          off_230E18,
          v13);
        v75 = 0;
        v79 = ((__int64 (__fastcall *)(__int64 (***)()))v91[16])(&v91);
        v95 = 0;
        v94 = nullptr;
        while ( !(unsigned __int8)sub_1A0470(v49, a2) )
        {
          if ( (unsigned int)nbits() == v48 )
            goto LABEL_100;
          v50 = v95;
          v51 = 0;
          v96 = nullptr;
          v97 = 0;
          if ( (_QWORD)v95 )
          {
            do
            {
              v52 = &v94[80 * v51];
              if ( *((_QWORD *)v52 + 6) )
              {
                *((_QWORD *)v52 + 7) = 0;
                qfree();
              }
              if ( *((_QWORD *)v52 + 3) )
              {
                *((_QWORD *)v52 + 4) = 0;
                qfree();
              }
              if ( *(_QWORD *)v52 )
              {
                *((_QWORD *)v52 + 1) = 0;
                qfree();
              }
              ++v51;
            }
            while ( v50 != v51 );
          }
          *(_QWORD *)&v95 = 0;
          if ( (unsigned __int8)parse_binpat_str() )
            goto LABEL_98;
          v53 = s1;
          if ( (_QWORD)v97 )
            v53 = (const char *)v96;
          sub_8F740((__int64)"%s\n", v53);
          if ( (_QWORD)v95 )
          {
LABEL_98:
            v48 = nbits();
            sub_136B90(v82, &v94);
            if ( v96 )
            {
              *(_QWORD *)&v97 = 0;
              qfree();
            }
LABEL_100:
            v54 = bin_search();
            if ( v54 < v79 )
            {
              *((_QWORD *)&v97 + 1) = v54;
              a2 = a1;
              LODWORD(v97) = -1;
              v96 = off_230E18;
              v49 = (__int64 (***)())v54;
              v14 = a4(a5, a1, &v96, v75);
              if ( next_not_tail() == -1 )
                goto LABEL_103;
              ++v75;
              if ( v14 )
                goto LABEL_103;
              continue;
            }
          }
          else if ( v96 )
          {
            *(_QWORD *)&v97 = 0;
            qfree();
          }
          break;
        }
        v14 = 0;
LABEL_103:
        v55 = v94;
        if ( v94 )
        {
          v56 = v95;
          if ( (_QWORD)v95 )
          {
            v57 = 0;
            do
            {
              v58 = &v55[80 * v57];
              if ( *((_QWORD *)v58 + 6) )
              {
                *((_QWORD *)v58 + 7) = 0;
                qfree();
              }
              if ( *((_QWORD *)v58 + 3) )
              {
                *((_QWORD *)v58 + 4) = 0;
                qfree();
              }
              if ( *(_QWORD *)v58 )
              {
                *((_QWORD *)v58 + 1) = 0;
                qfree();
              }
              ++v57;
              v55 = v94;
            }
            while ( v56 != v57 );
          }
          *(_QWORD *)&v95 = 0;
          qfree();
        }
        goto LABEL_11;
      case 2LL:
        v9 = &v91;
        v13 = &v88;
        goto LABEL_33;
      case 3LL:
        v76 = *((_QWORD *)&xmmword_2450B0 + 1);
        do
        {
LABEL_72:
          if ( (unsigned __int8)sub_1A0470(v11, a2) )
            break;
          if ( (unsigned __int8)xrefblk_t_first_to() )
          {
            while ( 1 )
            {
              LODWORD(v97) = -1;
              v96 = off_230E18;
              *((_QWORD *)&v97 + 1) = v94;
              if ( (int)sub_161BA0(a1, &v96, &v88) < 0 || (int)sub_161BA0(a1, &v96, &v91) >= 0 )
              {
                v14 = 0;
                v47 = xrefblk_t_next_to();
              }
              else
              {
                v14 = a4(a5, a1, &v96, BYTE9(v95));
                v47 = xrefblk_t_next_to();
                if ( v14 )
                {
LABEL_80:
                  ++v76;
                  a2 = &byte_4;
                  v11 = v76;
                  if ( (get_flags_ex() & 0x600) != 0x200 || v14 )
                    goto LABEL_11;
                  goto LABEL_72;
                }
              }
              if ( !v47 )
                goto LABEL_80;
            }
          }
          ++v76;
          a2 = &byte_4;
          v11 = v76;
        }
        while ( (get_flags_ex() & 0x600) == 0x200 );
        goto LABEL_10;
      case 4LL:
        v40 = &v88;
        v41 = 0;
        v42 = BYTE2(xmmword_2450C0);
        ((void (__fastcall *)(__int64 (***)(), const char *, __int64 (**)(), __int64 (***)()))v88[16])(
          &v88,
          a2,
          off_230E18,
          v13);
        v43 = v42 | 1;
        while ( !(unsigned __int8)sub_1A0470(v40, a2) )
        {
          imm = find_imm();
          if ( imm >= ((__int64 (__fastcall *)(__int64 (***)(), _QWORD))v91[16])(&v91, v43 | 0x100u) )
            break;
          v45 = v41;
          a2 = a1;
          v40 = a5;
          v43 |= 2u;
          LODWORD(v97) = -1;
          ++v41;
          v96 = off_230E18;
          *((_QWORD *)&v97 + 1) = imm;
          v31 = a4(a5, a1, &v96, v45);
          if ( v31 )
            goto LABEL_55;
        }
        goto LABEL_10;
      case 5LL:
        v36 = &v88;
        v37 = 0;
        ((void (__fastcall *)(__int64 (***)(), const char *, __int64 (**)(), __int64 (***)()))v88[16])(
          &v88,
          a2,
          off_230E18,
          v13);
        while ( !(unsigned __int8)sub_1A0470(v36, a2) )
        {
          suspop = find_suspop();
          if ( suspop >= ((__int64 (__fastcall *)(__int64 (***)(), __int64))v91[16])(&v91, 1) )
            break;
          v39 = v37;
          v36 = a5;
          LODWORD(v97) = -1;
          v96 = off_230E18;
          a2 = a1;
          ++v37;
          *((_QWORD *)&v97 + 1) = suspop;
          v31 = a4(a5, a1, &v96, v39);
          if ( v31 )
            goto LABEL_55;
        }
        goto LABEL_10;
      case 7LL:
        v65 = 1;
        while ( !(unsigned __int8)sub_1A0470(v11, a2) )
        {
          a2 = nullptr;
          v11 = v65;
          problem = get_problem();
          if ( problem == -1 )
          {
            v67 = v74;
            v14 = 0;
          }
          else
          {
            do
            {
              LODWORD(v97) = -1;
              v96 = off_230E18;
              *((_QWORD *)&v97 + 1) = problem;
              if ( (int)sub_161BA0(a1, &v96, &v88) < 0 || (int)sub_161BA0(a1, &v96, &v91) >= 0 )
              {
                v67 = v74;
                v14 = 0;
              }
              else
              {
                v14 = a4(a5, a1, &v96, v65);
                v67 = v14 == 0;
              }
              a2 = (const char *)(problem + 1);
              v11 = v65;
              problem = get_problem();
            }
            while ( problem != -1 && v67 );
          }
          v68 = (_BYTE)v65++ != 16;
          if ( !v67 || !v68 )
            goto LABEL_11;
        }
        goto LABEL_10;
      case 8LL:
        v32 = &v88;
        v33 = 0;
        j__idaplace_t__toea();
        while ( !(unsigned __int8)sub_1A0470(v32, a2) )
        {
          error = find_error();
          if ( error >= j__idaplace_t__toea() )
            break;
          v35 = v33;
          v32 = a5;
          LODWORD(v97) = -1;
          v96 = off_230E18;
          a2 = a1;
          ++v33;
          *((_QWORD *)&v97 + 1) = error;
          v31 = a4(a5, a1, &v96, v35);
          if ( v31 )
            goto LABEL_55;
        }
        goto LABEL_10;
      case 9LL:
        v27 = &v88;
        v28 = 0;
        ((void (__fastcall *)(__int64 (***)(), const char *, __int64 (**)(), __int64 (***)()))v88[16])(
          &v88,
          a2,
          off_230E18,
          v13);
        break;
      default:
        goto LABEL_10;
    }
    do
    {
      if ( (unsigned __int8)sub_1A0470(v27, a2)
        || (notype = find_notype(), notype >= ((__int64 (__fastcall *)(__int64 (***)(), __int64))v91[16])(&v91, 1)) )
      {
LABEL_10:
        v14 = 0;
        goto LABEL_11;
      }
      v30 = v28;
      v27 = a5;
      LODWORD(v97) = -1;
      v96 = off_230E18;
      a2 = a1;
      ++v28;
      *((_QWORD *)&v97 + 1) = notype;
      v31 = a4(a5, a1, &v96, v30);
    }
    while ( !v31 );
LABEL_55:
    v14 = v31;
    goto LABEL_11;
  }
  switch ( v6 )
  {
    case 0LL:
    case 1LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 7LL:
    case 8LL:
    case 9LL:
      return (unsigned int)-1;
    case 2LL:
LABEL_33:
      LODWORD(v96) = 0;
      if ( v80 )
      {
        v13 = v84;
        v9 = (__int64 (***)())v86;
        LODWORD(v96) = v85;
      }
      v21 = s1;
      v22 = ((__int64 (__fastcall *)(__int64 (***)()))(*v13)[2])(v13);
      v23 = *((_QWORD *)a1 + 95);
      v24 = (unsigned int *)v22;
      if ( (_QWORD)xmmword_251968 )
        v21 = (const char *)qword_251960;
      v78 = 0;
      break;
    default:
      goto LABEL_10;
  }
  while ( 1 )
  {
    if ( (int)sub_161BA0(a1, v24, v9) >= 0 )
    {
LABEL_46:
      if ( v78 <= 0 )
        goto LABEL_137;
      goto LABEL_47;
    }
    if ( (unsigned __int8)sub_1A0470(a1, v24) || (v25 = search(), v14 = v25, v25 == 2) )
    {
      sub_8F740((__int64)"Search aborted\n");
      v14 = 2;
      goto LABEL_49;
    }
    if ( v25 > 2 )
      break;
    if ( !v25 )
    {
      if ( !v78 )
      {
        sub_8F740((__int64)"Pattern \"%s\" was not found\n", v21);
        goto LABEL_137;
      }
      if ( v78 <= 0 )
      {
LABEL_137:
        v14 = 0;
        goto LABEL_49;
      }
LABEL_47:
      v14 = 0;
      goto LABEL_48;
    }
    if ( v25 != 1 )
      goto LABEL_49;
    v26 = a4(a5, a1, (__int64 (***)())v24, v24[2]);
    v14 = v26;
    if ( v26 )
    {
      if ( v26 != 1 )
        goto LABEL_49;
LABEL_48:
      sub_8F740((__int64)"Search completed\n");
      goto LABEL_49;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(unsigned int *, __int64))(*(_QWORD *)v24 + 64LL))(v24, v23) )
      goto LABEL_46;
    ++v78;
    LODWORD(v96) = 0;
  }
  if ( v25 == 3 )
    sub_8F740((__int64)"Bad regular expression: \"%s\"\n", v21);
LABEL_49:
  if ( v24 )
    qfree();
LABEL_11:
  if ( v81 && qword_254470 )
    sub_15DF80(qword_254470 + 272);
  return v14;
}

