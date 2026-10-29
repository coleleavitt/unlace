__int64 __fastcall create_strlit(unsigned int a1, unsigned __int64 a2, int a3, int a4, int a5, int a6)
{
  int v6; // eax
  unsigned __int64 max_strlit_length; // rbp
  int v8; // r12d
  int v9; // r13d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned int data; // r15d
  int v14; // eax
  const char *v15; // rax
  char v16; // bp
  int v17; // ebp
  char *v18; // rsi
  unsigned __int8 v19; // al
  size_t v20; // rax
  __int64 v21; // rbp
  size_t v22; // r13
  size_t v23; // r14
  _BYTE *v24; // rsi
  size_t v25; // rdx
  char v26; // r14
  unsigned __int64 v27; // r12
  unsigned int utf8_char; // eax
  unsigned int v29; // eax
  wint_t v30; // ebp
  unsigned int v31; // eax
  size_t v32; // rax
  size_t v33; // r8
  __int64 v34; // rbp
  size_t v35; // r9
  size_t v36; // rdx
  void *v37; // rax
  int v38; // [rsp+0h] [rbp-D8h]
  int v39; // [rsp+8h] [rbp-D0h]
  __int64 v40; // [rsp+8h] [rbp-D0h]
  int v41; // [rsp+10h] [rbp-C8h]
  char v42; // [rsp+17h] [rbp-C1h]
  int v43; // [rsp+18h] [rbp-C0h]
  size_t v44; // [rsp+18h] [rbp-C0h]
  int v45; // [rsp+20h] [rbp-B8h]
  size_t v46; // [rsp+20h] [rbp-B8h]
  int v47; // [rsp+28h] [rbp-B0h]
  size_t v48; // [rsp+28h] [rbp-B0h]
  __int64 v49; // [rsp+30h] [rbp-A8h] BYREF
  const char *v50; // [rsp+38h] [rbp-A0h] BYREF
  void *v51; // [rsp+40h] [rbp-98h] BYREF
  __int128 v52; // [rsp+48h] [rbp-90h]
  int v53; // [rsp+58h] [rbp-80h]
  void *v54; // [rsp+60h] [rbp-78h] BYREF
  __int128 v55; // [rsp+68h] [rbp-70h]
  int src; // [rsp+78h] [rbp-60h] BYREF
  int s[6]; // [rsp+80h] [rbp-58h] BYREF
  int v58[2]; // [rsp+98h] [rbp-40h]
  int v59; // [rsp+A0h] [rbp-38h]
  int v60; // [rsp+A8h] [rbp-30h]
  int v61; // [rsp+B0h] [rbp-28h]
  int v62; // [rsp+B8h] [rbp-20h]
  int v63; // [rsp+C0h] [rbp-18h]
  int v64; // [rsp+C8h] [rbp-10h]
  __int64 v65; // [rsp+D0h] [rbp-8h]

  v6 = a3 & 3;
  max_strlit_length = a2;
  *(_QWORD *)v58 = __readfsqword(0x28u);
  v8 = a3;
  if ( v6 == 1 )
  {
    v8 = a3 | 1;
    v9 = 2;
  }
  else
  {
    v9 = 1;
    if ( v6 == 2 )
    {
      v8 = a3 | 2;
      v9 = 4;
    }
  }
  if ( !a2 )
  {
    max_strlit_length = get_max_strlit_length(
                          a1,
                          v8,
                          0,
                          a4,
                          a5,
                          a6,
                          v38,
                          v39,
                          v41,
                          v43,
                          v45,
                          v47,
                          v49,
                          (int)v50,
                          (int)v51,
                          (void *)v52,
                          *((__int64 *)&v52 + 1),
                          v53,
                          (int)v54,
                          v55,
                          SDWORD2(v55),
                          src,
                          s[0],
                          s[2],
                          s[4],
                          v58[0],
                          v59,
                          v60,
                          v61,
                          v62,
                          v63,
                          v64,
                          v65);
    if ( !max_strlit_length )
      return 0;
  }
  if ( (unsigned __int8)v8 > 0xAu )
  {
    v10 = 4;
    if ( (unsigned int)(unsigned __int8)v8 - 12 <= 2 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( (v8 & 0xF8) != 0 )
  {
    v10 = 2;
    goto LABEL_8;
  }
  v10 = 1;
  if ( (unsigned int)(unsigned __int8)v8 - 4 > 2 )
  {
LABEL_16:
    v11 = max_strlit_length;
    v10 = 0;
    goto LABEL_10;
  }
LABEL_8:
  if ( v10 >= max_strlit_length )
    return 0;
  v11 = max_strlit_length - v10;
LABEL_10:
  if ( v11 % v9 )
    return 0;
  if ( max_strlit_length < v10 + v9 )
    return 0;
  data = create_data(a1);
  if ( !(_BYTE)data )
    return 0;
  set_str_type(a1, (unsigned int)v8);
  v14 = v8 >> 24;
  if ( !HIBYTE(v8) )
    LOBYTE(v14) = get_default_encoding_idx((unsigned int)v9);
  if ( (int)get_encoding_bpu((unsigned __int8)v14) > 1 )
  {
    v19 = getinf(49);
    setinf(49, v19 | 8u);
  }
  if ( (getinf(49) & 1) != 0 && (get_flags_ex(a1, 4) & 0xC000) != 0x4000 )
  {
    v52 = 0;
    v49 = 64;
    v51 = nullptr;
    get_strlit_contents(&v51, a1, max_strlit_length, (unsigned int)v8, &v49, 0);
    v54 = nullptr;
    v15 = haystack;
    v55 = 0;
    if ( (_QWORD)v52 )
      v15 = (const char *)v51;
    v50 = v15;
    v16 = getinf(49);
    getinf_buf(53, s, 16);
    if ( (v16 & 4) != 0 )
    {
      v17 = getinf(54);
      setinf(54, (unsigned int)(v17 + 1));
      getinf(51);
      sub_3573A0((char **)&v54);
    }
    else
    {
      v42 = v16 & 0x20;
      v20 = strlen((const char *)s);
      v21 = v55;
      v22 = v20;
      v23 = v20;
      if ( (_QWORD)v55 )
      {
        v21 = v55 - 1;
        v23 = v20 + v55 - 1;
      }
      v24 = v54;
      v25 = v23 + 1;
      if ( *((_QWORD *)&v55 + 1) < v23 + 1 )
      {
        v54 = (void *)qvector_reserve(&v54, v54, v25, 1);
        v25 = v23 + 1;
        v24 = v54;
      }
      *(_QWORD *)&v55 = v25;
      v24[v23] = 0;
      v26 = data;
      memmove((char *)v54 + v21, s, v22);
      v40 = ((_QWORD)v55 == 0) + (_QWORD)v55 - 1LL;
      v27 = v40;
      while ( v27 < (unsigned __int16)getinf(34) )
      {
        if ( !*v50 )
          break;
        utf8_char = get_utf8_char(&v50);
        if ( utf8_char == -1 )
          break;
        v29 = (unsigned int)sub_8930A0(utf8_char) >> 24;
        if ( !v29 )
          goto LABEL_47;
        v30 = (unsigned __int8)v29;
        if ( !(unsigned __int8)is_valid_cp((unsigned __int8)v29, 2, 0) )
          goto LABEL_47;
        v31 = (unsigned int)sub_8930A0(v30) >> 16;
        if ( (unsigned __int8)(v31 - 6) > 5u && (unsigned __int8)(v31 - 15) > 2u )
          goto LABEL_47;
        if ( !v42 )
        {
          if ( v26 )
            v30 = towupper(v30);
          else
            v30 = towlower(v30);
        }
        if ( put_utf8_char(&src, v30) > 0 )
        {
          v32 = strlen((const char *)&src);
          v33 = v32;
          v34 = ((_QWORD)v55 == 0) + (_QWORD)v55 - 1LL;
          v35 = v32 + v34;
          v36 = v32 + ((_QWORD)v55 == 0) + (_QWORD)v55;
          if ( *((_QWORD *)&v55 + 1) < v36 )
          {
            v48 = v32;
            v46 = v32 + v34;
            v44 = v32 + ((_QWORD)v55 == 0) + (_QWORD)v55;
            v37 = (void *)qvector_reserve(&v54, v54, v36, 1);
            v33 = v48;
            v35 = v46;
            v54 = v37;
            v36 = v44;
          }
          *(_QWORD *)&v55 = v36;
          ++v27;
          v26 = 0;
          *((_BYTE *)v54 + v35) = 0;
          memmove((char *)v54 + v34, &src, v33);
        }
        else
        {
LABEL_47:
          v26 = data;
        }
      }
      if ( v27 == v40 )
      {
        *(_QWORD *)&v55 = 0;
        goto LABEL_64;
      }
    }
    if ( (_QWORD)v55 )
    {
      v18 = (char *)v54;
      goto LABEL_33;
    }
LABEL_64:
    v18 = (char *)haystack;
LABEL_33:
    if ( !(unsigned __int8)set_name(a1, v18) && (get_flags_ex(a1, 4) & 0x1000) != 0 )
      set_dummy_name(0xFFFFFFFFLL, a1);
    if ( (getinf(49) & 2) != 0 )
      make_name_auto(a1);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54);
    }
    if ( v51 )
    {
      *(_QWORD *)&v52 = 0;
      qfree(v51);
    }
  }
  return data;
}

