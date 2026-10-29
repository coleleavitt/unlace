__int64 __fastcall sub_210280(__int64 a1, __int64 a2, unsigned __int8 a3)
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
  __int64 v18; // r12
  const char *v19; // rsi
  __int64 v20; // r12
  __int64 v21; // r14
  char *v22; // rax
  unsigned __int64 v23; // rbp
  int v24; // r15d
  char *v25; // r13
  __int64 v26; // rbx
  __int64 v27; // r12
  __int64 v28; // rax
  const char *v29; // r11
  const char *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  char *v33; // rdi
  char *v34; // r12
  __int64 v35; // rax
  char *v36; // rdx
  __m128i v37; // xmm0
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  int j; // r12d
  char *v42; // rsi
  const char *v43; // rdi
  unsigned __int8 v44; // [rsp+8h] [rbp-130h]
  int i; // [rsp+10h] [rbp-128h]
  char v46; // [rsp+10h] [rbp-128h]
  __int64 v47; // [rsp+18h] [rbp-120h]
  int tinfo_size; // [rsp+20h] [rbp-118h]
  __int64 v49; // [rsp+28h] [rbp-110h]
  unsigned __int8 tinfo_details; // [rsp+32h] [rbp-106h]
  char v51; // [rsp+33h] [rbp-105h]
  int v52; // [rsp+34h] [rbp-104h]
  char *v53; // [rsp+38h] [rbp-100h]
  __int64 v54; // [rsp+48h] [rbp-F0h] BYREF
  const char *tinfo_property; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v56; // [rsp+58h] [rbp-E0h]
  __int64 v57; // [rsp+70h] [rbp-C8h]
  __int128 v58; // [rsp+78h] [rbp-C0h]
  __int64 v59; // [rsp+88h] [rbp-B0h]
  __int64 v60; // [rsp+90h] [rbp-A8h]
  __int64 v61; // [rsp+98h] [rbp-A0h]
  __int128 v62; // [rsp+A0h] [rbp-98h]
  __int64 v63; // [rsp+B0h] [rbp-88h]
  __int128 v64; // [rsp+B8h] [rbp-80h]
  char v65; // [rsp+C8h] [rbp-70h]
  char *s2; // [rsp+D0h] [rbp-68h] BYREF
  __m128i v67; // [rsp+D8h] [rbp-60h]
  __int64 v68; // [rsp+E8h] [rbp-50h]
  _QWORD v69[9]; // [rsp+F0h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a1;
  tinfo_details = a3;
  v69[1] = __readfsqword(0x28u);
  v59 = 0;
  v5 = sub_256D70(a1 + 16);
  v60 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 16;
  s2 = nullptr;
  v68 = -1;
  v69[0] = 0xFFFFFFFF00000000LL;
  v58 = 0;
  v62 = 0;
  v64 = 0;
  v67 = 0;
  v6 = *(_DWORD *)(v5 + 8) == 57;
  v57 = 0;
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
      LODWORD(v69[0]) = v9;
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
  v54 = 0;
  v47 = *(_QWORD *)(a1 + 216);
  if ( (get_aflags() & 0x2000000) != 0 || !(unsigned __int8)sub_3810A0(v47, *(_QWORD *)(v7 + 24), &v54, 2) )
    goto LABEL_50;
  for ( i = 0; i < SLODWORD(v69[0]); ++i )
  {
    tinfo_property = nullptr;
    tinfo_property = (const char *)get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    tinfo_property = nullptr;
    tinfo_property = (const char *)get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    ++LODWORD(v69[0]);
  }
  if ( (get_tinfo_property() & 0xF) != 0xC )
  {
    if ( !under_debugger )
      sub_383060(52514);
    BUG();
  }
  tinfo_property = nullptr;
  tinfo_property = (const char *)get_tinfo_property();
  v46 = compare_tinfo();
  clear_tinfo_t();
  if ( !v46 )
    goto LABEL_50;
  if ( !(unsigned __int8)get_tinfo_details() )
    goto LABEL_50;
  if ( !sub_284360(v5, a2, (char *)v69 + 4) )
    goto LABEL_50;
  if ( SHIDWORD(v69[0]) >= (unsigned __int64)v58 )
    goto LABEL_50;
  v18 = v57 + 80LL * SHIDWORD(v69[0]);
  tinfo_size = get_tinfo_size();
  if ( *(_QWORD *)(v18 + 24) > 1u && !(unsigned __int8)sub_20D980(*(_DWORD **)(v47 + 112), v18 + 16, tinfo_size) )
    goto LABEL_50;
  v51 = sub_20F230((__int64)&s2, *(const char **)(a1 + 8), 0xFFFFFFFF, a2, 0xFFFFFFFF);
  if ( !v51 )
    goto LABEL_50;
  if ( !*(_QWORD *)(v18 + 24) )
  {
    v19 = s1;
    if ( !v67.m128i_i64[0] )
      goto LABEL_50;
    goto LABEL_57;
  }
  v19 = *(const char **)(v18 + 16);
  if ( v67.m128i_i64[0] )
  {
LABEL_57:
    v34 = s2;
    if ( !strcmp(s2, v19) || !strcmp(v34, "result") || !strcmp(v34, "this") && HIDWORD(v69[0]) )
      goto LABEL_50;
    goto LABEL_35;
  }
  if ( !*v19 )
  {
LABEL_50:
    clear_tinfo_t();
    v33 = s2;
    goto LABEL_51;
  }
LABEL_35:
  if ( (unsigned __int8)sub_20D980(*(_DWORD **)(v47 + 112), (__int64)&s2, tinfo_size) )
    goto LABEL_50;
  tinfo_property = nullptr;
  v56 = 0;
  if ( !(unsigned __int8)sub_20CED0((__int64 *)&tinfo_property, v7) )
  {
    v20 = (__int64)tinfo_property;
    goto LABEL_38;
  }
  if ( v67.m128i_i64[0] )
  {
    v42 = s2;
    if ( !(_QWORD)v56 )
    {
      v20 = (__int64)tinfo_property;
      v43 = s1;
      goto LABEL_78;
    }
  }
  else
  {
    if ( !(_QWORD)v56 )
    {
      v20 = (__int64)tinfo_property;
      goto LABEL_72;
    }
    v42 = (char *)s1;
  }
  v20 = (__int64)tinfo_property;
  v43 = tinfo_property;
LABEL_78:
  if ( strcmp(v43, v42) )
  {
LABEL_38:
    if ( (_QWORD)v58 )
    {
      v44 = v3;
      v21 = v4;
      v52 = HIDWORD(v69[0]);
      v22 = (char *)s1;
      v23 = v58;
      if ( v67.m128i_i64[0] )
        v22 = s2;
      v24 = 0;
      v25 = s2;
      v49 = v20;
      v26 = v57;
      v27 = v67.m128i_i64[0];
      v53 = v22;
      v28 = 0;
      while ( 1 )
      {
        if ( v52 == v24 )
          goto LABEL_44;
        v31 = v26 + 80 * v28;
        v32 = *(_QWORD *)(v31 + 24);
        if ( v27 )
        {
          v29 = v25;
          v30 = s1;
          if ( !v32 )
            goto LABEL_43;
        }
        else if ( !v32 )
        {
LABEL_71:
          v4 = v21;
          v3 = v44;
          v20 = v49;
          goto LABEL_72;
        }
        v30 = *(const char **)(v31 + 16);
        v29 = v53;
LABEL_43:
        if ( !strcmp(v30, v29) )
          goto LABEL_71;
LABEL_44:
        v28 = ++v24;
        if ( v24 >= v23 )
        {
          v4 = v21;
          v3 = v44;
          v20 = v49;
          break;
        }
      }
    }
    if ( !v20 )
    {
      clear_tinfo_t();
      v33 = s2;
      goto LABEL_65;
    }
    goto LABEL_73;
  }
LABEL_72:
  v51 = 0;
  if ( !v20 )
    goto LABEL_50;
LABEL_73:
  *(_QWORD *)&v56 = 0;
  qfree(v20);
  clear_tinfo_t();
  v33 = s2;
  if ( v51 )
  {
LABEL_65:
    if ( !v3 )
    {
      v35 = v57 + 80LL * SHIDWORD(v69[0]);
      v36 = *(char **)(v35 + 16);
      v37 = _mm_loadu_si128((const __m128i *)(v35 + 24));
      *(_QWORD *)(v35 + 16) = v33;
      *(__m128i *)(v35 + 24) = v67;
      s2 = v36;
      v54 = 0;
      v67 = v37;
      create_tinfo();
      tinfo_details = get_tinfo_details();
      if ( tinfo_details )
      {
        v40 = v69[0];
        for ( j = 0; SLODWORD(v69[0]) > j; ++j )
        {
          sub_32C540(&tinfo_property, *(_QWORD *)(*(_QWORD *)(v4 + 216) + 112LL), &v54);
          copy_tinfo_t();
          clear_tinfo_t();
        }
        sub_381D10(*(_QWORD *)(v4 + 216), v68, (unsigned int)&v54, v38, v39, v40);
      }
      clear_tinfo_t();
      v33 = s2;
    }
    goto LABEL_52;
  }
LABEL_51:
  tinfo_details = 0;
LABEL_52:
  if ( v33 )
  {
    v67.m128i_i64[0] = 0;
    qfree((__int64)v33);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    qfree(v63);
  }
  v10 = tinfo_details;
LABEL_8:
  cleanup_argloc();
  clear_tinfo_t();
  v11 = v57;
  if ( v57 )
  {
    v12 = v58;
    if ( (_QWORD)v58 )
    {
      v13 = 0;
      do
      {
        v14 = (_QWORD *)(v11 + 80 * v13);
        clear_tinfo_t();
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
        cleanup_argloc();
        v11 = v57;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v58 = 0;
    qfree(v11);
  }
  return v10;
}
