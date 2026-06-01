/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FB84
// Address: 0x0006FB84

//----- (0006FB84) --------------------------------------------------------
int __fastcall sub_6FB84(void **a1, char *s1, const char *a3, unsigned __int8 *a4, int a5, int a6)
{
  int v10; // r3
  const char *v11; // r0
  int v12; // r0
  iconv_t v13; // r4
  const char *v14; // r0
  size_t v15; // r0
  size_t v16; // r4
  size_t v17; // r0
  size_t v18; // r4
  char *v19; // r2
  char *v20; // r2
  unsigned int v21; // r9
  int v22; // r3
  _BYTE *v23; // r2
  _BYTE *v24; // r4
  int v26; // r0
  int v27; // r3
  int v28; // r0
  const char *v29; // r1
  int v30; // r3
  int v31; // r4
  const char *i; // r1
  size_t v33; // r0
  size_t v34; // r10
  size_t v35; // r11
  char *v36; // r1
  char *v37; // r1
  void *v38; // r0
  unsigned int v39; // r11
  void *v40; // r0
  unsigned int v41; // r11
  void *v42; // r0
  char *v43; // r2
  void *v44; // r0
  unsigned int v45; // r1
  void *v46; // r0
  char **inbuf; // [sp+14h] [bp-28h]
  char *v48; // [sp+1Ch] [bp-20h] BYREF
  size_t inbytesleft; // [sp+20h] [bp-1Ch] BYREF
  char *outbuf; // [sp+24h] [bp-18h] BYREF
  char *fromcode; // [sp+28h] [bp-14h] BYREF
  int v52; // [sp+2Ch] [bp-10h]
  unsigned int v53; // [sp+30h] [bp-Ch]

  if ( s1 )
  {
    v10 = (unsigned __int8)*s1;
    if ( v10 == 77 )
    {
      if ( !strcmp(s1, "MUTF-8") )
      {
        if ( a3 && *a3 == 85 && !strcmp(a3, "UTF-8") )
          return sub_757FC((int)a1, (unsigned int)a4, a5);
        else
          return sub_75304(a1, a3, a4, a5, a6);
      }
    }
    else if ( v10 == 85 )
    {
      v26 = strcmp(s1, "UTF-8");
      v27 = (int)a3;
      if ( a3 )
        v27 = 1;
      v28 = v26 ? 0 : v27;
      if ( v28 && *a3 == 77 && !strcmp(a3, "MUTF-8") )
        return sub_75480((int)a1, a4, a5);
    }
  }
  if ( dword_D3BA8 )
    v11 = (const char *)dword_D3BA4;
  else
    v11 = (const char *)&dword_8DA5C;
  v12 = strcmp(v11, s1);
  v13 = (iconv_t)dword_D3BBC;
  if ( v12 || (!dword_D3BB4 ? (v14 = (const char *)&dword_8DA5C) : (v14 = (const char *)dword_D3BB0), strcmp(v14, a3)) )
  {
    if ( v13 != (iconv_t)-1 )
    {
      iconv_close(v13);
      dword_D3BBC = -1;
    }
    if ( s1 && (v15 = strlen(s1), (v16 = v15) != 0) )
    {
      v41 = v15 + 1;
      v42 = (void *)dword_D3BA4;
      if ( v41 > dword_D3BAC )
      {
        v42 = sub_77EB0((int)&dword_D3BA4, (void *)dword_D3BA4, v41, 1u);
        dword_D3BA4 = (int)v42;
      }
      dword_D3BA8 = v41;
      memmove(v42, s1, v16);
      *(_BYTE *)(dword_D3BA4 + v16) = 0;
    }
    else
    {
      dword_D3BA8 = 0;
    }
    if ( a3 && (v17 = strlen(a3), (v18 = v17) != 0) )
    {
      v39 = v17 + 1;
      v40 = (void *)dword_D3BB0;
      if ( v39 > dword_D3BB8 )
      {
        v40 = sub_77EB0((int)&dword_D3BB0, (void *)dword_D3BB0, v39, 1u);
        dword_D3BB0 = (int)v40;
      }
      dword_D3BB4 = v39;
      memmove(v40, a3, v18);
      *(_BYTE *)(dword_D3BB0 + v18) = 0;
    }
    else
    {
      dword_D3BB4 = 0;
    }
    v13 = iconv_open(a3, s1);
    dword_D3BBC = (int)v13;
    if ( v13 != (iconv_t)-1 )
      goto LABEL_19;
    v30 = (unsigned __int8)*s1;
    if ( (v30 & 0xFFFFFF80) == 0 && (unsigned int)(v30 - 48) <= 9 )
    {
      fromcode = nullptr;
      v52 = 0;
      v53 = 0;
      fromcode = (char *)sub_77EB0((int)&fromcode, nullptr, 3u, 1u);
      v52 = 3;
      strcpy(fromcode, "CP");
      if ( s1 )
      {
        v33 = strlen(s1);
        v34 = v33;
        if ( v52 )
        {
          v35 = v33 + v52 - 1;
          inbuf = (char **)(v52 - 1);
        }
        else
        {
          inbuf = nullptr;
          v35 = v33;
        }
        v36 = fromcode;
        if ( v35 + 1 > v53 )
        {
          v36 = (char *)sub_77EB0((int)&fromcode, fromcode, v35 + 1, 1u);
          fromcode = v36;
        }
        v52 = v35 + 1;
        v36[v35] = 0;
        memmove((char *)inbuf + (_DWORD)fromcode, s1, v34);
      }
      if ( v52 )
        v37 = fromcode;
      else
        v37 = (char *)&dword_8DA5C;
      v13 = iconv_open(a3, v37);
      dword_D3BBC = (int)v13;
      if ( fromcode )
      {
        v52 = 0;
        sub_77E08(fromcode);
        v13 = (iconv_t)dword_D3BBC;
      }
      if ( v13 != (iconv_t)-1 )
        goto LABEL_19;
    }
    v31 = 0;
    for ( i = "cseuckr"; strcmp(s1, i); i = off_D0C68[2 * v31] )
    {
      if ( ++v31 == 10 )
        goto LABEL_60;
    }
    v29 = off_D0C68[2 * v31 + 1];
    if ( v29 )
    {
      v13 = iconv_open(a3, v29);
      dword_D3BBC = (int)v13;
      goto LABEL_50;
    }
LABEL_60:
    v13 = (iconv_t)dword_D3BBC;
  }
LABEL_50:
  if ( v13 == (iconv_t)-1 )
  {
    if ( debug < 0 )
      sub_68430((int)"convert_encoding(%s, %s): could not initialize iconv (bad encoding name?)\n", s1, a3);
    return -1;
  }
LABEL_19:
  iconv(v13, nullptr, nullptr, nullptr, nullptr);
  v19 = (char *)a1[1];
  v48 = (char *)a4;
  inbytesleft = a5;
  if ( (unsigned int)v19 < 0x400 )
  {
    v38 = *a1;
    if ( (unsigned int)a1[2] < 0x400 )
    {
      v38 = sub_77EB0((int)a1, *a1, 0x400u, 1u);
      v19 = (char *)a1[1];
      *a1 = v38;
    }
    memset(&v19[(_DWORD)v38], 0, 1024 - (_DWORD)v19);
    a1[1] = (void *)1024;
  }
  else if ( v19 != (char *)1024 )
  {
    a1[1] = (void *)1024;
  }
  v20 = (char *)*a1;
  v21 = 1024;
  fromcode = (char *)1024;
  for ( outbuf = v20; ; outbuf = (char *)v44 + v45 )
  {
    if ( iconv(v13, &v48, &inbytesleft, &outbuf, (size_t *)&fromcode) != -1 )
    {
      if ( inbytesleft )
      {
        if ( under_debugger )
          __und(0xFFu);
        sub_78AFC(17);
      }
      goto LABEL_30;
    }
    v22 = *_errno_location();
    if ( v22 != 7 )
      break;
    v43 = (char *)a1[1];
    v21 += 1024;
    v44 = *a1;
    if ( v21 > (unsigned int)v43 )
    {
      if ( v21 > (unsigned int)a1[2] )
      {
        v44 = sub_77EB0((int)a1, *a1, v21, 1u);
        v43 = (char *)a1[1];
        *a1 = v44;
      }
      memset(&v43[(_DWORD)v44], 0, v21 - (_DWORD)v43);
      a1[1] = (void *)v21;
      v44 = *a1;
    }
    else if ( v21 < (unsigned int)v43 )
    {
      a1[1] = (void *)v21;
    }
    v45 = v21 - (_DWORD)(fromcode + 1024);
    fromcode += 1024;
  }
  if ( v22 == 84 )
  {
    if ( debug < 0 )
      sub_68430((int)"convert_encoding(%s, %s): An invalid multibyte sequence is encountered in the input\n", s1, a3);
  }
  else if ( v22 == 22 )
  {
    if ( debug < 0 )
      sub_68430(
        (int)"convert_encoding(%s, %s): An incomplete multibyte sequence is encountered in the input, and the input byte "
             "sequence terminates after it.\n",
        s1,
        a3);
  }
  else if ( debug < 0 )
  {
    sub_68430((int)"convert_encoding(%s, %s): unknown error (%d).\n", s1, a3, v22);
  }
  if ( (a6 & 1) != 0 )
    return -1;
LABEL_30:
  v23 = a1[1];
  v24 = (_BYTE *)(v21 - (_DWORD)fromcode);
  if ( v21 - (unsigned int)fromcode > (unsigned int)v23 )
  {
    v46 = *a1;
    if ( v24 > a1[2] )
    {
      v46 = sub_77EB0((int)a1, *a1, v21 - (_DWORD)fromcode, 1u);
      v23 = a1[1];
      *a1 = v46;
    }
    memset(&v23[(_DWORD)v46], 0, v24 - v23);
    a1[1] = v24;
  }
  else if ( v21 - (unsigned int)fromcode < (unsigned int)v23 )
  {
    a1[1] = v24;
  }
  return a5 - inbytesleft;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D0C68: using guessed type char *off_D0C68[16];
// D3BA4: using guessed type int dword_D3BA4;
// D3BA8: using guessed type int dword_D3BA8;
// D3BAC: using guessed type int dword_D3BAC;
// D3BB0: using guessed type int dword_D3BB0;
// D3BB4: using guessed type int dword_D3BB4;
// D3BB8: using guessed type int dword_D3BB8;
// D3BBC: using guessed type int dword_D3BBC;
// D5BF8: using guessed type int debug;
// D5C00: using guessed type char under_debugger;
