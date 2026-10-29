unsigned __int64 __fastcall sub_29760(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // r14
  unsigned int *v16; // r14
  const char *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rbp
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // r12
  const char *v23; // rcx
  const char *v24; // rcx
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  const char *v31; // rax
  const char *v32; // rax
  const char *v33; // rcx
  unsigned __int64 v34; // rdi
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rdi
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // [rsp+0h] [rbp-4B8h]
  __int64 v45; // [rsp+0h] [rbp-4B8h]
  __int64 v46; // [rsp+8h] [rbp-4B0h]
  __int64 v47; // [rsp+8h] [rbp-4B0h]
  __int64 v49; // [rsp+20h] [rbp-498h]
  unsigned __int64 v50; // [rsp+28h] [rbp-490h]
  const char *v51; // [rsp+30h] [rbp-488h] BYREF
  __int128 v52; // [rsp+38h] [rbp-480h]
  __int64 v53; // [rsp+50h] [rbp-468h] BYREF
  __int64 v54; // [rsp+58h] [rbp-460h]
  __int64 v55; // [rsp+60h] [rbp-458h]
  int v56; // [rsp+68h] [rbp-450h]
  _BYTE v57[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v58; // [rsp+478h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v3 = sub_3BCD0(a2, 0);
  if ( v3 == -1 )
    return v58 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 536);
  v5 = v3;
  v6 = -1;
  if ( v4 )
    v6 = sub_3BCD0(a2, v4);
  v50 = -1;
  v7 = *(_QWORD *)(a2 + 544);
  if ( v7 )
    v50 = sub_3BCD0(a2, v7);
  v8 = *(_QWORD *)(a2 + 528);
  v9 = *(_BYTE *)(a2 + 617);
  if ( v8 )
  {
    if ( v9 )
    {
      if ( v8 >= v5 && v8 < v5 + 64 || v8 >= v6 && v8 < v6 + 56 || v8 >= v50 && v8 < v50 + 64 )
        return v58 - __readfsqword(0x28u);
      v10 = *(_QWORD *)(a2 + 608) + v5;
      v11 = 64;
    }
    else
    {
      if ( v8 >= v5 && v8 < v5 + 52 || v8 >= v6 && v8 < v6 + 32 || v8 >= v50 && v8 < v50 + 40 )
        return v58 - __readfsqword(0x28u);
      v10 = *(_QWORD *)(a2 + 608) + v5;
      v11 = 52;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 608) + v5;
    v11 = (-(__int64)(v9 == 0) & 0xFFFFFFFFFFFFFFF4LL) + 64;
  }
  if ( v11 == sub_43FE0(a1, v10, v11) )
  {
    create_data(v10, 0x20000000, 4, -1);
    qsnprintf(v57, 1024, "File format: \\x7FELF");
    set_cmt(v10, v57, 0);
    set_op_type(v10, 0x11111101100000LL, 0);
    create_data(v10 + 4, 0, 1, -1);
    v29 = *(unsigned __int8 *)(a2 + 508);
    if ( (unsigned __int8)v29 > 3u )
      v29 = 3;
    qsnprintf(v57, 1024, "File class: %s", off_87040[v29]);
    set_cmt(v10 + 4, v57, 0);
    set_op_type(v10 + 4, 0x11111101100000LL, 0);
    create_data(v10 + 5, 0, 1, -1);
    v30 = *(unsigned __int8 *)(a2 + 509);
    if ( (unsigned __int8)v30 > 3u )
      v30 = 3;
    qsnprintf(v57, 1024, "Data encoding: %s", off_87020[v30]);
    set_cmt(v10 + 5, v57, 0);
    set_op_type(v10 + 5, 0x11111101100000LL, 0);
    create_data(v10 + 6, 0, 1, -1);
    qsnprintf(v57, 1024, "File version");
    set_cmt(v10 + 6, v57, 0);
    set_op_type(v10 + 6, 0x11111101100000LL, 0);
    create_data(v10 + 7, 0, 1, -1);
    v31 = (const char *)sub_3A5C0(a2);
    qsnprintf(v57, 1024, "OS/ABI: %s", v31);
    set_cmt(v10 + 7, v57, 0);
    set_op_type(v10 + 7, 0x11111101100000LL, 0);
    create_data(v10 + 8, 0, 1, -1);
    qsnprintf(v57, 1024, "ABI Version");
    set_cmt(v10 + 8, v57, 0);
    set_op_type(v10 + 8, 0x11111101100000LL, 0);
    create_data(v10 + 9, 0, 7, -1);
    qsnprintf(v57, 1024, "Padding");
    set_cmt(v10 + 9, v57, 0);
    set_op_type(v10 + 9, 0x11111101100000LL, 0);
    create_data(v10 + 16, 0x10000000, 2, -1);
    v32 = (const char *)sub_3A4B0(a2);
    qsnprintf(v57, 1024, "File type: %s", v32);
    set_cmt(v10 + 16, v57, 0);
    set_op_type(v10 + 16, 0x11111101100000LL, 0);
    create_data(v10 + 18, 0x10000000, 2, -1);
    sub_45EE0(&v53, a2);
    v33 = &s1;
    if ( v54 )
      v33 = (const char *)v53;
    qsnprintf(v57, 1024, "Machine: %s", v33);
    if ( v53 )
    {
      v54 = 0;
      qfree(v53);
    }
    set_cmt(v10 + 18, v57, 0);
    set_op_type(v10 + 18, 0x11111101100000LL, 0);
    create_data(v10 + 20, 0x20000000, 4, -1);
    qsnprintf(v57, 1024, "File version");
    set_cmt(v10 + 20, v57, 0);
    set_op_type(v10 + 20, 0x11111101100000LL, 0);
    if ( *(_BYTE *)(a2 + 617) )
    {
      create_data(v10 + 24, 805306368, 8, -1);
      qsnprintf(v57, 1024, "Entry point");
      if ( v57[0] )
        set_cmt(v10 + 24, v57, 0);
      if ( *(_QWORD *)(a2 + 528) )
      {
        v43 = *(_QWORD *)(a2 + 608);
        v56 = 137;
        v53 = -1;
        v55 = 0;
        v54 = v43;
        op_offset_ex(v10 + 24, 0, &v53);
      }
      create_data(v10 + 32, 805306368, 8, -1);
      qsnprintf(v57, 1024, "PHT file offset");
      set_cmt(v10 + 32, v57, 0);
      v34 = v10 + 32;
      v35 = v10 + 40;
      v36 = v10 + 48;
      set_op_type(v34, 0x11111101100000LL, 0);
      create_data(v35, 805306368, 8, -1);
      qsnprintf(v57, 1024, "SHT file offset");
      set_cmt(v35, v57, 0);
      set_op_type(v35, 0x11111101100000LL, 0);
    }
    else
    {
      create_data(v10 + 24, 0x20000000, 4, -1);
      qsnprintf(v57, 1024, "Entry point");
      if ( v57[0] )
        set_cmt(v10 + 24, v57, 0);
      if ( *(_QWORD *)(a2 + 528) )
      {
        v42 = *(_QWORD *)(a2 + 608);
        v56 = 130;
        v53 = -1;
        v55 = 0;
        v54 = v42;
        op_offset_ex(v10 + 24, 0, &v53);
      }
      create_data(v10 + 28, 0x20000000, 4, -1);
      qsnprintf(v57, 1024, "PHT file offset");
      set_cmt(v10 + 28, v57, 0);
      v40 = v10 + 28;
      v41 = v10 + 32;
      v36 = v10 + 36;
      set_op_type(v40, 0x11111101100000LL, 0);
      create_data(v41, 0x20000000, 4, -1);
      qsnprintf(v57, 1024, "SHT file offset");
      set_cmt(v41, v57, 0);
      set_op_type(v41, 0x11111101100000LL, 0);
    }
    create_data(v36, 0x20000000, 4, -1);
    qsnprintf(v57, 1024, "Processor-specific flags");
    set_cmt(v36, v57, 0);
    set_op_type(v36, 0x11111101100000LL, 0);
    create_data(v36 + 4, 0x10000000, 2, -1);
    qsnprintf(v57, 1024, "ELF header size");
    set_cmt(v36 + 4, v57, 0);
    set_op_type(v36 + 4, 0x11111101100000LL, 0);
    create_data(v36 + 6, 0x10000000, 2, -1);
    qsnprintf(v57, 1024, "PHT entry size");
    set_cmt(v36 + 6, v57, 0);
    set_op_type(v36 + 6, 0x11111101100000LL, 0);
    create_data(v36 + 8, 0x10000000, 2, -1);
    qsnprintf(v57, 1024, "Number of entries in PHT");
    set_cmt(v36 + 8, v57, 0);
    set_op_type(v36 + 8, 0x11111101100000LL, 0);
    create_data(v36 + 10, 0x10000000, 2, -1);
    qsnprintf(v57, 1024, "SHT entry size");
    set_cmt(v36 + 10, v57, 0);
    set_op_type(v36 + 10, 0x11111101100000LL, 0);
    v37 = v36 + 12;
    v38 = v36 + 12;
    v39 = v36 + 14;
    create_data(v38, 0x10000000, 2, -1);
    qsnprintf(v57, 1024, "Number of entries in SHT");
    set_cmt(v37, v57, 0);
    set_op_type(v37, 0x11111101100000LL, 0);
    create_data(v39, 0x10000000, 2, -1);
    qsnprintf(v57, 1024, "SHT entry index for string table");
    set_cmt(v39, v57, 0);
    set_op_type(v39, 0x11111101100000LL, 0);
  }
  if ( v6 != -1 )
  {
    v49 = 32;
    v12 = *(_QWORD *)(a2 + 608) + v6;
    if ( *(_BYTE *)(a2 + 617) )
      v49 = 56;
    if ( *(_QWORD *)(a2 + 40) && v49 == sub_43FE0(a1, v12, v49) )
    {
      if ( *(_BYTE *)(a2 + 617) )
        sub_E890(v12, 1u, (__int64)"ELF64 Program Header");
      else
        sub_E890(v12, 1u, (__int64)"ELF32 Program Header");
      v13 = 0;
      do
      {
        if ( !*(_BYTE *)(a2 + 72) )
        {
          if ( !under_debugger )
            interr(20100);
          BUG();
        }
        v16 = (unsigned int *)(*(_QWORD *)(a2 + 32) + 56LL * (unsigned int)v13);
        sub_E890(v12, 1u, (__int64)"PHT Entry %zu", v13);
        create_data(v12, 0x20000000, 4, -1);
        sub_47D00(&v53, a2, *v16);
        v17 = &s1;
        if ( v54 )
          v17 = (const char *)v53;
        qsnprintf(v57, 1024, "Type: %s", v17);
        if ( v53 )
        {
          v54 = 0;
          qfree(v53);
        }
        set_cmt(v12, v57, 0);
        set_op_type(v12, 0x11111101100000LL, 0);
        v18 = v12 + 4;
        v44 = v12 + 16;
        v46 = v12 + 8;
        if ( *(_BYTE *)(a2 + 617) )
        {
          create_data(v18, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Flags");
          set_cmt(v12 + 4, v57, 0);
          set_op_type(v12 + 4, 0x11111101100000LL, 0);
          create_data(v46, 805306368, 8, -1);
          qsnprintf(v57, 1024, "File offset");
          set_cmt(v46, v57, 0);
          set_op_type(v46, 0x11111101100000LL, 0);
          create_data(v44, 805306368, 8, -1);
          qsnprintf(v57, 1024, "Virtual address");
          if ( v57[0] )
            set_cmt(v44, v57, 0);
          if ( *((_QWORD *)v16 + 2) )
          {
            v27 = *(_QWORD *)(a2 + 608);
            v56 = 137;
            v53 = -1;
            v55 = 0;
            v54 = v27;
            op_offset_ex(v44, 0, &v53);
          }
          ++v13;
          create_data(v12 + 24, 805306368, 8, -1);
          qsnprintf(v57, 1024, "Physical address");
          set_cmt(v12 + 24, v57, 0);
          set_op_type(v12 + 24, 0x11111101100000LL, 0);
          create_data(v12 + 32, 805306368, 8, -1);
          qsnprintf(v57, 1024, "Size in file image");
          set_cmt(v12 + 32, v57, 0);
          set_op_type(v12 + 32, 0x11111101100000LL, 0);
          create_data(v12 + 40, 805306368, 8, -1);
          qsnprintf(v57, 1024, "Size in memory image");
          set_cmt(v12 + 40, v57, 0);
          v14 = v12 + 40;
          v15 = v12 + 48;
          v12 += 56;
          set_op_type(v14, 0x11111101100000LL, 0);
          create_data(v15, 805306368, 8, -1);
          qsnprintf(v57, 1024, "Alignment");
          set_cmt(v15, v57, 0);
          set_op_type(v15, 0x11111101100000LL, 0);
          if ( v13 >= *(_QWORD *)(a2 + 40) )
            break;
        }
        else
        {
          create_data(v18, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "File offset");
          set_cmt(v12 + 4, v57, 0);
          set_op_type(v12 + 4, 0x11111101100000LL, 0);
          create_data(v46, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Virtual address");
          if ( v57[0] )
            set_cmt(v46, v57, 0);
          if ( *((_QWORD *)v16 + 2) )
          {
            v28 = *(_QWORD *)(a2 + 608);
            v56 = 130;
            v53 = -1;
            v55 = 0;
            v54 = v28;
            op_offset_ex(v46, 0, &v53);
          }
          create_data(v12 + 12, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Physical address");
          set_cmt(v12 + 12, v57, 0);
          set_op_type(v12 + 12, 0x11111101100000LL, 0);
          create_data(v44, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Size in file image");
          set_cmt(v44, v57, 0);
          set_op_type(v44, 0x11111101100000LL, 0);
          create_data(v12 + 20, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Size in memory image");
          set_cmt(v12 + 20, v57, 0);
          set_op_type(v12 + 20, 0x11111101100000LL, 0);
          create_data(v12 + 24, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Flags");
          set_cmt(v12 + 24, v57, 0);
          set_op_type(v12 + 24, 0x11111101100000LL, 0);
          create_data(v12 + 28, 0x20000000, 4, -1);
          qsnprintf(v57, 1024, "Alignment");
          set_cmt(v12 + 28, v57, 0);
          set_op_type(v12 + 28, 0x11111101100000LL, 0);
          v12 += 32;
          if ( ++v13 >= *(_QWORD *)(a2 + 40) )
            break;
        }
      }
      while ( v49 == sub_43FE0(a1, v12, v49) );
    }
  }
  if ( v50 != -1 )
  {
    v47 = 40;
    v19 = *(_QWORD *)(a2 + 608) + v50;
    if ( *(_BYTE *)(a2 + 617) )
      v47 = 64;
    if ( *(_WORD *)(a2 + 564) )
    {
      v20 = 0;
      do
      {
        if ( v47 != sub_43FE0(a1, v19, v47) )
          break;
        if ( !v20 )
        {
          if ( *(_BYTE *)(a2 + 617) )
            sub_E890(v19, 1u, (__int64)"ELF64 Section Header");
          else
            sub_E890(v19, 1u, (__int64)"ELF32 Section Header");
        }
        v22 = sub_3BD50(a2 + 80, (unsigned int)v20);
        if ( v22 )
        {
          sub_E890(v19, 1u, (__int64)"SHT Entry %d", v20);
          v52 = 0;
          v51 = nullptr;
          sub_46300(a2 + 80, &v51, v22);
          create_data(v19, 0x20000000, 4, -1);
          v23 = &s1;
          if ( (_QWORD)v52 )
            v23 = v51;
          qsnprintf(v57, 1024, "Name: %s", v23);
          set_cmt(v19, v57, 0);
          set_op_type(v19, 0x11111101100000LL, 0);
          v45 = v19 + 4;
          create_data(v19 + 4, 0x20000000, 4, -1);
          sub_46890(&v53, a2 + 80, *(unsigned int *)(v22 + 4));
          v24 = &s1;
          if ( v54 )
            v24 = (const char *)v53;
          qsnprintf(v57, 1024, "Type: %s", v24);
          if ( v53 )
          {
            v54 = 0;
            qfree(v53);
          }
          set_cmt(v45, v57, 0);
          set_op_type(v45, 0x11111101100000LL, 0);
          if ( *(_BYTE *)(a2 + 617) )
          {
            create_data(v19 + 8, 805306368, 8, -1);
            qsnprintf(v57, 1024, "Flags");
            set_cmt(v19 + 8, v57, 0);
            set_op_type(v19 + 8, 0x11111101100000LL, 0);
            create_data(v19 + 16, 805306368, 8, -1);
            qsnprintf(v57, 1024, "Virtual address");
            if ( v57[0] )
              set_cmt(v19 + 16, v57, 0);
            if ( *(_QWORD *)(v22 + 16) )
            {
              v21 = *(_QWORD *)(a2 + 608);
              v56 = 137;
              v53 = -1;
              v55 = 0;
              v54 = v21;
              op_offset_ex(v19 + 16, 0, &v53);
            }
            create_data(v19 + 24, 805306368, 8, -1);
            qsnprintf(v57, 1024, "File offset");
            set_cmt(v19 + 24, v57, 0);
            set_op_type(v19 + 24, 0x11111101100000LL, 0);
            create_data(v19 + 32, 805306368, 8, -1);
            qsnprintf(v57, 1024, "Size");
            set_cmt(v19 + 32, v57, 0);
            set_op_type(v19 + 32, 0x11111101100000LL, 0);
            create_data(v19 + 40, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Link");
            set_cmt(v19 + 40, v57, 0);
            set_op_type(v19 + 40, 0x11111101100000LL, 0);
            create_data(v19 + 44, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Info");
            set_cmt(v19 + 44, v57, 0);
            set_op_type(v19 + 44, 0x11111101100000LL, 0);
            create_data(v19 + 48, 805306368, 8, -1);
            qsnprintf(v57, 1024, "Alignment");
            set_cmt(v19 + 48, v57, 0);
            set_op_type(v19 + 48, 0x11111101100000LL, 0);
            create_data(v19 + 56, 805306368, 8, -1);
            qsnprintf(v57, 1024, "Entry size");
            set_cmt(v19 + 56, v57, 0);
            set_op_type(v19 + 56, 0x11111101100000LL, 0);
            v19 += 64;
          }
          else
          {
            create_data(v19 + 8, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Flags");
            set_cmt(v19 + 8, v57, 0);
            set_op_type(v19 + 8, 0x11111101100000LL, 0);
            create_data(v19 + 12, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Virtual address");
            if ( v57[0] )
              set_cmt(v19 + 12, v57, 0);
            if ( *(_QWORD *)(v22 + 16) )
            {
              v25 = *(_QWORD *)(a2 + 608);
              v56 = 130;
              v53 = -1;
              v55 = 0;
              v54 = v25;
              op_offset_ex(v19 + 12, 0, &v53);
            }
            create_data(v19 + 16, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "File offset");
            set_cmt(v19 + 16, v57, 0);
            set_op_type(v19 + 16, 0x11111101100000LL, 0);
            create_data(v19 + 20, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Size");
            set_cmt(v19 + 20, v57, 0);
            set_op_type(v19 + 20, 0x11111101100000LL, 0);
            create_data(v19 + 24, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Link");
            set_cmt(v19 + 24, v57, 0);
            set_op_type(v19 + 24, 0x11111101100000LL, 0);
            create_data(v19 + 28, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Info");
            set_cmt(v19 + 28, v57, 0);
            set_op_type(v19 + 28, 0x11111101100000LL, 0);
            create_data(v19 + 32, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Alignment");
            set_cmt(v19 + 32, v57, 0);
            set_op_type(v19 + 32, 0x11111101100000LL, 0);
            create_data(v19 + 36, 0x20000000, 4, -1);
            qsnprintf(v57, 1024, "Entry size");
            set_cmt(v19 + 36, v57, 0);
            set_op_type(v19 + 36, 0x11111101100000LL, 0);
            v19 += 40;
          }
          if ( v51 )
          {
            *(_QWORD *)&v52 = 0;
            qfree(v51);
          }
        }
        else
        {
          v19 += *(unsigned __int16 *)(a2 + 562);
        }
        ++v20;
      }
      while ( *(unsigned __int16 *)(a2 + 564) > v20 );
    }
  }
  return v58 - __readfsqword(0x28u);
}

