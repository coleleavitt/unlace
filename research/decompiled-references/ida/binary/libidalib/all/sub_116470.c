__int64 __fastcall sub_116470(
        __int64 a1,
        const char **a2,
        __int64 *a3,
        unsigned __int16 a4,
        __int64 ***a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  const char *v13; // rbx
  size_t v14; // rax
  size_t v15; // r15
  __int64 **v16; // rbx
  int v17; // r15d
  int v18; // r14d
  unsigned int v19; // eax
  const char *v20; // rdi
  unsigned __int64 v21; // rax
  char v22; // bl
  __int64 **v23; // r13
  char *v25; // rbx
  void *v26; // rdi
  size_t v27; // r13
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // dx
  int v30; // eax
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 **v33; // rbx
  unsigned int v34; // edx
  const char *v35; // r8
  const char *v36; // rdi
  unsigned __int8 v40; // [rsp+23h] [rbp-CBDh]
  char *s1; // [rsp+28h] [rbp-CB8h]
  char *i; // [rsp+30h] [rbp-CB0h]
  int v43; // [rsp+38h] [rbp-CA8h]
  unsigned __int16 v44; // [rsp+3Ch] [rbp-CA4h] BYREF
  __int64 **v45; // [rsp+48h] [rbp-C98h] BYREF
  void *dest; // [rsp+50h] [rbp-C90h]
  __int128 v47; // [rsp+58h] [rbp-C88h]
  char *s2; // [rsp+70h] [rbp-C70h] BYREF
  __int128 v49; // [rsp+78h] [rbp-C68h]
  char s[2048]; // [rsp+4A0h] [rbp-840h] BYREF
  unsigned __int64 v51; // [rsp+CA8h] [rbp-38h]

  v44 = a4;
  v51 = __readfsqword(0x28u);
  v40 = a5 == nullptr || a3 == nullptr;
  if ( v40 )
    return 0;
  dest = nullptr;
  v47 = 0;
  while ( 1 )
  {
    v45 = nullptr;
    get_basic_file_type();
    setinf();
    v13 = aCOs2;
    if ( (unsigned int)getinf() != 7 )
      v13 = aCWindows;
    v14 = strlen(v13);
    v15 = v14;
    if ( v14 )
    {
      v26 = dest;
      v27 = v14 + 1;
      if ( *((_QWORD *)&v47 + 1) < v14 + 1 )
      {
        dest = (void *)qvector_reserve();
        v26 = dest;
      }
      *(_QWORD *)&v47 = v27;
      memmove(v26, v13, v15);
      *((_BYTE *)dest + v15) = 0;
    }
    else
    {
      *(_QWORD *)&v47 = 0;
    }
    getinf_buf();
    s2 = nullptr;
    v49 = 0;
    sub_115FF0((__int64)&s2, (__int64)&qword_254280);
    v16 = *a5;
    if ( !*a5 && (unsigned int)getinf() == 2 )
    {
      itext();
      qstrncpy();
      v43 = 0;
      v18 = 0;
LABEL_48:
      if ( (unsigned __int64)v49 > 1 )
      {
        v25 = s2;
        if ( !strncasecmp("Binary file", s2, v49 - 1) && v18 >= 0 )
        {
          LOWORD(v17) = v18;
          goto LABEL_30;
        }
        goto LABEL_67;
      }
      goto LABEL_49;
    }
    itext();
    qstrncpy();
    v17 = -1;
    v18 = 0;
    v43 = 0;
    for ( i = &s[strlen(s)]; v16; ++v18 )
    {
      while ( 1 )
      {
        if ( v17 == -1 && (unsigned __int64)v49 > 1 )
        {
          v20 = ::s1;
          if ( v16[5] )
            v20 = (const char *)v16[4];
          if ( !strncasecmp(v20, s2, v49 - 1) )
            v17 = v18;
        }
        qbasename();
        i += (int)qsnprintf();
        if ( *((_DWORD *)v16 + 20) != 11 )
        {
          qstrncpy();
          s1 = (char *)get_loader_name_from_dll();
          if ( strcmp(s1, "xbe") )
          {
            if ( strcmp(s1, "epoc") )
              break;
          }
        }
        v16 = (__int64 **)*v16;
        ++v18;
        v43 = 11;
        if ( !v16 )
          goto LABEL_27;
      }
      v19 = *((_DWORD *)v16 + 20);
      if ( v19 == 12 )
      {
        v43 = 12;
      }
      else if ( v19 > 0xC )
      {
        if ( v19 - 17 <= 1 )
          v43 = -1;
      }
      else if ( v19 == 4 )
      {
        v43 = 4;
      }
      else if ( v19 == 10 )
      {
        v43 = 10;
      }
      v16 = (__int64 **)*v16;
    }
LABEL_27:
    itext();
    qstpncpy();
    itext();
    qstpncpy();
    itext();
    qstrncpy();
    if ( v17 == -1 )
      goto LABEL_48;
    v21 = v49;
    if ( v17 >= 0 )
      goto LABEL_29;
    if ( (unsigned __int64)v49 > 1 )
    {
      v25 = s2;
LABEL_67:
      sub_92200((__int64)"AUTOHIDE REGISTRY\nThe requested file type '%s' could not be found", v25);
      if ( s2 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
        s2 = nullptr;
        *((_QWORD *)&v49 + 1) = 0;
      }
      v21 = v49;
      LOWORD(v17) = 0;
LABEL_29:
      if ( v21 > 1 )
        goto LABEL_30;
      goto LABEL_50;
    }
LABEL_49:
    LOWORD(v17) = 0;
LABEL_50:
    if ( qword_254280 )
    {
      *(_QWORD *)&xmmword_254288 = 0;
      qfree();
      qword_254280 = nullptr;
      *((_QWORD *)&xmmword_254288 + 1) = 0;
    }
LABEL_30:
    v22 = v44 & 0xF;
    switch ( v43 )
    {
      case -1:
        if ( (v44 & 0x1000) != 0 )
          v22 |= 0x10u;
        break;
      case 4:
      case 10:
      case 12:
        if ( (v44 & 0x10) != 0 )
          v22 |= 0x10u;
        break;
      case 11:
        if ( (v44 & 0x20) != 0 )
          v22 |= 0x10u;
        if ( (v44 & 0x400) != 0 )
          v22 |= 0x20u;
        break;
      default:
        break;
    }
    v23 = *a5;
    if ( *a5
      && !getinf()
      && ((unsigned int)(*((_DWORD *)v23 + 20) - 22) <= 1 || v23[5] && !strcmp((const char *)v23[4], "Amiga hunk file")) )
    {
      setinf();
    }
    is_debugger_on();
    sub_115350(*a5, (unsigned __int16)v17, &v45);
    if ( !v45 || ((_BYTE)v45[11] & 1) == 0 )
      break;
    if ( !(unsigned int)sub_116260(
                          a1,
                          a3,
                          (__int64)a2,
                          (__int64)&v44,
                          (__int64)&qword_254280,
                          (__int64)v45,
                          (__int64 *)a5) )
    {
      if ( s2 )
      {
        *(_QWORD *)&v49 = 0;
        qfree();
      }
      if ( !dest )
        return v40;
LABEL_55:
      *(_QWORD *)&v47 = 0;
      qfree();
      return v40;
    }
    if ( s2 )
    {
      *(_QWORD *)&v49 = 0;
      qfree();
    }
  }
  v28 = v22 & 0xF | v44 & 0xEBC0;
  if ( (v22 & 0x20) != 0 )
  {
    HIBYTE(v29) = ((unsigned __int16)(v44 & 0xEBC0) >> 8) | 4;
    LOBYTE(v29) = v22 & 0xF | v44 & 0xC0;
    v28 = v29;
  }
  v44 = v28;
  if ( (v22 & 0x10) != 0 )
  {
    switch ( v43 )
    {
      case -1:
        v44 |= 0x1000u;
        break;
      case 4:
      case 10:
      case 12:
        v44 |= 0x10u;
        break;
      case 11:
        v44 |= 0x20u;
        break;
      default:
        break;
    }
  }
  if ( s2 )
  {
    *(_QWORD *)&v49 = 0;
    qfree();
  }
  sub_115350(*a5, (unsigned __int16)v17, &v45);
  setinf();
  v30 = getinf();
  v33 = v45;
  v34 = v30 & 0xFFFFFFF7;
  if ( v45 && v45[5] )
  {
    if ( v34 != 5 && v30 != 2 && strcmp((const char *)v45[4], "Dump file") )
      goto LABEL_91;
LABEL_101:
    v44 |= 0x100u;
    goto LABEL_91;
  }
  if ( v34 == 5 || v30 == 2 )
    goto LABEL_101;
LABEL_91:
  if ( *(_QWORD *)(a1 + 8) > 1u )
    setinf_buf();
  v35 = ::s1;
  if ( (_QWORD)v47 )
    v35 = (const char *)dest;
  v36 = ::s1;
  if ( a2[1] )
    v36 = *a2;
  v40 = sub_115BD0(v36, *a3, (__m128)0LL, a7, a8, a9, v31, v32, a12, a13, v44, 0, (__int64)v35, (__int64)v33);
  if ( dest )
    goto LABEL_55;
  return v40;
}

