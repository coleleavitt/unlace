unsigned __int64 __fastcall sub_40DAB0(__int64 a1, unsigned __int64 a2, char a3, char a4, unsigned int *a5)
{
  unsigned int v5; // r12d
  unsigned __int8 v6; // al
  unsigned __int64 max_strlit_length; // rbx
  char v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  char v16; // al
  char v17; // cl
  unsigned __int64 v18; // r13
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  _DWORD *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  _DWORD *v29; // rsi
  unsigned __int64 v30; // r12
  int flags; // eax
  __int64 not_tail; // r15
  int v33; // eax
  unsigned __int64 v34; // r14
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int8 v37; // dl
  __int64 v38; // rdx
  char v39; // r12
  unsigned __int16 word; // bx
  __int64 v41; // rdi
  const char *v42; // rdi
  unsigned int v43; // r15d
  unsigned int v44; // r15d
  int v45; // ebx
  __int64 v46; // r13
  unsigned __int64 v47; // rdx
  _DWORD *v48; // rsi
  int v49; // r8d
  __int64 v50; // rax
  __int64 v51; // [rsp+20h] [rbp-D0h]
  unsigned int v53; // [rsp+30h] [rbp-C0h]
  int v54; // [rsp+34h] [rbp-BCh]
  unsigned __int8 v58; // [rsp+44h] [rbp-ACh]
  unsigned int v59; // [rsp+44h] [rbp-ACh]
  int v60; // [rsp+44h] [rbp-ACh]
  int v62; // [rsp+5Ch] [rbp-94h] BYREF
  void *v63; // [rsp+60h] [rbp-90h] BYREF
  __int128 v64; // [rsp+68h] [rbp-88h]
  void *v65; // [rsp+80h] [rbp-70h] BYREF
  __int128 v66; // [rsp+88h] [rbp-68h]
  void *ptr; // [rsp+A0h] [rbp-50h] BYREF
  __int128 v68; // [rsp+A8h] [rbp-48h]
  unsigned __int64 v69; // [rsp+B8h] [rbp-38h]

  v69 = __readfsqword(0x28u);
  v5 = *a5;
  v6 = getinf_flag(11, 8);
  max_strlit_length = get_max_strlit_length(a2, v5, 32 * (unsigned int)v6);
  if ( (debug & 1) != 0 )
    sub_3879F0();
  if ( max_strlit_length <= 1 )
    return 0;
  if ( !(_BYTE)v5 )
  {
    v12 = max_strlit_length - 1;
    if ( (*(_BYTE *)(a1 + 1400) & 4) != 0 )
    {
      LOBYTE(v12) = get_wide_byte(v12 + a2);
    }
    else
    {
      v13 = (unsigned int)((int)nbits(a2) / 8);
      v14 = v12 % v13;
      sub_3BEFF0(*(__int64 **)(a1 + 1672), (__int64 *)&ptr, v12 / v13 + a2);
      v15 = (unsigned __int64)ptr;
      v16 = getinf_flag(3, 64);
      v17 = v13 - 1 - v14;
      if ( !v16 )
        v17 = v14;
      v12 = v15 >> (8 * v17);
    }
    if ( (_BYTE)v12 )
      return 0;
  }
  v66 = 0;
  v65 = nullptr;
  v53 = (v5 & 3) - 1;
  v63 = nullptr;
  v64 = 0;
  sub_35B410(a1, (__int64 *)&v63, a2, max_strlit_length, v5, nullptr, 0, (__int64 *)&v65, nullptr);
  ptr = nullptr;
  v68 = 0;
  if ( !(_QWORD)v66 )
  {
    v51 = ((_QWORD)v64 == 0) + (_QWORD)v64 - 1LL;
    goto LABEL_6;
  }
  ptr = (void *)qvector_reserve(&ptr, 0, v66, 4);
  v18 = v66;
  v51 = ((_QWORD)v64 == 0) + (_QWORD)v64 - 1LL;
  if ( !(_QWORD)v66 )
  {
LABEL_6:
    if ( max_strlit_length > 0xF )
      goto LABEL_43;
LABEL_7:
    v8 = a3 | (a4 == 3);
    if ( v8 )
    {
      v9 = 2;
      if ( (unsigned __int8)v5 == 4 )
      {
LABEL_10:
        v8 = max_strlit_length >= v9;
        goto LABEL_11;
      }
LABEL_9:
      v9 = 2LL * ((unsigned __int8)v5 != 8) + 3;
      goto LABEL_10;
    }
    if ( (unsigned __int8)v5 > 9u )
    {
      if ( (unsigned int)(unsigned __int8)v5 - 12 <= 1 )
      {
        if ( max_strlit_length != v51 + 4 )
          goto LABEL_11;
        goto LABEL_74;
      }
    }
    else
    {
      if ( (v5 & 0xF8) != 0 )
      {
        if ( max_strlit_length == v51 + 2 )
          goto LABEL_9;
LABEL_11:
        v10 = (unsigned __int64)getinf(10) >> 18;
        if ( ((unsigned __int8)v10 & (max_strlit_length == 2)) == 0 )
        {
          if ( v53 <= 1 && (a2 & 3) != 0 )
            goto LABEL_15;
LABEL_13:
          if ( v8 )
            goto LABEL_16;
          goto LABEL_14;
        }
        v34 = a2 & 3;
        if ( (a2 & 3) != 0 )
        {
          if ( v53 <= 1 )
            goto LABEL_15;
          goto LABEL_86;
        }
        v58 = v10 & (max_strlit_length == 2);
        v36 = getinf(5);
        v37 = v58;
        if ( (unsigned int)v36 <= 0x17 )
        {
          v38 = -12583433;
          v37 = _bittest64(&v38, v36);
        }
        v39 = v37 & ((_BYTE)v5 == 0);
        if ( !v39 )
          goto LABEL_86;
        word = get_word(a2 + 2);
        v41 = (unsigned __int16)get_word(a2);
        if ( word )
        {
          v44 = sub_8B6A20(v41);
          v59 = sub_8B6A20(word);
          v45 = sub_8B6BD0(v44);
          if ( v45 != (unsigned int)sub_8B6BD0(v59) )
            goto LABEL_86;
        }
        v42 = "UTF-16LE";
        if ( (unsigned __int8)getinf_flag(3, 32) )
          v42 = "UTF-16BE";
        v43 = ((unsigned int)add_encoding((int)v42) << 24) | 1;
        max_strlit_length = get_max_strlit_length(a2, v43, 0);
        if ( max_strlit_length <= 2 )
        {
LABEL_86:
          max_strlit_length = 2;
          goto LABEL_13;
        }
        *a5 = v43;
        if ( max_strlit_length <= 4 )
        {
LABEL_106:
          v8 = v39;
LABEL_14:
          if ( (unsigned __int8)is_debugger_memory(a2) )
            goto LABEL_15;
          v30 = a2 - 1;
          if ( !(unsigned __int8)is_loaded(a2 - 1) )
            goto LABEL_15;
          do
          {
            if ( (unsigned __int8)get_byte(v30) )
              break;
            flags = get_flags_ex(v30, 4);
            if ( (flags & 0x400) != 0 )
            {
              if ( (flags & 0x600) != 0x400 )
                break;
              v35 = flags & 0xF0000000;
              if ( v35 != 2952790016LL )
              {
                if ( v35 )
                  break;
              }
            }
            --v30;
          }
          while ( a2 - 1024 != v30 );
          not_tail = prev_not_tail(v30 + 1);
          v33 = get_flags_ex(not_tail, 4);
          if ( (v33 & 0x600) != 0x400 || (v33 & 0xF0000000) != 0x50000000 )
            goto LABEL_15;
          if ( v8 && (unsigned int)(get_str_type(not_tail) & 3) - 1 > 1 )
          {
            max_strlit_length = 2;
            *a5 = 0;
          }
          goto LABEL_16;
        }
        *(_QWORD *)&v64 = 0;
        *(_QWORD *)&v66 = 0;
        *(_QWORD *)&v68 = 0;
        sub_35B410(a1, (__int64 *)&v63, a2, max_strlit_length, v43, nullptr, 0, (__int64 *)&v65, nullptr);
        v46 = v66;
        if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)v66 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v66, 4);
        }
        else if ( !(_QWORD)v66 )
        {
          goto LABEL_121;
        }
        do
        {
          v62 = sub_8B6A20(*((unsigned int *)v65 + v34));
          v49 = v62;
          v48 = ptr;
          v50 = v68;
          v47 = v68 + 1;
          if ( &v62 < ptr || &v62 >= (int *)((char *)ptr + 4 * *((_QWORD *)&v68 + 1)) )
          {
            if ( *((_QWORD *)&v68 + 1) < v47 )
            {
              ptr = (void *)qvector_reserve(&ptr, ptr, v47, 4);
              v48 = ptr;
              v50 = v68;
            }
            v48[v50] = v62;
          }
          else
          {
            if ( *((_QWORD *)&v68 + 1) < v47 )
            {
              v60 = v62;
              ptr = (void *)qvector_reserve(&ptr, ptr, v47, 4);
              v48 = ptr;
              v49 = v60;
              v50 = v68;
            }
            v48[v50] = v49;
          }
          ++v34;
          *(_QWORD *)&v68 = v68 + 1;
        }
        while ( v34 != v46 );
LABEL_121:
        if ( (unsigned int)sub_40CF80(&ptr) != -1 )
          goto LABEL_16;
        goto LABEL_106;
      }
      if ( !(_BYTE)v5 )
      {
        if ( max_strlit_length != v51 + 1 )
          goto LABEL_11;
        goto LABEL_74;
      }
      if ( (unsigned __int8)v5 == 4 )
      {
        if ( max_strlit_length == v51 + 1 )
        {
          v9 = 2;
          goto LABEL_10;
        }
        goto LABEL_11;
      }
    }
    if ( max_strlit_length != v51 )
      goto LABEL_11;
LABEL_74:
    v9 = 5;
    goto LABEL_10;
  }
  v19 = 0;
  v20 = *(unsigned int *)v65;
  if ( (v5 & 3) - 1 > 1 )
    goto LABEL_52;
  if ( (unsigned int)v20 > 0x80 )
    goto LABEL_15;
  while ( 1 )
  {
    v54 = sub_8B6A20((unsigned int)v20);
    if ( (unsigned int)v20 > 0x1B )
    {
      if ( (unsigned int)v20 > 0x7F || !isprint(v20) )
      {
        if ( a4 == 2 )
          goto LABEL_15;
        goto LABEL_36;
      }
      goto LABEL_47;
    }
    v21 = 134227840;
    if ( !_bittest64(&v21, v20) )
      break;
    v28 = v68;
    v29 = ptr;
    if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v68 + 1, 4);
      v29 = ptr;
      v28 = v68;
    }
    v29[v28] = v54;
    v27 = v68 + 1;
LABEL_50:
    ++v19;
    *(_QWORD *)&v68 = v27;
    if ( v19 != v18 )
    {
      v20 = *((unsigned int *)v65 + v19);
LABEL_52:
      if ( (_DWORD)v20 != -1 )
        continue;
    }
    goto LABEL_36;
  }
  if ( isprint(v20) )
  {
LABEL_47:
    v25 = v68;
    v26 = ptr;
    if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v68 + 1, 4);
      v25 = v68;
      v26 = ptr;
    }
    v26[v25] = v54;
    v27 = v68 + 1;
    goto LABEL_50;
  }
  if ( a4 == 2 && ((_DWORD)v20 || v19 + 1 < v18) )
    goto LABEL_15;
LABEL_36:
  if ( v18 <= 3 )
    goto LABEL_6;
  v22 = 1;
  v23 = *(_DWORD *)v65;
  while ( 1 )
  {
    v24 = v23;
    v23 = *((_DWORD *)v65 + v22);
    if ( v23 <= 0x7F || v24 != v23 )
      break;
    if ( ++v22 == v18 )
      goto LABEL_41;
  }
  v18 = v22;
LABEL_41:
  if ( v18 > 4 )
    goto LABEL_15;
  if ( max_strlit_length <= 0xF )
    goto LABEL_7;
LABEL_43:
  if ( (unsigned int)sub_40CF80(&ptr) == -1 )
LABEL_15:
    max_strlit_length = 0;
LABEL_16:
  if ( ptr )
  {
    *(_QWORD *)&v68 = 0;
    qfree(ptr);
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    qfree(v65);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  return max_strlit_length;
}
