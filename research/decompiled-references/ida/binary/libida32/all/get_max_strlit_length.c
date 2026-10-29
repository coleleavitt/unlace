unsigned __int64 __fastcall get_max_strlit_length(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // ebp
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r13d
  __int64 encoding_name; // r12
  __int64 v16; // rax
  unsigned int v17; // r13d
  __int64 v18; // rdi
  int v19; // r15d
  unsigned int v20; // eax
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  char v25; // al
  unsigned __int64 v26; // r12
  int v27; // r13d
  unsigned int v28; // r15d
  int v29; // eax
  unsigned int v30; // r15d
  unsigned int v31; // eax
  void **v32; // rdx
  char v33; // al
  __int64 v34; // rdi
  unsigned int next_fixup_ea; // eax
  int flags; // eax
  unsigned __int8 str_type; // al
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdi
  unsigned int v43; // eax
  _QWORD *v44; // r15
  __int64 v45; // rax
  _QWORD *v46; // r12
  _QWORD *v47; // rbp
  __int64 v48; // rdx
  __int64 v49; // r13
  void *v50; // rax
  _QWORD *v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r13
  void *v54; // r14
  unsigned int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned int v59; // ebx
  __int64 v60; // rax
  unsigned __int64 v61; // [rsp+0h] [rbp-118h]
  unsigned int v62; // [rsp+10h] [rbp-108h]
  unsigned int wide_dword; // [rsp+14h] [rbp-104h]
  void **v64; // [rsp+18h] [rbp-100h]
  __int64 v65; // [rsp+20h] [rbp-F8h]
  char fixup; // [rsp+30h] [rbp-E8h]
  char v67; // [rsp+35h] [rbp-E3h]
  int v68; // [rsp+38h] [rbp-E0h]
  unsigned int v69; // [rsp+3Ch] [rbp-DCh]
  unsigned int v70; // [rsp+4Ch] [rbp-CCh] BYREF
  void *v71; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v72; // [rsp+58h] [rbp-C0h]
  _BYTE v73[16]; // [rsp+70h] [rbp-A8h] BYREF
  unsigned __int64 v74; // [rsp+80h] [rbp-98h]
  _QWORD v75[3]; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v76; // [rsp+A8h] [rbp-70h]
  unsigned int v77; // [rsp+ACh] [rbp-6Ch]
  __int64 v78; // [rsp+B0h] [rbp-68h]
  unsigned int v79; // [rsp+B8h] [rbp-60h]
  int v80; // [rsp+BCh] [rbp-5Ch]
  char v81; // [rsp+C0h] [rbp-58h]
  bool v82; // [rsp+C8h] [rbp-50h]
  char v83[8]; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v84; // [rsp+D8h] [rbp-40h]

  v3 = a2;
  v4 = a1;
  v84 = __readfsqword(0x28u);
  v65 = qword_2CA1698;
  wide_dword = HIBYTE(a2);
  if ( HIBYTE(a2) || (v3 = sub_356100(a2)) != 0 )
  {
    v16 = getseg(a1);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 4);
      goto LABEL_18;
    }
  }
  else
  {
    if ( (a3 & 0xFFFFFFB7) == 0 )
    {
      v6 = *(_QWORD *)(v65 + 1600);
      v7 = v6 + 8;
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 )
      {
        v9 = v7;
        do
        {
          while ( 1 )
          {
            v10 = *(_QWORD *)(v8 + 16);
            v11 = *(_QWORD *)(v8 + 24);
            if ( *(_DWORD *)(v8 + 32) < v4 )
              break;
            v9 = v8;
            v8 = *(_QWORD *)(v8 + 16);
            if ( !v10 )
              goto LABEL_9;
          }
          v8 = *(_QWORD *)(v8 + 24);
        }
        while ( v11 );
LABEL_9:
        if ( v7 != v9 && v4 >= *(_DWORD *)(v9 + 32) - *(_DWORD *)(v9 + 40) )
          return *(_DWORD *)(v9 + 32) - v4;
      }
    }
    v12 = getseg(v4);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 4);
      encoding_name = get_encoding_name(0);
      fixup = get_fixup(0, v4);
      if ( fixup )
        return 0;
      next_fixup_ea = get_next_fixup_ea(v4);
      v68 = 1;
      v61 = 0;
      if ( next_fixup_ea <= v13 )
        v13 = next_fixup_ea;
      v19 = 0;
      v62 = v13;
      goto LABEL_29;
    }
  }
  v43 = chunk_start(v4);
  if ( v43 == -1 )
    return 0;
  v17 = chunk_size(v43) + v43;
LABEL_18:
  if ( (unsigned __int8)v3 > 0xAu )
  {
    if ( (unsigned int)(unsigned __int8)v3 - 12 <= 2 )
    {
      v42 = v4;
      v4 += 4;
      v61 = 4;
      wide_dword = get_wide_dword(v42);
      goto LABEL_22;
    }
  }
  else
  {
    if ( (v3 & 0xF8) != 0 )
    {
      v34 = v4;
      v4 += 2;
      v61 = 2;
      wide_dword = get_wide_word(v34);
      goto LABEL_22;
    }
    if ( (unsigned int)(unsigned __int8)v3 - 4 <= 2 )
    {
      v18 = v4++;
      v61 = 1;
      wide_dword = get_wide_byte(v18);
      goto LABEL_22;
    }
  }
  v61 = 0;
  wide_dword = 0;
LABEL_22:
  v19 = v3 & 3;
  encoding_name = get_encoding_name(HIBYTE(v3));
  if ( v19 == 1 )
  {
    v68 = 2;
    v41 = 2;
LABEL_81:
    fixup = 1;
    wide_dword *= v41;
    goto LABEL_24;
  }
  v68 = 1;
  fixup = 0;
  if ( v19 == 2 )
  {
    v68 = 4;
    v41 = 4;
    goto LABEL_81;
  }
LABEL_24:
  if ( (unsigned __int8)get_fixup(0, v4) )
    return 0;
  v20 = get_next_fixup_ea(v4);
  if ( v17 > v20 )
    v17 = v20;
  if ( wide_dword )
  {
    v62 = v4 + wide_dword;
    if ( v17 < v4 + wide_dword )
      return 0;
  }
  else
  {
    v62 = v17;
  }
LABEL_29:
  if ( v4 >= v62 )
    return 0;
  v71 = nullptr;
  v72 = 0;
  sub_58FD90(v65, &v71, (unsigned int)v3);
  v75[0] = off_2AFC558;
  v75[1] = 0;
  v75[2] = v65;
  v76 = v4;
  v77 = v62;
  v78 = 0;
  v79 = v4;
  v80 = 0;
  v81 = getinf_flag(3, 64);
  v82 = (a3 & 1) == 0;
  if ( v76 == -1 || v77 < v76 )
    sub_356190();
  v21 = (unsigned __int8)getinf_flag(3, 32);
  v22 = v3 >> 24;
  if ( !HIBYTE(v3) )
  {
    v23 = 2;
    if ( v19 != 1 )
      v23 = 3 * (unsigned int)(v19 == 2) + 1;
    LOBYTE(v22) = get_default_encoding_idx(v23);
  }
  v24 = get_encoding_name((unsigned __int8)v22);
  sub_894230(v73, v75, v24, v21, 0);
  v25 = fixup & (encoding_name == 0);
  v26 = 0;
  v27 = 0;
  v67 = v25;
  while ( 1 )
  {
    v28 = v79;
    if ( v4 < v79 && v79 < v62 && (a3 & 0x20) != 0 )
    {
      flags = get_flags_ex(v79, 4);
      if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
      {
        str_type = get_str_type(v28);
        v39 = str_type;
        if ( str_type > 0xEu || (v40 = 30576, !_bittest64(&v40, v39)) )
        {
          v26 += (unsigned int)get_item_end(v28, 4, v38, v39) - v28;
          if ( !v61 )
          {
            if ( (a3 & 0x10) != 0 )
              goto LABEL_66;
            if ( v68 == 1 )
            {
              v61 = v26;
              goto LABEL_93;
            }
            goto LABEL_91;
          }
          goto LABEL_96;
        }
      }
    }
    v29 = sub_894330(v73, v83, &v70);
    if ( v29 )
    {
      if ( v29 != 2 || (a3 & 2) == 0 )
        goto LABEL_88;
      goto LABEL_39;
    }
    v30 = v70;
    if ( v67 )
    {
      v31 = v70;
      LOBYTE(v31) = 0;
      if ( v27 )
      {
        if ( v69 != v31 )
          goto LABEL_88;
      }
      else
      {
        v69 = v31;
      }
    }
    v32 = nullptr;
    if ( (_QWORD)v72 )
      v32 = &v71;
    if ( !v70 )
      break;
    v64 = v32;
    v33 = getinf_flag(45, 16);
    if ( v30 == 255 && v33
      || !(unsigned __int8)is_valid_cp(v30, 1, v64)
      && ((a3 & 4) == 0 || (a3 & 2) == 0 && !(unsigned __int8)is_cp_graphical(v30)) )
    {
LABEL_88:
      if ( !v61 )
      {
        if ( (a3 & 0x10) != 0 )
          goto LABEL_66;
LABEL_90:
        if ( v68 == 1 )
        {
          v61 += v26;
          goto LABEL_92;
        }
LABEL_91:
        v61 += v26 & -v68;
LABEL_92:
        if ( v61 <= 0x1000 || v3 | a3 & 0xFFFFFFB7 )
          goto LABEL_93;
        v44 = *(_QWORD **)(v65 + 1600);
        v45 = v44[2];
        v46 = v44 + 1;
        v47 = v44 + 1;
        v48 = v45;
        if ( !v45 )
        {
          v59 = v61 + v4;
          v60 = operator new(0x30u);
LABEL_140:
          *(_DWORD *)(v60 + 32) = v59;
          v51 = (_QWORD *)v60;
          *(_QWORD *)(v60 + 40) = 0;
          if ( !v44[5] || (v57 = v44[4], v58 = 0, *(_DWORD *)(v57 + 32) >= v59) )
            v58 = sub_3561C0((__int64)v44, v59);
          goto LABEL_127;
        }
        do
        {
          if ( *(_DWORD *)(v48 + 32) >= v4 )
          {
            v47 = (_QWORD *)v48;
            v48 = *(_QWORD *)(v48 + 16);
          }
          else
          {
            v48 = *(_QWORD *)(v48 + 24);
          }
        }
        while ( v48 );
        if ( v46 == v47 )
        {
          v59 = v61 + v4;
        }
        else
        {
          while ( v61 + v4 >= (unsigned int)(*((_DWORD *)v47 + 8) - *((_DWORD *)v47 + 10)) )
          {
            v49 = std::_Rb_tree_increment();
            v50 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v50, 0x30u);
            --v44[5];
            if ( v46 == (_QWORD *)v49 )
              break;
            v47 = (_QWORD *)v49;
          }
          v45 = v44[2];
          v59 = v61 + v4;
          if ( !v45 )
            goto LABEL_143;
        }
        v51 = v44 + 1;
        do
        {
          if ( *(_DWORD *)(v45 + 32) >= v59 )
          {
            v51 = (_QWORD *)v45;
            v45 = *(_QWORD *)(v45 + 16);
          }
          else
          {
            v45 = *(_QWORD *)(v45 + 24);
          }
        }
        while ( v45 );
        if ( v46 != v51 )
        {
          if ( v59 >= *((_DWORD *)v51 + 8) )
          {
LABEL_129:
            v51[5] = v61;
            goto LABEL_93;
          }
          v52 = operator new(0x30u);
          *(_DWORD *)(v52 + 32) = v59;
          v53 = v52;
          v54 = (void *)v52;
          *(_QWORD *)(v52 + 40) = 0;
          v55 = *((_DWORD *)v51 + 8);
          if ( v59 < v55 )
          {
            if ( v51 == (_QWORD *)v44[3] )
            {
LABEL_126:
              v57 = (__int64)v51;
              v58 = (__int64)v51;
              v51 = (_QWORD *)v53;
LABEL_127:
              if ( v57 )
              {
LABEL_128:
                std::_Rb_tree_insert_and_rebalance();
                ++v44[5];
                goto LABEL_129;
              }
              v54 = v51;
              v51 = (_QWORD *)v58;
              goto LABEL_136;
            }
            v56 = std::_Rb_tree_decrement();
            v57 = v56;
            if ( *(_DWORD *)(v56 + 32) < v59 )
            {
              v58 = *(_QWORD *)(v56 + 24);
              if ( !v58 )
              {
                v51 = (_QWORD *)v53;
                goto LABEL_127;
              }
              goto LABEL_126;
            }
LABEL_139:
            v51 = (_QWORD *)v53;
            v58 = sub_3561C0((__int64)v44, v59);
            goto LABEL_127;
          }
          if ( v55 >= v59 )
            goto LABEL_136;
          if ( v51 != (_QWORD *)v44[4] )
          {
            v58 = std::_Rb_tree_increment();
            if ( v59 >= *(_DWORD *)(v58 + 32) )
              goto LABEL_139;
            if ( v51[3] )
            {
              v51 = (_QWORD *)v53;
              v57 = v58;
              goto LABEL_127;
            }
          }
          if ( v51 )
          {
            v51 = (_QWORD *)v53;
            goto LABEL_128;
          }
LABEL_136:
          if ( v54 )
            operator delete(v54, 0x30u);
          goto LABEL_129;
        }
LABEL_143:
        v60 = operator new(0x30u);
        goto LABEL_140;
      }
LABEL_96:
      if ( wide_dword != v26 )
        goto LABEL_66;
      goto LABEL_90;
    }
    if ( v30 <= 0xFF && !(_BYTE)v3 && (SBYTE1(v3) == v30 || v30 == SBYTE2(v3)) )
      break;
LABEL_39:
    v26 = v74;
    if ( v74 > 0xFFF && (a3 & 8) != 0 || v74 > 0x3F && (a3 & 0x40) != 0 )
      goto LABEL_88;
    ++v27;
  }
  if ( v27 )
  {
    v26 = v74;
    if ( !v61 )
      goto LABEL_90;
    goto LABEL_96;
  }
  if ( v61 )
  {
    if ( !wide_dword )
      goto LABEL_93;
    goto LABEL_66;
  }
  if ( v68 == 1 )
LABEL_66:
    v61 = 0;
LABEL_93:
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  return v61;
}

