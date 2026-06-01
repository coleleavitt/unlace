/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4854A8
// Address: 0x00000000004854A8

//----- (00000000004854A8) ----------------------------------------------------
__int64 __fastcall sub_4854A8(void **a1, char *s1, const char *a3, unsigned __int8 *a4, size_t a5, char a6)
{
  int v11; // w0
  const char *v12; // x0
  int v13; // w0
  iconv_t v14; // x25
  const char *v15; // x0
  __int64 v16; // x26
  size_t v18; // x0
  size_t v19; // x26
  size_t v20; // x0
  size_t v21; // x26
  char *v22; // x3
  unsigned __int64 v23; // x23
  int v24; // w3
  _BYTE *v25; // x3
  _BYTE *v26; // x23
  bool v27; // zf
  int v28; // w0
  const char *v29; // x1
  __int64 v30; // x26
  unsigned __int64 v31; // x28
  void *v32; // x0
  unsigned __int64 v33; // x25
  void *v34; // x0
  size_t v35; // x1
  size_t v36; // x25
  void *v37; // x0
  const char *v38; // x1
  void *v39; // x0
  void *v40; // x0
  char *v41; // x2
  const char *v42; // x1
  void *v43; // x0
  char **inbuf; // [xsp+70h] [xbp-50h]
  __int64 v46; // [xsp+78h] [xbp-48h]
  char *v47; // [xsp+88h] [xbp-38h] BYREF
  size_t inbytesleft; // [xsp+90h] [xbp-30h] BYREF
  char *outbuf; // [xsp+98h] [xbp-28h] BYREF
  void *ptr; // [xsp+A0h] [xbp-20h] BYREF
  __int64 v51; // [xsp+A8h] [xbp-18h]
  unsigned __int64 v52; // [xsp+B0h] [xbp-10h]

  if ( s1 )
  {
    v11 = (unsigned __int8)*s1;
    if ( v11 == 77 )
    {
      if ( !strcmp(s1, "MUTF-8") )
      {
        if ( a3 && *a3 == 85 && !strcmp(a3, "UTF-8") )
          return sub_48D630((__int64)a1, a4, a5);
        else
          return sub_48CDF0(a1, a3, a4, a5, a6);
      }
    }
    else if ( v11 == 85 )
    {
      v27 = strcmp(s1, "UTF-8") || a3 == nullptr;
      if ( !v27 && *a3 == 77 && !strcmp(a3, "MUTF-8") )
        return sub_48D068((__int64)a1, a4, a5);
    }
  }
  v12 = (const char *)qword_522470;
  if ( !qword_522478 )
    v12 = (const char *)&qword_4B2D48;
  v13 = strcmp(v12, s1);
  v14 = (iconv_t)qword_5224A0;
  if ( !v13 )
  {
    v15 = (const char *)&qword_4B2D48;
    if ( qword_522490 )
      v15 = (const char *)qword_522488;
    if ( !strcmp(v15, a3) )
      goto LABEL_10;
  }
  if ( v14 != (iconv_t)-1LL )
  {
    iconv_close(v14);
    qword_5224A0 = -1;
  }
  if ( s1 && (v18 = strlen(s1), (v19 = v18) != 0) )
  {
    v31 = v18 + 1;
    v32 = (void *)qword_522470;
    if ( v31 > qword_522480 )
    {
      v32 = sub_491288((__int64)&qword_522470, (void *)qword_522470, v31, 1u);
      qword_522470 = (__int64)v32;
    }
    qword_522478 = v31;
    memmove(v32, s1, v19);
    *(_BYTE *)(qword_522470 + v19) = 0;
    if ( !a3 )
      goto LABEL_20;
  }
  else
  {
    qword_522478 = 0;
    if ( !a3 )
    {
LABEL_20:
      qword_522490 = 0;
      goto LABEL_21;
    }
  }
  v20 = strlen(a3);
  v21 = v20;
  if ( !v20 )
    goto LABEL_20;
  v33 = v20 + 1;
  v34 = (void *)qword_522488;
  if ( v33 > qword_522498 )
  {
    v34 = sub_491288((__int64)&qword_522488, (void *)qword_522488, v33, 1u);
    qword_522488 = (__int64)v34;
  }
  qword_522490 = v33;
  memmove(v34, a3, v21);
  *(_BYTE *)(qword_522488 + v21) = 0;
LABEL_21:
  v14 = iconv_open(a3, s1);
  qword_5224A0 = (__int64)v14;
  if ( v14 == (iconv_t)-1LL )
  {
    v28 = (unsigned __int8)*s1;
    if ( (v28 & 0x80) != 0 || (unsigned int)(v28 - 48) > 9 )
      goto LABEL_48;
    ptr = nullptr;
    v51 = 0;
    v52 = 0;
    ptr = sub_491288((__int64)&ptr, nullptr, 3u, 1u);
    v51 = 3;
    strcpy((char *)ptr, "CP");
    if ( s1 )
    {
      v35 = strlen(s1);
      inbuf = (char **)v35;
      if ( v51 )
      {
        v46 = v51 - 1;
        v36 = v35 + v51 - 1;
      }
      else
      {
        v36 = v35;
        v46 = 0;
      }
      v37 = ptr;
      if ( v36 + 1 > v52 )
      {
        v37 = sub_491288((__int64)&ptr, ptr, v36 + 1, 1u);
        ptr = v37;
      }
      v51 = v36 + 1;
      *((_BYTE *)v37 + v36) = 0;
      memmove((char *)ptr + v46, s1, (size_t)inbuf);
    }
    v38 = (const char *)&qword_4B2D48;
    if ( v51 )
      v38 = (const char *)ptr;
    v14 = iconv_open(a3, v38);
    qword_5224A0 = (__int64)v14;
    if ( ptr )
    {
      v51 = 0;
      j__free(ptr);
      v14 = (iconv_t)qword_5224A0;
    }
    if ( v14 == (iconv_t)-1LL )
    {
LABEL_48:
      v29 = "cseuckr";
      v30 = 0;
      while ( strcmp(s1, v29) )
      {
        if ( ++v30 == 10 )
          goto LABEL_52;
        v29 = off_51C8B0[2 * v30];
      }
      v42 = off_51C8B0[2 * v30 + 1];
      if ( !v42 )
      {
LABEL_52:
        v14 = (iconv_t)qword_5224A0;
        goto LABEL_10;
      }
      v14 = iconv_open(a3, v42);
      qword_5224A0 = (__int64)v14;
LABEL_10:
      if ( v14 == (iconv_t)-1LL )
      {
        v16 = -1;
        if ( debug < 0 )
          sub_479E10((int)"convert_encoding(%s, %s): could not initialize iconv (bad encoding name?)\n", s1, a3);
        return v16;
      }
    }
  }
  iconv(v14, nullptr, nullptr, nullptr, nullptr);
  v22 = (char *)a1[1];
  v47 = (char *)a4;
  inbytesleft = a5;
  if ( (unsigned __int64)v22 <= 0x3FF )
  {
    v39 = *a1;
    if ( (unsigned __int64)a1[2] <= 0x3FF )
    {
      v39 = sub_491288((__int64)a1, *a1, 0x400u, 1u);
      *a1 = v39;
      v22 = (char *)a1[1];
    }
    memset(&v22[(_QWORD)v39], 0, 1024LL - (_QWORD)v22);
    a1[1] = (void *)1024;
  }
  else if ( v22 != (char *)1024 )
  {
    a1[1] = (void *)1024;
  }
  v23 = 1024;
  outbuf = (char *)*a1;
  for ( ptr = (void *)1024; ; outbuf = (char *)v40 + v23 - (_QWORD)ptr )
  {
    if ( iconv(v14, &v47, &inbytesleft, &outbuf, (size_t *)&ptr) != -1 )
    {
      if ( !inbytesleft )
        goto LABEL_32;
      if ( !under_debugger )
        sub_492270(17);
      __break(0x3E8u);
LABEL_92:
      sub_479E10((int)"convert_encoding(%s, %s): unknown error (%d).\n", s1, a3);
      goto LABEL_31;
    }
    v24 = *__errno_location();
    if ( v24 != 7 )
      break;
    v40 = *a1;
    v41 = (char *)a1[1];
    v23 += 1024LL;
    if ( v23 > (unsigned __int64)v41 )
    {
      if ( v23 > (unsigned __int64)a1[2] )
      {
        v40 = sub_491288((__int64)a1, *a1, v23, 1u);
        *a1 = v40;
        v41 = (char *)a1[1];
      }
      memset(&v41[(_QWORD)v40], 0, v23 - (_QWORD)v41);
      v40 = *a1;
      a1[1] = (void *)v23;
    }
    else if ( v23 < (unsigned __int64)v41 )
    {
      a1[1] = (void *)v23;
    }
    ptr = (char *)ptr + 1024;
  }
  if ( v24 == 84 )
  {
    if ( debug < 0 )
      sub_479E10((int)"convert_encoding(%s, %s): An invalid multibyte sequence is encountered in the input\n", s1, a3);
  }
  else
  {
    if ( v24 != 22 )
    {
      if ( (debug & 0x80000000) == 0 )
        goto LABEL_31;
      goto LABEL_92;
    }
    if ( debug < 0 )
      sub_479E10(
        (int)"convert_encoding(%s, %s): An incomplete multibyte sequence is encountered in the input, and the input byte "
             "sequence terminates after it.\n",
        s1,
        a3);
  }
LABEL_31:
  v16 = -1;
  if ( (a6 & 1) != 0 )
    return v16;
LABEL_32:
  v25 = a1[1];
  v26 = (_BYTE *)(v23 - (_QWORD)ptr);
  if ( v26 > v25 )
  {
    v43 = *a1;
    if ( v26 > a1[2] )
    {
      v43 = sub_491288((__int64)a1, *a1, (unsigned __int64)v26, 1u);
      *a1 = v43;
      v25 = a1[1];
    }
    memset(&v25[(_QWORD)v43], 0, v26 - v25);
    a1[1] = v26;
  }
  else if ( v26 < v25 )
  {
    a1[1] = v26;
  }
  return a5 - inbytesleft;
}
// 4854A8: could not find valid save-restore pair for x25
// 4854A8: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 51C8B0: using guessed type char *off_51C8B0[20];
// 522470: using guessed type __int64 qword_522470;
// 522478: using guessed type __int64 qword_522478;
// 522480: using guessed type __int64 qword_522480;
// 522488: using guessed type __int64 qword_522488;
// 522490: using guessed type __int64 qword_522490;
// 522498: using guessed type __int64 qword_522498;
// 5224A0: using guessed type __int64 qword_5224A0;
// 524514: using guessed type int debug;
// 52451C: using guessed type char under_debugger;
