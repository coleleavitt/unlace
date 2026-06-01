__int64 __fastcall sub_613380(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int64 a5,
        double a6,
        double a7,
        __int64 a8,
        __int64 *a9)
{
  int v11; // r12d
  __int64 v13; // rax
  __int64 data_elsize; // rax
  unsigned __int64 v15; // rbp
  char *v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // r14
  int tinfo_property; // edx
  char v20; // bp
  int v22; // eax
  unsigned __int64 i; // r12
  char data_value; // al
  unsigned __int64 *v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // rsi
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rdx
  int flags; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 tinfo_size; // r12
  __int64 v34; // rdi
  __int64 v35; // rdx
  char v36; // al
  __int64 v37; // rdx
  unsigned __int8 scalar_bt; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  unsigned __int8 v43; // dl
  __int64 v44; // rax
  __int64 idati; // rax
  __int64 v46; // [rsp+8h] [rbp-100h]
  int v47; // [rsp+10h] [rbp-F8h]
  char v48; // [rsp+17h] [rbp-F1h]
  char v50; // [rsp+28h] [rbp-E0h]
  int v51; // [rsp+68h] [rbp-A0h]
  int v52; // [rsp+6Ch] [rbp-9Ch]
  __int64 v53; // [rsp+70h] [rbp-98h] BYREF
  __int64 v54; // [rsp+78h] [rbp-90h] BYREF
  __int64 v55; // [rsp+80h] [rbp-88h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h] BYREF
  __int64 v57; // [rsp+90h] [rbp-78h] BYREF
  __int64 v58; // [rsp+98h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-58h] BYREF
  int v61; // [rsp+B8h] [rbp-50h]
  __int16 v62; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v63; // [rsp+C8h] [rbp-40h]

  v11 = a3;
  v13 = *(_QWORD *)(*a1 + 1672);
  v63 = __readfsqword(0x28u);
  v46 = v13;
  data_elsize = get_data_elsize(a2, a3, a4);
  if ( !data_elsize )
    return 0;
  v15 = data_elsize;
  v16 = (char *)(v11 & 0xF00000);
  if ( v16 != (_BYTE *)&loc_4FFFFB + 5 )
  {
    if ( (v11 & 0x600) != 0x400 )
    {
LABEL_4:
      if ( v16 != (char *)&loc_800000 || !a4 )
        goto LABEL_99;
      v17 = *a4;
      v18 = *(_QWORD **)(*a1 + 1672);
      *(_QWORD *)&v59 = 0;
      get_type_by_tid(&v59, v17);
      tinfo_property = get_tinfo_property(v59, 304);
      if ( !tinfo_property )
        tinfo_property = (unsigned __int8)sub_631AD0(*v18, 61);
      v47 = tinfo_property;
      clear_tinfo_t(&v59);
      if ( v15 != v47 )
      {
LABEL_99:
        if ( !(unsigned __int8)sub_60BC50(v46, a9, v11, 0, 0, 0) )
        {
          *(_QWORD *)&v59 = 17;
          copy_tinfo_t(a9);
          v15 = 1;
          clear_tinfo_t(&v59);
        }
        goto LABEL_11;
      }
      if ( (unsigned __int8)get_type_by_tid(a9, *a4) )
        goto LABEL_11;
      return 0;
    }
    v37 = v11 & 0xF0000000;
    switch ( v37 )
    {
      case 1610612736LL:
        if ( a4 && (unsigned __int8)sub_605A80(v46, (__int64)a9, *a4) )
          goto LABEL_11;
        break;
      case 1342177280LL:
        v41 = *a1;
        v42 = *(_QWORD *)(v46 + 8);
        if ( v15 == sub_56BED0(*a1, v42, (int)"wchar_t", 1, nullptr, a6, a7) )
        {
          idati = *(_QWORD *)(v46 + 8);
          LOWORD(v60) = 0;
          *((_QWORD *)&v59 + 1) = "wchar_t";
          if ( !idati )
            idati = get_idati(v41, v42);
          *(_QWORD *)&v59 = idati;
          create_tinfo(a9, 61, 61, &v59);
        }
        else
        {
          *(_QWORD *)&v59 = (unsigned __int8)get_scalar_bt((unsigned int)v15);
          copy_tinfo_t(a9);
          clear_tinfo_t(&v59);
        }
        goto LABEL_11;
      case 3489660928LL:
        scalar_bt = get_scalar_bt((unsigned int)v15);
        if ( scalar_bt )
        {
          *(_QWORD *)&v59 = scalar_bt;
          copy_tinfo_t(a9);
          clear_tinfo_t(&v59);
          goto LABEL_11;
        }
        break;
      default:
        goto LABEL_4;
    }
    return 0;
  }
  if ( !a4 )
    return 0;
  v22 = *((_DWORD *)a4 + 6);
  if ( (v22 & 0x1000) != 0 && (v11 & 0x600) == 0x400 && (v11 & 0xC0000000) == 0 )
  {
    v43 = 5;
    if ( v15 - 1 <= 3 )
      v43 = byte_23B1374[v15 - 1];
    if ( (v22 & 0x200) == 0 )
      v43 |= 0x20u;
    *(_QWORD *)&v59 = v43;
    copy_tinfo_t(a9);
    clear_tinfo_t(&v59);
    return 2;
  }
  v51 = 0;
  v48 = sub_60D250(a1, a2);
  v50 = 1;
  for ( i = 0; ; i += v15 )
  {
    data_value = get_data_value(&v53, i + a2, v15);
    if ( !data_value )
      goto LABEL_49;
    v25 = (unsigned __int64 *)a1[10];
    v26 = a1[11];
    v27 = &v25[v26];
    if ( v25 != v27 )
    {
      v28 = (unsigned __int64 *)a1[10];
      while ( *v28 != a2 )
      {
        if ( v27 == ++v28 )
          goto LABEL_27;
      }
      data_value = v27 == v28;
    }
LABEL_27:
    if ( v26 > 0xF || !data_value )
      goto LABEL_29;
    v29 = v26 + 1;
    if ( a1[12] < v29 )
    {
      v39 = qvector_reserve(a1 + 10, a1[10], v29, 8);
      v40 = a1[11];
      a1[10] = v39;
      v27 = (unsigned __int64 *)(v39 + 8 * v40);
    }
    *v27 = a2;
    ++a1[11];
    if ( !(unsigned __int8)calc_reference_data(&v54, 0, -1, a4, v53) || v54 == a2 )
      goto LABEL_46;
    v55 = 0;
    v52 = guess_tinfo((int)&v55, v54);
    if ( !v52 )
      break;
    flags = get_flags_ex(v54, 4);
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      if ( (get_tinfo_property(v55, 2) & 0xF) == 0xB )
      {
        v56 = 0;
        v56 = get_tinfo_property(v55, 11);
        v57 = 0;
        v58 = 0;
        v59 = 0;
        copy_tinfo_t((char *)&v59 + 8);
        v60 = 0;
        copy_tinfo_t(&v60);
        v61 = 0;
        v62 = 0;
        clear_tinfo_t(&v58);
        clear_tinfo_t(&v57);
        copy_tinfo_t(&v59);
        create_tinfo(&v55, 10, 10, &v59);
        clear_tinfo_t(&v60);
        clear_tinfo_t((char *)&v59 + 8);
        clear_tinfo_t(&v59);
        clear_tinfo_t(&v56);
      }
    }
    else
    {
      if ( (get_tinfo_property(v55, 2) & 0xF) != 0xC && (get_tinfo_property(v55, 2) & 0xF) != 0xB )
        goto LABEL_41;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      copy_tinfo_t((char *)&v59 + 8);
      v60 = 0;
      copy_tinfo_t(&v60);
      v61 = 0;
      v62 = 0;
      clear_tinfo_t(&v58);
      clear_tinfo_t(&v57);
      copy_tinfo_t(&v59);
      create_tinfo(&v55, 10, 10, &v59);
      clear_tinfo_t(&v60);
      clear_tinfo_t((char *)&v59 + 8);
      clear_tinfo_t(&v59);
    }
    v50 = 0;
LABEL_41:
    if ( !i )
    {
      v31 = *a9;
      *a9 = v55;
      v55 = v31;
      clear_tinfo_t(&v55);
      v26 = a1[11];
      if ( v26 )
        a1[11] = --v26;
      v51 = v52;
      goto LABEL_29;
    }
    if ( !(unsigned __int8)compare_tinfo(*a9, v55, 2) )
    {
      clear_tinfo_t(&v55);
      v44 = a1[11];
      if ( v44 )
        a1[11] = v44 - 1;
      goto LABEL_89;
    }
    clear_tinfo_t(&v55);
    v26 = a1[11];
    if ( v26 )
      a1[11] = --v26;
LABEL_29:
    if ( v15 != a5 || v26 != 0 || !v48 )
      goto LABEL_49;
  }
  clear_tinfo_t(&v55);
LABEL_46:
  v32 = a1[11];
  if ( v32 )
    a1[11] = v32 - 1;
  if ( i )
LABEL_89:
    a5 = i;
LABEL_49:
  if ( v51 )
  {
    if ( v50 )
    {
      v57 = 0;
      v58 = 0;
      v59 = 0;
      copy_tinfo_t((char *)&v59 + 8);
      v60 = 0;
      copy_tinfo_t(&v60);
      v61 = 0;
      v62 = 0;
      clear_tinfo_t(&v58);
      clear_tinfo_t(&v57);
      copy_tinfo_t(&v59);
      create_tinfo(a9, 10, 10, &v59);
      clear_tinfo_t(&v60);
      clear_tinfo_t((char *)&v59 + 8);
      clear_tinfo_t(&v59);
    }
  }
  else
  {
    get_stock_tinfo(a9, 30);
  }
  tinfo_size = (int)get_tinfo_size(0, *a9, 0);
  if ( tinfo_size == v15 )
    goto LABEL_11;
  if ( (get_tinfo_property(*a9, 2) & 0xF) != 0xA )
    return 0;
  v34 = *a9;
  v56 = 0;
  v56 = get_tinfo_property(v34, 9);
  v57 = 0;
  v58 = 0;
  v59 = 0;
  copy_tinfo_t((char *)&v59 + 8);
  v60 = 0;
  copy_tinfo_t(&v60);
  v61 = 0;
  v62 = 0;
  clear_tinfo_t(&v58);
  clear_tinfo_t(&v57);
  copy_tinfo_t(&v59);
  if ( v15 >= tinfo_size )
    create_tinfo(a9, 42, 10, &v59);
  else
    create_tinfo(a9, 26, 10, &v59);
  clear_tinfo_t(&v60);
  clear_tinfo_t((char *)&v59 + 8);
  clear_tinfo_t(&v59);
  if ( v15 == get_tinfo_size(0, *a9, 0) )
    goto LABEL_61;
  if ( ((v15 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
  {
    clear_tinfo_t(&v56);
    return 0;
  }
  v58 = 0;
  v57 = 0;
  v59 = 0;
  copy_tinfo_t((char *)&v59 + 8);
  v60 = 0;
  copy_tinfo_t(&v60);
  v61 = 0;
  v62 = 0;
  clear_tinfo_t(&v57);
  clear_tinfo_t(&v58);
  v35 = v56;
  v56 = v59;
  v36 = 64;
  *(_QWORD *)&v59 = v35;
  if ( v15 == 4 )
    v36 = 32;
  HIBYTE(v62) = v36;
  create_tinfo(a9, 10, 10, &v59);
  clear_tinfo_t(&v60);
  clear_tinfo_t((char *)&v59 + 8);
  clear_tinfo_t(&v59);
LABEL_61:
  clear_tinfo_t(&v56);
LABEL_11:
  if ( a5 != v15 )
  {
    if ( (unsigned int)(a5 / v15) < a5 / v15
      || (DWORD2(v59) = 0,
          HIDWORD(v59) = a5 / v15,
          *(_QWORD *)&v59 = 0,
          copy_tinfo_t(&v59),
          v20 = create_tinfo(a9, 11, 11, &v59),
          clear_tinfo_t(&v59),
          !v20) )
    {
      sub_368890();
    }
  }
  return 2;
}
