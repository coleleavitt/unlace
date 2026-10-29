__int64 __fastcall create_strlit(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  unsigned __int64 max_strlit_length; // rbp
  int v5; // r12d
  int v6; // r13d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned int data; // r15d
  int v11; // eax
  const char *v12; // rax
  char v13; // bp
  __int64 v14; // rbp
  char *v15; // rsi
  unsigned __int8 v16; // al
  size_t v17; // rax
  __int64 v18; // rbp
  size_t v19; // r13
  size_t v20; // r14
  _BYTE *v21; // rsi
  size_t v22; // rdx
  char v23; // r14
  unsigned __int64 v24; // r12
  unsigned int utf8_char; // eax
  unsigned int v26; // eax
  wint_t v27; // ebp
  unsigned int v28; // eax
  size_t v29; // rax
  size_t v30; // r8
  __int64 v31; // rbp
  size_t v32; // r9
  size_t v33; // rdx
  void *v34; // rax
  __int64 v35; // [rsp+8h] [rbp-D0h]
  char v36; // [rsp+17h] [rbp-C1h]
  size_t v37; // [rsp+18h] [rbp-C0h]
  size_t v38; // [rsp+20h] [rbp-B8h]
  size_t v39; // [rsp+28h] [rbp-B0h]
  __int64 v40; // [rsp+30h] [rbp-A8h] BYREF
  const char *v41; // [rsp+38h] [rbp-A0h] BYREF
  void *v42; // [rsp+40h] [rbp-98h] BYREF
  __int128 v43; // [rsp+48h] [rbp-90h]
  void *v44; // [rsp+60h] [rbp-78h] BYREF
  __int128 v45; // [rsp+68h] [rbp-70h]
  char src[8]; // [rsp+78h] [rbp-60h] BYREF
  char s[24]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v3 = a3 & 3;
  max_strlit_length = a2;
  v48 = __readfsqword(0x28u);
  v5 = a3;
  if ( v3 == 1 )
  {
    v5 = a3 | 1;
    v6 = 2;
  }
  else
  {
    v6 = 1;
    if ( v3 == 2 )
    {
      v5 = a3 | 2;
      v6 = 4;
    }
  }
  if ( !a2 )
  {
    max_strlit_length = get_max_strlit_length(a1, v5, 0);
    if ( !max_strlit_length )
      return 0;
  }
  if ( (unsigned __int8)v5 > 0xAu )
  {
    v7 = 4;
    if ( (unsigned int)(unsigned __int8)v5 - 12 <= 2 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( (v5 & 0xF8) != 0 )
  {
    v7 = 2;
    goto LABEL_8;
  }
  v7 = 1;
  if ( (unsigned int)(unsigned __int8)v5 - 4 > 2 )
  {
LABEL_16:
    v8 = max_strlit_length;
    v7 = 0;
    goto LABEL_10;
  }
LABEL_8:
  if ( v7 >= max_strlit_length )
    return 0;
  v8 = max_strlit_length - v7;
LABEL_10:
  if ( v8 % v6 )
    return 0;
  if ( max_strlit_length < v7 + v6 )
    return 0;
  data = create_data(a1);
  if ( !(_BYTE)data )
    return 0;
  set_str_type(a1, (unsigned int)v5);
  v11 = v5 >> 24;
  if ( !HIBYTE(v5) )
    LOBYTE(v11) = get_default_encoding_idx((unsigned int)v6);
  if ( (int)get_encoding_bpu((unsigned __int8)v11) > 1 )
  {
    v16 = getinf(49);
    setinf(49, v16 | 8u);
  }
  if ( (getinf(49) & 1) != 0 && (get_flags_ex(a1, 4) & 0xC000) != 0x4000 )
  {
    v43 = 0;
    v40 = 64;
    v42 = nullptr;
    get_strlit_contents((__int64 *)&v42, a1, max_strlit_length, v5, &v40, 0);
    v44 = nullptr;
    v12 = haystack;
    v45 = 0;
    if ( (_QWORD)v43 )
      v12 = (const char *)v42;
    v41 = v12;
    v13 = getinf(49);
    getinf_buf(53, s, 16);
    if ( (v13 & 4) != 0 )
    {
      v14 = getinf(54);
      setinf(54, v14 + 1);
      getinf(51);
      sub_35A790((char **)&v44);
    }
    else
    {
      v36 = v13 & 0x20;
      v17 = strlen(s);
      v18 = v45;
      v19 = v17;
      v20 = v17;
      if ( (_QWORD)v45 )
      {
        v18 = v45 - 1;
        v20 = v17 + v45 - 1;
      }
      v21 = v44;
      v22 = v20 + 1;
      if ( *((_QWORD *)&v45 + 1) < v20 + 1 )
      {
        v44 = (void *)qvector_reserve(&v44, v44, v22, 1);
        v22 = v20 + 1;
        v21 = v44;
      }
      *(_QWORD *)&v45 = v22;
      v21[v20] = 0;
      v23 = data;
      memmove((char *)v44 + v18, s, v19);
      v35 = ((_QWORD)v45 == 0) + (_QWORD)v45 - 1LL;
      v24 = v35;
      while ( v24 < (unsigned __int16)getinf(34) )
      {
        if ( !*v41 )
          break;
        utf8_char = get_utf8_char(&v41);
        if ( utf8_char == -1 )
          break;
        v26 = (unsigned int)sub_8B6A20(utf8_char) >> 24;
        if ( !v26 )
          goto LABEL_47;
        v27 = (unsigned __int8)v26;
        if ( !(unsigned __int8)is_valid_cp((unsigned __int8)v26, 2, 0) )
          goto LABEL_47;
        v28 = (unsigned int)sub_8B6A20(v27) >> 16;
        if ( (unsigned __int8)(v28 - 6) > 5u && (unsigned __int8)(v28 - 15) > 2u )
          goto LABEL_47;
        if ( !v36 )
        {
          if ( v23 )
            v27 = towupper(v27);
          else
            v27 = towlower(v27);
        }
        if ( put_utf8_char(src, v27) > 0 )
        {
          v29 = strlen(src);
          v30 = v29;
          v31 = ((_QWORD)v45 == 0) + (_QWORD)v45 - 1LL;
          v32 = v29 + v31;
          v33 = v29 + ((_QWORD)v45 == 0) + (_QWORD)v45;
          if ( *((_QWORD *)&v45 + 1) < v33 )
          {
            v39 = v29;
            v38 = v29 + v31;
            v37 = v29 + ((_QWORD)v45 == 0) + (_QWORD)v45;
            v34 = (void *)qvector_reserve(&v44, v44, v33, 1);
            v30 = v39;
            v32 = v38;
            v44 = v34;
            v33 = v37;
          }
          *(_QWORD *)&v45 = v33;
          ++v24;
          v23 = 0;
          *((_BYTE *)v44 + v32) = 0;
          memmove((char *)v44 + v31, src, v30);
        }
        else
        {
LABEL_47:
          v23 = data;
        }
      }
      if ( v24 == v35 )
      {
        *(_QWORD *)&v45 = 0;
        goto LABEL_64;
      }
    }
    if ( (_QWORD)v45 )
    {
      v15 = (char *)v44;
      goto LABEL_33;
    }
LABEL_64:
    v15 = (char *)haystack;
LABEL_33:
    if ( !(unsigned __int8)set_name(a1, v15) && (get_flags_ex(a1, 4) & 0x1000) != 0 )
      set_dummy_name(-1, a1);
    if ( (getinf(49) & 2) != 0 )
      make_name_auto(a1);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44);
    }
    if ( v42 )
    {
      *(_QWORD *)&v43 = 0;
      qfree(v42);
    }
  }
  return data;
}
