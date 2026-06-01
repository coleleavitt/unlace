__int64 __fastcall sub_5F72D0(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        double a6,
        double a7,
        __int64 a8,
        __int64 *a9)
{
  int v11; // r12d
  __int64 v13; // rax
  unsigned int data_elsize; // eax
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rsi
  _QWORD *v18; // r14
  int tinfo_property; // edx
  char v20; // bp
  unsigned int v22; // eax
  unsigned int i; // r12d
  char data_value; // al
  unsigned int *v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned int *v27; // rsi
  unsigned int *v28; // rcx
  unsigned __int64 v29; // rdx
  int flags; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int tinfo_size; // r12d
  __int64 v34; // rdi
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rdx
  unsigned __int8 scalar_bt; // al
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rbp
  unsigned __int8 v44; // dl
  __int64 v45; // rax
  __int64 idati; // rax
  __int64 v47; // [rsp+8h] [rbp-100h]
  int v48; // [rsp+14h] [rbp-F4h]
  char v49; // [rsp+1Bh] [rbp-EDh]
  char v51; // [rsp+28h] [rbp-E0h]
  int v52; // [rsp+68h] [rbp-A0h]
  int v53; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v54; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v55; // [rsp+7Ch] [rbp-8Ch] BYREF
  __int64 v56; // [rsp+80h] [rbp-88h] BYREF
  __int64 v57; // [rsp+88h] [rbp-80h] BYREF
  __int64 v58; // [rsp+90h] [rbp-78h] BYREF
  __int64 v59; // [rsp+98h] [rbp-70h] BYREF
  __int128 v60; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  int v62; // [rsp+B8h] [rbp-50h]
  __int16 v63; // [rsp+BCh] [rbp-4Ch]
  unsigned __int64 v64; // [rsp+C8h] [rbp-40h]

  v11 = a3;
  v13 = *(_QWORD *)(*a1 + 1480);
  v64 = __readfsqword(0x28u);
  v47 = v13;
  data_elsize = get_data_elsize(a2, a3, a4);
  if ( !data_elsize )
    return 0;
  v15 = data_elsize;
  v16 = v11 & 0xF00000;
  if ( v16 != 5242880 )
  {
    if ( (v11 & 0x600) != 0x400 )
    {
LABEL_4:
      if ( v16 != 0x800000 || !a4 )
        goto LABEL_98;
      v17 = *a4;
      v18 = *(_QWORD **)(*a1 + 1480);
      *(_QWORD *)&v60 = 0;
      get_type_by_tid(&v60, v17);
      tinfo_property = get_tinfo_property(v60, 304);
      if ( !tinfo_property )
        tinfo_property = (unsigned __int8)sub_614FB0(*v18, 61);
      v48 = tinfo_property;
      clear_tinfo_t(&v60);
      if ( v15 != v48 )
      {
LABEL_98:
        if ( !(unsigned __int8)sub_5EFCC0(v47, a9, v11, 0, 0, 0) )
        {
          *(_QWORD *)&v60 = 17;
          copy_tinfo_t(a9);
          v15 = 1;
          clear_tinfo_t(&v60);
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
        if ( a4 )
        {
          if ( (unsigned __int8)sub_5E9BB0(v47, (__int64)a9, *a4) )
            goto LABEL_11;
          return 0;
        }
        break;
      case 1342177280LL:
        v41 = *a1;
        v42 = *(_QWORD *)(v47 + 8);
        if ( v15 == sub_552670(*a1, v42, (int)"wchar_t", 1, nullptr, a6, a7) )
        {
          idati = *(_QWORD *)(v47 + 8);
          LOWORD(v61) = 0;
          *((_QWORD *)&v60 + 1) = "wchar_t";
          if ( !idati )
            idati = get_idati(v41, v42);
          *(_QWORD *)&v60 = idati;
          create_tinfo(a9, 61, 61, &v60);
        }
        else
        {
          *(_QWORD *)&v60 = (unsigned __int8)get_scalar_bt(v15);
          copy_tinfo_t(a9);
          clear_tinfo_t(&v60);
        }
        goto LABEL_11;
      case 3489660928LL:
        scalar_bt = get_scalar_bt(v15);
        if ( scalar_bt )
        {
          *(_QWORD *)&v60 = scalar_bt;
          copy_tinfo_t(a9);
          clear_tinfo_t(&v60);
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
  v22 = a4[3];
  if ( (v22 & 0x1000) != 0 && (v11 & 0x600) == 0x400 && (v11 & 0xC0000000) == 0 )
  {
    v43 = v15 - 1;
    v44 = 5;
    if ( (unsigned int)v43 <= 3 )
      v44 = byte_238D214[v43];
    if ( (v22 & 0x200) == 0 )
      v44 |= 0x20u;
    *(_QWORD *)&v60 = v44;
    copy_tinfo_t(a9);
    clear_tinfo_t(&v60);
    return 2;
  }
  v52 = 0;
  v49 = sub_5F1270(a1, a2);
  v51 = 1;
  for ( i = 0; ; i += v15 )
  {
    data_value = get_data_value(&v54, i + a2, v15);
    if ( !data_value )
      goto LABEL_48;
    v25 = (unsigned int *)a1[10];
    v26 = a1[11];
    v27 = &v25[v26];
    if ( v25 != v27 )
    {
      v28 = (unsigned int *)a1[10];
      while ( *v28 != a2 )
      {
        if ( v27 == ++v28 )
          goto LABEL_24;
      }
      data_value = v27 == v28;
    }
LABEL_24:
    if ( v26 > 0xF || !data_value )
      goto LABEL_26;
    v29 = v26 + 1;
    if ( a1[12] < v29 )
    {
      v39 = qvector_reserve(a1 + 10, a1[10], v29, 4);
      v40 = a1[11];
      a1[10] = v39;
      v27 = (unsigned int *)(v39 + 4 * v40);
    }
    *v27 = a2;
    ++a1[11];
    if ( !(unsigned __int8)calc_reference_data(&v55, 0, 0xFFFFFFFFLL, a4, v54) || v55 == a2 )
      goto LABEL_45;
    v56 = 0;
    v53 = guess_tinfo((int)&v56, v55);
    if ( !v53 )
      break;
    flags = get_flags_ex(v55, 4);
    if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
    {
      if ( (get_tinfo_property(v56, 2) & 0xF) == 0xB )
      {
        v57 = 0;
        v57 = get_tinfo_property(v56, 11);
        v58 = 0;
        v59 = 0;
        v60 = 0;
        copy_tinfo_t((char *)&v60 + 8);
        v61 = 0;
        copy_tinfo_t(&v61);
        v62 = 0;
        v63 = 0;
        clear_tinfo_t(&v59);
        clear_tinfo_t(&v58);
        copy_tinfo_t(&v60);
        create_tinfo(&v56, 10, 10, &v60);
        clear_tinfo_t(&v61);
        clear_tinfo_t((char *)&v60 + 8);
        clear_tinfo_t(&v60);
        clear_tinfo_t(&v57);
      }
    }
    else
    {
      if ( (get_tinfo_property(v56, 2) & 0xF) != 0xC && (get_tinfo_property(v56, 2) & 0xF) != 0xB )
        goto LABEL_40;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      copy_tinfo_t((char *)&v60 + 8);
      v61 = 0;
      copy_tinfo_t(&v61);
      v62 = 0;
      v63 = 0;
      clear_tinfo_t(&v59);
      clear_tinfo_t(&v58);
      copy_tinfo_t(&v60);
      create_tinfo(&v56, 10, 10, &v60);
      clear_tinfo_t(&v61);
      clear_tinfo_t((char *)&v60 + 8);
      clear_tinfo_t(&v60);
    }
    v51 = 0;
LABEL_40:
    if ( !i )
    {
      v31 = *a9;
      *a9 = v56;
      v56 = v31;
      clear_tinfo_t(&v56);
      v26 = a1[11];
      if ( v26 )
        a1[11] = --v26;
      v52 = v53;
      goto LABEL_26;
    }
    if ( !(unsigned __int8)compare_tinfo(*a9, v56, 2) )
    {
      clear_tinfo_t(&v56);
      v45 = a1[11];
      if ( v45 )
        a1[11] = v45 - 1;
      goto LABEL_88;
    }
    clear_tinfo_t(&v56);
    v26 = a1[11];
    if ( v26 )
      a1[11] = --v26;
LABEL_26:
    if ( v15 != a5 || v26 != 0 || !v49 )
      goto LABEL_48;
  }
  clear_tinfo_t(&v56);
LABEL_45:
  v32 = a1[11];
  if ( v32 )
    a1[11] = v32 - 1;
  if ( i )
LABEL_88:
    a5 = i;
LABEL_48:
  if ( v52 )
  {
    if ( v51 )
    {
      v58 = 0;
      v59 = 0;
      v60 = 0;
      copy_tinfo_t((char *)&v60 + 8);
      v61 = 0;
      copy_tinfo_t(&v61);
      v62 = 0;
      v63 = 0;
      clear_tinfo_t(&v59);
      clear_tinfo_t(&v58);
      copy_tinfo_t(&v60);
      create_tinfo(a9, 10, 10, &v60);
      clear_tinfo_t(&v61);
      clear_tinfo_t((char *)&v60 + 8);
      clear_tinfo_t(&v60);
    }
  }
  else
  {
    get_stock_tinfo(a9, 30);
  }
  tinfo_size = get_tinfo_size(0, *a9, 0);
  if ( tinfo_size == v15 )
    goto LABEL_11;
  if ( (get_tinfo_property(*a9, 2) & 0xF) != 0xA )
    return 0;
  v34 = *a9;
  v57 = 0;
  v57 = get_tinfo_property(v34, 9);
  v58 = 0;
  v59 = 0;
  v60 = 0;
  copy_tinfo_t((char *)&v60 + 8);
  v61 = 0;
  copy_tinfo_t(&v61);
  v62 = 0;
  v63 = 0;
  clear_tinfo_t(&v59);
  clear_tinfo_t(&v58);
  copy_tinfo_t(&v60);
  if ( v15 >= tinfo_size )
    create_tinfo(a9, 42, 10, &v60);
  else
    create_tinfo(a9, 26, 10, &v60);
  clear_tinfo_t(&v61);
  clear_tinfo_t((char *)&v60 + 8);
  clear_tinfo_t(&v60);
  if ( v15 == get_tinfo_size(0, *a9, 0) )
    goto LABEL_60;
  if ( ((v15 - 4) & 0xFFFFFFFB) != 0 )
  {
    clear_tinfo_t(&v57);
    return 0;
  }
  else
  {
    v59 = 0;
    v58 = 0;
    v60 = 0;
    copy_tinfo_t((char *)&v60 + 8);
    v61 = 0;
    copy_tinfo_t(&v61);
    v62 = 0;
    v63 = 0;
    clear_tinfo_t(&v58);
    clear_tinfo_t(&v59);
    v35 = v60;
    *(_QWORD *)&v60 = v57;
    v57 = v35;
    v36 = 64;
    if ( v15 == 4 )
      v36 = 32;
    HIBYTE(v63) = v36;
    create_tinfo(a9, 10, 10, &v60);
    clear_tinfo_t(&v61);
    clear_tinfo_t((char *)&v60 + 8);
    clear_tinfo_t(&v60);
LABEL_60:
    clear_tinfo_t(&v57);
LABEL_11:
    if ( a5 != v15 )
    {
      DWORD2(v60) = 0;
      *(_QWORD *)&v60 = 0;
      HIDWORD(v60) = a5 / v15;
      copy_tinfo_t(&v60);
      v20 = create_tinfo(a9, 11, 11, &v60);
      clear_tinfo_t(&v60);
      if ( !v20 )
        sub_365330();
    }
    return 2;
  }
}

