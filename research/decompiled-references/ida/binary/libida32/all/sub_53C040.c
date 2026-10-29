__int64 __fastcall sub_53C040(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  int v12; // r14d
  unsigned int v13; // r12d
  int v15; // r13d
  unsigned int v16; // r13d
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // r15d
  unsigned __int64 v20; // rdi
  char v21; // al
  char v22; // al
  __int64 v23; // rax
  bool v24; // bl
  char v25; // bl
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rax
  __int64 v30; // rbx
  char tinfo_property; // al
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // bl
  unsigned __int8 v35; // al
  __int64 tinfo_size; // rbx
  __int64 v37; // rax
  int v38; // ebx
  int v39; // eax
  __int64 v40; // rbx
  bool v41; // [rsp+8h] [rbp-C0h]
  bool v42; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v43; // [rsp+30h] [rbp-98h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-90h] BYREF
  __int64 v45; // [rsp+40h] [rbp-88h] BYREF
  __int64 v46; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v47[2]; // [rsp+50h] [rbp-78h] BYREF
  __int128 v48; // [rsp+60h] [rbp-68h] BYREF
  __int64 v49; // [rsp+70h] [rbp-58h] BYREF
  int v50; // [rsp+78h] [rbp-50h]
  __int16 v51; // [rsp+7Ch] [rbp-4Ch]
  unsigned __int64 v52; // [rsp+88h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  v12 = a7 & 6;
  if ( (a7 & 6) == 0 && (*((_BYTE *)a5 + 28) != *((_BYTE *)a6 + 28) || !(unsigned __int8)compare_tinfo(a5[1], a6[1], 0)) )
    return 0;
  v42 = (get_tinfo_property(*a5, 2) & 0xF) == 12;
  v41 = (get_tinfo_property(*a6, 2) & 0xF) == 12;
  v15 = sub_54C2E0(a3, *((unsigned __int8 *)a5 + 29), 0, v42);
  if ( v15 != (unsigned int)sub_54C2E0(a4, *((unsigned __int8 *)a6 + 29), 0, v41) )
    return 0;
  v16 = a7;
  LOBYTE(v16) = a7 & 0x7F;
  if ( v12 != 2 || !v41 || (v17 = v16, !v42) )
    v17 = a7 & 0x120;
  if ( (v17 & 0x100) != 0 )
  {
    LOBYTE(v18) = sub_538360(a1, a2, *a5, *a6, v17);
    v13 = v18;
  }
  else
  {
    v13 = compare_tinfo(*a5, *a6, v17);
  }
  if ( (_BYTE)v13 )
    return 1;
  if ( v12 != 2 )
  {
    if ( v12 != 4 )
    {
      if ( (a7 & 6) != 0 )
      {
        if ( !under_debugger )
          interr(994);
        BUG();
      }
      return v13;
    }
    return 1;
  }
  v43 = 0;
  copy_tinfo_t(&v43);
  v44 = 0;
  copy_tinfo_t(&v44);
  v19 = 0;
  while ( 1 )
  {
    if ( ++v19 == 1 )
    {
      if ( (get_tinfo_property(v43, 2) & 0x40) != 0 && (get_tinfo_property(v44, 2) & 0x40) == 0 )
        goto LABEL_49;
      tinfo_property = get_tinfo_property(v43, 2);
      v32 = v44;
      if ( tinfo_property < 0 )
      {
        if ( (get_tinfo_property(v44, 2) & 0x80u) == 0LL )
          goto LABEL_49;
        v43 &= 0xFFFFFFFFFFFFFF3FLL;
        v32 = v44;
        LOBYTE(v32) = v44 & 0x3F;
      }
      else
      {
        v43 &= 0xFFFFFFFFFFFFFF3FLL;
        LOBYTE(v32) = v44 & 0x3F;
      }
      v44 = v32;
      if ( (get_tinfo_property(v32, 2) & 0x3F) == 1 )
        goto LABEL_67;
      v27 = v44;
      v26 = v43;
    }
    else
    {
      v24 = (get_tinfo_property(v43, 2) & 0x40) != 0;
      if ( v24 != ((get_tinfo_property(v44, 2) & 0x40) != 0) )
        goto LABEL_49;
      v25 = get_tinfo_property(v43, 2);
      if ( ((v25 ^ get_tinfo_property(v44, 2)) & 0x80u) != 0LL )
        goto LABEL_49;
      v26 = v43;
      v27 = v44;
      LOBYTE(v26) = v43 & 0x3F;
      LOBYTE(v27) = v44 & 0x3F;
      v43 = v26;
      v44 = v27;
    }
    if ( (unsigned __int8)compare_tinfo(v26, v27, 0) )
      goto LABEL_67;
    if ( !(unsigned __int8)get_tinfo_property(v43, 2) || !(unsigned __int8)get_tinfo_property(v44, 2) )
      goto LABEL_49;
    v28 = sub_51B8E0((__int64)a1, v43);
    v29 = sub_51B8E0((__int64)a1, v44);
    v30 = v29;
    if ( v28 && *(_QWORD *)(v28 + 32) )
    {
      if ( v29 && *(_QWORD *)(v29 + 32) )
      {
        if ( !sub_51DBC0(a1, v28, v29, v16) )
          goto LABEL_67;
        v20 = v43;
        if ( (*(_BYTE *)(v30 + 70) & 0x3F) != 0xD )
          goto LABEL_28;
        if ( sub_532A00(a1, (_BYTE *)v28, v43, v30, v44, (a7 & 0x40) != 0) )
          goto LABEL_67;
      }
    }
    else if ( !v29 || !*(_QWORD *)(v29 + 32) )
    {
      goto LABEL_30;
    }
    v20 = v43;
LABEL_28:
    v21 = get_tinfo_property(v20, 2);
    if ( (v21 & 0xF) == 0xD && (v21 & 0x3F) != 0x3D )
      goto LABEL_49;
    v22 = get_tinfo_property(v44, 2);
    if ( (v22 & 0xF) == 0xD && (v22 & 0x3F) != 0x3D )
      goto LABEL_49;
LABEL_30:
    if ( (get_tinfo_property(v44, 2) & 0xF) == 0xA )
    {
      v47[0] = 0;
      v47[1] = 0;
      if ( (unsigned __int8)get_tinfo_details(v43, 11, v47) )
      {
        v45 = 0;
        v46 = 0;
        v48 = 0;
        copy_tinfo_t((char *)&v48 + 8);
        v49 = 0;
        copy_tinfo_t(&v49);
        v50 = 0;
        v51 = 0;
        clear_tinfo_t(&v46);
        clear_tinfo_t(&v45);
        v23 = v48;
        *(_QWORD *)&v48 = v47[0];
        v47[0] = v23;
        create_tinfo(&v43, 10, 10, &v48);
        clear_tinfo_t(&v49);
        clear_tinfo_t((char *)&v48 + 8);
        clear_tinfo_t(&v48);
      }
      clear_tinfo_t(v47);
    }
    if ( (get_tinfo_property(v44, 2) & 0xF) != 0xA || (get_tinfo_property(v43, 2) & 0xF) != 0xA )
      break;
    *(_QWORD *)&v48 = 0;
    *(_QWORD *)&v48 = get_tinfo_property(v43, 9);
    copy_tinfo_t(&v43);
    clear_tinfo_t(&v48);
    *(_QWORD *)&v48 = 0;
    *(_QWORD *)&v48 = get_tinfo_property(v44, 9);
    copy_tinfo_t(&v44);
    clear_tinfo_t(&v48);
  }
  if ( (v44 & 0xE) != 0
    || (v44 & 0x30) == 0
    || (get_tinfo_property(v43, 2) & 0x2F) == 0xD
    || (get_tinfo_property(v43, 2) & 0xF) == 9
    || (get_tinfo_property(v43, 2) & 0xF) == 0xB
    || (v40 = get_tinfo_size(0, v43, 0), v40 != get_tinfo_size(0, v44, 0))
    || get_tinfo_size(0, v44, 0) == -1 )
  {
    v33 = v43;
    if ( (v43 & 0xF) > 9 )
      goto LABEL_65;
    v34 = get_tinfo_property(v43, 2);
    v35 = get_tinfo_property(v44, 2);
    v33 = v43;
    if ( ((v35 ^ v34) & 0xF) != 0 )
      goto LABEL_65;
    tinfo_size = get_tinfo_size(0, v43, 0);
    v37 = get_tinfo_size(0, v44, 0);
    v33 = v43;
    if ( tinfo_size != v37 )
      goto LABEL_65;
    v38 = get_tinfo_property(v43, 3);
    v39 = get_tinfo_property(v44, 3);
    if ( v38 )
    {
      if ( v38 != v39 )
      {
        v33 = v43;
LABEL_65:
        v13 = compare_tinfo(v33, v44, 0);
        goto LABEL_49;
      }
    }
  }
LABEL_67:
  v13 = 1;
LABEL_49:
  clear_tinfo_t(&v44);
  clear_tinfo_t(&v43);
  return v13;
}

