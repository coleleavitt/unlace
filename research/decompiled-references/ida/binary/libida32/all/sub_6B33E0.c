unsigned __int64 sub_6B33E0()
{
  unsigned int v0; // ebx
  unsigned int v1; // r12d
  int v2; // ebp
  __int64 v3; // rax
  unsigned __int8 *v4; // r14
  void *v5; // r13
  unsigned __int8 *v6; // rax
  char *v7; // rdi
  unsigned __int8 v8; // al
  __int64 v9; // rbp
  __int64 v10; // r12
  char *v11; // rbx
  void *v12; // rdi
  void *v13; // rdi
  unsigned __int64 v15; // rbp
  char **v16; // rbx
  __int64 i; // rbp
  __int64 v18; // r12
  const char **v19; // r14
  char **v20; // rbp
  __int64 v21; // rsi
  char *v22; // rbp
  char *v23; // rdx
  _BYTE *v24; // rdi
  char v25; // al
  _BYTE *v26; // rcx
  size_t v27; // rax
  size_t v28; // rdx
  const char *v29; // r14
  int v30; // eax
  signed __int64 v31; // r9
  char v32; // al
  const __m128i *v33; // rbx
  const char *v34; // r12
  int v35; // r14d
  const char *v36; // rsi
  __m128i *v37; // rbp
  int v38; // eax
  int v39; // eax
  char v40; // al
  unsigned __int64 v41; // r8
  char *v42; // rax
  void *v43; // [rsp+0h] [rbp-528h]
  unsigned __int8 v44; // [rsp+Ch] [rbp-51Ch]
  unsigned int v45; // [rsp+Ch] [rbp-51Ch]
  char *s1; // [rsp+20h] [rbp-508h]
  char *s1a; // [rsp+20h] [rbp-508h]
  unsigned int v48; // [rsp+30h] [rbp-4F8h]
  size_t v49; // [rsp+30h] [rbp-4F8h]
  unsigned int v50; // [rsp+30h] [rbp-4F8h]
  size_t v51; // [rsp+30h] [rbp-4F8h]
  unsigned __int64 v52; // [rsp+30h] [rbp-4F8h]
  signed __int64 v53; // [rsp+30h] [rbp-4F8h]
  unsigned int v54; // [rsp+38h] [rbp-4F0h]
  unsigned int v55; // [rsp+38h] [rbp-4F0h]
  signed __int64 v56; // [rsp+38h] [rbp-4F0h]
  unsigned int v57; // [rsp+4Ch] [rbp-4DCh] BYREF
  unsigned __int8 *v58; // [rsp+50h] [rbp-4D8h] BYREF
  __int64 v59; // [rsp+58h] [rbp-4D0h] BYREF
  void *v60; // [rsp+60h] [rbp-4C8h] BYREF
  void *v61; // [rsp+68h] [rbp-4C0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-4B8h] BYREF
  __int64 v63; // [rsp+78h] [rbp-4B0h] BYREF
  char *s; // [rsp+80h] [rbp-4A8h] BYREF
  __int128 v65; // [rsp+88h] [rbp-4A0h]
  __int64 v66; // [rsp+98h] [rbp-490h]
  __int64 v67; // [rsp+A0h] [rbp-488h] BYREF
  _QWORD v68[2]; // [rsp+A8h] [rbp-480h] BYREF
  int v69; // [rsp+B8h] [rbp-470h]
  void *ptr; // [rsp+C0h] [rbp-468h]
  __int128 v71; // [rsp+C8h] [rbp-460h]
  char v72; // [rsp+D8h] [rbp-450h]
  _BYTE v73[1032]; // [rsp+E0h] [rbp-448h] BYREF
  unsigned __int64 v74; // [rsp+4E8h] [rbp-40h]

  v74 = __readfsqword(0x28u);
  netnode_check(&v57, "$ vd types", 0, 0);
  v0 = netnode_supfirst(v57, 83);
  if ( v0 != -1 )
  {
    while ( 1 )
    {
      v1 = node2ea(v0);
      v2 = get_aflags(v1) & 0x2000000;
      if ( !v2 )
        break;
LABEL_32:
      v0 = netnode_supnext(v57, v0, 83);
      if ( v0 == -1 )
        goto LABEL_33;
    }
    v3 = netnode_supval(v57, v0, v73, 1024, 83);
    v58 = v73;
    v4 = &v73[v3];
    v59 = 0;
    v5 = (void *)unpack_ds(&v58, &v73[v3], 1);
    if ( !v5 )
    {
      clear_tinfo_t(&v59);
      goto LABEL_32;
    }
    v43 = (void *)unpack_ds(&v58, v4, 1);
    v6 = v58;
    v44 = 0;
    if ( v58 < v4 )
    {
      v2 = *v58;
      v6 = v58 + 1;
      v44 = *v58;
    }
    v58 = v6;
    v60 = v5;
    v61 = v43;
    if ( !(unsigned __int8)deserialize_tinfo(&v59, 0, &v60, &v61, 0, 0) )
    {
LABEL_31:
      qfree(v5);
      qfree(v43);
      clear_tinfo_t(&v59);
      goto LABEL_32;
    }
    v62 = 0;
    if ( v2 == 3 )
      goto LABEL_13;
    if ( v2 == 1 )
    {
LABEL_30:
      clear_tinfo_t(&v62);
      goto LABEL_31;
    }
    v65 = 0;
    s = nullptr;
    if ( get_ea_name(&s, v1, 512, 0) <= 0
      || !calc_c_cpp_name(&s, s, 0, 1)
      || !(unsigned __int8)cleanup_name(&s, v1, s, 0) )
    {
      v7 = s;
      if ( !s )
        goto LABEL_13;
      goto LABEL_12;
    }
    v15 = v65;
    s1 = s;
    if ( !(_QWORD)v65 )
      goto LABEL_37;
    v27 = strlen(s);
    v28 = v27;
    if ( v27 <= 0xA )
    {
      if ( v27 <= 8 )
      {
        if ( v27 <= 6 )
          goto LABEL_69;
        goto LABEL_85;
      }
    }
    else
    {
      v49 = v27;
      v29 = &s1[v27 - 11];
      v30 = strcmp(v29, "_from_thumb");
      v28 = v49;
      if ( v29 && !v30 )
        goto LABEL_65;
    }
    v51 = v28;
    v29 = &s1[v28 - 9];
    v38 = strcmp(v29, "_from_arm");
    v28 = v51;
    if ( !v38 && v29 )
    {
LABEL_65:
      v31 = v29 - s1;
      if ( v29 != s1 )
      {
        v41 = v31 + 1;
        if ( v15 < v31 + 1 )
        {
          if ( *((_QWORD *)&v65 + 1) < v41 )
          {
            v53 = v31 + 1;
            v42 = (char *)qvector_reserve(&s, s1, v31 + 1, 1);
            v31 = v29 - s1;
            v41 = v53;
            s1 = v42;
            s = v42;
            v15 = v65;
          }
          v56 = v31;
          v52 = v41;
          memset(&s1[v15], 0, v41 - v15);
          *(_QWORD *)&v65 = v52;
          v29 = &s[v56];
        }
        else if ( v15 != v31 + 1 )
        {
          *(_QWORD *)&v65 = v31 + 1;
        }
        *v29 = 0;
        v15 = v65;
        s1 = s;
LABEL_68:
        if ( !v15 )
          goto LABEL_37;
        goto LABEL_69;
      }
      if ( s1 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(s1);
        s = nullptr;
        v15 = v65;
        *((_QWORD *)&v65 + 1) = 0;
        s1 = nullptr;
        goto LABEL_68;
      }
LABEL_69:
      if ( !strcmp(s1, "runtime_newobject") )
      {
        v40 = parse_decl(&v62, 0, 0, "void *__golang f(const RTYPE *);", 1);
        v7 = s;
        if ( !v40 )
        {
LABEL_73:
          if ( v7 )
          {
LABEL_12:
            *(_QWORD *)&v65 = 0;
            qfree(v7);
          }
LABEL_13:
          s = nullptr;
          v66 = 0;
          v67 = 0;
          v68[0] = 0;
          v68[1] = 0;
          v69 = 0;
          ptr = nullptr;
          v72 = 16;
          v65 = 0;
          v71 = 0;
          if ( (unsigned __int8)get_tinfo_details(v59, 140, &s) )
          {
            v22 = s;
            v23 = &s[80 * v65];
            if ( v23 != s )
            {
              do
              {
                if ( *((_QWORD *)v22 + 3) )
                {
                  v24 = *((_BYTE **)v22 + 2);
                  if ( *v24 == 97 )
                  {
                    v25 = v24[1];
                    if ( v25 )
                    {
                      v26 = v24 + 1;
                      while ( (unsigned __int8)(v25 - 48) <= 9u )
                      {
                        v25 = *++v26;
                        if ( !v25 )
                        {
                          if ( v24 )
                          {
                            *((_QWORD *)v22 + 3) = 0;
                            s1a = v23;
                            qfree(v24);
                            *((_QWORD *)v22 + 2) = 0;
                            v23 = s1a;
                            *((_QWORD *)v22 + 4) = 0;
                          }
                          break;
                        }
                      }
                    }
                  }
                }
                v22 += 80;
              }
              while ( v22 != v23 );
            }
            v63 = 0;
            create_tinfo(&v63, 12, 12, &s);
            set_tinfo(v1, &v63);
            clear_tinfo_t(&v63);
            v8 = v44;
            if ( v44 != 2 )
              goto LABEL_15;
          }
          else
          {
            set_tinfo(v1, &v59);
            v8 = v44;
            if ( v44 != 2 )
            {
LABEL_15:
              if ( v8 == 3 )
              {
                upd_abits(v1, 3254779904LL, 0x80000000LL);
              }
              else if ( !v8 )
              {
                upd_abits(v1, 3254779904LL, 3221225472LL);
              }
              goto LABEL_18;
            }
          }
          upd_abits(v1, 3254779904LL, 0x40000000);
LABEL_18:
          if ( ptr )
          {
            *(_QWORD *)&v71 = 0;
            qfree(ptr);
          }
          cleanup_argloc(v68);
          clear_tinfo_t(&v67);
          v7 = s;
          if ( !s )
            goto LABEL_30;
          if ( (_QWORD)v65 )
          {
            v45 = v0;
            v9 = 0;
            v10 = v65;
            do
            {
              v11 = &v7[80 * v9];
              clear_tinfo_t(v11 + 64);
              v12 = *((void **)v11 + 5);
              if ( v12 )
              {
                *((_QWORD *)v11 + 6) = 0;
                qfree(v12);
              }
              v13 = *((void **)v11 + 2);
              if ( v13 )
              {
                *((_QWORD *)v11 + 3) = 0;
                qfree(v13);
              }
              ++v9;
              cleanup_argloc(v11);
              v7 = s;
            }
            while ( v10 != v9 );
            v0 = v45;
          }
LABEL_29:
          *(_QWORD *)&v65 = 0;
          qfree(v7);
          goto LABEL_30;
        }
LABEL_89:
        if ( !v7 )
          goto LABEL_30;
        goto LABEL_29;
      }
      if ( v15 - 1 > 0x10 && !strncmp(s1, "runtime_morestack", 0x11u) )
      {
        v32 = parse_decl(&v62, 0, 0, "void f();", 1);
        v7 = s;
        if ( !v32 )
          goto LABEL_73;
        goto LABEL_89;
      }
LABEL_37:
      if ( !(_BYTE)byte_2CA24F8 && __cxa_guard_acquire(&byte_2CA24F8) )
      {
        sub_6B3190((__int64)(&xmmword_2C57BD0 - 17), &xmmword_2C57BD0, 8);
        sub_6B2710((const char **)&xmmword_2C57BD0 - 34, (const char **)&xmmword_2C57BD0 - 2);
        v50 = v1;
        v55 = v0;
        v33 = &xmmword_2C57BD0 - 1;
        v34 = off_2C57BC0;
        v35 = dword_2C57BC8;
        while ( 1 )
        {
          v36 = (const char *)v33[-1].m128i_i64[0];
          v37 = (__m128i *)v33--;
          if ( strcmp(v34, v36) >= 0 )
            break;
          v33[1] = _mm_load_si128(v33);
        }
        v37->m128i_i32[2] = v35;
        v0 = v55;
        v37->m128i_i64[0] = (__int64)v34;
        v1 = v50;
        __cxa_guard_release(&byte_2CA24F8);
      }
      if ( !strncmp(s1, "objc_msgSend", 0xCu) )
      {
        v21 = 16;
        goto LABEL_46;
      }
      v48 = v1;
      v54 = v0;
      v16 = &off_2C57AC0;
      for ( i = 17; i > 0; i = i - 1 - v18 )
      {
        while ( 1 )
        {
          v18 = i >> 1;
          v19 = (const char **)&v16[2 * (i >> 1)];
          if ( strcmp(*v19, s1) < 0 )
            break;
          i >>= 1;
          if ( v18 <= 0 )
            goto LABEL_43;
        }
        v16 = (char **)(v19 + 2);
      }
LABEL_43:
      v20 = v16;
      v1 = v48;
      v0 = v54;
      if ( v20 != (char **)&xmmword_2C57BD0 && !strcmp(s1, *v20) )
      {
        v21 = *((unsigned int *)v20 + 2);
        if ( (_DWORD)v21 != 31 )
        {
LABEL_46:
          get_stock_tinfo(&v62, v21);
          v7 = s;
          if ( !s )
            goto LABEL_30;
          goto LABEL_29;
        }
      }
      v7 = s;
      if ( s )
        goto LABEL_12;
      goto LABEL_13;
    }
LABEL_85:
    v29 = &s1[v28 - 7];
    v39 = strcmp(v29, "_veneer");
    if ( !v29 || v39 )
      goto LABEL_69;
    goto LABEL_65;
  }
LABEL_33:
  netnode_kill((int)&v57);
  return v74 - __readfsqword(0x28u);
}

