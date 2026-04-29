__int64 __fastcall sub_20B680(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r12
  bool v6; // zf
  __int64 v7; // r15
  int v8; // edx
  int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v18; // rax
  _QWORD *v19; // r12
  const char *v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r14
  char *v23; // rax
  unsigned __int64 v24; // rbp
  int v25; // r15d
  char *v26; // r13
  __int64 v27; // rbx
  __int64 v28; // r12
  __int64 v29; // rax
  const char *v30; // r11
  const char *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rsi
  char *v34; // rdi
  char *v35; // r12
  __int64 v36; // rax
  char *v37; // rdx
  __m128i v38; // xmm0
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  int j; // r12d
  char *v43; // rsi
  const char *v44; // rdi
  unsigned __int8 v45; // [rsp+8h] [rbp-130h]
  int i; // [rsp+10h] [rbp-128h]
  char v47; // [rsp+10h] [rbp-128h]
  __int64 v48; // [rsp+18h] [rbp-120h]
  int tinfo_size; // [rsp+20h] [rbp-118h]
  __int64 v50; // [rsp+28h] [rbp-110h]
  unsigned __int8 tinfo_details; // [rsp+32h] [rbp-106h]
  char v52; // [rsp+33h] [rbp-105h]
  int v53; // [rsp+34h] [rbp-104h]
  char *v54; // [rsp+38h] [rbp-100h]
  __int64 v55; // [rsp+48h] [rbp-F0h] BYREF
  const char *tinfo_property; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v57; // [rsp+58h] [rbp-E0h]
  __int64 v58; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v59; // [rsp+78h] [rbp-C0h]
  __int64 v60; // [rsp+88h] [rbp-B0h]
  __int64 v61; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v63; // [rsp+A0h] [rbp-98h]
  __int64 v64; // [rsp+B0h] [rbp-88h]
  __int128 v65; // [rsp+B8h] [rbp-80h]
  char v66; // [rsp+C8h] [rbp-70h]
  char *s2; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v68; // [rsp+D8h] [rbp-60h]
  __int64 v69; // [rsp+E8h] [rbp-50h]
  _QWORD v70[9]; // [rsp+F0h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a1;
  tinfo_details = a3;
  v70[1] = __readfsqword(0x28u);
  v60 = 0;
  v5 = sub_252170(a1 + 16);
  v61 = 0;
  v62 = 0;
  v64 = 0;
  v66 = 16;
  s2 = nullptr;
  v69 = -1;
  v70[0] = 0xFFFFFFFF00000000LL;
  v59 = 0;
  v63 = 0;
  v65 = 0;
  v68 = 0;
  v6 = *(_DWORD *)(v5 + 8) == 57;
  v58 = 0;
  if ( !v6 )
    goto LABEL_7;
  v7 = *(_QWORD *)(v5 + 24);
  if ( a2 == v7 )
    goto LABEL_7;
  v8 = *(_DWORD *)(v7 + 8);
  if ( v8 == 51 )
  {
    v9 = 1;
    do
    {
      LODWORD(v70[0]) = v9;
      v7 = *(_QWORD *)(v7 + 24);
      ++v9;
      v8 = *(_DWORD *)(v7 + 8);
    }
    while ( v8 == 51 );
  }
  if ( v8 != 64 )
  {
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  v55 = 0;
  v48 = *(_QWORD *)(a1 + 216);
  if ( (get_aflags(*(_QWORD *)(v7 + 24)) & 0x2000000) != 0
    || !(unsigned __int8)sub_37BE20(v48, *(_QWORD *)(v7 + 24), &v55, 2) )
  {
    goto LABEL_50;
  }
  for ( i = 0; i < SLODWORD(v70[0]); ++i )
  {
    tinfo_property = nullptr;
    tinfo_property = (const char *)get_tinfo_property(v55, 10);
    copy_tinfo_t(&v55, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
  }
  if ( (get_tinfo_property(v55, 2) & 0xF) == 0xA )
  {
    tinfo_property = nullptr;
    tinfo_property = (const char *)get_tinfo_property(v55, 10);
    copy_tinfo_t(&v55, &tinfo_property);
    clear_tinfo_t(&tinfo_property);
    ++LODWORD(v70[0]);
  }
  if ( (get_tinfo_property(v55, 2) & 0xF) != 0xC )
  {
    if ( !under_debugger )
      sub_37DDE0(52514);
    BUG();
  }
  v18 = *(_QWORD *)(v5 + 24);
  tinfo_property = nullptr;
  tinfo_property = (const char *)get_tinfo_property(*(_QWORD *)(v18 + 48), 10);
  v47 = compare_tinfo(v55, tinfo_property, 8);
  clear_tinfo_t(&tinfo_property);
  if ( !v47 )
    goto LABEL_50;
  if ( !(unsigned __int8)get_tinfo_details(v55, 12, &v58) )
    goto LABEL_50;
  if ( !sub_27F760(v5, a2, (char *)v70 + 4) )
    goto LABEL_50;
  if ( SHIDWORD(v70[0]) >= (unsigned __int64)v59 )
    goto LABEL_50;
  v19 = (_QWORD *)(v58 + 80LL * SHIDWORD(v70[0]));
  tinfo_size = get_tinfo_size(0, v19[8], 0);
  if ( v19[3] > 1u && !(unsigned __int8)sub_208D80(*(_DWORD **)(v48 + 112), (__int64)(v19 + 2), tinfo_size) )
    goto LABEL_50;
  v52 = sub_20A630((__int64 *)&s2, *(const char **)(a1 + 8), 0xFFFFFFFF, a2, 0xFFFFFFFF);
  if ( !v52 )
    goto LABEL_50;
  if ( !v19[3] )
  {
    v20 = s1;
    if ( !v68.m128i_i64[0] )
      goto LABEL_50;
    goto LABEL_57;
  }
  v20 = (const char *)v19[2];
  if ( v68.m128i_i64[0] )
  {
LABEL_57:
    v35 = s2;
    if ( !strcmp(s2, v20) || !strcmp(v35, "result") || !strcmp(v35, "this") && HIDWORD(v70[0]) )
      goto LABEL_50;
    goto LABEL_35;
  }
  if ( !*v20 )
  {
LABEL_50:
    clear_tinfo_t(&v55);
    v34 = s2;
    goto LABEL_51;
  }
LABEL_35:
  if ( (unsigned __int8)sub_208D80(*(_DWORD **)(v48 + 112), (__int64)&s2, tinfo_size) )
    goto LABEL_50;
  tinfo_property = nullptr;
  v57 = 0;
  if ( !(unsigned __int8)sub_2082D0((__int64 *)&tinfo_property, v7) )
  {
    v21 = (__int64)tinfo_property;
    goto LABEL_38;
  }
  if ( v68.m128i_i64[0] )
  {
    v43 = s2;
    if ( !(_QWORD)v57 )
    {
      v21 = (__int64)tinfo_property;
      v44 = s1;
      goto LABEL_78;
    }
  }
  else
  {
    if ( !(_QWORD)v57 )
    {
      v21 = (__int64)tinfo_property;
      goto LABEL_72;
    }
    v43 = (char *)s1;
  }
  v21 = (__int64)tinfo_property;
  v44 = tinfo_property;
LABEL_78:
  if ( strcmp(v44, v43) )
  {
LABEL_38:
    if ( (_QWORD)v59 )
    {
      v45 = v3;
      v22 = v4;
      v53 = HIDWORD(v70[0]);
      v23 = (char *)s1;
      v24 = v59;
      if ( v68.m128i_i64[0] )
        v23 = s2;
      v25 = 0;
      v26 = s2;
      v50 = v21;
      v27 = v58;
      v28 = v68.m128i_i64[0];
      v54 = v23;
      v29 = 0;
      while ( 1 )
      {
        if ( v53 == v25 )
          goto LABEL_44;
        v32 = v27 + 80 * v29;
        v33 = *(_QWORD *)(v32 + 24);
        if ( v28 )
        {
          v30 = v26;
          v31 = s1;
          if ( !v33 )
            goto LABEL_43;
        }
        else if ( !v33 )
        {
LABEL_71:
          v4 = v22;
          v3 = v45;
          v21 = v50;
          goto LABEL_72;
        }
        v31 = *(const char **)(v32 + 16);
        v30 = v54;
LABEL_43:
        if ( !strcmp(v31, v30) )
          goto LABEL_71;
LABEL_44:
        v29 = ++v25;
        if ( v25 >= v24 )
        {
          v4 = v22;
          v3 = v45;
          v21 = v50;
          break;
        }
      }
    }
    if ( !v21 )
    {
      clear_tinfo_t(&v55);
      v34 = s2;
      goto LABEL_65;
    }
    goto LABEL_73;
  }
LABEL_72:
  v52 = 0;
  if ( !v21 )
    goto LABEL_50;
LABEL_73:
  *(_QWORD *)&v57 = 0;
  qfree(v21);
  clear_tinfo_t(&v55);
  v34 = s2;
  if ( v52 )
  {
LABEL_65:
    if ( !v3 )
    {
      v36 = v58 + 80LL * SHIDWORD(v70[0]);
      v37 = *(char **)(v36 + 16);
      v38 = _mm_loadu_si128((const __m128i *)(v36 + 24));
      *(_QWORD *)(v36 + 16) = v34;
      *(__m128i *)(v36 + 24) = v68;
      s2 = v37;
      v55 = 0;
      v68 = v38;
      create_tinfo(&v55, 12, 12, &v58);
      tinfo_details = get_tinfo_details(v55, 12, &v58);
      if ( tinfo_details )
      {
        v41 = v70[0];
        for ( j = 0; SLODWORD(v70[0]) > j; ++j )
        {
          sub_327290(&tinfo_property, *(_QWORD *)(*(_QWORD *)(v4 + 216) + 112LL), &v55);
          copy_tinfo_t(&v55, &tinfo_property);
          clear_tinfo_t(&tinfo_property);
        }
        sub_37CA90(*(_QWORD *)(v4 + 216), v69, (unsigned int)&v55, v39, v40, v41);
      }
      clear_tinfo_t(&v55);
      v34 = s2;
    }
    goto LABEL_52;
  }
LABEL_51:
  tinfo_details = 0;
LABEL_52:
  if ( v34 )
  {
    v68.m128i_i64[0] = 0;
    qfree(v34);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  v10 = tinfo_details;
LABEL_8:
  cleanup_argloc(&v62);
  clear_tinfo_t(&v61);
  v11 = v58;
  if ( v58 )
  {
    v12 = v59;
    if ( (_QWORD)v59 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 80 * v13);
        clear_tinfo_t(v14 + 8);
        v15 = v14[5];
        if ( v15 )
        {
          v14[6] = 0;
          qfree(v15);
        }
        v16 = v14[2];
        if ( v16 )
        {
          v14[3] = 0;
          qfree(v16);
        }
        ++v13;
        cleanup_argloc(v14);
        v11 = v58;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v59 = 0;
    qfree(v11);
  }
  return v10;
}
