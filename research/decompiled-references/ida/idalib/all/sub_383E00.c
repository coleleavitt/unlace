__int64 __fastcall sub_383E00(__int64 a1, int *a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  const char *v7; // rsi
  int v8; // eax
  unsigned int v9; // r12d
  _QWORD *v10; // rdx
  int v11; // r15d
  __int64 v12; // rax
  _QWORD *v13; // rdi
  bool v15; // r14
  __int64 hidden_range; // r13
  __int64 fchunk; // rax
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 item_end; // r14
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, char); // rax
  const char *v24; // rcx
  int v25; // edx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  char *v28; // rax
  __int64 not_tail; // rax
  int flags; // eax
  __int64 (__fastcall *v31)(__int64, char); // rax
  const char *v32; // r14
  __int64 (__fastcall *v33)(_QWORD *, const char *, unsigned __int8); // rax
  const char *v34; // r15
  __int64 (__fastcall *v35)(_QWORD *, const char *, unsigned __int8); // rax
  __int64 v36; // rsi
  const char **v37; // r14
  const char **v38; // r13
  const char *v39; // rcx
  int v40; // r8d
  int v41; // r9d
  char v42; // r14
  _BYTE *v43; // r13
  int v44; // r8d
  int v45; // r9d
  unsigned int v46; // r13d
  unsigned __int8 v47; // al
  char *v48; // rdx
  __int64 v49; // r14
  __int64 v50; // r13
  char *v51; // rax
  void *v52; // rdi
  const char *v53; // r15
  __int64 (__fastcall *v54)(_QWORD *, const char *, unsigned __int8); // rax
  const char *v55; // r14
  __int64 (__fastcall *v56)(_QWORD *, const char *, unsigned __int8); // rax
  __int64 v57; // rax
  __int64 v58; // rax
  const char *v59; // r9
  __int64 v60; // rax
  __int64 v61; // r14
  __int64 v62; // rsi
  void *v63; // rdi
  const char *v64; // rax
  __int64 v65; // rsi
  _BYTE *v66; // r14
  __int64 v67; // rax
  _BYTE *v68; // r14
  _BYTE *v69; // r13
  int v70; // ecx
  __int64 v71; // rax
  const char *v72; // r8
  const char *v73; // rcx
  __int64 v74; // rax
  __int64 compiler_name; // [rsp+28h] [rbp-288h]
  char v76; // [rsp+35h] [rbp-27Bh]
  char v77; // [rsp+36h] [rbp-27Ah]
  bool v78; // [rsp+37h] [rbp-279h]
  unsigned __int8 v80; // [rsp+40h] [rbp-270h]
  char v81; // [rsp+40h] [rbp-270h]
  unsigned __int64 v83; // [rsp+48h] [rbp-268h]
  void *v84; // [rsp+50h] [rbp-260h] BYREF
  __int128 v85; // [rsp+58h] [rbp-258h]
  void *ptr; // [rsp+70h] [rbp-240h] BYREF
  __int128 v87; // [rsp+78h] [rbp-238h]
  __int128 v88; // [rsp+90h] [rbp-220h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-210h]
  __int64 v90; // [rsp+A8h] [rbp-208h]
  __int64 v91; // [rsp+B0h] [rbp-200h]
  char v92; // [rsp+B8h] [rbp-1F8h] BYREF
  char v93[8]; // [rsp+1F8h] [rbp-B8h] BYREF
  _BYTE v94[16]; // [rsp+200h] [rbp-B0h] BYREF
  _BYTE v95[32]; // [rsp+210h] [rbp-A0h] BYREF
  _BYTE v96[33]; // [rsp+230h] [rbp-80h] BYREF
  char v97; // [rsp+251h] [rbp-5Fh] BYREF
  char v98; // [rsp+271h] [rbp-3Fh] BYREF
  unsigned __int64 v99; // [rsp+278h] [rbp-38h]

  v99 = __readfsqword(0x28u);
  v85 = 0;
  v84 = nullptr;
  v4 = qword_2CCB598;
  v83 = *(_QWORD *)(a1 + 16);
  v5 = getseg(v83);
  v80 = 0;
  v6 = v5;
  if ( v5 )
    v80 = *(_BYTE *)(v5 + 184);
  v78 = (*(_BYTE *)(a1 + 146) & 0x40) == 0 && (getinf(45) & 0x20) == 0 && (get_aflags(v83) & 0x10) != 0;
  *(_QWORD *)(*(_QWORD *)(v4 + 1672) + 2848LL) = 0;
  *(_BYTE *)(*(_QWORD *)(v4 + 1672) + 2864LL) = 1;
  if ( (a3 & 2) != 0 )
    *(_DWORD *)(a1 + 144) |= 0x100000u;
  if ( (a3 & 8) != 0 )
    *(_DWORD *)(a1 + 144) |= 0x400000u;
  v7 = (const char *)v83;
  sub_382A40((_QWORD *)a1, v83, 0);
  v77 = is_mapped(v83);
  if ( !v77 )
    goto LABEL_10;
  if ( v83 == getinf(19) )
  {
    v36 = *(_QWORD *)(a1 + 632);
    ptr = nullptr;
    v87 = 0;
    v76 = sub_390A20(&ptr, v36, *(_QWORD *)(v36 + 48));
    if ( !v76 )
    {
      v74 = *(_QWORD *)(v4 + 1672);
      v9 = -1;
      *(_BYTE *)(v74 + 2864) = 0;
      sub_37D470((char **)&ptr);
      goto LABEL_20;
    }
    v37 = (const char **)ptr;
    v38 = (const char **)((char *)ptr + 24 * v87);
    if ( ptr != v38 )
    {
      do
      {
        v39 = haystack;
        if ( v37[1] )
          v39 = *v37;
        sub_35CEC0(a1, 0, (__int64)&unk_22D210A, v39);
        v37 += 3;
      }
      while ( v38 != v37 );
    }
    v42 = 0;
    if ( sub_630CA0(v4, 80, v95, 32) == 32 )
    {
      v68 = v95;
      v69 = v96;
      do
      {
        v70 = (unsigned __int8)*v68++;
        v69 += (int)qsnprintf((_DWORD)v69, (unsigned int)&v98 - (unsigned int)v69, (unsigned int)"%02X", v70, v40, v41);
      }
      while ( v68 != v96 );
      v71 = closing_comment();
      sub_35CEC0(a1, 0, (__int64)&unk_22D2111, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), v96, v71);
      v42 = v76;
    }
    v43 = v94;
    if ( sub_630CA0(v4, 76, v94, 16) == 16 )
    {
      v66 = v96;
      do
        v66 += (int)qsnprintf(
                      (_DWORD)v66,
                      (unsigned int)&v97 - (unsigned int)v66,
                      (unsigned int)"%02X",
                      (unsigned __int8)*v43++,
                      v44,
                      v45);
      while ( v43 != v95 );
      v67 = closing_comment();
      sub_35CEC0(a1, 0, (__int64)&unk_22D212C, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), v96, v67);
      v42 = v76;
    }
    v7 = (_BYTE *)(&qword_58 + 4);
    v46 = sub_631AD0(v4, 92);
    if ( v46 )
    {
      v57 = closing_comment();
      v7 = nullptr;
      sub_35CEC0(a1, 0, (__int64)&unk_22D2147, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), v46, v57);
      LOBYTE(v46) = getinf(57);
      v47 = v46 & 0x7F;
      if ( (v46 & 0x7F) == 0 )
      {
LABEL_125:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
LABEL_126:
        v48 = (char *)ptr;
        if ( ptr )
        {
          v49 = v87;
          if ( (_QWORD)v87 )
          {
            v50 = 0;
            do
            {
              v51 = &v48[24 * v50];
              v52 = *(void **)v51;
              if ( *(_QWORD *)v51 )
              {
                *((_QWORD *)v51 + 1) = 0;
                qfree(v52);
                v48 = (char *)ptr;
              }
              ++v50;
            }
            while ( v49 != v50 );
          }
          *(_QWORD *)&v87 = 0;
          qfree(v48);
        }
        goto LABEL_24;
      }
      v42 = v76;
    }
    else
    {
      v46 = (unsigned __int8)getinf(57);
      v47 = v46 & 0x7F;
      if ( (v46 & 0x7F) == 0 )
        goto LABEL_124;
    }
    compiler_name = get_compiler_name(v47);
    v58 = closing_comment();
    v59 = &byte_22F0C30;
    if ( (v46 & 0x80u) != 0 )
      v59 = " (guessed)";
    v7 = nullptr;
    sub_35CEC0(a1, 0, (__int64)&unk_22D2164, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 48LL), compiler_name, v59, v58);
LABEL_124:
    if ( !v42 )
      goto LABEL_126;
    goto LABEL_125;
  }
LABEL_24:
  if ( (*(_BYTE *)(a1 + 146) & 0x40) != 0 )
  {
    hidden_range = 0;
    v15 = 0;
  }
  else
  {
    v15 = v6 && (getinf(45) & 0x80u) == 0LL && (*(_BYTE *)(v6 + 44) & 4) != 0;
    hidden_range = get_hidden_range(v83);
  }
  if ( (~*(_WORD *)(a1 + 720) & 0x600) != 0
    || (*(_QWORD *)(a1 + 720) & 0x10010000) != 0
    || (not_tail = prev_not_tail(v83), v7 = &byte_4, flags = get_flags_ex(not_tail, 4), (flags & 0x600) == 0x400)
    && (flags & 0xF0000000) == 0xB0000000LL )
  {
    if ( v15 || v78 )
      goto LABEL_35;
  }
  else
  {
    if ( v15 || v78 )
    {
LABEL_35:
      if ( v83 != getinf(19) )
        goto LABEL_36;
      goto LABEL_65;
    }
    if ( (get_aflags(v83) & 0x40) == 0
      && !(unsigned __int8)is_spec_segm(v80)
      && (!hidden_range || *(_BYTE *)(hidden_range + 40)) )
    {
      v31 = *(__int64 (__fastcall **)(__int64, char))(*(_QWORD *)a1 + 168LL);
      if ( v31 == sub_381BE0 )
      {
        if ( (getinf(46) & 1) != 0 )
        {
          sub_381B20(a1, nullptr);
          sub_3804E0(
            a1,
            (__int64)&unk_22D5D2E,
            "---------------------------------------------------------------------------");
        }
      }
      else
      {
        v31(a1, 0);
      }
    }
  }
  v7 = &byte_4;
  if ( (unsigned __int8)getinf_flag(45, 4) )
  {
    v7 = (const char *)v83;
    if ( getinf(19) != v83 )
      goto LABEL_36;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 721) & 0x20) == 0 )
      goto LABEL_35;
    v7 = (_BYTE *)(elf_gnu_hash_indexes + 320);
    if ( v83 != getinf(19) )
    {
      sub_63D0C0(a1, 1000);
      goto LABEL_36;
    }
    sub_63D0C0(a1, 1000);
  }
LABEL_65:
  (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, &byte_22F0C30, 0);
  sub_3792E0(0xCu, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 632) + 376LL) && sub_631490(v4, &v84, 73) > 0 )
  {
    (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, &byte_22F0C30, 0);
    v24 = haystack;
    if ( (_QWORD)v85 )
      v24 = (const char *)v84;
    sub_35CEC0(a1, 0xFFFFFFFFLL, *(_QWORD *)(*(_QWORD *)(a1 + 632) + 376LL), v24);
  }
  v7 = &byte_22F0C30;
  (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, &byte_22F0C30, 0);
LABEL_36:
  if ( v6 && *(_QWORD *)v6 == v83 )
  {
    if ( (getinf(46) & 2) != 0 )
      sub_3804E0(
        a1,
        (__int64)&unk_22D5D2E,
        "===========================================================================");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
    if ( v15 )
    {
      ptr = nullptr;
      v87 = 0;
      get_segm_name(&ptr, v6, 1);
      v72 = haystack;
      if ( (_QWORD)v87 )
        v72 = (const char *)ptr;
      v73 = nullptr;
      if ( v80 != 7 )
        v73 = (const char *)(*(_QWORD *)(v6 + 8) - *(_QWORD *)v6);
      sub_3805A0(a1, (__int64)"[%0*a BYTES: COLLAPSED SEGMENT %s%s]", 8, 0.0, v73, v72);
      v63 = ptr;
      if ( !ptr )
        goto LABEL_10;
      goto LABEL_189;
    }
    if ( (*(_BYTE *)(v6 + 44) & 0x20) == 0 )
    {
      v64 = (const char *)strarray(&unk_2B25A20, 12, (unsigned int)(char)v80);
      sub_3804E0(a1, (__int64)"Segment type: %s", v64);
    }
    sub_3792E0(0xEu, a1, v6);
    v7 = (const char *)v6;
    if ( get_segment_cmt(&v84, v6, 0) > 0 )
    {
      v55 = haystack;
      v56 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*(_QWORD *)a1 + 184LL);
      if ( (_QWORD)v85 )
        v55 = (const char *)v84;
      if ( v56 == sub_380AF0 )
      {
        v7 = &byte_4;
        if ( !(unsigned __int8)getinf_flag(45, 4) )
        {
          v7 = nullptr;
          sub_380730((_QWORD *)a1, 0, *(const char **)(qword_2CCB598 + 1120), v55, 2u);
        }
      }
      else
      {
        v7 = v55;
        v56((_QWORD *)a1, v55, 2u);
      }
    }
  }
  if ( hidden_range )
  {
    if ( !*(_BYTE *)(hidden_range + 40) )
    {
      v34 = *(const char **)(hidden_range + 16);
      v35 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*(_QWORD *)a1 + 184LL);
      if ( v35 == sub_380AF0 )
      {
        if ( !(unsigned __int8)getinf_flag(45, 4) )
          sub_380730((_QWORD *)a1, 0, *(const char **)(qword_2CCB598 + 1120), v34, 0x27u);
      }
      else
      {
        v35((_QWORD *)a1, *(const char **)(hidden_range + 16), 39u);
      }
      goto LABEL_10;
    }
    if ( *(_QWORD *)hidden_range == v83 )
    {
      v32 = *(const char **)(hidden_range + 24);
      if ( !v32 )
      {
        sub_35A790((char **)&v84);
        v32 = haystack;
        if ( (_QWORD)v85 )
          v32 = (const char *)v84;
      }
      v33 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*(_QWORD *)a1 + 184LL);
      if ( v33 == sub_380AF0 )
      {
        v7 = &byte_4;
        if ( !(unsigned __int8)getinf_flag(45, 4) )
        {
          v7 = nullptr;
          sub_380730((_QWORD *)a1, 0, *(const char **)(qword_2CCB598 + 1120), v32, 4u);
        }
      }
      else
      {
        v7 = v32;
        v33((_QWORD *)a1, v32, 4u);
      }
    }
  }
  fchunk = get_fchunk(v83);
  v18 = fchunk;
  if ( fchunk && *(char *)(fchunk + 17) < 0 )
  {
    if ( (*(_BYTE *)(a1 + 146) & 0x40) == 0 && (getinf(45) & 0x40) == 0 && (*(_BYTE *)(v18 + 16) & 0x40) != 0 )
    {
      v65 = *(_QWORD *)(v18 + 24);
      v87 = 0;
      ptr = nullptr;
      get_ea_name(&ptr, v65, 21, 0);
      sub_3805A0(
        a1,
        (__int64)"[%0*a BYTES: COLLAPSED CHUNK OF FUNCTION %s%s]",
        8,
        0.0,
        (const char *)(*(_QWORD *)(v18 + 8) - *(_QWORD *)v18),
        (const char *)ptr);
      v63 = ptr;
      if ( ptr )
        goto LABEL_189;
      goto LABEL_10;
    }
    if ( *(_QWORD *)v18 == v83 )
    {
      v7 = (const char *)v18;
      sub_382600(a1, v18);
    }
  }
  if ( (getinf(44) & 0x200) != 0 && !(unsigned __int8)is_spec_segm(v80) && (v80 & 0xFB) != 3 )
  {
    v7 = (const char *)a1;
    sub_3792E0(0x10u, a1);
  }
  if ( (*(_BYTE *)(a1 + 146) & 0x40) != 0
    || (~*(_WORD *)(a1 + 720) & 0x600) != 0
    || (v60 = get_fchunk(v83), (v61 = v60) == 0)
    || *(char *)(v60 + 17) < 0
    || (getinf(45) & 0x40) != 0
    || (*(_BYTE *)(v61 + 16) & 0x40) == 0 )
  {
    if ( v78 )
    {
      item_end = get_item_end(v83, v7, v19, v20);
    }
    else
    {
      if ( (unsigned __int8)getinf_flag(45, 8) )
        sub_381ED0(a1);
      v25 = *(_DWORD *)(a1 + 144);
      *(_BYTE *)(a1 + 208) = 0;
      *(_DWORD *)(a1 + 144) = v25 & 0xFFF3FFFF | (8 * (a3 & 1));
      item_end = sub_382090(a1, v80);
      v81 = is_spec_segm(v80);
      if ( !v81 )
      {
        if ( (~*(_WORD *)(a1 + 720) & 0x600) != 0 )
        {
LABEL_49:
          v22 = get_fchunk(v83);
          if ( v22 && *(char *)(v22 + 17) < 0 && *(_QWORD *)(v22 + 8) == item_end )
            sub_382780(a1, v22);
          if ( v6 && *(_QWORD *)(v6 + 8) == item_end )
          {
            if ( !sub_3792E0(0xFu, a1, v6) )
              std_out_segm_footer(a1, v6);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 160LL))(a1);
            v81 = 0;
          }
          if ( item_end == getinf(20) )
            sub_3792E0(0xDu, a1);
          if ( !v78 && !(unsigned __int8)getinf_flag(45, 4) && (*(_BYTE *)(a1 + 721) & 0x20) != 0 )
            sub_63D0C0(a1, 2000);
          if ( hidden_range && *(_QWORD *)(hidden_range + 8) == item_end )
          {
            v53 = *(const char **)(hidden_range + 32);
            if ( !v53 )
            {
              sub_35A790((char **)&v84);
              v53 = haystack;
              if ( (_QWORD)v85 )
                v53 = (const char *)v84;
            }
            v54 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*(_QWORD *)a1 + 184LL);
            if ( v54 == sub_380AF0 )
            {
              if ( !(unsigned __int8)getinf_flag(45, 4) )
                sub_380730((_QWORD *)a1, 0, *(const char **)(qword_2CCB598 + 1120), v53, 4u);
            }
            else
            {
              v54((_QWORD *)a1, v53, 4u);
            }
          }
          if ( v81 )
          {
            v23 = *(__int64 (__fastcall **)(__int64, char))(*(_QWORD *)a1 + 168LL);
            if ( v23 == sub_381BE0 )
            {
              if ( (getinf(46) & 1) != 0 )
              {
                sub_381B20(a1, nullptr);
                sub_3804E0(
                  a1,
                  (__int64)&unk_22D5D2E,
                  "---------------------------------------------------------------------------");
              }
            }
            else
            {
              v23(a1, 0);
            }
          }
          goto LABEL_10;
        }
        v26 = 0x100000000LL;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 1672) + 24LL) + 24LL) == 8 )
          v26 = -1;
        if ( (item_end >= v26 || (~((unsigned __int16)get_flags_ex(item_end, 4) >> 8) & 6) != 0)
          && (get_aflags(v83) & 0x40) == 0 )
        {
          v81 = v77;
          if ( (unsigned __int8)is_planned_ea(item_end) )
          {
            v89 = -1;
            v28 = &v92;
            v88 = -1;
            v90 = 0;
            v91 = 0;
            do
            {
              *(_WORD *)v28 = 0;
              v28 += 40;
              *((_WORD *)v28 - 19) = 0;
              *((_WORD *)v28 - 18) = 0;
              *((_DWORD *)v28 - 2) = 0;
              *((_WORD *)v28 - 17) = 0;
              *((_OWORD *)v28 - 2) = 0;
              *((_QWORD *)v28 - 2) = 0;
            }
            while ( v28 != v93 );
            v81 = (int)decode_insn(&v88, item_end, v93, v27, 0, 0, 0.0) <= 0;
          }
          goto LABEL_49;
        }
      }
    }
    v81 = 0;
    goto LABEL_49;
  }
  v62 = *(_QWORD *)v61;
  v87 = 0;
  ptr = nullptr;
  get_ea_name(&ptr, v62, 21, 0);
  sub_3805A0(
    a1,
    (__int64)"[%0*a BYTES: COLLAPSED FUNCTION %s%s]",
    8,
    0.0,
    (const char *)(*(_QWORD *)(v61 + 8) - *(_QWORD *)v61),
    (const char *)ptr);
  v63 = ptr;
  if ( ptr )
  {
LABEL_189:
    *(_QWORD *)&v87 = 0;
    qfree(v63);
  }
LABEL_10:
  *(_BYTE *)(*(_QWORD *)(v4 + 1672) + 2864LL) = 0;
  if ( a2 )
  {
    v8 = *(_DWORD *)(a1 + 108);
    if ( v8 < 0 )
      v8 = 0;
    *a2 = v8;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, 0);
  if ( (a3 & 4) != 0 )
  {
    v10 = *(_QWORD **)(a1 + 96);
    if ( v10[1] )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = (_QWORD *)(*v10 + 24 * v12);
        if ( v13[1] > 1u )
        {
          tag_remove(v13, *v13, 0);
          v10 = *(_QWORD **)(a1 + 96);
        }
        v12 = ++v11;
      }
      while ( (unsigned __int64)v11 < v10[1] );
    }
  }
LABEL_20:
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree(v84);
  }
  return v9;
}
