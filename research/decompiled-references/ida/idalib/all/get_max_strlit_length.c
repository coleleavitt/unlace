unsigned __int64 __fastcall get_max_strlit_length(unsigned __int64 a1, unsigned int a2, int a3)
{
  int v3; // ebp
  unsigned __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 encoding_name; // r12
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rdi
  int v19; // r15d
  unsigned __int64 v20; // rax
  unsigned int v21; // r13d
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // rax
  char v25; // al
  __int64 v26; // r12
  int v27; // r13d
  unsigned __int64 v28; // r15
  int v29; // eax
  unsigned int v30; // r15d
  unsigned int v31; // eax
  void **p_ptr; // rdx
  char v33; // al
  unsigned __int64 v34; // rdi
  unsigned __int64 next_fixup_ea; // rax
  int flags; // eax
  unsigned __int8 str_type; // al
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  _QWORD *v44; // r13
  unsigned __int64 v45; // r14
  _QWORD *v46; // rax
  _QWORD *v47; // r12
  _QWORD *v48; // rbp
  _QWORD *v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rcx
  __int64 v52; // rbx
  void *v53; // rax
  _QWORD *v54; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD *v58; // rbp
  void *v59; // r15
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rdx
  _QWORD *v63; // rax
  _BOOL8 v64; // rdi
  _QWORD *v65; // rax
  unsigned __int64 v66; // [rsp+8h] [rbp-130h]
  unsigned __int64 v67; // [rsp+10h] [rbp-128h]
  unsigned int wide_dword; // [rsp+24h] [rbp-114h]
  void **v69; // [rsp+28h] [rbp-110h]
  __int64 v70; // [rsp+30h] [rbp-108h]
  char fixup; // [rsp+40h] [rbp-F8h]
  char v72; // [rsp+45h] [rbp-F3h]
  int v73; // [rsp+48h] [rbp-F0h]
  unsigned int v74; // [rsp+4Ch] [rbp-ECh]
  unsigned int v75; // [rsp+5Ch] [rbp-DCh] BYREF
  void *ptr; // [rsp+60h] [rbp-D8h] BYREF
  __int128 v77; // [rsp+68h] [rbp-D0h]
  _BYTE v78[16]; // [rsp+80h] [rbp-B8h] BYREF
  unsigned __int64 v79; // [rsp+90h] [rbp-A8h]
  _QWORD v80[3]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v81; // [rsp+B8h] [rbp-80h]
  unsigned __int64 v82; // [rsp+C0h] [rbp-78h]
  __int64 v83; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v84; // [rsp+D0h] [rbp-68h]
  int v85; // [rsp+D8h] [rbp-60h]
  char v86; // [rsp+DCh] [rbp-5Ch]
  bool v87; // [rsp+E0h] [rbp-58h]
  char v88[8]; // [rsp+F0h] [rbp-48h] BYREF
  unsigned __int64 v89; // [rsp+F8h] [rbp-40h]

  v3 = a2;
  v4 = a1;
  v89 = __readfsqword(0x28u);
  v70 = qword_2CCB598;
  wide_dword = HIBYTE(a2);
  if ( HIBYTE(a2) || (v3 = sub_3594D0(a2)) != 0 )
  {
    v16 = getseg(a1);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 8);
      goto LABEL_18;
    }
  }
  else
  {
    if ( (a3 & 0xFFFFFFB7) == 0 )
    {
      v6 = *(_QWORD *)(v70 + 1792);
      v7 = (_QWORD *)(v6 + 8);
      v8 = *(_QWORD **)(v6 + 16);
      if ( v8 )
      {
        v9 = v7;
        do
        {
          while ( 1 )
          {
            v10 = v8[2];
            v11 = v8[3];
            if ( v8[4] < v4 )
              break;
            v9 = v8;
            v8 = (_QWORD *)v8[2];
            if ( !v10 )
              goto LABEL_9;
          }
          v8 = (_QWORD *)v8[3];
        }
        while ( v11 );
LABEL_9:
        if ( v7 != v9 && v4 >= v9[4] - v9[5] )
          return v9[4] - v4;
      }
    }
    v12 = getseg(v4);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      encoding_name = get_encoding_name(0);
      fixup = get_fixup(0, v4);
      if ( fixup )
        return 0;
      next_fixup_ea = get_next_fixup_ea(v4);
      v73 = 1;
      v67 = 0;
      if ( next_fixup_ea <= v13 )
        v13 = next_fixup_ea;
      v19 = 0;
      v66 = v13;
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
      v4 += 4LL;
      v67 = 4;
      wide_dword = get_wide_dword(v42);
      goto LABEL_22;
    }
  }
  else
  {
    if ( (v3 & 0xF8) != 0 )
    {
      v34 = v4;
      v4 += 2LL;
      v67 = 2;
      wide_dword = get_wide_word(v34);
      goto LABEL_22;
    }
    if ( (unsigned int)(unsigned __int8)v3 - 4 <= 2 )
    {
      v18 = v4++;
      v67 = 1;
      wide_dword = get_wide_byte(v18);
      goto LABEL_22;
    }
  }
  v67 = 0;
  wide_dword = 0;
LABEL_22:
  v19 = v3 & 3;
  encoding_name = get_encoding_name(HIBYTE(v3));
  if ( v19 == 1 )
  {
    v73 = 2;
    v41 = 2;
LABEL_81:
    fixup = 1;
    wide_dword *= v41;
    goto LABEL_24;
  }
  v73 = 1;
  fixup = 0;
  if ( v19 == 2 )
  {
    v73 = 4;
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
    v66 = v4 + wide_dword;
    if ( v17 < v66 )
      return 0;
  }
  else
  {
    v66 = v17;
  }
LABEL_29:
  if ( v4 >= v66 )
    return 0;
  ptr = nullptr;
  v77 = 0;
  sub_5A9F50(v70, &ptr, (unsigned int)v3);
  v80[0] = off_2B25638;
  v80[1] = 0;
  v80[2] = v70;
  v81 = v4;
  v82 = v66;
  v83 = 0;
  v84 = v4;
  v85 = 0;
  v86 = getinf_flag(3, 64);
  v87 = (a3 & 1) == 0;
  if ( v81 == -1 || v82 < v81 )
    sub_359560();
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
  sub_8B7BF0(v78, v80, v24, v21, 0);
  v25 = fixup & (encoding_name == 0);
  v26 = 0;
  v27 = 0;
  v72 = v25;
  while ( 1 )
  {
    v28 = v84;
    if ( v4 < v84 && v84 < v66 && (a3 & 0x20) != 0 )
    {
      flags = get_flags_ex(v84, 4);
      if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 )
      {
        str_type = get_str_type(v28);
        v39 = str_type;
        if ( str_type > 0xEu || (v40 = 30576, !_bittest64(&v40, v39)) )
        {
          v26 = get_item_end(v28, 4, v38, v39) + v26 - v28;
          if ( !v67 )
          {
            if ( (a3 & 0x10) != 0 )
              goto LABEL_66;
            if ( v73 == 1 )
            {
              v67 = v26;
              goto LABEL_93;
            }
            goto LABEL_91;
          }
          goto LABEL_96;
        }
      }
    }
    v29 = sub_8B7CF0(v78, v88, &v75);
    if ( v29 )
    {
      if ( v29 != 2 || (a3 & 2) == 0 )
        goto LABEL_88;
      goto LABEL_39;
    }
    v30 = v75;
    if ( v72 )
    {
      v31 = v75;
      LOBYTE(v31) = 0;
      if ( v27 )
      {
        if ( v74 != v31 )
          goto LABEL_88;
      }
      else
      {
        v74 = v31;
      }
    }
    p_ptr = nullptr;
    if ( (_QWORD)v77 )
      p_ptr = &ptr;
    if ( !v75 )
      break;
    v69 = p_ptr;
    v33 = getinf_flag(45, 16);
    if ( v30 == 255 && v33
      || !(unsigned __int8)is_valid_cp(v30, 1, v69)
      && ((a3 & 4) == 0 || (a3 & 2) == 0 && !(unsigned __int8)is_cp_graphical(v30)) )
    {
LABEL_88:
      if ( !v67 )
      {
        if ( (a3 & 0x10) != 0 )
          goto LABEL_66;
LABEL_90:
        if ( v73 == 1 )
        {
          v67 += v26;
          goto LABEL_92;
        }
LABEL_91:
        v67 += v26 & -v73;
LABEL_92:
        if ( v67 <= 0x1000 || v3 | a3 & 0xFFFFFFB7 )
          goto LABEL_93;
        v44 = *(_QWORD **)(v70 + 1792);
        v45 = v4 + v67;
        v46 = (_QWORD *)v44[2];
        v47 = v44 + 1;
        v48 = v44 + 1;
        v49 = v46;
        if ( !v46 )
          goto LABEL_141;
        do
        {
          v50 = v49[2];
          v51 = v49[3];
          if ( v49[4] >= v4 )
          {
            v48 = v49;
            v49 = (_QWORD *)v49[2];
          }
          else
          {
            v49 = (_QWORD *)v49[3];
          }
        }
        while ( v49 );
        if ( v47 != v48 )
        {
          while ( v45 >= v48[4] - v48[5] )
          {
            v52 = std::_Rb_tree_increment(v48, v50, v49, v51);
            v53 = (void *)std::_Rb_tree_rebalance_for_erase(v48, v44 + 1);
            v50 = 48;
            operator delete(v53, 0x30u);
            --v44[5];
            if ( v47 == (_QWORD *)v52 )
              break;
            v48 = (_QWORD *)v52;
          }
          v46 = (_QWORD *)v44[2];
          if ( !v46 )
            goto LABEL_141;
        }
        v54 = v44 + 1;
        do
        {
          if ( v46[4] >= v45 )
          {
            v54 = v46;
            v46 = (_QWORD *)v46[2];
          }
          else
          {
            v46 = (_QWORD *)v46[3];
          }
        }
        while ( v46 );
        if ( v47 == v54 )
        {
LABEL_141:
          v65 = (_QWORD *)operator new(0x30u);
          v65[4] = v45;
          v54 = v65;
          v65[5] = 0;
          if ( !v44[5] || (v62 = (_QWORD *)v44[4], v63 = nullptr, v62[4] >= v45) )
            v63 = sub_359580((__int64)v44, v45);
          goto LABEL_127;
        }
        if ( v45 >= v54[4] )
        {
LABEL_132:
          v54[5] = v67;
          goto LABEL_93;
        }
        v55 = (_QWORD *)operator new(0x30u);
        v55[4] = v45;
        v58 = v55;
        v59 = v55;
        v55[5] = 0;
        v60 = v54[4];
        if ( v45 < v60 )
        {
          if ( (_QWORD *)v44[3] == v54 )
          {
LABEL_126:
            v62 = v54;
            v63 = v54;
            v54 = v58;
LABEL_127:
            if ( v62 )
            {
              if ( v63 || v47 == v62 )
              {
                v64 = 1;
LABEL_131:
                std::_Rb_tree_insert_and_rebalance(v64, v54, v62, v44 + 1);
                ++v44[5];
                goto LABEL_132;
              }
LABEL_148:
              v64 = v45 < v62[4];
              goto LABEL_131;
            }
            v59 = v54;
            v54 = v63;
            goto LABEL_139;
          }
          v61 = std::_Rb_tree_decrement(v54);
          v62 = (_QWORD *)v61;
          if ( *(_QWORD *)(v61 + 32) < v45 )
          {
            v63 = *(_QWORD **)(v61 + 24);
            if ( !v63 )
            {
              v54 = v58;
              goto LABEL_127;
            }
            goto LABEL_126;
          }
LABEL_145:
          v54 = v58;
          v63 = sub_359580((__int64)v44, v45);
          goto LABEL_127;
        }
        if ( v60 >= v45 )
          goto LABEL_139;
        if ( (_QWORD *)v44[4] != v54 )
        {
          v63 = (_QWORD *)std::_Rb_tree_increment(v54, v50, v56, v57);
          if ( v45 >= v63[4] )
            goto LABEL_145;
          if ( v54[3] )
          {
            v54 = v58;
            v62 = v63;
            goto LABEL_127;
          }
        }
        if ( v54 )
        {
          v62 = v54;
          v54 = v58;
          goto LABEL_148;
        }
LABEL_139:
        if ( v59 )
          operator delete(v59, 0x30u);
        goto LABEL_132;
      }
LABEL_96:
      if ( wide_dword != v26 )
        goto LABEL_66;
      goto LABEL_90;
    }
    if ( v30 <= 0xFF && !(_BYTE)v3 && (SBYTE1(v3) == v30 || v30 == SBYTE2(v3)) )
      break;
LABEL_39:
    v26 = v79;
    if ( v79 > 0xFFF && (a3 & 8) != 0 || v79 > 0x3F && (a3 & 0x40) != 0 )
      goto LABEL_88;
    ++v27;
  }
  if ( v27 )
  {
    v26 = v79;
    if ( !v67 )
      goto LABEL_90;
    goto LABEL_96;
  }
  if ( v67 )
  {
    if ( !wide_dword )
      goto LABEL_93;
    goto LABEL_66;
  }
  if ( v73 == 1 )
LABEL_66:
    v67 = 0;
LABEL_93:
  if ( ptr )
  {
    *(_QWORD *)&v77 = 0;
    qfree(ptr);
  }
  return v67;
}
