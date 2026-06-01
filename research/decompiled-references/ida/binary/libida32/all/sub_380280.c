__int64 __fastcall sub_380280(_QWORD *a1, int *a2, char a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // r12d
  _QWORD *v10; // rdx
  int v11; // r15d
  __int64 v12; // rax
  bool v14; // r14
  __int64 hidden_range; // r13
  __int64 fchunk; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int item_end; // r14d
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64, char); // rax
  const char *v23; // rcx
  int v24; // edx
  __int64 v25; // rcx
  char *v26; // rax
  unsigned int not_tail; // eax
  int flags; // eax
  __int64 (__fastcall *v29)(__int64, char); // rax
  const char *v30; // r14
  __int64 (__fastcall *v31)(_QWORD *, const char *, unsigned __int8); // rax
  const char *v32; // r15
  __int64 (__fastcall *v33)(_QWORD *, const char *, unsigned __int8); // rax
  __int64 v34; // rsi
  const char **v35; // r14
  const char **v36; // r13
  const char *v37; // rcx
  int v38; // r8d
  int v39; // r9d
  char v40; // r14
  _BYTE *v41; // r13
  int v42; // r8d
  int v43; // r9d
  unsigned int v44; // r13d
  unsigned __int8 v45; // al
  char *v46; // rdx
  __int64 v47; // r14
  __int64 v48; // r13
  char *v49; // rax
  void *v50; // rdi
  const char *v51; // r15
  __int64 (__fastcall *v52)(_QWORD *, const char *, unsigned __int8); // rax
  const char *v53; // r14
  __int64 (__fastcall *v54)(_QWORD *, const char *, unsigned __int8); // rax
  __int64 v55; // rax
  __int64 v56; // rax
  const char *v57; // r9
  __int64 v58; // rax
  unsigned int *v59; // r14
  __int64 v60; // rsi
  void *v61; // rdi
  const char *v62; // rax
  __int64 v63; // rsi
  _BYTE *v64; // r14
  _BYTE *v65; // r13
  int v66; // ecx
  __int64 v67; // rax
  _BYTE *v68; // r14
  __int64 v69; // rax
  const char *v70; // r8
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  void **p_ptr; // [rsp+0h] [rbp-210h]
  __int64 compiler_name; // [rsp+20h] [rbp-1F0h]
  char v76; // [rsp+31h] [rbp-1DFh]
  char v77; // [rsp+32h] [rbp-1DEh]
  bool v78; // [rsp+33h] [rbp-1DDh]
  unsigned __int8 v79; // [rsp+34h] [rbp-1DCh]
  char v80; // [rsp+34h] [rbp-1DCh]
  unsigned int v82; // [rsp+3Ch] [rbp-1D4h]
  void *v83; // [rsp+40h] [rbp-1D0h] BYREF
  __int128 v84; // [rsp+48h] [rbp-1C8h]
  void *ptr; // [rsp+60h] [rbp-1B0h] BYREF
  __int128 v86; // [rsp+68h] [rbp-1A8h]
  _QWORD v87[3]; // [rsp+80h] [rbp-190h] BYREF
  char v88; // [rsp+98h] [rbp-178h] BYREF
  char v89[8]; // [rsp+158h] [rbp-B8h] BYREF
  _BYTE v90[16]; // [rsp+160h] [rbp-B0h] BYREF
  _BYTE v91[32]; // [rsp+170h] [rbp-A0h] BYREF
  _BYTE v92[33]; // [rsp+190h] [rbp-80h] BYREF
  char v93; // [rsp+1B1h] [rbp-5Fh] BYREF
  char v94; // [rsp+1D1h] [rbp-3Fh] BYREF
  unsigned __int64 v95; // [rsp+1D8h] [rbp-38h]

  v95 = __readfsqword(0x28u);
  v84 = 0;
  v83 = nullptr;
  v4 = qword_2CA1698;
  v82 = *((_DWORD *)a1 + 4);
  v5 = getseg(v82);
  v79 = 0;
  v6 = v5;
  if ( v5 )
    v79 = *(_BYTE *)(v5 + 96);
  v78 = (*((_BYTE *)a1 + 146) & 0x40) == 0 && (getinf(45) & 0x20) == 0 && (get_aflags(v82) & 0x10) != 0;
  *(_QWORD *)(*(_QWORD *)(v4 + 1480) + 2648LL) = 0;
  *(_BYTE *)(*(_QWORD *)(v4 + 1480) + 2664LL) = 1;
  if ( (a3 & 2) != 0 )
    *((_DWORD *)a1 + 36) |= 0x100000u;
  if ( (a3 & 8) != 0 )
    *((_DWORD *)a1 + 36) |= 0x400000u;
  v7 = v82;
  sub_37EF30((__int64)a1, v82, 0);
  v77 = is_mapped(v82);
  if ( !v77 )
    goto LABEL_10;
  if ( v82 == (unsigned int)getinf(19) )
  {
    v34 = a1[60];
    ptr = nullptr;
    v86 = 0;
    p_ptr = &ptr;
    v76 = sub_38BCE0(&ptr, v34, *(_QWORD *)(v34 + 48));
    if ( !v76 )
    {
      v72 = *(_QWORD *)(v4 + 1480);
      v9 = -1;
      *(_BYTE *)(v72 + 2664) = 0;
      sub_379A30((char **)&ptr);
      goto LABEL_20;
    }
    v35 = (const char **)ptr;
    v36 = (const char **)((char *)ptr + 24 * v86);
    if ( ptr != v36 )
    {
      do
      {
        v37 = haystack;
        if ( v35[1] )
          v37 = *v35;
        sub_359BD0((__int64)a1, 0, (__int64)&unk_22AF10A, v37);
        v35 += 3;
      }
      while ( v36 != v35 );
    }
    v40 = 0;
    if ( sub_6141A0(v4, 80, v91, 32) == 32 )
    {
      v64 = v91;
      v65 = v92;
      do
      {
        v66 = (unsigned __int8)*v64++;
        v65 += (int)qsnprintf((int)v65, (unsigned int)&v94 - (unsigned int)v65, (int)"%02X", v66, v38, v39, (char)p_ptr);
      }
      while ( v64 != v92 );
      v67 = closing_comment();
      sub_359BD0((__int64)a1, 0, (__int64)&unk_22AF111, *(_QWORD *)(a1[60] + 48LL), v92, v67);
      v40 = v76;
    }
    v41 = v90;
    if ( sub_6141A0(v4, 76, v90, 16) == 16 )
    {
      v68 = v92;
      do
        v68 += (int)qsnprintf(
                      (int)v68,
                      (unsigned int)&v93 - (unsigned int)v68,
                      (int)"%02X",
                      (unsigned __int8)*v41++,
                      v42,
                      v43,
                      (char)p_ptr);
      while ( v41 != v91 );
      v69 = closing_comment();
      sub_359BD0((__int64)a1, 0, (__int64)&unk_22AF12C, *(_QWORD *)(a1[60] + 48LL), v92, v69);
      v40 = v76;
    }
    v7 = 92;
    v44 = sub_614FB0(v4, 92);
    if ( v44 )
    {
      v55 = closing_comment();
      v7 = 0;
      sub_359BD0((__int64)a1, 0, (__int64)&unk_22AF147, *(_QWORD *)(a1[60] + 48LL), v44, v55);
      LOBYTE(v44) = getinf(57);
      v45 = v44 & 0x7F;
      if ( (v44 & 0x7F) == 0 )
      {
LABEL_125:
        (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
LABEL_126:
        v46 = (char *)ptr;
        if ( ptr )
        {
          v47 = v86;
          if ( (_QWORD)v86 )
          {
            v48 = 0;
            do
            {
              v49 = &v46[24 * v48];
              v50 = *(void **)v49;
              if ( *(_QWORD *)v49 )
              {
                *((_QWORD *)v49 + 1) = 0;
                qfree(v50);
                v46 = (char *)ptr;
              }
              ++v48;
            }
            while ( v47 != v48 );
          }
          *(_QWORD *)&v86 = 0;
          qfree(v46);
        }
        goto LABEL_24;
      }
      v40 = v76;
    }
    else
    {
      v44 = (unsigned __int8)getinf(57);
      v45 = v44 & 0x7F;
      if ( (v44 & 0x7F) == 0 )
        goto LABEL_124;
    }
    compiler_name = get_compiler_name(v45);
    v56 = closing_comment();
    v57 = &byte_22CD811;
    if ( (v44 & 0x80u) != 0 )
      v57 = " (guessed)";
    v7 = 0;
    sub_359BD0((__int64)a1, 0, (__int64)&unk_22AF164, *(_QWORD *)(a1[60] + 48LL), compiler_name, v57, v56);
LABEL_124:
    if ( !v40 )
      goto LABEL_126;
    goto LABEL_125;
  }
LABEL_24:
  if ( (*((_BYTE *)a1 + 146) & 0x40) != 0 )
  {
    hidden_range = 0;
    v14 = 0;
  }
  else
  {
    v14 = v6 && (getinf(45) & 0x80u) == 0LL && (*(_BYTE *)(v6 + 24) & 4) != 0;
    hidden_range = get_hidden_range(v82);
  }
  if ( (~*((_WORD *)a1 + 264) & 0x600) != 0
    || (a1[66] & 0x10010000) != 0
    || (not_tail = prev_not_tail(v82), v7 = 4, flags = get_flags_ex(not_tail, 4), (flags & 0x600) == 0x400)
    && (flags & 0xF0000000) == 0xB0000000LL )
  {
    if ( v14 || v78 )
      goto LABEL_35;
  }
  else
  {
    if ( v14 || v78 )
    {
LABEL_35:
      if ( v82 != (unsigned int)getinf(19) )
        goto LABEL_36;
      goto LABEL_65;
    }
    if ( (get_aflags(v82) & 0x40) == 0
      && !(unsigned __int8)is_spec_segm(v79)
      && (!hidden_range || *(_BYTE *)(hidden_range + 32)) )
    {
      v29 = *(__int64 (__fastcall **)(__int64, char))(*a1 + 168LL);
      if ( v29 == sub_37E110 )
      {
        if ( (getinf(46) & 1) != 0 )
        {
          sub_37E050((__int64)a1, nullptr);
          sub_37CA70(
            (__int64)a1,
            (__int64)&unk_22B285A,
            "---------------------------------------------------------------------------");
        }
      }
      else
      {
        v29((__int64)a1, 0);
      }
    }
  }
  v7 = 4;
  if ( (unsigned __int8)getinf_flag(45, 4) || (*((_BYTE *)a1 + 529) & 0x20) == 0 )
    goto LABEL_35;
  v7 = 1000;
  if ( v82 != (unsigned int)getinf(19) )
  {
    sub_61FF60(a1, 1000);
    goto LABEL_36;
  }
  sub_61FF60(a1, 1000);
LABEL_65:
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, &byte_22CD811, 0);
  sub_375980(0xCu, a1);
  if ( *(_QWORD *)(a1[60] + 376LL) && sub_614990(v4, &v83, 73) > 0 )
  {
    (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, &byte_22CD811, 0);
    v23 = haystack;
    if ( (_QWORD)v84 )
      v23 = (const char *)v83;
    sub_359BD0((__int64)a1, 0xFFFFFFFFLL, *(_QWORD *)(a1[60] + 376LL), v23);
  }
  v7 = (__int64)&byte_22CD811;
  (*(void (__fastcall **)(_QWORD *, const char *, _QWORD))(*a1 + 136LL))(a1, &byte_22CD811, 0);
LABEL_36:
  if ( v6 && *(_DWORD *)v6 == v82 )
  {
    if ( (getinf(46) & 2) != 0 )
      sub_37CA70(
        (__int64)a1,
        (__int64)&unk_22B285A,
        "===========================================================================");
    (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
    if ( v14 )
    {
      ptr = nullptr;
      v86 = 0;
      get_segm_name(&ptr, v6, 1);
      v70 = haystack;
      if ( (_QWORD)v86 )
        v70 = (const char *)ptr;
      v71 = 0;
      if ( v79 != 7 )
        v71 = (unsigned int)(*(_DWORD *)(v6 + 4) - *(_DWORD *)v6);
      sub_37CB30((__int64)a1, (__int64)"[%0*a BYTES: COLLAPSED SEGMENT %s%s]", 8, 0.0, (const char *)v71, v70);
      v61 = ptr;
      if ( !ptr )
        goto LABEL_10;
      goto LABEL_187;
    }
    if ( (*(_BYTE *)(v6 + 24) & 0x20) == 0 )
    {
      v62 = (const char *)strarray(&unk_2AFC940, 12, (unsigned int)(char)v79);
      sub_37CA70((__int64)a1, (__int64)"Segment type: %s", v62);
    }
    sub_375980(0xEu, a1, v6);
    v7 = v6;
    if ( get_segment_cmt(&v83, v6, 0) > 0 )
    {
      v53 = haystack;
      v54 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*a1 + 184LL);
      if ( (_QWORD)v84 )
        v53 = (const char *)v83;
      if ( v54 == sub_37D080 )
      {
        v7 = 4;
        if ( !(unsigned __int8)getinf_flag(45, 4) )
        {
          v7 = 0;
          sub_37CCC0(a1, 0, *(const char **)(qword_2CA1698 + 952), v53, 2u);
        }
      }
      else
      {
        v7 = (__int64)v53;
        v54(a1, v53, 2u);
      }
    }
  }
  if ( hidden_range )
  {
    if ( !*(_BYTE *)(hidden_range + 32) )
    {
      v32 = *(const char **)(hidden_range + 8);
      v33 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*a1 + 184LL);
      if ( v33 == sub_37D080 )
      {
        if ( !(unsigned __int8)getinf_flag(45, 4) )
          sub_37CCC0(a1, 0, *(const char **)(qword_2CA1698 + 952), v32, 0x27u);
      }
      else
      {
        v33(a1, *(const char **)(hidden_range + 8), 39u);
      }
      goto LABEL_10;
    }
    if ( *(_DWORD *)hidden_range == v82 )
    {
      v30 = *(const char **)(hidden_range + 16);
      if ( !v30 )
      {
        sub_3573A0((char **)&v83);
        v30 = haystack;
        if ( (_QWORD)v84 )
          v30 = (const char *)v83;
      }
      v31 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*a1 + 184LL);
      if ( v31 == sub_37D080 )
      {
        v7 = 4;
        if ( !(unsigned __int8)getinf_flag(45, 4) )
        {
          v7 = 0;
          sub_37CCC0(a1, 0, *(const char **)(qword_2CA1698 + 952), v30, 4u);
        }
      }
      else
      {
        v7 = (__int64)v30;
        v31(a1, v30, 4u);
      }
    }
  }
  fchunk = get_fchunk(v82);
  v17 = fchunk;
  if ( fchunk && *(char *)(fchunk + 9) < 0 )
  {
    if ( (*((_BYTE *)a1 + 146) & 0x40) == 0 && (getinf(45) & 0x40) == 0 && (*(_BYTE *)(v17 + 8) & 0x40) != 0 )
    {
      v63 = *(unsigned int *)(v17 + 16);
      v86 = 0;
      ptr = nullptr;
      get_ea_name(&ptr, v63, 21, 0);
      sub_37CB30(
        (__int64)a1,
        (__int64)"[%0*a BYTES: COLLAPSED CHUNK OF FUNCTION %s%s]",
        8,
        0.0,
        (const char *)(unsigned int)(*(_DWORD *)(v17 + 4) - *(_DWORD *)v17),
        (const char *)ptr);
      v61 = ptr;
      if ( ptr )
        goto LABEL_187;
      goto LABEL_10;
    }
    if ( *(_DWORD *)v17 == v82 )
    {
      v7 = v17;
      sub_37EB10((__int64)a1, v17);
    }
  }
  if ( (getinf(44) & 0x200) != 0 && !(unsigned __int8)is_spec_segm(v79) && (v79 & 0xFB) != 3 )
  {
    v7 = (__int64)a1;
    sub_375980(0x10u, a1);
  }
  if ( (*((_BYTE *)a1 + 146) & 0x40) != 0
    || (~*((_WORD *)a1 + 264) & 0x600) != 0
    || (v58 = get_fchunk(v82), (v59 = (unsigned int *)v58) == nullptr)
    || *(char *)(v58 + 9) < 0
    || (getinf(45) & 0x40) != 0
    || (v59[2] & 0x40) == 0 )
  {
    if ( v78 )
    {
      item_end = get_item_end(v82, v7, v18, v19);
    }
    else
    {
      if ( (unsigned __int8)getinf_flag(45, 8) )
        sub_37E3F0((__int64)a1);
      v24 = *((_DWORD *)a1 + 36);
      *((_BYTE *)a1 + 200) = 0;
      *((_DWORD *)a1 + 36) = v24 & 0xFFF3FFFF | (8 * (a3 & 1));
      item_end = sub_37E5B0((__int64)a1, v79);
      v80 = is_spec_segm(v79);
      if ( !v80 )
      {
        if ( (~*((_WORD *)a1 + 264) & 0x600) != 0 )
        {
LABEL_49:
          v21 = get_fchunk(v82);
          if ( v21 && *(char *)(v21 + 9) < 0 && *(_DWORD *)(v21 + 4) == item_end )
            sub_37EC80((__int64)a1, v21);
          if ( v6 && *(_DWORD *)(v6 + 4) == item_end )
          {
            if ( !sub_375980(0xFu, a1, v6) )
              std_out_segm_footer(a1, v6);
            (*(void (__fastcall **)(_QWORD *))(*a1 + 160LL))(a1);
            v80 = 0;
          }
          if ( item_end == (unsigned int)getinf(20) )
            sub_375980(0xDu, a1);
          if ( !v78 && !(unsigned __int8)getinf_flag(45, 4) && (*((_BYTE *)a1 + 529) & 0x20) != 0 )
            sub_61FF60(a1, 2000);
          if ( hidden_range && *(_DWORD *)(hidden_range + 4) == item_end )
          {
            v51 = *(const char **)(hidden_range + 24);
            if ( !v51 )
            {
              sub_3573A0((char **)&v83);
              v51 = haystack;
              if ( (_QWORD)v84 )
                v51 = (const char *)v83;
            }
            v52 = *(__int64 (__fastcall **)(_QWORD *, const char *, unsigned __int8))(*a1 + 184LL);
            if ( v52 == sub_37D080 )
            {
              if ( !(unsigned __int8)getinf_flag(45, 4) )
                sub_37CCC0(a1, 0, *(const char **)(qword_2CA1698 + 952), v51, 4u);
            }
            else
            {
              v52(a1, v51, 4u);
            }
          }
          if ( v80 )
          {
            v22 = *(__int64 (__fastcall **)(__int64, char))(*a1 + 168LL);
            if ( v22 == sub_37E110 )
            {
              if ( (getinf(46) & 1) != 0 )
              {
                sub_37E050((__int64)a1, nullptr);
                sub_37CA70(
                  (__int64)a1,
                  (__int64)&unk_22B285A,
                  "---------------------------------------------------------------------------");
              }
            }
            else
            {
              v22((__int64)a1, 0);
            }
          }
          goto LABEL_10;
        }
        if ( (item_end == -1 || (~((unsigned __int16)get_flags_ex(item_end, 4) >> 8) & 6) != 0)
          && (get_aflags(v82) & 0x40) == 0 )
        {
          v80 = v77;
          if ( (unsigned __int8)is_planned_ea(item_end) )
          {
            v87[0] = -1;
            v87[2] = 0;
            v87[1] = 0xFFFFFFFFLL;
            v26 = &v88;
            do
            {
              *(_WORD *)v26 = 0;
              v26 += 24;
              *((_WORD *)v26 - 11) = 0;
              *((_WORD *)v26 - 10) = 0;
              *((_DWORD *)v26 - 1) = 0;
              *((_WORD *)v26 - 9) = 0;
              *((_QWORD *)v26 - 2) = 0;
              *((_DWORD *)v26 - 2) = 0;
            }
            while ( v26 != v89 );
            v80 = (int)decode_insn(v87, item_end, v89, v25, 0, 0) <= 0;
          }
          goto LABEL_49;
        }
      }
    }
    v80 = 0;
    goto LABEL_49;
  }
  v60 = *v59;
  v86 = 0;
  ptr = nullptr;
  get_ea_name(&ptr, v60, 21, 0);
  sub_37CB30(
    (__int64)a1,
    (__int64)"[%0*a BYTES: COLLAPSED FUNCTION %s%s]",
    8,
    0.0,
    (const char *)(v59[1] - *v59),
    (const char *)ptr);
  v61 = ptr;
  if ( ptr )
  {
LABEL_187:
    *(_QWORD *)&v86 = 0;
    qfree(v61);
  }
LABEL_10:
  *(_BYTE *)(*(_QWORD *)(v4 + 1480) + 2664LL) = 0;
  if ( a2 )
  {
    v8 = *((_DWORD *)a1 + 27);
    if ( v8 < 0 )
      v8 = 0;
    *a2 = v8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 144LL))(a1, 0);
  if ( (a3 & 4) != 0 )
  {
    v10 = (_QWORD *)a1[12];
    if ( v10[1] )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        if ( *(_QWORD *)(*v10 + 24 * v12 + 8) > 1u )
        {
          tag_remove();
          v10 = (_QWORD *)a1[12];
        }
        v12 = ++v11;
      }
      while ( (unsigned __int64)v11 < v10[1] );
    }
  }
LABEL_20:
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  return v9;
}

