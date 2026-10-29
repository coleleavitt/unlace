unsigned __int64 __fastcall sub_3FA960(int a1, int a2, __int64 a3, unsigned int a4, int *a5)
{
  int v5; // r12d
  unsigned __int8 v6; // al
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  unsigned __int64 max_strlit_length; // rbx
  char v11; // r13
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // r15d
  unsigned int v17; // r13d
  unsigned int v18; // r15d
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // r13
  __int64 v21; // r15
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  _DWORD *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rsi
  unsigned int v32; // r12d
  int flags; // eax
  unsigned int not_tail; // r15d
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int8 v38; // dl
  __int64 v39; // rdx
  char v40; // r12
  unsigned __int16 word; // bx
  __int64 v42; // rdi
  const char *v43; // rdi
  unsigned int v44; // r14d
  int v45; // ecx
  int v46; // r8d
  int v47; // r9d
  unsigned int v48; // r14d
  unsigned int v49; // r15d
  int v50; // ebx
  __int64 v51; // r13
  __int64 v52; // r14
  unsigned __int64 v53; // rdx
  _DWORD *v54; // rsi
  int v55; // r8d
  __int64 v56; // rax
  int v57; // [rsp+0h] [rbp-F0h]
  int v58; // [rsp+0h] [rbp-F0h]
  int v59; // [rsp+8h] [rbp-E8h]
  void **p_ptr; // [rsp+8h] [rbp-E8h]
  int v61; // [rsp+10h] [rbp-E0h]
  __int64 *v62; // [rsp+10h] [rbp-E0h]
  int v63; // [rsp+18h] [rbp-D8h]
  __int64 *v64; // [rsp+18h] [rbp-D8h]
  int v65; // [rsp+20h] [rbp-D0h]
  __int64 v66; // [rsp+20h] [rbp-D0h]
  int v67; // [rsp+28h] [rbp-C8h]
  int v68; // [rsp+28h] [rbp-C8h]
  unsigned int v69; // [rsp+2Ch] [rbp-C4h]
  int v70; // [rsp+30h] [rbp-C0h]
  unsigned int *v71; // [rsp+30h] [rbp-C0h]
  int v72; // [rsp+38h] [rbp-B8h]
  int v73; // [rsp+38h] [rbp-B8h]
  char v74; // [rsp+3Ch] [rbp-B4h]
  __int64 v75; // [rsp+40h] [rbp-B0h]
  __int64 v76; // [rsp+40h] [rbp-B0h]
  void *v77; // [rsp+48h] [rbp-A8h]
  void *v78; // [rsp+48h] [rbp-A8h]
  int v79; // [rsp+48h] [rbp-A8h]
  __int64 v80; // [rsp+50h] [rbp-A0h]
  __int64 v81; // [rsp+50h] [rbp-A0h]
  int v82; // [rsp+58h] [rbp-98h]
  int v83; // [rsp+58h] [rbp-98h]
  int v84; // [rsp+5Ch] [rbp-94h] BYREF
  void *v85; // [rsp+60h] [rbp-90h] BYREF
  __int128 v86; // [rsp+68h] [rbp-88h]
  int v87; // [rsp+78h] [rbp-78h]
  void *v88; // [rsp+80h] [rbp-70h] BYREF
  __int128 v89; // [rsp+88h] [rbp-68h]
  int v90; // [rsp+98h] [rbp-58h]
  void *ptr; // [rsp+A0h] [rbp-50h] BYREF
  __int128 v92; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-38h]
  int v94; // [rsp+C0h] [rbp-30h]
  int v95; // [rsp+C8h] [rbp-28h]
  __int64 v96; // [rsp+D0h] [rbp-20h]

  v77 = (void *)__PAIR64__(a2, a4);
  v70 = (int)a5;
  v93 = __readfsqword(0x28u);
  v5 = *a5;
  v6 = getinf_flag(11, 8);
  max_strlit_length = get_max_strlit_length(
                        a2,
                        v5,
                        32 * (unsigned int)v6,
                        v7,
                        v8,
                        v9,
                        v57,
                        v59,
                        v61,
                        v63,
                        v65,
                        v67,
                        v70,
                        v72,
                        a1,
                        v77,
                        v80,
                        v82,
                        (int)v85,
                        v86,
                        SDWORD2(v86),
                        v87,
                        (int)v88,
                        v89,
                        SDWORD2(v89),
                        v90,
                        (int)ptr,
                        v92,
                        SDWORD2(v92),
                        v93,
                        v94,
                        v95,
                        v96);
  if ( (debug & 1) != 0 )
    sub_383DA0();
  if ( max_strlit_length <= 1 )
    return 0;
  if ( !(_BYTE)v5 )
  {
    LODWORD(v15) = max_strlit_length - 1;
    if ( (*(_BYTE *)(v75 + 1232) & 4) != 0 )
    {
      LOBYTE(v15) = get_wide_byte((unsigned int)(v15 + HIDWORD(v78)));
    }
    else
    {
      v16 = (int)nbits(HIDWORD(v78)) / 8;
      v17 = (unsigned int)v15 % v16;
      sub_3BA160(*(_QWORD **)(v75 + 1480), (__int64 *)&ptr, (unsigned int)v15 / v16 + HIDWORD(v78));
      v18 = v16 - 1 - (unsigned int)v15 % v16;
      v19 = (unsigned __int64)ptr;
      if ( !(unsigned __int8)getinf_flag(3, 64) )
        LOBYTE(v18) = v17;
      v15 = v19 >> (8 * (unsigned __int8)v18);
    }
    if ( (_BYTE)v15 )
      return 0;
  }
  v89 = 0;
  v88 = nullptr;
  v69 = (v5 & 3) - 1;
  v85 = nullptr;
  v86 = 0;
  sub_358010(v75, (__int64 *)&v85, HIDWORD(v78), max_strlit_length, v5, nullptr, 0, (__int64 *)&v88, 0);
  ptr = nullptr;
  v92 = 0;
  if ( !(_QWORD)v89 )
  {
    v66 = ((_QWORD)v86 == 0) + (_QWORD)v86 - 1LL;
    goto LABEL_6;
  }
  p_ptr = &ptr;
  ptr = (void *)qvector_reserve(&ptr, 0, v89, 4);
  v20 = v89;
  v66 = ((_QWORD)v86 == 0) + (_QWORD)v86 - 1LL;
  if ( !(_QWORD)v89 )
  {
LABEL_6:
    if ( max_strlit_length > 0xF )
      goto LABEL_43;
LABEL_7:
    v11 = v74 | ((_BYTE)v78 == 3);
    if ( v11 )
    {
      v12 = 2;
      if ( (unsigned __int8)v5 == 4 )
      {
LABEL_10:
        v11 = max_strlit_length >= v12;
        goto LABEL_11;
      }
LABEL_9:
      v12 = 2LL * ((unsigned __int8)v5 != 8) + 3;
      goto LABEL_10;
    }
    if ( (unsigned __int8)v5 > 9u )
    {
      if ( (unsigned int)(unsigned __int8)v5 - 12 <= 1 )
      {
        if ( max_strlit_length != v66 + 4 )
          goto LABEL_11;
        goto LABEL_74;
      }
    }
    else
    {
      if ( (v5 & 0xF8) != 0 )
      {
        if ( max_strlit_length == v66 + 2 )
          goto LABEL_9;
LABEL_11:
        v13 = (unsigned __int64)getinf(10) >> 18;
        if ( ((unsigned __int8)v13 & (max_strlit_length == 2)) == 0 )
        {
          if ( v69 <= 1 && (BYTE4(v78) & 3) != 0 )
            goto LABEL_15;
LABEL_13:
          if ( v11 )
            goto LABEL_16;
          goto LABEL_14;
        }
        if ( (BYTE4(v78) & 3) != 0 )
        {
          if ( v69 <= 1 )
            goto LABEL_15;
          goto LABEL_86;
        }
        LOBYTE(v78) = v13 & (max_strlit_length == 2);
        v37 = getinf(5);
        v38 = (unsigned __int8)v78;
        if ( (unsigned int)v37 <= 0x17 )
        {
          v39 = -12583433;
          v38 = _bittest64(&v39, v37);
        }
        v40 = v38 & ((_BYTE)v5 == 0);
        if ( !v40 )
          goto LABEL_86;
        word = get_word((unsigned int)(HIDWORD(v78) + 2));
        v42 = (unsigned __int16)get_word(HIDWORD(v78));
        if ( word )
        {
          v48 = sub_8930A0(v42);
          v49 = sub_8930A0(word);
          v50 = sub_893240(v48);
          if ( v50 != (unsigned int)sub_893240(v49) )
            goto LABEL_86;
        }
        v43 = "UTF-16LE";
        if ( (unsigned __int8)getinf_flag(3, 32) )
          v43 = "UTF-16BE";
        v44 = ((unsigned int)add_encoding((int)v43) << 24) | 1;
        max_strlit_length = get_max_strlit_length(
                              SHIDWORD(v78),
                              v44,
                              0,
                              v45,
                              v46,
                              v47,
                              v58,
                              (int)p_ptr,
                              (int)&v88,
                              (int)&v85,
                              v66,
                              v68,
                              (int)v71,
                              v73,
                              v75,
                              v78,
                              v81,
                              v83,
                              (int)v85,
                              v86,
                              SDWORD2(v86),
                              v87,
                              (int)v88,
                              v89,
                              SDWORD2(v89),
                              v90,
                              (int)ptr,
                              v92,
                              SDWORD2(v92),
                              v93,
                              v94,
                              v95,
                              v96);
        if ( max_strlit_length <= 2 )
        {
LABEL_86:
          max_strlit_length = 2;
          goto LABEL_13;
        }
        *v71 = v44;
        if ( max_strlit_length <= 4 )
        {
LABEL_106:
          v11 = v40;
LABEL_14:
          if ( (unsigned __int8)is_debugger_memory(HIDWORD(v78)) )
            goto LABEL_15;
          v32 = HIDWORD(v78) - 1;
          if ( !(unsigned __int8)is_loaded((unsigned int)(HIDWORD(v78) - 1)) )
            goto LABEL_15;
          do
          {
            if ( (unsigned __int8)get_byte(v32) )
              break;
            flags = get_flags_ex(v32, 4);
            if ( (flags & 0x400) != 0 )
            {
              if ( (flags & 0x600) != 0x400 )
                break;
              v36 = flags & 0xF0000000;
              if ( v36 != 2952790016LL )
              {
                if ( v36 )
                  break;
              }
            }
            --v32;
          }
          while ( HIDWORD(v78) - 1024 != v32 );
          not_tail = prev_not_tail(v32 + 1);
          v35 = get_flags_ex(not_tail, 4);
          if ( (v35 & 0x600) != 0x400 || (v35 & 0xF0000000) != 0x50000000 )
            goto LABEL_15;
          if ( v11 && (unsigned int)(get_str_type(not_tail) & 3) - 1 > 1 )
          {
            max_strlit_length = 2;
            *v71 = 0;
          }
          goto LABEL_16;
        }
        *(_QWORD *)&v86 = 0;
        *(_QWORD *)&v89 = 0;
        *(_QWORD *)&v92 = 0;
        sub_358010(v76, v64, HIDWORD(v78), max_strlit_length, v44, nullptr, 0, v62, 0);
        v51 = v89;
        if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)v89 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v89, 4);
        }
        else if ( !(_QWORD)v89 )
        {
          goto LABEL_121;
        }
        v52 = 0;
        do
        {
          v84 = sub_8930A0(*((unsigned int *)v88 + v52));
          v55 = v84;
          v54 = ptr;
          v56 = v92;
          v53 = v92 + 1;
          if ( &v84 < ptr || &v84 >= (int *)((char *)ptr + 4 * *((_QWORD *)&v92 + 1)) )
          {
            if ( *((_QWORD *)&v92 + 1) < v53 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v53, 4);
              v54 = ptr;
              v56 = v92;
            }
            v54[v56] = v84;
          }
          else
          {
            if ( *((_QWORD *)&v92 + 1) < v53 )
            {
              v79 = v84;
              ptr = (void *)qvector_reserve(&ptr, ptr, v53, 4);
              v54 = ptr;
              v55 = v79;
              v56 = v92;
            }
            v54[v56] = v55;
          }
          ++v52;
          *(_QWORD *)&v92 = v92 + 1;
        }
        while ( v52 != v51 );
LABEL_121:
        if ( (unsigned int)sub_3F9E40(&ptr) != -1 )
          goto LABEL_16;
        goto LABEL_106;
      }
      if ( !(_BYTE)v5 )
      {
        if ( max_strlit_length != v66 + 1 )
          goto LABEL_11;
        goto LABEL_74;
      }
      if ( (unsigned __int8)v5 == 4 )
      {
        if ( max_strlit_length == v66 + 1 )
        {
          v12 = 2;
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    if ( max_strlit_length != v66 )
      goto LABEL_11;
LABEL_74:
    v12 = 5;
    goto LABEL_10;
  }
  v21 = 0;
  v22 = *(unsigned int *)v88;
  if ( (v5 & 3u) - 1 > 1 )
    goto LABEL_52;
  if ( (unsigned int)v22 > 0x80 )
    goto LABEL_15;
  while ( 1 )
  {
    v73 = sub_8930A0((unsigned int)v22);
    if ( (unsigned int)v22 > 0x1B )
    {
      if ( (unsigned int)v22 > 0x7F || !isprint(v22) )
      {
        if ( (_BYTE)v78 == 2 )
          goto LABEL_15;
        goto LABEL_36;
      }
      goto LABEL_47;
    }
    v23 = 134227840;
    if ( !_bittest64(&v23, v22) )
      break;
    v30 = v92;
    v31 = ptr;
    if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v92 + 1, 4);
      v31 = ptr;
      v30 = v92;
    }
    v31[v30] = v73;
    v29 = v92 + 1;
LABEL_50:
    ++v21;
    *(_QWORD *)&v92 = v29;
    if ( v21 != v20 )
    {
      v22 = *((unsigned int *)v88 + v21);
LABEL_52:
      if ( (_DWORD)v22 != -1 )
        continue;
    }
    goto LABEL_36;
  }
  if ( isprint(v22) )
  {
LABEL_47:
    v27 = v92;
    v28 = ptr;
    if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v92 + 1, 4);
      v27 = v92;
      v28 = ptr;
    }
    v28[v27] = v73;
    v29 = v92 + 1;
    goto LABEL_50;
  }
  if ( (_BYTE)v78 == 2 && ((_DWORD)v22 || v21 + 1 < v20) )
    goto LABEL_15;
LABEL_36:
  if ( v20 <= 3 )
    goto LABEL_6;
  v24 = 1;
  v25 = *(_DWORD *)v88;
  while ( 1 )
  {
    v26 = v25;
    v25 = *((_DWORD *)v88 + v24);
    if ( v25 <= 0x7F || v26 != v25 )
      break;
    if ( ++v24 == v20 )
      goto LABEL_41;
  }
  v20 = v24;
LABEL_41:
  if ( v20 > 4 )
    goto LABEL_15;
  if ( max_strlit_length <= 0xF )
    goto LABEL_7;
LABEL_43:
  if ( (unsigned int)sub_3F9E40(&ptr) == -1 )
LABEL_15:
    max_strlit_length = 0;
LABEL_16:
  if ( ptr )
  {
    *(_QWORD *)&v92 = 0;
    qfree(ptr);
  }
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    qfree(v88);
  }
  if ( v85 )
  {
    *(_QWORD *)&v86 = 0;
    qfree(v85);
  }
  return max_strlit_length;
}

